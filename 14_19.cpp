#include <stdio.h>

int main() {
    int n,cnt = 0,k;
    scanf ("%d",&n);
        int a[n];
        for (int i=0;i<n;++i){
        scanf ("%d",&a[i]);
        }
    scanf("%d",&k);
    k%=n;
    for (int i=k;i<n;++i)
        printf ("%d ",a[i]);
        for (int i=k-1;i<n-1-k;++i){

        }
    for (int i=0;i<k;++i)
        printf("%d ",a[i]);
    return 0;
}