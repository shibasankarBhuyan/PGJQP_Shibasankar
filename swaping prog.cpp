#include<iostream>
using namespace std;
class Display
{
int x,y;
public:void Swaping()
{
x=6;
y=7;
cout<<"before swaping x:"<<x<<"y:"<<y<<endl;
x=x+y;
y=x-y;
x=x-y;
cout<<"after swaping x:"<<x<<"y:"<<y<<endl;
}
};
int main()
{
Display d1;
d1.Swaping();
}
