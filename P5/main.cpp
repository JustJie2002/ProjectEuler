/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 16:05:35
****************************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

constexpr int BUFSIZE = 2e6 + 1;
char buf[BUFSIZE];
string nxt() {
    scanf("%s", buf);
    return buf;
}
char cxt() {
    scanf("%s", buf);
    return buf[0];
}

using i64 = long long;

constexpr int N = 20;

i64 gcd(i64 a, i64 b) {
    return (b ? gcd(b, a % b) : a);
}

i64 lcm(i64 a, i64 b) {
    return a / gcd(a, b) * b;
}

int main() {
    i64 g = 1;
    for (int i = 2; i <= N; i++) {
        g = lcm(g, i);
    }
    printf("%lld\n", g);
}