#include <stdio.h>
#include <math.h>
int check(int n) {
    for (int i=2;i<=sqrt(n);++i)
        if (n%i==0) return 0;
    return n>1;
}

int main() {
    int n,sum = 0;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
        scanf("%d",&a[i][j]);

    for (int i=0;i<n;++i)
        for (int j=n-1;j>=i;--j)
            if (check(a[i][j])) sum+=a[i][j];

    printf("%d ",sum);
    return 0;
}