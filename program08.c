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

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Integer, Integer
//  Output        : Integer
//  Description   : Performs Addition
//  Date          : 04/10/2026
//  Author        : Pratik Shahuraj Bokade
//
/////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
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
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iResult =Addition(iValue1, iValue2);   
                                           //  Don't write the buisness logic in main function, it should be reusable.

    printf("Addition is : %d\n",iResult);
    


    return 0;
}


/////////////////////////////////////////////////////////////////////////////////
//
//    step 5 : Test the program.
// 
//    Tested test cases
//...................................................................
//      Input1        Input2     Output
//..................................................................
//      10             11          21
//      11             0           11
//      -11            9           -2
//
/////////////////////////////////////////////////////////////////////////////////
