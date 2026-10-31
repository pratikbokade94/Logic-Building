    // Approach 3.
import java.util.Scanner;
class program35
{

    public static int Addition(int iNo1, int iNo2)  // static added.
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
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

        iResult = Addition(iValue1,iValue2); /*  code succesfully run Beacuse Addition function
                                                is a static function .
                                                static function hoga to bina obj banaye bhi call kr sakte he ,
                                                agar static nahi hoga to obj banana hoga bad me run hoga code. */

        System.out.println("Addition is : "+iResult); 

       

    }
}