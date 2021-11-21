

#include<iostream>
#include<cmath>
using namespace std;
long double a[]={1,60,60*60,24*60*60,30*24*60*60,365*30*24*60*60};
int n=2;


int factorial(int n)
{
int fact=1;
for(int j=1;j<=n;j++)
fact=fact*j;
return(fact);
}
long double b[8][6];
void nlogn();
void np();
void sqrt();
void log();
void nsquare();
void ncube();
void n2();
void fact();
int main()
{
log();

sqrt();

np();

nlogn();

nsquare();

ncube();

n2();

fact();
for(int i=0;i<=7;i++)
{
for(int j=0;j<=5;j++)
{
if(i==0)
{
if(j==3||j==4||j==5)
continue;
else
cout<<b[i][j]<<"\t";
}
else
cout<<b[i][j]<<"\t";
}
cout<<endl;
}

return(0);
}
void fact()
{
int n=2,x;
for(int i=1;i<=5;i++)
{
while(factorial(n)<=a[i])
{
x=n;
n++;
}
n=2;
b[7][i]=x;
}
b[7][0]=1;
}

void n2()
{
for(int i=0;i<=5;i++)
{
long double x=log(a[i]);
b[6][i]=x;
}
}
void nsquare()
{
for(int i=0;i<=5;i++)
{
long double x=pow(a[i],0.5);
b[4][i]=x;
}
}
void ncube()
{
for(int i=0;i<=5;i++)
{
long double x=pow(a[i],0.334);
b[5][i]=x;
}
}
void nlogn()
{
int n=2,x;
for(int i=0;i<=5;i++)
{
while((n*log2(n))<=a[i])
{
x=n;
n++;
}
n=2;
b[3][i]=x;
}
}
void np()
{
for(int i=0;i<=5;i++)
{
long double x=pow(a[i],1);
b[2][i]=x;
}
}
void sqrt()
{
for(int i=0;i<=5;i++)
{
long double x=pow(a[i],2);
b[1][i]=x;
}
}
void log()
{
for(int i=0;i<=5;i++)
{
long double x=pow(2,a[i]);
b[0][i]=x;
}
}


