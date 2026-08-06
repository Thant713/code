package main

import (
	"encoding/json"
	"net/http"
)

func getUsers(url string) ([]User, error) {
	users := []User{}
	res, err := http.Get(url)
	if err != nil {
		return nil, err
	}
	json.NewDecoder(res.Body).Decode(&users)
	return users, nil
}
