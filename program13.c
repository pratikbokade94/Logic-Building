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



/////////////////////////////////////////////////////////////////////////////////
//
//    step 5 : Test the program.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Addition(
                int iNo1,  // first input
                int iNo2   // Second input
            )
{

    int iAns = 0;

    iAns = iNo1 + iNo2;  // Business logic

    return iAns;


}
/////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the Application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{

    int iValue1 = 0,  iValue2 = 0 ,  iResult = 0; 
    
    printf("Enter first number : \n");
    if(scanf("%d", &iValue1) !=1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }


    printf("Enter second number : \n");

     if(scanf("%d", &iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }

    iResult =Addition(iValue1, iValue2);   
                                           //  Don't write the buisness logic in main function, it should be reusable.

    printf("Addition is : %d\n",iResult);
    


    return EXIT_SUCCESS; 
}

