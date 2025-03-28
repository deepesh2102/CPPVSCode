#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout<<&a<<endl;
    void *vptr = &a;
    //(int*)vptr = 6; // this is incorrect as assigning an int value to an invlaid pointer... correct way to do this is below
    *((int *)vptr) = 7;
    cout<<*((int*)vptr)<<endl;
    int *x = new int;
    *x = 6;
    vptr = x;// if want to use &x instead of this then at time of dereferencing need to use (double pointer **);
    cout<<*x<<" "<<(*(int*)vptr)<<endl;
    cout<<&x<<" ";
    delete x;
    x = nullptr;
    *x = 7;
    cout<<&x<<" "<<*x;
    return 0;
}