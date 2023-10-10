#include<iostream>
using namespace std;
class A
{
public:
    void printMessage()
    {
        cout<<"class A"<<endl;
    }
};
class B:public A
{
public:
    void printMessage()
    {
        cout<<"class B"<<endl;
    }
} ;
class C:public A
{
public:
    void printMessage()
    {
        cout<<"class C"<<endl;
    }
} ;

class D:public B,C
{
public:
    void printMessage()
    {
        cout << "class D"<<endl;
    }
};
int main()
{
    D obj;
    obj.printMessage();
    return 0;
}




