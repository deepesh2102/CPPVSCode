#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>List;

    for (int i = 0;i < 5;i++)
    {
        List.push_back(i + 1);
    }
    for (int i = 0;i < 5;i++)
    {
        List.push_front(i + 1);
    }
    
    int num;
    if (!List.empty())
    {
        num = List.back();// will return the last element
    }
    auto i = List.begin();
    List.emplace(i);

    //cout<<endl<<num;
    for (int i : List)
    {
        cout<<i<<" ";
    }
    return 0;
}