#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int sum = 0;
    int count = 0;

    while (cin >> i && count < 3) {
        sum += i;
        count++;
    }

    cout << sum << endl;

    return 0;
}
