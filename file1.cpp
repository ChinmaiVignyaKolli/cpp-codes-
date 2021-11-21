#include<iostream>
using namespace std;

class file1{
private:

char name[10];
int age;
float bal ;

public:
int acc;
void create(){
cout<<"Enter acc no,name,age and balance";
cin>>acc>>name>>age>>bal;

}
void credit(){int credit;
cout<<"Enter the amount to credit";
cin>>credit;
bal=bal+credit;
cout<<credit<<"has been credited. Final balance= "<<bal;

}
void debit(){int debit;
int x=bal;
cout<<"Enter the amount to debit";
cin>>debit;
bal=bal-debit;
if(bal>1000)
cout<<"Debit successful"<<bal;
else{
cout<<"Balance below 1000.Error";
bal=x;
}
}
void display(){

cout<<acc<<"  "<<name<<"  "<<age<<"  "<<bal;

}
};

int main(){
int k,i,l,m,s;
file1 o[5];
cout<<"Enter no of accounts";
cin>>k;

for(i=0;i<k;i++){
o[i].create();
}

for(i=0;i<k;i++){

o[i].display();
}
cout<<"Enter the acc no to credit";
cin>>l;
for(i=0;i<k;i++){
if(o[i].acc==l)
o[i].credit();
}
cout<<"Enter the SNO debit";
cin>>m;
o[m-1].debit();

for(i=0;i<k;i++){

o[i].display();
}
return 0;

}
