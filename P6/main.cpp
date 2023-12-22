/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 16:10:54
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

constexpr int N = 100;

int main() {
    int res = N * (N + 1) / 2;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += i * i;
    }
    ans = abs(ans - res * res);
    printf("%d\n", ans);
}