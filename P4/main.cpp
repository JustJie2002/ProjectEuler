/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 16:02:40
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

constexpr int MIN = 100, MAX = 1000;

bool is_pal(int n) {
    auto s = to_string(n);
    auto t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    int ans = -1;
    for (int a = MIN; a < MAX; a++) {
        for (int b = MIN; b < MAX; b++) {
            int prod = a * b;
            if (is_pal(prod)) {
                ans = max(ans, prod);
            }
        }
    }
    printf("%d\n", ans);
}