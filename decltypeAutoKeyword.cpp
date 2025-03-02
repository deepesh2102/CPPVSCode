#include<iostream>
using namespace std;

template<class T1, class T2>
auto test(T1 value1, T2 value2)->decltype(value1 + value2)
{
    return (value1 + value2);
}
int get()
{
    return 99;
}
auto test2()
{
    return get();
}
int main()
{
    auto text = "Hello";
    cout<<"return value from func test() is "<<test(5,6)<<endl;
    cout<<"return value from func test2() is "<<test2()<<endl;
}