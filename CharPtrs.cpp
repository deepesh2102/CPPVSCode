#include<iostream>

using namespace std;

void print(char c[])
{
    c[0] = 'A';
    while (*c != '\0')
    {
        cout<<*c;
        *c++;
    }
}
int main()
{
    char c[] = "Hello Deepesh !";

    print(c);
    int i = 0;
    while (c[i] != '\0')
    {
        cout<<c[i];
        i++;
    }
    return 0;
}