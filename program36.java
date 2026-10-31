    // Approach 3.
import java.util.Scanner;
class program36
{


    class Arithematic  
    {
        public static int Addition(int iNo1, int iNo2)
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }

    }
   

    public static void main(String A[])
    {

        Scanner scanner = null;
        int iValue1 = 0, iValue2 =0, iResult =0;


        scanner = new Scanner(System.in);

        System.out.println("Enter first number :");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number :");
        iValue2 = scanner.nextInt();

        iResult = iValue1 + iValue2;  // Buisness logic.

        iResult = Addition(iValue1,iValue2);  // Error
                                                /* error Becuase: Addition function ek seperate Arithmatic 
                                                class me he  */   //solution in program37.

        System.out.println("Addition is : "+iResult); 

       

    }
}