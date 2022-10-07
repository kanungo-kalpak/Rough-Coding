#include<iostream>
using namespace std;

class A
{
    public:
    void sayHello()
    {
        cout << "sayHello() 1 called" << endl;
    }

    void sayHello(int a)
    {
        cout << "sayHello() 2 called" << endl;
    }
};




class Animal
{
    public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};


class Dog: public Animal
{
    public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};



int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello(5);

    Dog Tom;
    Tom.speak();
}