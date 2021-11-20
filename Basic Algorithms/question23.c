/*
23. Write a C program to check whether it is possible to add two integers to get the third integer from three given integers. Go to the editor
Expected Output:

1
0
1
*/
#include <stdio.h>
int isPossible(int n1,int n2,int n3){
	return ((n1+n2)==n3 ? 1 : 0);
}
int main(void){
    printf("%d\n", isPossible(1,2,3));
    printf("%d\n", isPossible(3,5,8));
    printf("%d\n", isPossible(2,4,3));
	return 0;
}