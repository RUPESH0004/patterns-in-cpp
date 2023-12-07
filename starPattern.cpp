#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the no of rows ";
    cin >> n;
    cout << "the another way of an printing " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "the another way of an printing " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "the another way of an printing " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout <<"the another way of printing array "<<endl;
    for (int i =1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout <<" ";
        }
        for(int k =1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
