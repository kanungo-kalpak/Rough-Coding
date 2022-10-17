#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int curr = 0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            curr += arr[j];
            cout << curr << endl;
        }
    }

    return 0;
}