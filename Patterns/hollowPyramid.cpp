#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<n-rows-1;cols++)
        {
            cout << " ";
        }
        for(int cols=0;cols<rows+1;cols++)
        {
            if(cols==0||cols==rows-1+1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}