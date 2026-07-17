package main

import "fmt"

func fizzbuzz() {
	for i := 1; i < 101; i++ {
		if i%3 == 0 && i%5 == 0 {
			fmt.Print("fizzbuzz\n")
		} else if i%3 == 0 {
			fmt.Print("fizz\n")
		} else if i%5 == 0 {
			fmt.Print("buzz\n")
		} else {
			fmt.Printf("%v\n", i)
		}
	}
}

// don't touch below this line

func main() {
	fizzbuzz()
}
