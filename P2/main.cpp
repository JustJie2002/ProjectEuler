/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 15:57:26
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

constexpr int N = 4'000'000;

int main() {
    int a = 0, b = 1;
    int ans = 0;
    while (a <= N) {
        if (a % 2 == 0) {
            ans += a;
        }
        swap(a, b);
        b += a;
    }
    printf("%d\n", ans);
}