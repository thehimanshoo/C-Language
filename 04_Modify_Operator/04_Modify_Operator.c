#include <stdio.h>

main()
{
    /* 
        Pre-increment Operator & Pre-decrement Operator :-- Following are the difference between 'Pre-increment' and 'Pre-decrement' 
        operator :--
                The constant operator with the constant value '++a' increment in the value before the operator is known as 
                Pre-increment operator, Similarly the operator having the '--a' decrement value before the operator value is konown as
                Pre-decrement operator..

        1. Following are the way, How it executes in the programme :--
           i.   Pre-increment '++a' & Pre-decrement '--a' value executes first then,
           ii.  Substitution,  // Execute the 'Replacement' value of the constant..
           iii. Evaluation,    // After execustion the system will evaluate the value of the constant..
           iv.  Assignment,    // After evaluation the system will Assign the value..
           v.   Post-increment 'a++' & Post-decrement 'a--'.. // At the End the system will assign post-increment & post-decrement value 


   **   Following are the difference between 'Post-increment' & 'Post-decrement' :--
        ==> Same as 'Pre' value but the concept here is, it is 'Post' so, basically in this types of constant the 'increment' as well
            as 'decrement' value are placed after the constant 'a++' as well as 'a--' this types of value will execute in last
            means if the constant will say to increase then the value will be increase and if the constant will say to decrease then
            the value of the constant will decrease in the last.. The system will calculate the value through the process..

    ::==> Let's See some of the examples :--        

    */

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
    
    return (0);
    
    
   // 1. Example :--

   int x = 10, y=20 , z;
       z = x++ * --y;
       printf("%d,%d,%d", x,y,z);
       printf("\n");

       // Expected Outcomes :-- x=11, y=19, z=190 

  //  2.  Example :--

    int f = 5; 
        f = f++ + ++f;
        printf("%d", f);
        printf("\n");


  // 3. Example :--

    int g = 2 , h= 3;
        h = g++ + h--;
        g = g-- + ++h;  
        h = ++g + --h;
        printf("%d,%d", g,h);
        printf("\n");
        return(0);
    
}
