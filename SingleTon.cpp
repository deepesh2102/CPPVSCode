#include<iostream>

using namespace std;

class SingleTon
{
    public : 
    int a;
    //inline SingleTon &SingleTon::SingleTon(const SingleTon &)
    SingleTon(const SingleTon &) = delete;
    SingleTon& operator = (const SingleTon&) = delete;
    SingleTon& operator << (const SingleTon&)
    {
        SingleTon &instance =  CreateInstance();
        return instance;
    }
    friend ostream& operator<< (std::ostream &os, const SingleTon&)
{
    return os << "SingleTon obj";
}
    static SingleTon& CreateInstance()
    {
        //SingleTon* m_sInstance = new SingleTon();
        static SingleTon instance;
        return instance;
    }
    private : 
    //SingleTon* m_sInstance;
    SingleTon()
    {
        a = 9;
        cout<<"SingleTon class obj created"<<endl;
    }
    ~SingleTon()
    {
        //cout<<"SingleTon class obj destroyed"<<endl;
    }
};
//SingleTon* m_sInstance;

int main()
{
    auto &instance1 = SingleTon::CreateInstance();
    auto instance2 = &instance1; /*SingleTon::CreateInstance();*/
    cout<<instance2->a<<endl;
    cout<<&instance1<<" == "<<*instance2;
}