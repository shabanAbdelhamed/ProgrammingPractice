#include <iostream>

using namespace std;

int main()
{
    int x,z=0,y=0;

    for(int i=0;i<6;i++){
        cin>>x;
        if(i<3)
            y+=x;
        else
            z+=x;}
        cin>>x;


    if(z%10==0)
        z=z/10;
    else
        z=(z/10)+1;
    if(y%5==0)
        y=y/5;
    else
        y=(y/5)+1;
    if(y+z<=x)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
