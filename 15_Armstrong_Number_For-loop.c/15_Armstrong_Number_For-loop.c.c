#include <stdio.h>

int main()
{
    int i,n,r,c,sum=0;
    
    printf("Enter the n value : ");
    scanf("%d", &n);
    
    for (i = n; i>0; i=i/10) {
        /* code */
        r = i % 10;
        c = r*r*r;
        sum = sum + c;
    }
    
    if(n==sum){
        printf("%d is Amastrong number \n\n", n);
    }else{
        printf("%d is not Amastrong number \n\n", n);
    }
    return 0;
}
