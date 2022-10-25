#include <iostream>
#include <bits\stdc++.h>
using namespace std;

long long  pisano(long long m){

    long long pisano_number = 0;
    long long previous = 0;
    long long current = 1;

    for (int i=2; i <= m*m; i++){

        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous%m + current%m)%m;

        if (current == 1 && previous == 0){
            pisano_number=i-1;
        }
    }

    return pisano_number;
}

long long fibonacci(long long n, long long m){
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous%m;
        previous = current;
        current = (tmp_previous%m + current%m)%m;
    }

    return current;
}

int main() {
    long long n,m;
    cin>>n>>m;
    long long  p = pisano(m);
    cout<<fibonacci(n%p,m);

    return 0;
}
