/*
20. Write a C program to check whether a given non-negative number
is a multiple of 3 or 7, but not both
*/
#include <stdio.h>
int test(int num){
	if(num%3==0 || num%7==0){
		return 1;
	}
	return 0;
}
int main(void){
	printf("%d\n", test(12));
	printf("%d\n", test(21));
	printf("%d\n", test(14));
	printf("%d\n", test(142));
	return 0;
}