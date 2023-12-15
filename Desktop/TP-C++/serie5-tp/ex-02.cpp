#include <iostream>
using namespace std;
/*Let X, A, and B be positive integers such that X < A < B.
Write the algorithm that
displays all the multiples of X between A and B.*/
int main()
{
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