#include<iostream>
using namespace std;

/*
bool pairsum(int arr[], int n, int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == k){
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}
*/

bool pairsum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;

    while(low<high){
        if(arr[low]+arr[high] == k){
            cout << low << " " << high << endl;
            return true;
        }
        else if(arr[low]+arr[high] > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array" << endl;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the sum to find" << endl;
    cin >> k;

    cout << pairsum(arr,n,k) << endl;

    return 0;
}