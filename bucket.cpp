 #include<iostream>
using namespace std;
# define k 50
class bucket{

public:int rno,marks;
char name[10];
bucket *nptr;
void insert(bucket &a);
int hash(int );
void show();
};
bucket *h[50]={NULL};
bucket a[20];
int n;
bucket *tptr[50];

int bucket::hash(int a){
return(a%k);

}

void bucket::insert(bucket &a){
int h1=hash(a.rno);
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
cout<<"Enter no of elements";
cin>>n;
for(int i=0;i<n;i++){
cout<<"Enter rno,name,marks";

cin>>a[i].rno;
cin>>a[i].name;
cin>>a[i].marks;
}

for(int i=0;i<n;i++)
{
a[i].insert(a[i]);

}
bucket obj;
obj.show();

return 0;
}
