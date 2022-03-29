#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here

    switch (n) {
    case 0:
        /* code */
        cout << "zero" << endl;
        break;
    case 1:
        /* code */
        cout << "one" << endl;

        break;
    case 2:
        /* code */
        cout << "two" << endl;

        break;
    case 3:
        /* code */
        cout << "three" << endl;

        break;
    case 4:
        /* code */
        cout << "four" << endl;

        break;
    case 5:
        /* code */
        cout << "five" << endl;

        break;
    case 6:
        /* code */
        cout << "six" << endl;

        break;
    case 7:
        /* code */
        cout << "seven" << endl;

        break;
    case 8:
        /* code */
        cout << "eight" << endl;

        break;

    case 9:
        /* code */
        cout << "nine" << endl;
        break;

    default:
        /* code */
        cout << "Greater than 9" << endl;
        break;
    }


    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
