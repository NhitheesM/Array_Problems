#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int org_arr[N], dup_arr[N];
    int K;

    for (int i = 0; i < N; i++) {
        std::cin >> org_arr[i];
    }

    std::cin >> K;
    for (int j = 0; j < N; j++) {
        dup_arr[(j+N-K)%N] = org_arr[j];
    }

    for (int l = 0; l < N; l++) {
        std::cout << dup_arr[l] << " ";
    }

    return 0;
}
