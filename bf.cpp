#include<iostream>
using namespace std;

int main(){
int n,i,j,a[10];
int x,b;
cout<<"Enter no of elements";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
int k;
int msum=0;
for(i=0;i<n;i++)
{
  for(j=0;j<n;++j)
   {
     int csum=0;
      for(k=i;k<=j;k++)
         {
             csum=csum+a[k];
           
            if(csum>msum)
            {
               msum=csum;
               
               x=i;
               b=j;
              
              
            }

        }

    
        
   }

}
for(i=x;i<=b;i++)
              {
                 cout<<a[i]<<endl;
             
              }
cout<<"MAX SUM"<<msum;
return 0;
}
