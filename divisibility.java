class GFG
{
     
// Returns true if number
// is divisible by 13 else
// returns false
static boolean checkDivisibility(String num)
{
    int length = num.length();
    if (length == 1 &&
        num.charAt(0) == '0')
        return true;
 
    // Append required 0s .
    // at the beginning.
    if (length % 3 == 1)
    {
        // Same as strcat(num, "00");
        // in c.
        num +="00";
        length += 2;
    }
    else if (length % 3 == 2)
    {
        // Same as strcat(num, "0");
        // in c.
        num += "0";
        length += 1;
    }
 
    // Alternatively add/subtract
    // digits in group of three
    // to result.
    int sum = 0, p = 1;
    for (int i = length - 1; i >= 0; i--)
    {
        // Store group of three
        // numbers in group variable.
        int group = 0;
        group += num.charAt(i--) - '0';
        group += (num.charAt(i--) - '0') * 10;
        group += (num.charAt(i) - '0') * 100;
 
        sum = sum + group * p;
 
        // Generate alternate series
        // of plus and minus
        p *= (-1);
    }
    sum = Math.abs(sum);
    return (sum % 13 == 0);
}
 
// Driver code
public static void main(String[] args)
{
    String number = "83959092724";
     
    if (checkDivisibility(number))
            System.out.println(number +
                       " is divisible by 13.");
        else
            System.out.println(number +
                       " is not divisible by 13.");
}
}