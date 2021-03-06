#include <stdio.h>
#include <math.h>

int check(int n) {
    if (n<2) return 0;
    for (int i =2 ;i<=sqrt(n);++i)
        if (n%i==0) return 0;
    return n>1;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j) 
            scanf("%d",&a[i][j]);
    }
    int max=0,cnt = 0,index;
    for (int i=0;i<n;++i)
        {cnt = 0;
            for (int j=0;j<n;++j){
                if (check(a[i][j])) {
                    cnt++;
                }
            }
            if (cnt > max) {
                max = cnt;
                index = i;
            }
        }
    printf("%d \n",index+1);
    for (int i=0;i<n;++i)
        if (check(a[index][i])) printf ("%d ",a[index][i]);
        return 0;
}