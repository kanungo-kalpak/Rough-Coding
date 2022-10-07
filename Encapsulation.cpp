#include<iostream>
using namespace std;

class Hero
{
    string name;
    int age;
    int weight;

    
    public:
    string getName()
    {
        return this->name;
    }

    void setName(string name)
    {
        this-> name = name;
    }

    int getAge()
    {
        return this->age;
    }

    void setAge(int age)
    {
        this ->age = age;
    }

    int getWeight()
    {
        return this->weight;
    }

    void setWeight(int weight)
    {
        this-> weight = weight;
    }
};



int main()
{
    Hero Ramesh;

    Ramesh.setName("Ashish");
    Ramesh.setAge(21);
    Ramesh.setWeight(64);

    cout << Ramesh.getName() << endl;
    cout << Ramesh.getAge() << endl;
    cout << Ramesh.getWeight() << endl;
}