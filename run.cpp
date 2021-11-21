#include<iostream>
#include<cmath>
using namespace std;

int main()
{

int n=50;

float i=100*n*n;
float m=pow(2.0,n);

while(i<m)
{

n--;
i=100*n*n;
m=pow(2.0,n);
}

cout<<n+1<<endl;


return 0;
}

