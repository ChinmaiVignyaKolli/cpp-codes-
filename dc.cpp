#include<iostream>
using namespace std;
int n,i,a[10];
int rs,ls,rsum,lsum;
int p,q;
int max(int x,int y,int z);
int mcsss(int a[],int beg,int end);
int main(){

cout<<"Enter no of elements";
cin>>n;
for(i=0;i<n;i++){

cin>>a[i];
}
cout<<"Input taken";

int k=mcsss(a,0,n);

cout<<k;

return 0;
}

int max(int x,int y,int z){
if(rs>=ls && rs>=(rsum+lsum))
return(rs);
else if(ls>=rs && ls>=(lsum+rsum))
{
return(ls);
}
else
return(lsum+rsum);

}

int mcsss(int a[],int beg,int end){

if(beg==end){
  if(a[beg]<0)
   return 0;
  else
    return(a[beg]);
}
int c=(beg+end)/2;

rs=mcsss(a,beg,c);
ls=mcsss(a,c+1,end);

lsum=0;
int csum=0;
for(i=c;i>=beg;i--){

csum=csum+a[i];

if(csum>lsum)
{
lsum=csum;

}

}
 rsum=0;csum=0;
int j;
for(i=c+1;i<=end;i++)
{
csum=csum+a[i];

if(csum>rsum)
{
rsum=csum;

p=c+1;
q=i;
for(j=p;j<=q;j++)
         {
          cout<<a[j]<<endl;
                    
          }

}
}

return(max(rs,ls,rsum+lsum));
}


