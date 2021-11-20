#include<stdio.h>
int clearBitsItoJ(int n, int i,int j){
	int ones=(~0);
	int a=(ones<<(j+1));
	int b=(1<<i)-1;
	int mask=a|b;
	return n&mask;
}
int main(void){
	int n=31;
	int i=1;
	int j=3;
	printf("%d\n",clearBitsItoJ(n,i,j));//31-14=17
	return 0;
}