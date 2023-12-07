#include<iostream>
using namespace std;
int main (){
    int n;
    cout <<"enter the no of rows ";
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout << "the another way of an printing "<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
     cout << "the another way of an printing "<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    cout << "the another way of an printing "<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout << "the another way of an printing "<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    cout << "the another way of an printing "<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<"the another way of printing "<<endl;
    for ( int i =1;i<=n;i++)
    {
        for (int j = 1; j<= n-i;j++)
        {
            cout<<" ";
        }
        for(int k =1;k<=i;k++)
        {
            cout<<k;
        }
        cout <<endl;
    }
}