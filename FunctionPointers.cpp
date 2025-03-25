#include<iostream>

using namespace std;
void print(const char* c)
{
    cout<<"Hello "<<c<<endl;
}
int add (int a, int b)
{
    return (a + b);
}
int main()
{
    int (*p)(int, int);// this is the declaration only and this can only point to a function according to its signature;

    p = &add;
    int r = p(1 , 4);
    cout<<r<<endl;

    void (*ptr)(const char*);// In modern c++ string literals are treated as const char*, however they were treated as char * only before c++ 11, so...
    ptr = print;
    //char c[] = "Tom";
    ptr("Tom");
    return 0;
}