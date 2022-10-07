#include<iostream>
using namespace std;

class Human
{
    public:
    string name = "Capgemini";
    int age = 54;
    void Hello()
    {
        cout << "Hello called" << endl;
    }
};

class Male: public Human
{
    public:
    void Hey()
    {
        cout << "Hey Called" << endl;
    }

};

int main()
{
    Male m1;
    cout << m1.name << endl;
    cout << m1.age << endl;
    m1.Hello();
    m1.Hey();

}