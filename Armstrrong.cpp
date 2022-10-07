#include<iostream>
using namespace std;

int main()
{
    int n = 153;
    int orgno = n;
    int sum = 0;

    while(n>0)
    {
        int digit = n%10;
        sum = sum+(digit*digit*digit);
        n = n/10;
        cout << sum << endl;
    }

    if (sum == orgno)
    {
        cout << "Armstrong Number" << endl;
    }

    else
    {
        cout << "Not an Armstrong Number" << endl;
    }
}