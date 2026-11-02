
#include <iostream>

int main() {
    const int SIZE = 12;
    int A[SIZE] = {2, 4, 5, 8, 3, 6, 9, 10, 12, 7, 14, 16};

    std::cout << "Array A: ";

    for (int i = 0; i < SIZE; i++) {
        std::cout << A[i] << " ";
    }

    std::cout << '\n';

    int oddCount = 0;
    int secondOddIndex = -1;
    int secondOddValue = 0;

    for (int i = 0; i < SIZE; i++) {
        if (A[i] % 2 != 0) {
            oddCount++;

            if (oddCount == 2) {
                secondOddIndex = i;
                secondOddValue = A[i];
                break;
            }
        }
    }

    if (secondOddIndex != -1) {
        std::cout << "Second odd element: "
                  << secondOddValue << '\n';
        std::cout << "Index: " << secondOddIndex << '\n';
    } else {
        std::cout << "There are less than two odd elements.\n";
    }

    return 0;
}
