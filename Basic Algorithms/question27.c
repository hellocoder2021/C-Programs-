/*
27. Write a C program to find the larger from two given integers. However if the two integers have the same remainder when divided by 5, then the return the smaller integer. If the two integers are the same, return 0. 
Expected Output:

11
20
0

*/
#include <stdio.h>
int rem(int num){
	return num%5;
}
int getNum(int a,int b){
	if(rem(a)==rem(b)){
		return (a>b ? b : a);
	}else if(a==b){
		return 0;
	}
	return (a>b ? a : b);
}
int main(void){
	printf("%d\n",getNum(11,21));
	printf("%d\n",getNum(20,56));
	printf("%d\n",getNum(34,34));
	return 0;
}