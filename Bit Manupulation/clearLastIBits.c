#include <stdio.h>
int clearLastIBits(int n, int i){
	int mask=(-1<<i);
	return (n & mask);
}
int main(void){
	int n=15;
	int i=2;
	printf("%d\n",clearLastIBits(n,i));
	return 0;
}