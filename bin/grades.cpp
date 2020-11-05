/**
 * @file grades.cpp
 *
 * @version 01.01 2020-11-5
 *
 * @brief https://training.olinfo.it/#/task/ois_grades/statement
 *
 * @ingroup grades
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;
#define DEBUG

// Variabiles
int N, first, last;
vector <int> grades;

// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Input
    cin >> N;
    grades.resize(N);

    for (int i = 0; i < N; ++i)
        cin >> grades[i];

    last = N;
    first = -1;

    while(grades[++first] >= 6){}
    while(grades[--last] < 6){}

#ifdef DEBUG
    cout << first << " " << last << endl;
#endif // DEBUG

    if (last - first > 1)
        cout << last - first + 1 << endl;
    else
        cout << -1 << endl;

    return 0;
}
