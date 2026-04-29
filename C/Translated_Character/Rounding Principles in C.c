#include <stdio.h>
#include <math.h>

int main() {
    double values[] = {2.3, 2.7, -2.3, -2.7};
    int n = sizeof(values) / sizeof(values[0]);

    printf("%-10s | %-10s | %-10s | %-10s | %-10s\n", "Original", "Casting", "round()", "floor()", "ceil()");
    printf("----------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        double val = values[i];
        
        // 1. Explicit Casting (Truncation toward zero)
        int casted = (int)val;
        
        // 2. round() - Rounds to nearest integer
        double rounded = round(val);
        
        // 3. floor() - Largest integer not greater than val (Down)
        double floored = floor(val);
        
        // 4. ceil() - Smallest integer not less than val (Up)
        double ceiled = ceil(val);

        printf("%-10.1f | %-10d | %-10.1f | %-10.1f | %-10.1f\n", 
               val, casted, rounded, floored, ceiled);


    }
    printf("실수를 정수로 출력: %d\n", (int)values[1]);
    printf("실수를 정수로 출력: %d\n", (int)values[0]);
    printf("실수를 정수로 출력: %d\n", (int)values[2]);

    return 0;
}
