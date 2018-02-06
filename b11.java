import java.util.Scanner;
public class MyClass {
    public static void main(String args[]) {
        int a;
        Scanner in=new Scanner(System.in);
        a=in.nextInt();
        if(a>0)
            System.out.println("Positive");
        else
            System.out.println("Negative");
    }
}
