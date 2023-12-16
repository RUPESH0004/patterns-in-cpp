#include <iostream>
using namespace std;

int main()
{
    int rows;
    char alph = 'A';
    int count=1;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;
    cout << "printing  'i' in pyramid  structure" << endl;
    for (int i = 1; i <= rows; ++i)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            cout << i;
        }

        cout << endl;
    }
    cout << "printing  'j' in pyramid  structure" << endl;
    for (int i = 1; i <= rows; ++i)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            cout << k;
        }

        cout << endl;
    }
    cout << "printing  'i' in pyramid  structure" << endl;
    for (int i = 1; i <= rows; ++i)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            cout << count<<" ";
            count++;
        }

        cout << endl;
    }

    cout << "* type of printing " << endl;
    for (int i = 1; i <= rows; ++i)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << "printing alphabates  " << endl;
    for (int i = 1; i <= rows; ++i)
    {
      
        // Print spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            cout << alph;
            alph++;
            
        }

        cout << endl;
    }


    return 0;
}
