#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<2*rows+1;cols++)
        {
            if(cols%2==1)
            {
                cout << "*";
            }
            else
            {
                cout << rows+1;
            }
        }
        cout << endl;
    }

    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<n-rows+1;cols++)
        {
            if(cols%2==1)
            {
                cout << "*";
            }
            else{
                cout << rows-1;
            }
        }
        cout << endl;
    }



}