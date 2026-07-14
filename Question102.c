#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int age;
    char citizen[5];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you a citizen? (yes/no): ");
    scanf("%s", citizen);
    printf("\n--- Voting Eligibility Report ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    if (age >= 18 && strcmp(citizen, "yes") == 0)
        printf("Status: ELIGIBLE to vote\n");
    else if (age < 18)
        printf("Status: NOT ELIGIBLE (age below 18)\n");
    else
        printf("Status: NOT ELIGIBLE (not a citizen)\n");
    return 0;
}
