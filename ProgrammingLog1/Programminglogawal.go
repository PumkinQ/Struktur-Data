package main

import "fmt"

func main() {
	var input1 [10]int
	var input2 int
	var j, k, l int

	for i := 0; i < len(input1); i++ {
		fmt.Scan(&input1)
	}
	fmt.Scan(&input2)
	for hasil := input2; 0 < input2; hasil++ {
		for j = 0; j <= 10; j++ {
			if input1[j]+input1[k]+input1[l] == input2 {
				return
			}
		}
		for k := 0; k < 10; k++ {
			if input1[j]+input1[k]+input1[l] == input2 {
				return
			}
		}
	}

	fmt.Println(input1[j], "+", input1[k], "+", input1[l])
}
