#include <stdio.h>
#include <math.h>

int check(int n){
    for (int i=2;i<=sqrt(n);++i)
        if (n%i==0) return 0;

    return n>1;        
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n], cnt =0 ;
    for (int i=0;i<n;++i)
        {
            scanf("%d",&a[i]);
            if (check(a[i])) cnt++;
        }
        printf ("%d\n",cnt);
    for (int i=0;i<n;++i)
        if (check(a[i])) printf ("%d ",a[i]);
    return 0;
}