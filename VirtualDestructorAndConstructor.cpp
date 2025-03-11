#include<iostream>

class Base
{
    public:
    Base()
    {
        std::cout<<"Base constructor called "<<std::endl;
    }
    virtual ~Base()// this is defined virtual so that object of its derived class can be allocated properly... ohterwise only base class memory will be cleared.
    {
        std::cout<<"Base Destructor called "<<std::endl;
    }
};

class Derived : public Base
{

    public : 
    Derived()
    {
        std::cout<<"Derived class constructor called "<<std::endl;
    }
    ~Derived()
    {
        std::cout<<"Derived class Destructor called "<<std::endl;
    }
};
int main()
{
    
    //Derived d;
    Base* b = new Derived();
    delete b;
}