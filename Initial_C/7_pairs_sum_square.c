#include <stdio.h>
#include <math.h>
int main() {
    int n, x, y;
    printf("Enter n: ");
    scanf("%d",&n);
    for(x=0; x*x<=n; x++) {
        for(y=0; y*y<=n; y++) {
            if(x*x + y*y > n) break; 
            if(x*x + y*y == n) {
                printf("(%d,%d) ",x,y);
                continue;
            }
        }
    }
    return 0;
}