package main

import (
	"bytes"
	"encoding/json"
	"net/http"
)

func updateUser(baseURL, id, apiKey string, data User) (User, error) {
	fullURL := baseURL + "/" + id

	jsonData, err := json.Marshal(data)
	if err != nil {
		return User{}, err
	}
	req, err := http.NewRequest("PUT", fullURL, bytes.NewBuffer(jsonData))
	if err != nil {
		return User{}, err
	}

	req.Header.Set("Content-Type", "application/json")
	req.Header.Set("X-API-Key", apiKey)

	res, err := http.DefaultClient.Do(req)
	if err != nil {
		return User{}, err
	}
	defer res.Body.Close()

	updatedUser := User{}
	err = json.NewDecoder(res.Body).Decode(&updatedUser)
	if err != nil {
		return User{}, err
	}
	return updatedUser, nil
}

func getUserById(baseURL, id, apiKey string) (User, error) {
	fullURL := baseURL + "/" + id

	req, err := http.NewRequest("GET", fullURL, nil)
	if err != nil {
		return User{}, err
	}
	req.Header.Set("X-API-Key", apiKey)

	res, err := http.DefaultClient.Do(req)
	if err != nil {
		return User{}, err
	}
	defer res.Body.Close()

	UserById := User{}
	err = json.NewDecoder(res.Body).Decode(&UserById)
	if err != nil {
		return User{}, err
	}
	return UserById, nil
}
