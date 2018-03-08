#include <iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
 int x,n,max=0;
 bool r=true;
 cin>>n;
 for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){

        cin>>x;
        if(x>max) max=x;
   }
  if(max==n-1&&r){
        cout<<max+1<<" ";
     r=false;
  }
  else cout<<max<<" ";
max=0;
}
 cout<<endl;


    return 0;
}
