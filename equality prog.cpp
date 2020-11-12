#include<iostream>
using namespace std;
class Equality
{
int num1,num2;
public:void check_Equality()
{
cout<<"enter first number";
cin>>num1;
cout<<"enter second number";
cin>>num2;
if(num1==num2)
{
cout<<"number is equal";
}
else{
cout<<"number is not equal";
}
};
};
int main()
{
Equality e1;
e1.check_Equality();
}
