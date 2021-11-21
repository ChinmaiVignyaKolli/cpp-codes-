#include<iostream>
using namespace std;
#define k 50

class count{
public: int a[10],f[k+1],c[k+1],b[10],n,i;

public:
void create();
void sort();


};


int main(){
class count obj;
obj.create();
obj.sort();

return 0;
}

void count::create(){
cout<<"Enter no of elements";
cin>>n;
for(i=0;i<n;i++){
cin>>a[i];

}

}

void count::sort(){

for(i=0;i<n;i++){
f[a[i]]=f[a[i]]+1;

}
c[0]=f[0];
for(i=1;i<k+1;i++){

c[i]=c[i-1]+f[i];
}

for(i=n-1;i>=0;i--){

b[c[a[i]]-1]=a[i];
c[a[i]]--;
}
for(i=0;i<n;i++){

cout<<b[i]<<" ";
}
}
