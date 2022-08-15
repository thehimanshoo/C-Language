#include <stdio.h>
#include <conio.h>

int main()
{
    /*
     1. Write a C program to print your name, date of birth. and mobile number. Go to the editor
        Expected Output:

        Name   : Alexandra Abramov  
        DOB    : July 14, 1975  
        Mobile : 99-9999999999

    */

    printf("Name   : Alexandra Abramov \n");
    printf("DOB    : July 14, 1975 \n");
    printf("Mobile : +91-9999999999 \n");
    printf("\n");


    // 2. Write a C program to get the C version you are using...

        #if __STDC_VERSION__ >=  201710L
    printf("We are using C18!\n");
    printf("\n");
    #elif __STDC_VERSION__ >= 201112L
    printf("We are using C11!\n");
    #elif __STDC_VERSION__ >= 199901L
    printf("We are using C99!\n");
    #else
    printf("We are using C89/C90!\n");
    #endif


     // 3. Write a C program to print a block F using hash (#), where the F has a height of six characters and width of five and 
     //    four characters. And also to print a big 'C'.     


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


    /*
        4. Write a C program to print the following characters in a reverse way. Go to the editor
           Test Characters: 'X', 'M', 'L'
        
    */
   //==>  Expected Output: The reverse of XML is LMX..

    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';

    printf("\n");
    printf("The reverse of %c%c%c is %c%c%c \n",
    char1, char2, char3,
    char3, char2, char1);
    return(0);


    
    }
