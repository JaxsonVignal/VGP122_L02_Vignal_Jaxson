#include <iostream>
using namespace std;


unsigned long long factorial(int n) {

    unsigned long long result = 1;

    for (int i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {

    for (int n = 1; n <= 20; ++n) {
        unsigned long long result = factorial(n);
        cout << result << endl;
    }

    return 0;
}

