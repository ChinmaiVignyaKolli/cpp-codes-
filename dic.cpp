#include<iostream>
#include<cmath>
using namespace std;

class dic{
private:
int n;
int a[10];
int i,d,l;

public:
void create();
void insert();
void search();
void del();
void display();

};
void dic::create(){
cout<<"enter array size";
cin>>n;

for(i=0;i<n;i++){
cin>>a[i];
}


}

void dic::insert(){
cout<<"Enter no of elements to insert";
cin>>l;
n=n+l;

for(i=n;i>n-l;i--)
{
cin>>a[i];
}



}

void dic::search(){

int key;
cout<<"Enter element to search";
cin>>key;

for(i=0;i<n;i++){

if(a[i]==key){
cout<<"Element at pos"<<i;

break;
}
}
if(i==n)
cout<<"Element not found";

}

void dic::del(){
cout<<"Enter element to delete";
cin>>d;

for(i=0;i<n;i++){
if(a[i]==d){
int p;
p=i;

for(i=p;i<n;i++){
a[i]=a[i+1];

}
}

}

}

void dic::display(){
for(i=0;i<n-1;i++){

cout<<a[i];
}


}


int main(){
int c;

dic obj;
obj.create();

while(1){
cout<<"Enter an option 1.search 2.delete 3.display";
cin>>c;


switch(c)
{
case 1:obj.search();break;
case 2:obj.del();break;
case 3:obj.display();break;
default:cout<<"Enter valid option";

}
}
return 0;
}
