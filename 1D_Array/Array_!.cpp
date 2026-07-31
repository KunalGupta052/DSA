#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 11;

    // If n is completely divisible by 2
    if (n % 2 == 0)
        cout << "EVEN";

    // If n is NOT completely divisible by 2
    else
        cout << "ODD";
    return 0;
}