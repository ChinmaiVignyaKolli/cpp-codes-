#include<iostream>
#include<cstring>
using namespace std;

int main(){
int i;
char a[25];
int flag=0;
cout<<"Enter the string";
cin>>a;
int n=strlen(a);

for(i=0;i<n;i++){
if(a[i]=='c' && a[i+1]=='o' &&a[i+2]=='m' && a[i+3]=='p' && a[i+4]=='u' && a[i+5]=='t' && a[i+6]=='e' && a[i+7]=='r')
{
  flag=1;
  break;
}
}
if(flag==1)
cout<<"Yes";
else
cout<<"No";

return 0;
}
