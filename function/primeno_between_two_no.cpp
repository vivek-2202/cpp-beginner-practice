#include <iostream>
using namespace std;

 void primebetween(int a,int b){
    for(int num=a;num<=b;num++)
    {   int prime=1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0){
        prime=0;
        break;}
    }
    if(prime==1)
    {
        cout<<num<<" ";
    }
 }}
 int main(){
    int a, b;
    cout<<"enter two no a,b";
    cin>>a>>b;
     primebetween(a,b);
     return 0;
 }
