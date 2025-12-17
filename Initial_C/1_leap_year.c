#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    if(scanf("%d", &year) != 1 || year <= 0) {
        printf("Invalid input");
        return 0;
    }
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year", year);
    else
        printf("%d is NOT a Leap Year", year);
    return 0;
}