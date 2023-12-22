/***************************************************************************************************
 * author : Jie Chen (3rd Year CS)
 * school : Rochester Institute of Technology
 * created: 12.22.2023 15:50:15
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

constexpr int N = 999;

int gaussian_sum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int div3 = N / 3;
    int div5 = N / 5;
    int div15 = N / 15;
    int div3_sum = gaussian_sum(div3) * 3;
    int div5_sum = gaussian_sum(div5) * 5;
    int div15_sum = gaussian_sum(div15) * 15;
    printf("%d\n", div3_sum + div5_sum - div15_sum);
}