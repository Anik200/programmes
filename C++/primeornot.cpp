#include<iostream>
using namespace std;
int main() 
{
    int n, i;
    cout<<"Enter your number: ";
    cin>>n;
        if (n <= 1) 
        {
            cout<<"The number is not prime.\n";
            return 0;
        }
        for (i=2; i<=n/2; i++) 
        {
            if (n % i == 0) 
            {
                cout<<"The number is not prime.\n";
                return 0;
            }
        }
            cout<<"The number is prime.\n";
            return 0;    
}
