#include <iostream>
#include <bits\stdc++.h>
using namespace std;

int get_fibonacci_last_digit_quickly(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous%10 + current%10)%10;
    }

    return current;
}

long long get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int main() {
//    int n;
//    std::cin >> n;
//    int d = get_fibonacci_last_digit_quickly(n);
//    std::cout << c << '\n';

    long long n = 0 ;
    while(true) {
        n = rand() %30  + 2;
        long result_naive = get_fibonacci_last_digit_naive(n);
        long result_fast = get_fibonacci_last_digit_quickly(n);
        if (result_naive != result_fast) {
            cout << n << '\n';
            cout << result_naive << ' ' << result_fast;
            break;
        } else
            cout << n <<'\n';
        cout << result_naive << "=" << result_fast <<"\n";
    }
}
