#include<iostream>
using namespace std;
class Shape
{
protected:
    float width,height;
    public:
    void set_data(float a,float b)
    {
      width=a;
      height=b;
    }
};
class Rectangle:public Shape
{
public:
    float area()
    {
        return(width*height);
    }
};

class Circle:public Shape
{
public:
    float area()
    {
        return(width*width);
    }
};
int main()
{
    Rectangle rect;
    Circle cir;
    rect.set_data(5,3);
    cir.set_data(2,2);
    cout<<rect.area()<<endl;
    cout<<cir.area()<<endl;
    return 0;
}


