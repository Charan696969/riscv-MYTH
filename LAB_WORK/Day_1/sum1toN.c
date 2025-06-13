#include  <stdio.h>

int main(){
	int i,sum,n;
	n = 5;
	sum = 0;
	for (i = 1; i <= n; i++){
		sum += i;
	}
	printf("Sum is %d\n", sum);
	return 0;
}
