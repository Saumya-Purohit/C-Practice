#include <iostream>
using namespace std;
int main()
{
    int  i, j, space = 1, k,a,b;
    for (i = 0; i < 5; i++)
    {
        if ((i % 2) == 0)
        {
            for (j = 5; j > i; j--)
            {
                cout << " ";
            }
            cout << "*";

            if (i > 0)
            {
                for (k = 1; k <= space; k++)
                {
                    cout << " ";
                }
                space = space + 3;
                cout << "*";
            }

            cout << endl;
        }
       
    }

    return 0;
}