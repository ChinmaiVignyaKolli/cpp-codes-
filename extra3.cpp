#include<iostream>
#include<cmath>
using namespace std;
# define k 10
class bucket{

public:float x,y,d;

bucket *nptr;
void insert(bucket &a);
int hash(float );
void show();
};
bucket *h[10]={NULL};
bucket a[20];
int n;
bucket *tptr[10];

int bucket::hash(float a){
return(a*100);

}

void bucket::insert(bucket &a){
int h1=hash(a.d);
bucket *temp=&a;
  if(h[h1]==NULL){
   
  cout<<"Hi";
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

for(int i=0;i<10;i++){

if(h[i]!=NULL){
bucket *ptr=h[i];
 while(ptr!=NULL){
   cout<<ptr->x<<" ";
    cout<<ptr->y<<" ";
      cout<<ptr->d<<" ";
         cout<<endl;
    ptr=ptr->nptr;
  }
}
}

}


int main(){

for(int i=0;i<4;i++){
cout<<"Enter x,y";

cin>>a[i].x;
cin>>a[i].y;
a[i].d=sqrt(a[i].x*a[i].x + a[i].y*a[i].y);
}

for(int i=0;i<4;i++)
{
a[i].insert(a[i]);

}
bucket obj;
obj.show();

return 0;
}
