#include<stdio.h>

int main(){
    int b,c,d,sum;
    
    printf("enter int b & d");
    scanf("%d %d",&b,&d);
    
    printf("enter int c");
    scanf("%d",&c);
    
    sum = b + c + d;
    printf("%d\n",sum);
    return 0;
}

int main(){
    int b,c,d,sum,quo,rem;
    
    printf("enter int b & d");
    scanf("%d",&b);
    
    quo = b / 2;
    
    rem = b % 2;
    
    printf("quotient -> %d\n",quo);
    printf("reminder -> %d",rem);
    return 0;
};
