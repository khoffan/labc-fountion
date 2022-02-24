#include<stdio.h>
#include<stdlib.h>
int main(){
    char *s = "1";
    int x;
    x = atoi(s);
    printf("%d\n",x);
    printf("%ld\n",sizeof(x));
    printf("%s\n",s);
    printf("%ld\n",sizeof(char));
}