#include <iostream>

const int MOD = 1000000007;

int maximumCakePieces(int N) {
    long long pieces = 1 + ((long long)N * (N + 1) / 2);
    return pieces % MOD;
}

int main() {
    int N;
    std::cout << "Enter the number of cuts: ";
    std::cin >> N;

    int result = maximumCakePieces(N);
    std::cout << "Maximum number of pieces: " << result << std::endl;

    return 0;
}
