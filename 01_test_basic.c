#include <stdio.h>
#include <conio.h>

// sizeof() & 'Limits.h' header file

// This is the example of 'sizeof()' function :--

int main()
{
  int i, j,k,l;
   for(i=1;i<=5;i++) {

    
    for(j=1;j<=5-i;j++) {
     printf("%d",j);
    }

    for(k=1;k<=i-1;k++) {
     printf(" K[%d] ",k);
    }

    for(l=1;l<=i;l++) {
     printf(" L[%d] ",l);
    }

    for(l=1;l<=5-i;l++) {
     printf("%d",l);
    }
    
    printf("\n"); 
   } 


    printf("#######\n");
    printf("#      \n");
    printf("#      \n");
    printf("#####  \n");
    printf("#      \n");
    printf("#      \n");
    printf("#      \n");
    printf("\n\n");

    printf("    ######\n");
    printf("  ##      ##\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("  ##      ##\n");
    printf("    ######\n");
    return(0);
}

