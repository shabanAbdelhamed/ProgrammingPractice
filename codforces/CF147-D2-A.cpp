#include<iostream>

#include<string>
using namespace std;
int main()
{

  string s=" ",arr;
  getline(cin,arr);
  int x=arr.size(),c=1;
  for(int i=0;i<x;i++)
  {
      if(arr[i]==' '){
    while(arr[i]==' '){

        if(arr[i+1]=='.'||arr[i+1]==','||arr[i+1]=='!'||arr[i+1]=='?'){
            s+=arr[i+1];
            s+=' ';
            i++;
            break;
    }
    else if(arr[i+1]>='a'&&arr[i]<='z'){
        s+=' ';
        s+=arr[i+1];
        i++;
        break;
        }

i++;
    }}
    else if(arr[i]=='.'||arr[i]==','||arr[i]=='!'||arr[i]=='?'){

      s+=arr[i];
      s+=' ';}

      else{
        s+=arr[i];
      }



  }
  for(int i=1;i<s.size();i++){

    if(s[i]==' '&&s[i+1]==' '){}
    else
        cout<<s[i];



  }
    cout<<endl;







	return 0;
}
