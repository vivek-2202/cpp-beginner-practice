#include <iostream>
using namespace std;

int primeno(int num){ 
   for(int i=2;i<=num/2;i++){
    if(num%i==0)
    return 0;
   


   }
    return 1;
}
int main(){ 
    int num;
    cout<<"enter a number";
    cin>>num;
    if(primeno(num))
    cout<<"no. is prime";
    else
    cout<<"no. is not prime";
    
return 0;
}
