package main

import "fmt"

func reformat(message string, formatter func(string) string) string {
	for range 3 {
		message = formatter(message)
	}
	return fmt.Sprintf("TEXTIO: %v", message)
}
