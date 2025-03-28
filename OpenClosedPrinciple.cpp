/*
Open class Principle -> class should be open for extension but closed for modification.
So If you want to implement a new feature or method don't modify the existing one, just extend that class for the new feature implementation.
*/
#include<iostream>
using namespace std;
class PaymentProcessor
{
    public:
    virtual void ProcessPayment(const int amount) = 0;// pure virtual function
};
class CredCardPaymentProcessor : public  PaymentProcessor
{
    public :
    void ProcessPayment(const int amount)
    {
        cout<<amount<<" Processed successfully"<<endl;
    }
};
class PayPalProcessor : public PaymentProcessor
{
    public :
    void ProcessPayment(const int amount)
    {
        cout<<amount<<" Processed successfully"<<endl;
    }
};
int main()
{
    CredCardPaymentProcessor *credobj = new CredCardPaymentProcessor();
    credobj->ProcessPayment(5);
    delete credobj;
    credobj = nullptr;
    PayPalProcessor *paypal = new PayPalProcessor();
    paypal->ProcessPayment(100000000);
    return 0;
}