#include <stdio.h>

int main() {
    int n,m;
    scanf ("%d%d",&n,&m);
    int a[n][m],b[m][n],c[n][n] = {0};
    int i,j;
    for (i=0;i<n;++i){
        for (j=0;j<m;++j){
            scanf ("%d",&a[i][j]);
        }
    }
     for (i=0;i<m;++i){
        for (j=0;j<n;++j)
            scanf("%d",&b[i][j]);
     }
    for (i=0;i<n;++i){
        for (j=0;j<n;++j){
            c[i][j] = 0;
            for (int k=0;k<m;++k)
                c[i][j]+=a[i][k]*b[k][j];
    }
    }
    for (i=0;i<n;++i){
        for (j=0;j<n;++j)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}