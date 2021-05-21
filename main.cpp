#include <iostream>
#include <cmath>

using namespace std;

void simpleCal()
{

    long double num1, num2;
    char Operator;
    cout << "Enter First number: ";
    cin >> num1;

    cout << "Enter Operator: ";
    cin >> Operator;

    cout << "Enter Second number: ";
    cin >> num2;

    do {
        switch (Operator) {
            case '+':
                cout << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 * num2 << endl;
                break;
            case '/':
                cout << num1 / num2 << endl;
                break;
            default:
                cout << "Invalid Operator!" << endl;
        }
    } while (Operator != 'e'|| Operator != 'E');
}

void raiseTo()
{

    long double num, power;
    cout << "Enter Base Number: ";
    cin >> num;

    cout << "Enter Power Number: ";
    cin >> power;

    cout <<"The answer is: "<< pow(num, power)<< endl;
}

void square()
{
    long double num;

    cout << "Enter the number: ";
    cin >> num;

    cout <<"The square of " << num << " is: "<< pow(num, 2)<< endl;
}

void cube()
{

    long double num;

    cout << "Enter the number: ";
    cin >> num;

    cout <<"The cube of " << num << " is: "<< pow(num, 3)<< endl;

}

void sqrRt()
{

    long double num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "The square root of " << num << " is: "<< sqrt(num)<< endl;
}

void cubeRt()
{

    long double num;

    cout << "Enter the number: ";
    cin >> num;

    cout <<"The cube root is of " << num << " is: "<< cbrt(num)<< endl;
}

void Log()
{

    long double num;

    cout << "Enter the number: ";
    cin >> num;

    cout <<"The log is: "<< log(num) << endl;
}

void Area()
{
    float num;

    cout << "Enter the side of the square: ";
    cin >> num;

    cout << "The area is " << (num * num) << endl;
}

void mainMenu()
{
    int opt;

    system("color F0");
    cout << "What you Want to Do??" << endl;
    do{
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << " 1. SQUARE\n 2. CUBE\n 3. RAISE TO A NUMBER\n 4. SQUARE ROOT\n 5. CUBE ROOT\n 6. ADD/SUB/MULTI/DIV\n 7. Exit" << endl;
        cout << ">>> ";
        cin >> opt;
        switch(opt){
            case 1:
                square();
                break;
            case 2:
                cube();
                break;
            case 3:
                raiseTo();
                break;
            case 4:
                sqrRt();
                break;
            case 5:
                cubeRt();
                break;
            case 6:
                simpleCal();
                break;
            case 7:

                break;
            default:
                cout << "Invalid Option" << endl;
                break;
        }
    }while(opt != 7);
    cout << "Thank You!";
}


int main()
{
    mainMenu();
    return 0;
}
