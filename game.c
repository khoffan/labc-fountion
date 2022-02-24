#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int n ,s,r;
    srand(time(NULL));
    for(int i=0;i<1000;i++){
        printf("Enter num range random ");
        scanf("%d\n",&n);
        r = rand()%10;
        if(n == r){
            printf("coorect\n");
            break;
        }
        else{
            printf("incorrect\n");
        }
        if(i == 15){
            printf("out of number to find");
        }
        
    }
}