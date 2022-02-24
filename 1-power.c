#include<stdio.h>
#include<math.h>
int main(){
    int x;
    double e , p;
    printf("Enter number "); scanf("%d",&x);
    e = pow(x,3);
    p = pow(x,0.3333333333);
    printf("e = %f\n",e);
    printf("p = %f\n",p);
}