#include <iostream>
using namespace std;

int main() {
    const int SIZE = 12;
    int A[SIZE] = {2, 4, 5, 8, 3, 6, 9, 10, 12, 7, 14, 16};

    cout << "Array A: ";

    for (int i = 0; i < SIZE; i++) {
        cout << A[i] << " ";
    }

    return 0;
}