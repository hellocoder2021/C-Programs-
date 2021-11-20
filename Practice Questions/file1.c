#include <stdio.h>
int main(void){
    int var;
    int num;
    num=(var=15,var+35,var+25);
    printf("%d\n",num);
    return 0;
}
