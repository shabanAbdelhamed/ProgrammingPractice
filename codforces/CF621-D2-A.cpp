#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int arr[1000001];

int main()
{

long long n,y=0;

cin>>n;

for(int i=0;i<n;i++){
cin>>arr[i];
y+=arr[i];


}
  if(y%2==0)
        cout<<y<<endl;
  else{
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if((y-arr[i])%2==0){
        cout<<y-arr[i]<<endl;
        return 0;}}



  }


return 0;
