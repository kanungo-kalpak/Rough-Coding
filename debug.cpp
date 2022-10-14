

/*int main(){
    map<int,vector<int> > index;
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
        index[arr[i]].push_back(i);
    }
   for(auto it = index.begin();it!=index.end();it++){
       cout<<it->first<<" ";
       for(auto i= it->second.begin();i!=it->second.end();i++){
        cout<<*i<<" ";
       }

   }

}
*/
/*
int cnt =0;

for(int i =0;i<bill.size;i++){
    if(ceil((double)sqrt(bill[i])==floor((double)sqrt(bill[i]) ) cnt++; 
}
return cnt;
*/
/*
int main(){
    int p,q,r;
    p =0,q=0,r=7;
    int ans  =1;
    for(int i =0;i<=20;i++){
        int cnt=0;
        if(p==0&&q==0&&r==0) break;
        
        cout<<"P "<<"Q "<<"R"<<endl;
        if(p%2==1&&q%2==1&&r%2==1) ans*=4;

        if(p%2==1) cnt++;
        if(q%2==1) cnt++;
        if(r%2==1) cnt++;
        if(cnt==1) {
            ans =0;
            break;
        } 
        cout<<p%2<<" "<<q%2<<" "<<r%2<<endl;
        p/=2;
        q/=2;
        r/=2;
    }
    cout<<"ANSWER IS "<<ans;
}
*/
/*
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n,targetSum;
    cin>>n>>targetSum;
    vector<int> arr;
    for(int i =0; i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    vector<long long int> prefix;
    long long int sum =0;
    
    //sort(prefix.begin(),prefix.end());
    int cnt =0;
    long long int currSum=0;
    for(int i =0;i<n;i++){
        currSum+=arr[i];
        if(currSum==targetSum) cnt++;
        long long int search= currSum-targetSum;    // see if it is available
        if(binary_search(prefix.begin(),prefix.end(),search)) cnt++;

        prefix.push_back(currSum);
        sort(prefix.begin(),prefix.end());

    }
    cout<<cnt;


 }


 */
 // 1 3 2 2 4  k==4
 // for(int i =0;i<n;i++){
    //     sum+=arr[i];
    //     prefix.push_back(sum);
    // }
/*
 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    vector<vector<int> > arr;
    map<int,int> mp;
    map<int,int> ::iterator it,it_2;
    for(int i =0; i<n;i++){
        vector<int> temp;
        for(int j =0;j<2;j++){
            int t;
            cin>>t;
            temp.push_back(t);
        }
        arr.push_back(temp);
    }
    for(int i = 0; i<arr.size();i++){
        it = mp.find(arr[i][0]);
        if(it!=mp.end())
         { if(it->second<arr[i][1]) it->second=arr[i][1];
         }
        else
        mp.insert({arr[i][0],arr[i][1]});

    }
     for( it = mp.begin();it!=mp.end();it++){
                std::cout<<it->first<<"->"<<it->second<<endl;
            }


 }

 */
/*
#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a,vector<int>&b){
    if(a[0]==b[0]) return a[1]<b[1];
    else
    return a[0]>b[0];
}
int main(){
    vector< vector<int> >arr;
    int n ;
    cin>>n;
    for(int i =0; i<n;i++){
        vector<int> temp;
        for(int k =0; k<2;k++){
            int t;
            cin>>t;
            temp.push_back(t);
        }
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),cmp);
    int max_d=-1;
    int ans =0;
    for(int i =0; i<n;i++){
       
       if(max_d>arr[i][1]) 
        ans++;
       max_d=max(max_d,arr[i][1]);
    }
    for(int i =0; i<n;i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    }
    cout<<ans<<endl;


}
*/
/*
#include<bits/stdc++.h>
using namespace std;
struct cmp{
bool operator()(int a,int b){
    return a<b ;
}
};
int main(){
    priority_queue<int,vector<int>,cmp> q;

    int n ;
    cin>>n;
    for(int i =0;i<n;i++){
        int t;
        cin>>t;
        q.push(t);
    }
    while(q.size()!=0){
        cout<<q.top()<<endl;
        q.pop();
    }

}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int s=0;
    int e=0;
    for(int i =0; i<n;i++) cin>>arr[i];
    int ans=arr[0];
    int currSum=arr[0];
    for(int i =1; i<n;i++){
        if(currSum<0){
            currSum=arr[i];
            s =i;
        }
        else{
            currSum+=arr[i];
            

        }
       if(currSum>ans){
        ans = currSum;
        e =i;
       }
    }
    cout<<ans<<endl;
    cout<<"S "<<s<<"E "<<e<<endl;

}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int s=0;
    int e=0;
    for(int i =0; i<n;i++) cin>>arr[i];
    int ans=arr[0];
    int currSum=arr[0];
    for(int i =1; i<n;i++){
        if(currSum>0){
            currSum=arr[i];
            s =i;
        }
        else{
            currSum+=arr[i];
            

        }
       if(currSum<ans){
        ans = currSum;
        e =i;
       }
    }
    cout<<ans<<endl;
    cout<<"S "<<s<<"E "<<e<<endl;

}
*/
// #include<bits/stdc++.h>
// using namespace std;
/*
void print(priority_queue<int>small){

     while(small.size()!=0){
        cout<<small.top()<<" ";
        small.pop();
     }    
 
}*/
/*
int main(){
 
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    priority_queue<int>big;
    priority_queue<int,vector<int>,greater<int> >small;
    priority_queue<int>bigg;
    int maxE=0;
    int minE=0;
    bool neg =false;
    bool pos=false;
    for(int i =0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]<0){
            neg=true;
            big.push(-1*arr[i]);
        }
        else{
            pos = true;
            big.push(arr[i]);
        }
        small.push(arr[i]);
        bigg.push(arr[i]);
    }
    // print(small);
    // print(big);
   maxE=big.top()*big.top();
   if(pos==true&&neg==true){
        // find the biggest -ve value;
       // minE=small.top() *big.top();
       minE=small.top()*bigg.top();

   }
   if(neg==false){
     minE=small.top() * small.top();
   }
   if(pos==false){
    minE=bigg.top()*bigg.top();
   }
   //cout<<"MIN "<<minE<<"MAX "<<maxE<<endl;
   cout<<minE<<" "<<maxE<<endl;

 }

}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int r,g,b;
            int arr[3];
            int max =0;
            for(int i =0; i<3;i++) {
                cin>>arr[i];
                if(arr[i]!=0) max++;
            }
            int cnt =0;
            for(int i =0;i<3;i++){
                if(i==0){
                //if(arr[0]!=0&&arr[1]!=0) 
                if(arr[0]>=2 &&arr[1]>=2)
                { arr[0]--;            // for  0 and 1
                  arr[1]--;
                  if(max+1>max) max=max+1;
                }
                if(i==1){
                // if(arr[1]!=0&&arr[2]!=0)
                if(arr[0]>=2 &&arr[1]>=2)
                 {
                     arr[1]--;
                     arr[2]--;
                     if(max+1>max) max=max+1;     
                 }
                }
                if(i==2){
                   // if(arr[2]!=0&&arr[0]!=0)
                   if(arr[0]>=2 &&arr[1]>=2)
                   { arr[2]--;
                    arr[0]--;
                    if(max+1>max) max=max+1;
                   }
                }
            }      
                  
    }
  cout<<max<<endl;
}
}
/*
/*
int r, g, b;
 2 3 1

 1 2 1 -> 1
 1 1 0 -> 2
 



*/
/*
#include<iostream>
using namespace std;
bool isPresent (int *temp,int n,int key){
    for(int i= 0;i<n;i++){
        if(temp[i]==key) return true;
    }
    return false;
}
void  getMeDuplicate(int *arr,int *ans,int n){
   int index = 0;
   int ind = 0;
   int *temp = new int[n];            // temp array is used here just to check that i am not inserting any duplicate value in my answer array
   for(int i =0; i<n;i++) temp[i]=-1;
   for(int i =0; i<n;i++)
   {
    int cnt =1;
    for(int j = 0; j<n;j++)
    {
        if(arr[i]==arr[j]&&i!=j) cnt++;
    }
    if(cnt%2!=0 &&isPresent(temp,n,arr[i])==false){     // whenever i don't found arr[i] in temp array i will add it in my answer array and i will make sure that next time i encounter this element i don't include in my answer array again that check is done with the help of temp aray
      ans[index++]=arr[i];  
      temp[ind++]=arr[i];
    } 
    

   }


}
int main(){
    int n;
    cin>>n;
    int *arr  = new int[n];              
    int *ans = new int[n];               
    for(int i =0;i<n;i++) ans[i]=-1;
    for(int i =0; i<n;i++){
        cin>>arr[i];                           
    }
     getMeDuplicate(arr,ans,n);
    for(int i =0; i<n;i++)
    {
        if(ans[i]==-1) break;
        cout<<ans[i]<<" ";
    }

}
*/

// 2 3 5 4 5 2 4 3 5 2 4 4 2 3 
/*
#include<bits/stdc++.h>

using namespace std;

int monthExtract(string s){
int k = 0;
string t="";
while(k<=1){
    t+=s[k];
    k++;
}
return stoi(t);    

}
int dayExtract(string s){
    int k=3;
    string t="";
    while(k<=4){
        t+=s[k];
        k++;
    }
    return stoi(t);

}
int main(){

    string aA="08-15";
    string aL="08-18";
    string bA="08-16";
    string bL="08-19";
    
    int aArrivalMonth=monthExtract(aA);
    int aArrivalDay = dayExtract(aA);
    int aLeaevMonth = monthExtract(aL);
    int aLeaveDay = dayExtract(aL);

    int bArrivalMonth = monthExtract(bA);
    int bArrivalDay = dayExtract(bA);
    int bLeaveMonth  = monthExtract(bL);
    int bLeaveDay = dayExtract(bL);

    cout<<"Arrival of Alice on "<<aArrivalMonth<<" "<<aArrivalDay<<endl;
    cout<<"Alice left on"<<aLeaevMonth<<" "<<aLeaveDay<<endl;
    cout<<"Arrival of bob on "<<bArrivalMonth<<" "<<bArrivalDay<<endl;
    cout<<"Bob left on"<<bLeaveMonth<<" "<<bLeaveDay<<endl;
    


}
*/

//arriveAlice = "08-15", leaveAlice = "08-18", arriveBob = "08-16", leaveBob = "08-19"
/*

#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n;
    cin>>k;
    string s;
    cin>>s;
    int prefix[n+1];
    for(int i =0; i<n+1;i++)prefix[i]=0;
    int firstOne=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'&&i+k-1<n) {
            firstOne=i;
            prefix[i]++;
            prefix[i+k]--;
            cout<<'0';
            break;
    }
    else{
        cout<<s[i];
    }

    }
    if(firstOne==-1) cout<<s<<endl;
   
    else{
        for(int i =firstOne+1;i<n;i++){
            prefix[i]=prefix[i]+prefix[i-1];
            if(s[i]=='0'&&prefix[i]%2==1&& i+k-1<n){
                prefix[i]++;
                prefix[i+k]--;
                cout<<'0';
            }
            else if(s[i]=='1'&& prefix[i]%2==0 && i+k-1<n){
                prefix[i]++;
                prefix[i+k]--;
                cout<<'0';
            }
            else{
                if(prefix[i]%2==1){
                    if(s[i]=='1') cout<<'0';
                    else
                    cout<<'1';
                }
                else
                cout<<s[i];
            }
        }
        

       
       cout<<endl;
      
    }



    }
}
*/
    
    //00000000000
/*
#include<bits/stdc++.h>
using namespace std;
void reverse(string &ans,int n){
    int low = 0;
    int high = n-1;
    while(low<=high){
        swap(ans[low],ans[high]);
        low++;
        high--;
    }
}
int main(){
    ios::sync_with_stdio(false);
cin.tie(0);
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        priority_queue<int,vector<int>,greater<int>> q;
        int s_cnt =0;
        int a_cnt =0;
        for(int i =0; i<n;i++){
            int num = s[i]-48;
            if(s[i]!='-'&&s[i]!='+')
              q.push(num);
            else{
                if(s[i]=='-') s_cnt++;
                if(s[i]=='+') a_cnt++;
            }  
        }
        string ans="";
        while(q.size()!=0){
            ans+=(char)48+q.top();
            q.pop();
            if(s_cnt!=0) {
                ans+='-';
                s_cnt--;
            }
            else{
                if(a_cnt!=0) {
                    ans+='+';
                    a_cnt--;
                }
            }
        }
        reverse(ans,n);
        cout<<ans<<endl;
    }

}
*/

// -9+5
//  


/*#include<iostream>
int main(){
    int n;
    std::cin>>n;
    for(int i =1; i<=n;i++){
        for(int j=1;j<=n-i;j++)std::cout<<" ";
        
        for(int k=1;k<=i;k++)std::cout<<"*";

        for(int p=1;p<=i-1;p++)std::cout<<"*";
        std::cout<<std::endl;
    }
    for(int i =n;i>=1;i--){
        if(i==n) continue;
        for(int j=1;j<=n-i;j++)std::cout<<" ";

        for(int k=1;k<=i;k++)std::cout<<"*";

        for(int p =1;p<=i-1;p++)std::cout<<"*";
        std::cout<<std::endl;
    }

}
*/
/*
#include<iostream>
int main(){
    int n;
    std::cin>>n;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(j<=n-i+1) std::cout<<j;
            if(j>n-i+1) std::cout<<"*";
        }
        int print = n-i+1;
        for(int j =n+1;j<=n+n;j++){
            if(j<=n-i+1+2*(i-1)) std::cout<<"*";
            else 
            std::cout<<print--;
        }
        std::cout<<std::endl;
    }

}*/
// #include <iostream>
// #include<typeinfo>


// int main()
// {
//     int arr[3]={1,2,3};
//     int (*ptr)[3] = &arr;
//     int *p = arr;
//     p++;
//     ptr++;
//     std::cout<<arr<<std::endl;
//     std::cout<<&arr[0]<<std::endl;
//     std::cout<<&arr[1]<<std::endl;
//     std::cout<<&arr[2]<<std::endl;
//     std::cout<<p<<std::endl;
//     std::cout<<ptr<<std::endl;
//     std::cout<<typeid(arr).name()<<std::endl;
//      std::cout<<typeid(p).name()<<std::endl;
//     std::cout<<typeid(ptr).name();
//     return 0;
    
// }
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        int *arr = new int[n];
        map<int,int> mp;
        for(int i =0; i<n;i++){
           cin>>arr[i];
           mp[arr[i]]++;
        }
        int fmax =0;
        for(auto i =mp.begin();i!=mp.end();i++){
            if(i->second>fmax) fmax=i->second;
        }
       cout<<fmax-1<<endl;
	    
	}
	return 0;
}
*/

/*
int *arr = new int[n];
	    for(int i =0; i<n;i++) cin>>arr[i];
	    int gmax = arr[0];
	    for(int i =0; i<n;i++) if(arr[i]>gmax) gmax=arr[i];
	    int *freq = new int [gmax+1];
	    for(int i =0;i<gmax+1;i++) freq[i] =0;
	    
	    for(int i =0; i<n;i++){
	        freq[arr[i]]++;
	    }
	    int fmax = arr[0];
	    for(int i =0;i<gmax+1;i++){
	        if(arr[i]>fmax) fmax=arr[i];
	    }
	    cout<<fmax-1<<endl;
        */
/*       
int i=0, j=0;
bool isoption(vector<vector<int>> &m,int &i, int &j)
{
  //right ja sakte
  if(m[i][j+1] == 1)
  {
   cout<<"right ja sakte"<<endl;
   return 1;
    j++;
  }
  //down
   if(m[i+1][j] == 1)
  {
   cout<<"down ja sakte"<<endl;
    return 1;
    i++;
 
  }
  //left
   if(m[i][j-1] == 1)
  {
   cout<<"left ja sakte"<<endl;
    return 1;
    j--;
  }
  //up
   if(m[i-1][j] == 1)
  {
   cout<<"up ja sakte"<<endl;
    return 1;
    i--;
  }

 
}

void route (vector<vector<int>>& m, int n)
{
  vector<int> t;
  vector<vector<int>> ans;

  //base case
  if(i==n-1 & j==n-1)
  {
     t.push_back(n-1);
     t.push_back(n-1);
     ans.push_back(t);

     if (isoption(m,i,j))
  {
  t.push_back(i);
  t.push_back(j);
  ans.push_back(t);
 
  isoption(m,i,j);
 
  }
     // r=n-1, c=n-1;
     // ans.push_back(m[n-1][n-1]);
     // return ans;
  }
  */

/*
 #include<bits/stdc++.h>
 using namespace std;
 vector<string> ans;

 void display(vector< vector< int > > &mat){
    for(int i =0 ;i < mat.size();i++){
        for(int j =0; j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
 }
 bool isSafe(vector< vector < int > > &check,vector< vector < int > > &mat,int i,int j,int n){
    // if(i>=n || i<0||j<0||j>=n) return false;
    // else{
    //     if(check[i][j]!=1 && mat[i][j]!=0){
    //         return true;
    //     }
    //     else
    //     return false;
    // }
    if((i>=0&&i<n)&&(j>=0&&j<n) &&check[i][j]!=1 && mat[i][j]==1) return true;
    else 
    return false;

 }
void  solve(vector< vector < int > > &mat,vector< vector < int > > &check,int i,int j,int n,string path){
    
    if(i==n-1&&j==n-1) {
        ans.push_back(path);
        return;
    }
    check[i][j]=1;
    if(isSafe(check,mat,i+1,j,n)){
        
        path+='D';
        solve(mat,check,i+1,j,n,path);
        
     }
     if(isSafe(check,mat,i-1,j,n)){
      
        path+='U';
        solve(mat,check,i-1,j,n,path);
        
     }
     if(isSafe(check,mat,i,j+1,n)){
        
        path+='R';
        solve(mat,check,i,j+1,n,path);
       
     }
     if(isSafe(check,mat,i,j-1,n)){
       
        path+='L';
        solve(mat,check,i,j-1,n,path);
        
     }
     check[i][j]=0;


    

 }

 int main(){
    int n;
    cout << "Enter the size of the mat ";
    cin >> n;
    vector< vector < int > > mat;
    vector< vector < int > > check(n, vector<int> (n, 0));
    
    for(int i =0 ; i<n;i++){
        vector<int> temp;
        for(int j =0; j<n;j++){
            int t;
            cin>>t;
            temp.push_back(t);
                    
        }
        mat.push_back(temp);
    }
    
    display(mat);
    display(check);
    solve(mat,check,0,0,n,"");
    for(int i =0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
        cout<<endl;
    }
    
 }
 */
/* *********                                     Positive number to binary number         ************************************
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans =0;
    int i =0;
    while(n!=0){
        int bit = n&1;
        ans = (bit * pow(10,i)) +ans;
        n=n>>1;
        i++;
    }
    
    cout<<ans<<endl; 

}

*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string ans ="";
  for(int i =0;i<32;i++) ans+='0';
  int k =31;
  while(n!=0){
    int bit = n&1;
    if(bit==1) ans[k]='1';
    k--;
    n/=2;
  }
  cout<<ans<<endl;
  // invert the bit 
  for(int i =0; i<32;i++){ 
    if(ans[i]=='1')ans[i]='0';
    else{
        ans[i]='1';
    }

  }
  cout<<ans<<endl;
  // add one now 
  int carry =1;
  for(int i =31;i>=0;i--){
    if(ans[i]=='1'&& carry==1) carry=1;
    if(ans[i]=='0'&&carry==1) carry=0,ans[i]='1';
  }
  cout<<ans<<endl;

}
void display(vector<int> &arr){
    for(int i =0 ;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

*/
#include<bits/stdc++.h>

using namespace std;
void set_smallest(vector < int > & smallestElements, vector < int > & nums1, vector < int > & nums2, int m, int n) {
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < m && j < n && k < m) {
    if (nums1[i] < nums2[j]) {
      smallestElements[k] = nums1[i];
      k++;
      i++;
    } else {
      smallestElements[k] = nums2[j];
      k++;
      j++;
    }
  }
  while (i < m && k < m) {
    smallestElements[k] = nums1[i];
    k++;
    i++;

  }
  while (j < n && k < m) {
    smallestElements[k] = nums2[j];
    k++;
    j++;

  }

}
void merge_both(vector < int > & nums1, vector < int > & nums2, int m, int n) {
  int k = 0;
  for (int i = m; i < m + n; i++) {
    nums1[i] = nums2[k++];
  }

}
void set_greatest(vector < int > & nums1, vector < int > & nums2, int m, int n) {
  int p = 0;
  int i = m - 1;
  int j = m + n - 1;
  while (i >= 0 && j >= m && p < n) {
    if (nums1[i] > nums1[j]) {
      nums2[n - 1 - p] = nums1[i];
      i--;
      p++;

    } else {
      nums2[n - 1 - p] = nums1[j];
      p++;
      j--;
    }
  }
  while (j >= m && p < n) {
    nums2[n - 1 - p] = nums1[j];
    p++;
    j--;
  }

  while (i >= 0 && p < n) {
    nums2[n - 1 - p] = nums1[i];
    i--;
    p++;

  }

}

int main() {
  int n, m;
  cin >> m >> n;

  vector < int > nums1(m + n, 0);
  vector < int > nums2(n, 0);
  for (int i = 0; i < m; i++) cin >> nums1[i];
  for (int i = 0; i < n; i++) cin >> nums2[i];

  vector < int > smallestElements(m);            // for storing m smallest element 
  set_smallest(smallestElements, nums1, nums2, m, n);

  merge_both(nums1, nums2, m, n);               // inserting nums2 in nums1's empty cells

  set_greatest(nums1, nums2, m, n);             // storing n greatest element in nums2

  int i = 0;
  for (i = 0; i < m; i++)                       // finally putting correct order in nums1
    nums1[i] = smallestElements[i];
  for (int j = 0; j < n; j++)
    nums1[i++] = nums2[j];

  cout << endl;

}