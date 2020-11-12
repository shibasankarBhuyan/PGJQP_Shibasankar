#include<iostream>
using namespace std;
class DecisionEx
{
int num;
public:void check_eligiblity()
{
cout<<"enter a number";
cin>>num;
if(num>=18)
{
cout<<"eligible";
}
else{
cout<<"not elegible";
}
}
};
int main()
{
DecisionEx d1;
d1.check_eligiblity();
}
