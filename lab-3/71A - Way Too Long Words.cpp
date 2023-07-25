#include<iostream>
using namespace std;
#include<string.h>
int main()
{
char str[101];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>str;
    int length=strlen(str);
      if(length>10)
    {

      cout<<str[0]<<length-2<<str[length-1]<<endl;
    }
    else
    {
        cout<<str<<endl;
    }
     cout<<" "<<endl;
}
return 0;
}
