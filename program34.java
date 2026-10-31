    // Approach 2.
import java.util.Scanner;
class program34
{

    public int Addition(int iNo1, int iNo2)  // static missing 
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

        iResult = Addition(iValue1,iValue2);  // Error 
                                            /*   error Because : public int Addition  is not a static function.
                                            function agar static nhi hoga obj  banana pdta he,
                                            agar static hoga to bina object banaye call jayega.   */
                                            //solution in program35.

        System.out.println("Addition is : "+iResult); 

       

    }
}