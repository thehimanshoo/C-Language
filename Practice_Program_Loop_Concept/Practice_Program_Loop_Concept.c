#include <stdio.h>

int main()
{
    int a,b,sum,rep,c,qot,rem,d,e,res,com;
    
    printf("Welcome To My First Pragram\n\n");
    printf("Enter the 1'st value : ");
    scanf("%d", &a);
    
    printf("Enter the 2'nd value : ");
    scanf("%d", &b);
    
    sum = a+b;
    rep = sum % 2;
    printf("Sum of value you enter is : %d\n", sum);
    if(rep==0){
        printf("You entered an Even input\n\n");
    }else{
        printf("You entered an Odd input\n\n");
    }
    
    // Second Program Starts form here :--
    
    printf("Welcome !! You've Successfully entered in my second Program of Division\n\n");
    printf("Enter the 1'st value : ");
    scanf("%d", &c);
    
    qot = c/2;
    rem = c % 2;
    
    printf("qotient : %d\n", qot);
    printf("Remainder : %d\n", rem);
    if(rem==0){
        printf("It's an even input\n");
    }else{
        printf("It's an odd input\n\n");
    }
    
    // Third program starts form here :--
    
    printf("Welcome to the world of multiplication\n\n");
    printf("Enter your 1'st input : ");
    scanf("%d", &d);
    
    printf("Enter your 2'nd input : ");
    scanf("%d", &e);
    
    res = d * e;
    com = res % 2;
    printf("Your expected answer'll be : %d\n", res);
    if(com==0){
        printf("You got an even result\n");
    }else{
        printf("You got an Odd result");
    }
    
    return 0;
    

}
