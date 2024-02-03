#include<iostream>
using namespace std;

int  fibonacci(int x)
{
    if (x<=1)
        return x;
    else
        return fibonacci(x-2)+fibonacci(x-1);
}

int main()
{
    int x = 6;
    cout<<fibonacci(x);
    return 0;
}