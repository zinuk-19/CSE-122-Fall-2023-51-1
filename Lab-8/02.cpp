#include<iostream>
using namespace std;
class Animal
{
public:
    void makeSound()
    {
        cout<<"Animal"<<endl;
    }
};
class Dog:public Animal
{
public:
    void makeSound()
    {
        cout<<"Dog"<<endl;
    }
};
class Cat:public Animal
{
public:
    void makeSound()
    {
        cout<<"Cat"<<endl;
    }
};
int main()
{
    Dog objd;
    Cat objc;
    objd.makeSound();
    objc.makeSound();
    return 0;

}
