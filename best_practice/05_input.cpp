#include <iostream>
#include <cstdio>
using namespace std;

// string *generate_list() {
//     string *num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     return num;
// }


// 入力された番号に対してその数の文字列を出力するプログラム．
int main() {
    int in;
    string out;

    string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> in;
    out = (in > 9) ? num[0] : num[in];

    cout << out << endl;

    return 0; // hoge
}
