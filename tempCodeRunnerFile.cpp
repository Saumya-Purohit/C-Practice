     for (j = 3; j > i; j--)
        {
            cout <<" ";
        }
        cout << "*";

        if (i > 0)
        {
            for (k = 1; k <= space; k++)
            {
                cout << " ";
            }
            space = space + 2;
            cout << "*";
        }

             if (i < 3-1)
        {
            for (a = space; a >= 1; a--)
            {
                cout <<" ";
            }
            space = space - 2;
            cout << "*";
        }
     