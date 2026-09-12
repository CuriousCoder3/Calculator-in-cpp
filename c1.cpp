#include <iostream>
#include <cstdlib>
using namespace std;
int add, sub, mulp, divd, a, b,c;
void l()
{
    cout << endl
         << "------------------------------------------------" << endl;
}
void body()
{
    system("cls");
    l();
    cout << "features are here" << endl;
    l();
    cout << "0: exit" << endl;
    cout << "1: ADDITION" << endl;
    cout << "2: SUBTRACTION" << endl;
    cout << "3: MULTIPLICATION" << endl;
    cout << "4: DIVISION" << endl;
    l();
    cout << "INPUT";
    cin >> a;
    system("cls");
}
void start()
{
    while (1)
    {
        l();
        cout << "           CALCULATOR IS HERE" << endl;
        l();
        cout << "HOW CAN I HELP YOU" << endl
             << "PLEASE USE FOLLOWING OPTIONS" << endl;
        l();
        cout << "enter 0 to exit" << endl;
        cout << "enter 1 for more features" << endl;
        cout << "INPUT= ";
        cin >> b;
        if (b == 0)
        {
            system("cls");
            l();
            cout << "exit";
            return;
        }
        else if (b == 1)
        {
            body();
        }
        else
        {
            system("cls");
            cout << "not valid option" << endl;
            continue;
        }
    }
}

int main()
{
    start();

    return 0;
}