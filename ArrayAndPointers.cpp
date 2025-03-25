#include<iostream>

using namespace std;
//void sum(int[]);
void sum(int a[],int size)// compilor always pass array as reference only not as value.
{
    //int size = sizeof(a)/sizeof(a[0]);// this will give this size of int* if int a[] is passed hence of no use....
    int sum = 0;
    a[0] = 10;
    for (int i = 0;i < size;i++)
    {
        sum += *a;
        *a++;
        cout<<sum<<" "<<endl;
    }
    cout<<endl;
}
int main()
{
    int a[] = {1,2,3,4,5,6};

    // int *p = &a[0]; u can use address of a[0] or directly a without using & sign , this will point to oth index element.
    // *p = *p + 1;
    int *p = a;
    p = p + 1; // but a = a + 1 not allowed
    //a++; we can not do this because a is const and pointing to 0th index and that's why we can not change that.
    //cout<<*p<<endl;
    int size = sizeof(a)/sizeof(a[0]);
    // for (int i = 0;i < size;++i)
    // {
    //     *a = *a + i;
    //     //a = a +1;
    //     cout<<*(a + i)<<endl;
    // }
    sum(a,size); // we will need to pass size of the array as this is pointer to arr[0] and in function definition this wull give the size of only a[0]
    for (int i = 0;i < size;++i)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Playing with 2D array & Pointers "<<endl;
    int d[2][3] = {1,2,3,4,5,6};
    cout<<*d[0];
    cout<<*(d + 1)[0];
    return 0;
}
