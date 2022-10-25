import java.util.*;
import java.io.*;
  
class Krishnamurthy {
    // function to calculate the factorial
    // of any number
    static int factorial(int n)
    {
        int fact = 1;
        while (n != 0) {
            fact = fact * n;
            n--;
        }
        return fact;
    }
  
    // function to Check if number is krishnamurthy
    static boolean isKrishnamurthy(int n)
    {
        int sum = 0;
  
        int temp = n;
        while (temp != 0) {
            // calculate factorial of last digit
            // of temp and add it to sum
            sum += factorial(temp % 10);
  
            // replace value of temp by temp/10
            temp = temp / 10;
        }
  
        // Check if number is krishnamurthy
        return (sum == n);
    }
  
    // Driver code
    public static void main(String[] args)
    {
        int n = 145;
        if (isKrishnamurthy(n))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}