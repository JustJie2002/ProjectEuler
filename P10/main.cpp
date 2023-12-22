/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 16:40:20
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

constexpr int N = 2'000'000;
int minp[N];
vector<int> primes;

int main() {
    i64 ans = 0;
    for (int i = 2; i < N; i++) {
        if (minp[i] == 0) {
            ans += i;
            primes.push_back(i);
            minp[i] = i;
        }
        for (auto p : primes) {
            if (i * p >= N) {
                break;
            }
            minp[i * p] = p;
            if (p == minp[i]) {
                break;
            }
        }
    }

    printf("%lld\n", ans);
}