/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 16:37:33
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

constexpr int N = 500;

bool is_square(int n) {
    int sq = int(sqrt(n));
    return sq * sq == n;
}

int main() {
    for (int a = 1; a < N; a++) {
        for (int b = 1; b < N; b++) {
            int c_square = a * a + b * b;
            if (is_square(c_square)) {
                int c = int(sqrt(c_square));
                if (a + b + c == 2 * N) {
                    printf("%d\n", a * b * c);
                    return 0;
                }
            }
        }
    }
    assert(NULL);
}