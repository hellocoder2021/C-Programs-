/*
19. Write a C program to to test 
whether a given non-negative number 
is a multiple of 13 or it is one more than a multiple of 13.
Expected Output:

1
1
1
0
*/
#include <stdio.h>
int test(int num){
	return ((num%13==0)? 1 : (num%13==1) ? 0 : num%13);
}
int main(void){
	int num=13;
	printf("%d\n",test(26));
	printf("%d\n",test(39));
	printf("%d\n",test(40));
	printf("%d\n",test(42));
	return 0;
}