/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 15:59:37
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

constexpr i64 N = 600851475143;

bool is_prime(i64 n) {
    for (i64 i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    i64 res = 2;
    for (i64 f = 2; f * f <= N; f++) {
        if (N % f == 0) {
            if (is_prime(f)) {
                res = max(res, f);
            }
            i64 nf = N / f;
            if (is_prime(nf)) {
                res = max(res, nf);
            }
        }
    }
    printf("%lld\n", res);
}