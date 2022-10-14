#include<bits/stdc++.h>
using namespace std ;

bool is_k_element_sorted(int *arr,int k){
    
    if(k<=2) return true;
    if(arr[1]<arr[0]) return false;
    int diff = arr[1]-arr[0];
    for(int i =2;i<k;i++){
        if(arr[i]-arr[i-1]<diff) return false;
        else{
            diff =arr[i]-arr[i-1];
        }
    }
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;
    int *arr = new int[k];
    for(int i =0;i<k;i++)cin>>arr[i];
    
    if(k==1) {
        cout<<"YES\n";
        return 0;
    } 
    if(is_k_element_sorted(arr,k)==false) cout<<"No\n";

    else{
        if(arr[0]<0){
            int val = (arr[0])/(n-k+1);
            if(val <= arr[1]-arr[0]) cout<<"YES\n";
            else
            cout<<"NO\n";

        }
        else{
            int val = arr[0]/(n-k+1);
            if(arr[0]%(n-k+1) != 0)
            val++;
            if(val <= arr[1]-arr[0]) cout<<"YES\n";
            else
            cout<<"NO\n";


        }
    }

}
/*



#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j, k, k1, f;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>k;
        
        k1=n-k+1;
        
        ll s[k], a[k];
        
        for(i=0; i<k; i++)
        {
            cin>>s[i];
        }
        
        if(s[0]<=0){
            a[0]=s[0]/k1;
        }else{
            a[0]=(s[0]/k1);
            if((s[0]%k1)>0){
                a[0]++;
            }
        }
        
        for(i=1; i<k; i++){
            a[i]=s[i]-s[i-1];
        }
        
        f=0;
        
        for(i=1; i<k; i++)
        {
            if(a[i]<a[i-1]){
                f++;
                break;
            }
        }
        
        if(f==0)
        cout<<"Yes\n";
        else
        cout<<"No\n";
        
        
        
        
    }
}
*/
