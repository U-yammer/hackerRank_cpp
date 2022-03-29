#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;

    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << f << endl; // 小数点 3 まで 表示
    cout << fixed << setprecision(9) << d << endl; // 小数点 9 まで 表示

    return 0;
}
