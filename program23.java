import java.util.Scanner;
class program23
{
    public static void main(String A[])
    {
///////////////////////////////////////////////////////////////////

    //    Scanner scanner = new Scanner(System.in);

    //     System.out.println("Enter your name :");
    //     String sName = scanner.nextLine();               // Bad Practice.

    //     System.out.println(" welcome " +sName);

        Scanner scanner = null;
         
        String sName = null;
        scanner = new Scanner(System.in);

        System.out.println("Enter your name :");          // Good Practice.
        sName = scanner.nextLine();                     

        System.out.println(" welcome " +sName);

    
       

    }
}