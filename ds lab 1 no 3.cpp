#include <stdio.h>
#include <math.h>

int main() {
    double realNumber;
    printf("Enter a real number: ");
    scanf("%lf", &realNumber);

    int floorInt = (int)floor(realNumber);
    int ceilInt = (int)ceil(realNumber);

    printf("Floor of %.2lf is %d\n", realNumber, floorInt);
    printf("Ceiling of %.2lf is %d\n", realNumber, ceilInt);

    return 0;
}

