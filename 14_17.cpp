#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n],cnt[100005]={0},tmp=0;;
    int i;
    for (i=0;i<n;++i){
        scanf("%d",&a[i]);
        cnt[a[i]]++;
    }
    for (i=0;i<n;++i)
        if (cnt[a[i]] == 1) tmp++;
    printf("%d \n",tmp);
    for (i=0;i<n;++i){
        if (cnt[a[i]] == 1) {
            printf ("%d ",a[i]);
            cnt[a[i]] = 0;
        }
}
return 0;
}
