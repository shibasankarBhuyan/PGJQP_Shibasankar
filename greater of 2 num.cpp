#include<iostream>
using namespace std;
class GreaterEx
{
int num1,num2;
public:void check_greater()
{
cout<<"enter two number";
cin>>num1>>num2;
if(num1>num2)
{
cout<<"num1 is greater";
}
else{
cout<<"num2 is greater";
}
}
};
int main()
{
GreaterEx g1;
g1.check_greater();
}
