#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_47
// Loan Installment Months.

float ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <=0);

    return Number;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return (float)LoanAmount / MonthlyInstallment;
}



int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float MothlyInstallment = ReadPositiveNumber("Please Enter Monthly");

    cout << "\n Total Months to pay = " << TotalMonths(LoanAmount, MothlyInstallment);
    cout << endl;

	return 0;
}
