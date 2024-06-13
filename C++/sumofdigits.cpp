#include<iostream>
using namespace std;
int main()
{
    int n,s = 0;
    cout<<"Enter your number = ";
    cin>>n;
    while(n!=0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    cout<<"The sum of digits in = "<<s;
    return 0;

}