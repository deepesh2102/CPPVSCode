#include<iostream>
using namespace std;

class Entity
{
    public : 
    const int GetX() const
    {
        //m_x = 8; to do this mark m_x as mutable keyword so that it can be changed in a const method
        m_x = 0;
        return m_x;
    }
    void Setx(int x)
    {
        m_x = x;
    }
    private :
    mutable int m_x, m_y;
};

int main()
{
    Entity e = Entity();
    e.Setx(5); //as e is declared as object so can not call this
    cout<<e.GetX()<<endl;

     int a = 8;
     int* const p = &a;// here the pointer should not point to any other address as it is marked as const
     int* p0 = p;
    *p = 10;
    int b = 10;
    //p = &a; // //
    p0 = &b;//taking in another pointer we can point to another address as it is not const.
    
    cout<<"Address of a = "<<p<<" , value of a = "<<*p<<endl;

    int x = 5;
    // if want to chanage x inside the lamda mark lambda is mutable
    auto f = [x]() mutable 
    {
        x++;
        cout<<"x = "<<x<<endl;
    };
    f();
}