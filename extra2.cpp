#include<iostream>
using namespace std;
# define k 4
class bucket{

public:
int d[4];
bucket *nptr;
void insert(bucket &a);
int hash(int );
void show();
};
bucket *h[4]={NULL};
bucket a[10];
int n;
bucket *tptr[4];

int bucket::hash(int a){
return((a*10)%k);

}
int bucket::distance(){
for(i=0;i<4;i++){
cout<<"enter x,y";
cin>>x[i]>>y[i];
int b[i]=(x*x+y*y)^1/2;
cout<<"b[i]";
}

}
void bucket::insert(bucket &a){
int h1=hash(a.);
bucket *temp=&a;
  if(h[h1]==NULL){
   
  
  temp->nptr=h[h1];
  h[h1]=temp;
  tptr[h1]=temp;
   
  }
    else{
       
      temp->nptr=tptr[h1]->nptr;
      tptr[h1]->nptr=temp;
      tptr[h1]=temp;


      }
  


}

void bucket::show(){

for(int i=0;i<k;i++){

if(h[i]!=NULL){
bucket *ptr=h[i];
 while(ptr!=NULL){
   cout<<ptr->rno<<" ";
    cout<<ptr->name<<" ";
      cout<<ptr->marks<<" ";
         cout<<endl;
    ptr=ptr->nptr;
  }
}
}

}


int main(){


for(int i=0;i<n;i++)
{
a[i].insert(a[i]);

}
bucket obj;
obj.distance();
obj.show();

return 0;
}
