#include <stdio.h>
int fact(int n) { int f=1; for(int i=1;i<=n;i++) f*=i; return f; }
int gcd(int a, int b) { return b==0?a:gcd(b,a%b); }
int lcm(int a, int b) { return (a*b)/gcd(a,b); }
int main() {
    int choice;
    do {
        printf("\n1.Factorial 2.GCD 3.LCM 4.Exit\n");
        scanf("%d",&choice);
        if(choice==1) {
            int n; printf("Enter n: "); scanf("%d",&n);
            printf("Factorial=%d",fact(n));
        }
        else if(choice==2) {
            int a,b; printf("Enter two numbers: "); scanf("%d%d",&a,&b);
            printf("GCD=%d",gcd(a,b));
        }
        else if(choice==3) {
            int a,b; printf("Enter two numbers: "); scanf("%d%d",&a,&b);
            printf("LCM=%d",lcm(a,b));
        }
    } while(choice!=4);
    return 0;
}