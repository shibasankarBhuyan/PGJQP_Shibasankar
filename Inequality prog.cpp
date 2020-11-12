#include<iostream>
using namespace std;
class DecisionEx
{
int num1,num2;
public:void check_Inequality()
{
cout<<"enter first number";
cin>>num1;
cout<<"enter second number";
cin>>num2;
if(num1!=num2)
{
cout<<"number is not equal";
}
else{
cout<<"number is equal";
}
}
};
int main()
{
DecisionEx d1;
d1.check_Inequality();
}
