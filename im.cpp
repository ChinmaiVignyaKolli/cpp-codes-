#include<iostream>
#include<cmath>
using namespace std;

int main()
{

int n=2;
float ins=8*n*n;
float merge=64*n*(log(n)/log(2));

while(ins<merge)
{
ins=8*n*n;
merge=64*n*log(n)/log(2);
//cout<<ins<<endl;
//cout<<merge<<endl;
if(ins<merge){
cout<<n<<endl;
n++;
}
}

return 0;
}

