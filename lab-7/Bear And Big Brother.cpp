#include<iostream>
using namespace std;
int main()
{
    int a,b,y=1;
    cin>>a>>b;
    while(1)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            cout<<y<<endl;
            break;
        }
        y++;
    }
    return 0;
}
