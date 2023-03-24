// Problem_Solving_155_DevCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enOperatorType { Addition = 1, Sub = 2, Multiplication = 3, Division = 4 };

struct stFunctions
{
    void ReadNumbers(int Number[2])
    {
        for (int i = 0; i <= 1; i++)
        {
            cout << "Enter The Number : " << i << endl;
            cin >> Number[i];
        }


    }
    //Operations
    void Addition(int Number1, int Number2)
    {
        cout << "\n========================\n";
        cout << " The Result is : " << Number1 + Number2 << endl;
        cout << "==========================\n";
    }
    void Sub(int Number1, int Number2)
    {
        cout << "\n========================\n";
        cout << " The Result is : " << Number1 - Number2 << endl;
        cout << "==========================\n";
    }
    void Multiplication(int Number1, int Number2)
    {
        cout << "\n========================\n";
        cout << " The Result is : " << Number1 * Number2 << endl;
        cout << "==========================\n";
    }
    void Division(int Number1, int Number2)
    {
        cout << "\n========================\n";
        cout << " The Result is : " << Number1 / Number2 << endl;
        cout << "==========================\n";
    }

};
struct stData
{
    int Number[2], OperatorType;

    stFunctions Function;
};
void ShowScreenMainu()
{
    cout << "******************************************\n";
    cout << "Please Chose The Number of Your Operato ?\n";
    cout << "(1) Addition\n";
    cout << "(2) Sub\n";
    cout << "(3) Multiplication\n";
    cout << "(4) Division\n";
    cout << "******************************************\n\n";
    cout << "Your Choice ?\n";

}

enOperatorType ReadOperator()
{
    int OP;
    cin >> OP;

    return (enOperatorType) OP;

}

int Calculator(enOperatorType RunData)
{
    stData SData;

    switch (RunData)
    {

    case enOperatorType::Addition:
        SData.Function.ReadNumbers(SData.Number);
        SData.Function.Addition(SData.Number[0], SData.Number[1]);
        return system("color 4f");
        break;
    case enOperatorType::Sub:
        SData.Function.ReadNumbers(SData.Number);
        SData.Function.Sub(SData.Number[0], SData.Number[1]);
        return system("color 1F");
        break;
    case enOperatorType::Multiplication:
        SData.Function.ReadNumbers(SData.Number);
        SData.Function.Multiplication(SData.Number[0], SData.Number[1]);
        return system("color 2F");
        break;
    case enOperatorType::Division:
        SData.Function.ReadNumbers(SData.Number);
        SData.Function.Division(SData.Number[0], SData.Number[1]);
        return system("color 6F");
        break;

    default:
        cout << "Worong Operator\n";
        break;
    }

    return RunData;
}

int main()
{
    ShowScreenMainu();
    Calculator(ReadOperator());

    return 0;
}
