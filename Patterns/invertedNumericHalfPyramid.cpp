#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<n-rows;cols++)
        {
            cout << cols+1 << " ";
        }
        cout << endl;
    }

}