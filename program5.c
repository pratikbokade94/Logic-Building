/* 
    Step 1 :   Understand the problem Statement
    Step 2 :   write the algorithm
    Step 3 :   Decide the programming language 
    Step 4 :   write the program 
    Step 5 :   Test the program

*/


////////////////////////////////////////////////////////////////////////////
//
//   Step 1 :   Understand the problem Statement
//              user is going to enter any 2 integers
//              and we have to performe addition 
//
/////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
//
//    Step 2 :   write the algorithm
//
//      START
    // Accept first number  as No1
    // Accept second number as no2
    // Create the variable as Ans to store the result
    // Perform the addition and store into Ans 
    // Display the result from Asn.

//     END

////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//
//    Step 3 :   Decide the programming language 
//               we select C programming
//
////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//    Step 4 :   write the program 
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{

    int iValue1 = 0,  iValue2 = 0 ,  iResult = 0; 
    
    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iResult = iValue1 + iValue2;    // Business logic

    printf("Addition is : %d\n",iResult);
    


    return 0;
}