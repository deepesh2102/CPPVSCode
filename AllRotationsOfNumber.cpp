// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

int calcDigits(int n)
{
    int c = n;
    int numDigits = 0;
    while (c)
    {
        numDigits++;
        c = c / 10;
    }
    return numDigits;
}
void FindRotations (int n)//123
{
    int numDigits = calcDigits(n);
    //cout<<numDigits<<endl;
    int tempN = static_cast<int>(round(pow(10, (numDigits - 1))));
    //int firstDigit = n/tempN;
    
    for (int i = 0;i < numDigits;++i)
    {
        int firstDigit = n / tempN;
        cout<<"firstDigit = "<<firstDigit<<" n = "<<n<<" tempN = "<<tempN<<endl;
        int res = (n * 10 + firstDigit) - firstDigit*tempN*10 ;
        cout<<"res = "<<res<<endl;    
        n = res;
    }
    
}
int main() {
    
    int n;
    cout<<"Please enter a number to find its rotations "<<endl;//123
    cin>>n;
    FindRotations(n);

    return 0;
}