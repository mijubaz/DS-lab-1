#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

float calculateMembership(int age) {
    if (age <= 15) {
        return 1.0;
    } else if (age > 15 && age <= 35) {
        return (35 - age) / 20.0;
    } else {
        return 0.0;
    }
}

int main() {
    Person persons[5];

    // Input details of 5 persons
    for (int i = 0; i < 5; i++) {
        printf("Enter name of person %d: ", i + 1);
        scanf("%s", persons[i].name);
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &persons[i].age);
    }

    // Calculate and output membership for each person
    printf("\nDegree of membership for each person:\n");
    for (int i = 0; i < 5; i++) {
        float membership = calculateMembership(persons[i].age);
        printf("%s: %.2f\n", persons[i].name, membership);
    }

    return 0;
}

