    // Approach 3.
import java.util.Scanner;
class program38
{


   
   

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

        iResult = Arithematic.Addition(iValue1,iValue2);  

        System.out.println("Addition is : "+iResult); 

       

    }

            /* ye class niche likhne ka karn ye he ki kuch system pr compiler
                        starting class me main() ko dhundta he.... agar ye class uper hui to main 
                        nahi milega pahile bar me compile time pr or error aa skta he . */  

     class Arithematic  
    {
        public static  int Addition(int iNo1, int iNo2)
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }

    }



}