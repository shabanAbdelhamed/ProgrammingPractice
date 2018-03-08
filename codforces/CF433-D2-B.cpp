#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
 int n,m,l,r,t;
long long arr[100001]={0},arr2[100001];
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>arr[i];
     arr2[i]=arr[i];
     arr[i]+=arr[i-1];
 }
 arr2[0]=0,arr2[100001]=0;
 sort(arr2,arr2+(n+1));

 for(int i=1;i<=n;i++)
    arr2[i]+=arr2[i-1];

    cin>>m;
    while(m--){
 cin>>t>>l>>r;
 if(t==1)
    cout<<arr[r]-arr[l-1]<<endl;
 else
    cout<<arr2[r]-arr2[l-1]<<endl;


    }
return 0;
}
