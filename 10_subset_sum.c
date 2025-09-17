#include <stdio.h>
void findSubsets(int arr[], int n, int target) {
    for(int i=0;i<(1<<n);i++) {
        int sum=0;
        printf("[ ");
        for(int j=0;j<n;j++) {
            if(i & (1<<j)) {
                sum+=arr[j];
                printf("%d ",arr[j]);
            }
        }
        printf("]");
        if(sum==target) printf(" <-- matches target");
        printf("\n");
    }
}
int main() {
    int n,target;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter target: ");
    scanf("%d",&target);
    findSubsets(arr,n,target);
    return 0;
}