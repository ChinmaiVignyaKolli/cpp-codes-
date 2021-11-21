#include<iostream>
using namespace std;

class prune{
private:int a[100];
int n,i;
int b,e;

public:
     void input(); 
       void pruning();
        void output();


};
void prune::input(){

cout<<"Enter no of elements";
cin>>n;
for(i=0;i<n;i++){

cin>>a[i];
}
cout<<"Input taken";
}


void prune::pruning(){
int csum=0,msum=0;
for(i=0;i<n;i++)
{
csum=csum+a[i];
int s;
if(csum<0){
csum=0;
 s=i+1;
}
if(csum>msum)
{
msum=csum;
b=s;
e=i;

}

}

cout<<"MAX"<<msum;
for(i=b;i<=e;i++)
         {
          cout<<a[i]<<endl;
                    
          }
}

int main(){
prune p;
 p.input();
 p.pruning();

return 0;
}
