#include <iostream>
#include <cstdlib>
using namespace std;
int add, sub, mulp, divi, a, b, c, d;
void l()
{
    cout << endl
         << "------------------------------------------------" << endl;
}
void body()
{
    system("cls");
    l();
    while (1)
    {

        cout << "features are here" << endl;
        l();
        cout << "0: HOME PAGE" << endl;
        cout << "1: ADDITION" << endl;
        cout << "2: SUBTRACTION" << endl;
        cout << "3: MULTIPLICATION" << endl;
        cout << "4: DIVISION" << endl;
        l();
        cout << "INPUT= ";
        cin >> a;
        system("cls");
        if (a == 0)
        {
            cout << "HOME PAGE" << endl;
            l();
            return;
        }
        else if (a == 1)
        {
            l();
            cout << "enter the value of a" << endl;
            cout << "INPUT= ";
            cin >> c;
            system("cls");
            l();
            cout << "enter the value of b" << endl;
            cout << "INPUT= ";
            cin >> d;
            system("cls");
            l();
            add = c + d;
            cout << "ans= " << add << endl;
            l();
        }
        else if (a == 2)
        {
            l();
            cout << "enter the value of a" << endl;
            cout << "INPUT= ";
            cin >> c;
            system("cls");
            l();
            cout << "enter the value of b" << endl;
            cout << "INPUT= ";
            cin >> d;
            system("cls");
            l();
            sub = c - d;
            cout << "ans= " << sub << endl;
            l();
        }
        else if (a == 3)
        {
            l();
            cout << "enter the value of a" << endl;
            cout << "INPUT= ";
            cin >> c;
            system("cls");
            l();
            cout << "enter the value of b" << endl;
            cout << "INPUT= ";
            cin >> d;
            system("cls");
            l();
            mulp = c * d;
            cout << "ans= " << mulp << endl;
            l();
        }
        else if (a == 4)
        {
            l();
            cout << "enter the value of a" << endl;
            cout << "INPUT= ";
            cin >> c;
            system("cls");
            l();

            cout << "enter the value of b" << endl;
            cout << "INPUT= ";
            cin >> d;
            system("cls");
            l();
            if (d == 0)
            {
                cout << "b= 0" << endl
                     << "so ans is not valid or infinty" << endl;

                l();
                continue;
            };
            divi = c / d;
            cout << "ans= " << divi << endl;
            l();
        }
        else
        {
            cout << "not valid..!" << endl;
            cout << "try again" << endl;
            l();
            continue;
        };
    };
};

void start()
{

    l();
    cout << "           CALCULATOR IS HERE" << endl;
    l();
    while (1)
    {
        cout << "               HOME PAGE" << endl;
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
            cout << "try again" << endl;
            l();
            continue;
        }
    }
}

int main()
{
    start();
    l();
    cout << "hope you like this one";
    l();
    return 0;
}