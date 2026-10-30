import java.util.Scanner;
class program29          // Better than 27,28
{
    public static void main(String A[])
    {

        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;  



        scanner = new Scanner(System.in);

        System.out.println("Enter your name :");
        sName = scanner.nextLine();                         // added nextLine();

        System.out.println("Enter your Age: ");
        iAge = scanner.nextInt();

        System.out.println("Enter your marks:");
        fMarks = scanner.nextFloat();

        System.out.println(" welcome " +sName);
        System.out.println("your Age is :"+iAge);
        System.out.println("Your marks is :"+fMarks);

    }
}