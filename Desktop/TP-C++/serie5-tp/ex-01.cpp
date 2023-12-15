#include <iostream>
using namespace std;
// EX01: Write the algorithm for this game
/*Write an algorithm that allows you to:
1. Ask for two positive integers, then calculate the first to
the power of the second.
2. Calculate the factorial of a number given by the user.
3. Show the divisors of an integer N.
4. Check if a number is prime or not.
5. Check if the number is perfect or not.*/
int main()
{
    /*1. Ask for two positive integers,
    then calculate the first to the power of the second.*/
    int counter_power = 0, a, b, result = 1;
    cout << "please enter number(a)----> ";
    cin >> a;
    cout << "please enter number power(b)----> ";
    cin >> b;
    // trying Loop With For Advanced Syntax :)
    for (;;)
    {
        if (counter_power < b)
        {
            counter_power++;
        }
        else
        {
            break;
        }
        result = result * a;
    }

    cout << "your result is ----> " << result << endl;

    // Calculate the factorial of a number given by the user.
    int N, result_fact = 1;
    bool flag = false;
    cout << "_______________\nenter a number for calculate factorial |----> ";
    cin >> N;

    // trying Loop With For Advanced Syntax :)
    if (N > 0)
    {
        flag = true;
        for (; N > 0; N--)
        {
            result_fact = result_fact * N;
        }
    }

    else if (N == 0)
    {
        flag = true;
        result_fact = 1;
    }
    else
    {
        cout << "Can't calculate a number below 0 ";
    }
    if (flag)
    {
        cout << "your result is ----> " << result_fact << endl;
    }

    // Show the divisors of an integer N.
    int N_div, N_check = 2;
    cout << "please enter number ----> ";
    cin >> N_div;
    ;
    bool flag_div = true;
    for (; N_check <= (N_div / 2); N_check++)
    {
        if (N_div % N_check == 0)
        {
            flag_div = false;
            cout << "----> " << N_check << endl;
        }
    }
    if (flag_div)
        cout << "Not found" << endl;

    // Check if a number is prime or not.

    // Check if the number is perfect or not.
    int N_div_P, N_check_P = 1, total = 0;
    cout << "please enter number ----> ";
    cin >> N_div_P;
    for (; N_check_P <= (N_div_P / 2); N_check_P++)
    {
        if (N_div_P % N_check_P == 0)
            total += N_check_P;
    }
    if (total == N_div_P)
        cout << N_div_P << " is Perfect Number" << endl;
    else
        cout << N_div_P << " is Not Perfect Number" << endl;

    return 0;
}