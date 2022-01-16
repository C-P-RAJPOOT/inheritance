#include<iostream>
using namespace std;
class A
{
    public:
    int a,b,c;

};
class B:public A
{
    public:

    void show()
    {

        cin>>a,b;
    c=a*b;
    cout<<"multiplication of two number are \n";
    cout<<c;
    }
};
int main()
{

    B obj;
    obj.show();
    return 0;
}
