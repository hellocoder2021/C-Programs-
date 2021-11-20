/*
a number is 
completely divisible by 3 if the sum of its digits is divisible by 3.
3
9+3=12/3=0;
*/
#include <stdio.h>
int test(int num){
	int sum=0;
	while(num){
		sum+=num%10;
		num/=10;
	}
	printf("%d\n", sum);
	return ((sum%3==0) ? 1 : 0);
}
int main(void){
	int num=6399999;
	printf("%d\n", test(num));
	num=2;
	printf("%d\n", test(num));
	return 0;
}