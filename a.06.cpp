#include <stdio.h>

#include <math.h>
void pt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		//neu ma n chia het cho i
			//Lay n chia cho i cho toi khi n khong chia het cho thi thoi
			while(n % i == 0){
				printf("%d ",i);
				n /= i;
			}
	
	}
	if(n != 1) printf("%d", n);
}
//Phan tich thua so nguyen to
int main () {
	int n;
	scanf ("%d",&n);
	pt(n);
	return 0;
}
