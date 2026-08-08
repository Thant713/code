package main

import (
	"bytes"
	"encoding/json"
	"net/http"
)

func createUser(url, apiKey string, data User) (User, error) {
	jsonData, err := json.Marshal(data)
	if err != nil {
		return User{}, err
	}
	body := bytes.NewBuffer(jsonData)
	req, err := http.NewRequest("POST", url, body)
	if err != nil {
		return User{}, err
	}
	req.Header.Set("Content-Type", "application/json")
	req.Header.Set("X-API-Key", apiKey)

	client := &http.Client{}
	res, err := client.Do(req)
	if err != nil {
		return User{}, err
	}
	defer res.Body.Close()

	createdUser := User{}
	err = json.NewDecoder(res.Body).Decode(&createdUser)
	if err != nil {
		return User{}, err
	}
	return createdUser, nil
}
