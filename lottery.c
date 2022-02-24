#include<stdio.h>
int main(){
    int l, n = {254689};

    printf("Enter number of lottery 6 number:");
    scanf("%d",&l);
    if(l == n){
        printf("correct\n");
    }
    else{
        printf("incorrect\n");
    }

}