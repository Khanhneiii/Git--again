#include <stdio.h>
#include <math.h>

int main()
{
	int n,odd = 0,even = 0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    if (a[i] % 2 == 0) even++;
    else odd++;
	}
    printf("%d ",odd);
	for(int i=0;i<n;i++)
    if (a[i] % 2 != 0) printf("%d ",a[i]);
    printf("\n%d ",even);
    for(int i=0;i<n;i++)
    if (a[i] % 2 == 0) printf("%d ",a[i]);
	return 0;
}
