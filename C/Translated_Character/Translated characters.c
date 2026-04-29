#include <stdio.h>

int main() {
    // Declare integer variables num1, num2 and float variable num3 and assign initial values
    int num1 = 10;
    int num2 = 20;
    float num3 = 3.14;

    // Print num1 in decimal and octal using %d and %o
    printf("10진수: %d\n", num1);
    printf("8진수: %o\n", num1);

    
    // Print num2 in decimal and hexadecimal using %d and %x
    printf("10진수: %d\n", num2);
    printf("16진수: %x\n", num2);

    // Print floating-point number using %f
    printf("실수: %f\n", num3);

    // Output a float as an integer using %d and type casting (int)
    printf("실수를 정수로 출력: %d\n", (int)num3);

    return 0;
}