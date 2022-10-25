#include <iostream>
#include <cstdlib>
long long get_fibonacci_last_digit_faster(long long n) {
    if (n <= 1)
        return n;
    int tmp_previous= 0;
    int previous = 1;
    int current  = 0;

    for (int i = 2; i <= n; i++) {
        current = tmp_previous %10 + previous %10 ;
        tmp_previous = previous ;
        previous = current;
    }
    return current %10 ;
}


int main() {
    long long n;
    cin>>n;
    long long result_fast = get_fibonacci_last_digit_faster(n);
    std::cout << result_fast;
}

