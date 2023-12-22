/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 16:13:04
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

constexpr int N = int(1e6) + 5, M = int(1e4) + 1;
int minp[N];
vector<int> primes;

int main() {
    for (int i = 2; int(primes.size()) < M; i++) {
        if (minp[i] == 0) {
            primes.push_back(i);
            minp[i] = i;
        }
        for (auto p : primes) {
            if (i * p > N) {
                break;
            }
            minp[i * p] = p;
            if (p == minp[i]) {
                break;
            }
        }
    }

    printf("%d\n", primes.back());
}