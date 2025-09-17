#include <stdio.h>
int isPrime(int n) {
    if(n<=1) return 0;
    for(int i=2; i*i<=n; i++) if(n%i==0) return 0;
    return 1;
}
int main() {
    int n, i=2;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Primes up to %d: ", n);
    while(i<=n) {
        if(isPrime(i)) printf("%d ", i);
        i++;
    }
    return 0;
}