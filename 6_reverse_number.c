#include <stdio.h>
int main() {
    int n;
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d",&n);
        if(n==0) break;
        int rev=0, temp=n;
        while(temp!=0) {
            rev=rev*10 + temp%10;
            temp/=10;
        }
        printf("Reversed=%d\n",rev);
    } while(n!=0);
    return 0;
}