
// Hollow rectangle
 #include <iostream>
 using namespace std;

int main()
{
    for (int row = 0; row < 3; row += 1)
    {
        if (row == 0 || row == 2)
        {
            for (int col = 0; col < 5; col += 1)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int c_ol = 0; c_ol < 3; c_ol += 1)
            {
                cout << "  ";
            }
            cout << "* ";
        }

        cout << endl;
    }
}