#include<iostream>
using namespace std;
class DecisionEx
{
int num;
public:void check_greater()
{
cout<<"enter a number";
cin>>num;
if(num>10)
{
cout<<"greater";
}
else{
cout<<"not greater";
}
}
};
int main()
{
DecisionEx d1;
d1.check_greater();
}
