import java.util.Scanner;
class program23
{
    public static void main(String A[])
    {

        Scanner scanner = null;
        String sName = null;
        scanner = new Scanner(System.in);

        System.out.println("Enter your name :");
        
        sName = scanner.next();    // single word

        System.out.println(" welcome " +sName);

    }
}