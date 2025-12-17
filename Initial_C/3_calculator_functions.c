#include <stdio.h>
int add(int a, int b) { return a+b; }
int sub(int a, int b) { return a-b; }
int mul(int a, int b) { return a*b; }
int divide(int a, int b) { return b!=0 ? a/b : 0; }
int mod(int a, int b) { return b!=0 ? a%b : 0; }
int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1.Add 2.Sub 3.Mul 4.Div 5.Mod\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Result=%d", add(a,b)); break;
        case 2: printf("Result=%d", sub(a,b)); break;
        case 3: printf("Result=%d", mul(a,b)); break;
        case 4: b!=0 ? printf("Result=%d", divide(a,b)) : printf("Error"); break;
        case 5: b!=0 ? printf("Result=%d", mod(a,b)) : printf("Error"); break;
        default: printf("Invalid choice");
    }
    return 0;
}