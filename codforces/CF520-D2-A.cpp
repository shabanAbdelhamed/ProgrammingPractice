#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
int n,arr[52]={0};
char a;

cin>>n;

for(int i=0;i<n;i++){

    cin>>a;
    if(a>='A'&&a<='Z')
        arr[a-65]++;
    else
        arr[a-71]++;


}
for(int i=0;i<52;i++)
{
    if(i<=25){
        if(arr[i]==0&&arr[i+26]==0){
        cout<<"NO"<<endl;
        return 0;}}
      else{
                if(arr[i]==0&&arr[i-26]==0){
        cout<<"NO"<<endl;
        return 0;}}
    }

      cout<<"YES"<<endl;




return 0;
}
