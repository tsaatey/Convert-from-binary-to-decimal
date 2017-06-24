/***********************************************************************
* binDecimal.c
*
* A program to convert from binary to decimal.
*
* Author: Richard T. Ahuakli
*
* Email: Tsaatey@gmail.com
*
***********************************************************************/

//Include all necessary libraries
#include <stdio.h>
#include <math.h>

int main()
{
    //Variable definitions
    long int userInput = 0;
    int decNumber = 0;;
    int counter = 0;
    int remainder = 0;
    
    //Accept and validate user input
    do
    {
        printf("Enter the binary number here: ");
        scanf("%ld", &userInput);
    }
    while (userInput < 1);
    
    //Convert from binary to decimal
    while (userInput >= 1)
    {
        remainder = userInput % 10;
        decNumber += remainder * pow(2, counter);
        userInput = userInput / 10;
        counter++;
    }
    //Report answer
    printf("%d", decNumber);
    
    //Print a new line
    printf("\n");
    
    return 0;
}
