#include <stdio.h>
#include <conio.h>
#include <limits.h>

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

   // "limits.h " header-file

    /*
      ==> This is the example of 'limits.h' header-file

    'limits.h' contains so many pre-defined constants variables.. It is also known as 'Global Variables' & 'Constant Variables' no-One
     can modify it.. 

    * Following are the different types of signed-variable and their "Variable signs" :--
     1. short           2. int             3. long            4. char
     => SHRT_MIN        => INT_MIN         => LONG_MIN        => CHAR_MIN
     => SHRT_MAX        => INT_MAX         => LONG_MAX        => CHAR_MAX

==>> All these variables are belongs to signed type variables.. and all will be always write in 'CAPITAL - LETTERS' only...

    * Following are the example of 'UN-SIGNED' types variables :--
    1. short            2. int             3. long             4. char
    => -----            => -----           => -----            => -----
    => USHRT_MAX        => UINT_MAX        => ULONG_MAX        => UCHAR_MAX

    ** NOTE :-- The 'MIN' value are not there in 'Un-signed' type variables.. because the minimum range of every data-types starts with '0'
                so, that the minimum value are not present in un-signed type variables..

    ** VVI NOTES :-- Here we've to use the 'limits.h' header-file because here we are using some of the variables which are directly 
                     linked to 'limits.h' header-file so, you have to add the header-file 'limits.h' or else you get some 'ERROR' 
                     message that variable is not finding the symbol (ERROR)...
    */

    
       printf("signed short min value : %d \n", SHRT_MIN);
       printf("signed short max value : %d \n", SHRT_MAX);
       printf("unsigned short max value : %u \n", USHRT_MAX);

}

