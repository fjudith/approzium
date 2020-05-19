package main

import (
	"context"
	"fmt"
	"time"

	pb "dbauth/authenticator/messages"
	log "github.com/sirupsen/logrus"
)

type Authenticator struct {
	creds   map[string]credentials
	counter int
}

type credentials struct {
	user     string
	password string
}

func NewAuthenticator() *Authenticator {
	return &Authenticator{
		creds: newCreds(),
	}
}

func (a *Authenticator) run() {
	for {
		log.Printf("authenticator running. %d requests received\n", a.counter)
		time.Sleep(2 * time.Second)
	}
}

func (a *Authenticator) Authenticate(ctx context.Context, req *pb.AuthenticateRequest) (*pb.AuthenticateResponse, error) {
	a.counter++
	identity := req.GetIdentity()
	salt := req.GetSalt()
	log.Printf("received request to return hashed credentials for identity %s given salt %s\n",
		identity, salt)

	if salt == "" {
		msg := fmt.Errorf("salt not received")
		log.Error(msg)
		return &pb.AuthenticateResponse{
			Status:  pb.AuthenticateResponse_ERROR,
			Message: fmt.Sprintf("%s", msg),
		}, msg
	}

	creds, err := a.getCreds(identity)
	if err != nil {
		log.Error(err)
		return &pb.AuthenticateResponse{
			Status:  pb.AuthenticateResponse_ERROR,
			Message: fmt.Sprintf("%s", err),
		}, err
	}

	hashedCreds := pb.Credentials{
		User:           creds.user,
		HashedPassword: computeMD5(creds.password, salt),
	}

	return &pb.AuthenticateResponse{
		Status:      pb.AuthenticateResponse_SUCCESS,
		Credentials: &hashedCreds,
	}, nil
}

func (a *Authenticator) getCreds(identity string) (credentials, error) {
	if creds, ok := a.creds[identity]; ok {
		return creds, nil
	}
	msg := fmt.Errorf("credentials not found for identity %s", identity)
	log.Error(msg)
	return credentials{}, msg
}

func newCreds() map[string]credentials {
	creds := make(map[string]credentials)
	creds["diotim"] = credentials{
		user:     "bob",
		password: "password",
	}
	return creds
}

func computeMD5(s, salt string) string {
	return fmt.Sprintf("%s, but hashed", s)
}
