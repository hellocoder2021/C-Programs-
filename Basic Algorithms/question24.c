/*
Problem : who wins among three
:given three numbers ======> tell which one is greater among them
*/
#include <stdio.h>
int max(int a, int b, int c){
	int max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	return max;
}
int main(void){
	printf("%d\n", max(4,5,6));
	printf("%d\n", max(49,53,61));
	printf("%d\n", max(40,78,12));
	return 0;
}