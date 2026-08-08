package main

import "net/http"

func deleteUser(baseURL, id, apiKey string) error {
	fullURL := baseURL + "/" + id

	req, err := http.NewRequest("DELETE", fullURL, nil)
	if err != nil {
		return err
	}

	req.Header.Set("X-API-Key", apiKey)

	_, err = http.DefaultClient.Do(req)
	if err != nil {
		return err
	}
	return nil
}
