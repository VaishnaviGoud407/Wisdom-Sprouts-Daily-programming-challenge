#include <bits/stdc++.h>
using namespace std;


long long gcd_manual(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd_manual(a, b)) * b;
}
