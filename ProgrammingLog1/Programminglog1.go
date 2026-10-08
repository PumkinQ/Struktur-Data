package main

import "fmt"

func main() {
	var Loop, input2 int
    fmt.Print("Masukan Berapa angka: ")
    fmt.Scan(&Loop)
    fmt.Println("")

    input1 := make([]int, Loop) //Error
    fmt.Print("Masukan Kombinasi angka: ")

	for i := 0; i < len(input1); i++ {
		fmt.Scan(&input1[i])
	}
    fmt.Println("")

    fmt.Print("Masukan angka yang ingin didapatkan: ")
	fmt.Scan(&input2)
    fmt.Println("")

	for j := 0; j < Loop; j++ {
		for k := 0; k < Loop; k++ {
			for l := 0; l < Loop; l++ {
				if input1[j]+input1[k]+input1[l] == input2 && input1[j] != input1[k] && input1[k] != input1[l] && input1[j] != input1[l] {
                    fmt.Print("Hasil: ")
                    fmt.Printf("%d + %d + %d = %d", input1[j], input1[k], input1[l], input2)
					return
				}
			}
		}
	}
}
