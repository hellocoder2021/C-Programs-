/*
the difference between twice the unit digit of the given number and the 
remaining part of the given number should be a multiple of 7 or it should be equal to 0
*/
#include <stdio.h>
int test(int num){
	int fistdigit=num%10;
	int rmdigit=num/10;
	return((rmdigit-2*fistdigit)%7==0 ? 1 : 0);
}
int main(void){
	int num=798;
	printf("%d\n", test(num));
	num=769;
	printf("%d\n", test(num));
}
