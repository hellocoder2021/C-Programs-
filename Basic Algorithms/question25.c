/*
25. Write a C program to check whether two or more non-negative given integers have the same rightmost digit. Go to the editor
Expected Output:

1
1
0
*/
#include <stdio.h>
int getRightMost(int num){
	while(num>10){
		num/=10;
	}
	return num;
}
int test(int n1,int n2){
	return ((getRightMost(n1)==getRightMost(n2)) ? 1 : 0);
}
int main(void){
	printf("%d\n", test(234,261));
	printf("%d\n", test(234,461));
	printf("%d\n", test(334,361));
	return 0;
}