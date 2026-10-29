#include <iostream>
using namespace std;
#include<cmath>
int main()
//wap to find maximum of two numbers.
{ /*

      int num1, num2;
       cin >> num1 >> num2;
       if (num1 > num2)
       {
           cout << "num1 is max";
       }
       else if(num1==num2)
       {
          cout<<"num is equal";
       }
       else
       {
         cout<<"num2 is max";
       }
       //wap to print no.in square pattern.
    int n = 7;
     for(int i= 1; i<= n; i++)
     {
         for (int j = 1; j <= n; j++){
             cout<< j <<" ";
         }

         cout << endl;
     }
     //wap to print no.from 1to 16 increasing order in aquare form.
     int n = 4;
     int num = 1;
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= n; j++)
         {
             cout << num <<" ";
             num++;
         }
         cout << endl;
     }
     //wap to print star pattern.
     int n = 4;
     for (int i = 0; i < n; i++)
     {
         for ( int j = 0; j < n; j++)
         {
             cout << "*";
         }
         cout << endl;
     }
     //wap to print a,b,c,d,e...in square pattern.
     int n = 4;
     char ch = 'A';

     for (int i = 0; i < n; i++)

     {
         for (int j = 0; j < n; j++)
         {
             cout << ch << " ";
             ch = ch + 1;
         }
         cout << endl;
     }
     //wap to print star pattern.
     int n = 10;
     for ( int i = 0; i < n; i++)
     {
         for (int j = 0; j < i + 1; j++)
         {
             cout << "*";
         }
         cout << endl;
     }
     //wap to print pattern.
     int n = 4;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < i + 1; j++)
         {
             cout << (i + 1);
         }
         cout << endl;
     }
     //pattern problem.
     int n = 4;
     char ch = 'A';
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < i + 1; j++)
         {
             cout << (char)('A'+i);

         }
         {
             cout << endl;
         }
     }
     int n = 4;

     for (int i = 0; i < n; i++)
     {

         for (int j = 1; j <= i + 1; j++){


             cout<<j;}
         cout<<endl;
     }
     int n = 4;
     for (int i = 0; i < n; i++)
     {
         for (int j = i + 1; j > 0; j--)
         {
             cout << j << " ";
         }
         cout << endl;
     }
     int n = 4;
     int num = 1;
     for (int i = 0; i < n; i++)
     {
         for (int j = i + 1; j >= 0; j--)
         {
             cout << num << " ";
             num++;
         }
         cout << endl;
     }
     int n = 4;
     int num = 1;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < i; j++)
         {
             cout << " ";
         }
         for (int j = 0; j < n - i; j++)
         {
             cout << (i + 1);
         }
         cout << endl;
     }


     return 0;
 } //next code

 int num;
 cout<<"enter the number:";
 cin>>num;
 if(num%2==0)
 {
     cout<<"num is even";
 }
 else
 {
   cout<<"num is odd";
 }
 return 0;
 }
 //next code
 //wap to print quotient and remainder.
 int dividend,divisor,quotient,remainder;
 cout<<"enter dividend";
 cin>>dividend;
 cout<<"enter divisor";
 cin>>divisor;

 quotient=dividend/divisor;
 remainder=dividend%divisor;
 cout<<"quotient"<<quotient<<endl;
 cout<<"remaindr"<<remainder;
 return 0;
 }
 //wap tocheck whether char is vowels or constants.
 char ch;
 cout<<"enter the character";
 cin>>ch;
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
 {
     cout<<"character is vowels";
 }
 else {
     cout<<"character ia cons";
 }
 return 0;
 }
    // wap to check weather the number is prime or not.//
    int i, num;
    cout << "enter the number";
    cin >> num;
    bool targ=true;

    if (num == 0 || num == 1){
        cout << "num is not prime";
      return 0;
    
    for (i = 2; i <= num / 2; ++i)
    { 
        if(num % i == 0)
        {     targ= false;
            break;  
          
        }
    }
     if (targ){
        cout<<"prime"<<endl;
     }else{
        cout<<"not prime";
     }
 
  return 0;
}
}
//wap to find all roots of quadratic equations.
float a,b,c,x1,x2,realPart,imaginaryPart,discriminant;
cout<<"enter the value of a,b,c";
cin>>a>>b>>c;
discriminant=b*b - 4*a*c;

if(discriminant>0)
{
x1= (-b+  sqrt(discriminant))/(2*a);
x1= (-b-  sqrt(discriminant))/(2*a);
cout<<"root1 "<<x1<<endl;
cout<<"root2"<<x2<<endl;
}
else if (discriminant==0)
{
    x1=x2=-b/(2*a);
cout<<"roots are"<<x2<<endl;
}

else
{ 
realPart= -b/(2*a);
imaginaryPart= sqrt(-discriminant)/(2*a);
cout<<"x1 ="<<realPart<<"+"<<imaginaryPart<<"i"<<endl;
cout<<"x2 ="<<realPart<<"-"<<imaginaryPart<<"i"<<endl;
}
return 0;
}
//wap to sum of natural no.
int n, sum;
cout<<"enter the number: ";
cin>>n;
sum=0;
for( int i=1; i<=n;i++)
{ 
sum=sum+i;}
cout<<"sum is :"<<sum;

return 0;
}
//wap to check leap year or not.
int year;
cout<<"enter the year :";
cin>>year;

if(year%400==0)
{
    cout<<" leap year";
}
else if(year%100==0)
{
    cout<<"not a leap year";
}
else if(year%4==0)
{
    cout<<"leap year";
}
else
{
    cout<<" not leap year";
}
return 0;
}
//wap to find factorial.
int n,fact;
cout<<"enter the number";
cin>>n;
fact=1;
for(int i=n;i>0;i--)
{
    fact=fact*i;
}
cout<<"factorial is :"<<fact;
return 0;
}
//wap to print multipliction table.
int n;
cout<<"enter the number";
cin>>n;
for(int i=1;i<11;i++)
{ 
cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
return 0;
}
//wap to print fibonacci series.
int n, i,t1=0,t2=1,nextTerm;
cout<<"enter the number ";
cin>>n;
cout<<"fibonacci series is:";
for(int i=1;i<=n;i++){ 
if(i==1)
{
    cout<<t1<<",";
    continue;
}
if(i==2)
{
    cout<<t2<<",";
    continue;
}
if(i>2)
nextTerm=t1+t2;
t1=t2;
t2=nextTerm;
cout<<nextTerm<<",";
}
return 0;
}*/
//wap to find the hcf/gcd.
int n1 ,n2 ;
cout<<"enter the number ";
cin>>n1>>n2;
if(n1>n2){ 
for(int i=n2;i>=1;i--){ 
if(n1%i==0&&n2%i==0){ 
    cout<<"hcf : "<<i;
    break;
}
}
}
else {
    for( int i=n1;i>=1;i--){ 
        if(n1%i==0&&n2%i==0 ){ 
            cout<<"hcf : "<<i;
            break;
        }
    }
} return 0;
}
