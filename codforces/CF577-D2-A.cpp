#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{

long long x,y,z=0;

cin>>x>>y;

for(int i=1;i<=x;i++){

    if(y%i==0&&y/i<=x){
        z++;



        }

}
  if(y==1)
        cout<<1<<endl;
  else
    cout<<z<<endl;






return 0;
}
