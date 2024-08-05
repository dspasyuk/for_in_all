package main

import "fmt"

func main() {
	var sum int64
	for i := int64(1); i < 1000000000; i++ {
		sum += i
	}
	fmt.Println(sum)
}
