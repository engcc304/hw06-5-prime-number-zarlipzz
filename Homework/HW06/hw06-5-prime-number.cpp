/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>

int main() {
    int limit;
    
    printf("Enter number: ");
    scanf("%d", &limit);
    
    int num = limit;
    int is_prime = 1; // Assuming num is prime

    for (int i = 0; num >= 2; num--)
    {
        if (num <= 1) {
            is_prime = 0;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        
        if (is_prime) {
            printf("%d ", num);
        }
        
        is_prime = 1;
    }


    printf("\n");
    
    return 0;
}