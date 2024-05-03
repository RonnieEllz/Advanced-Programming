#include <iostream>

int main() {
    int rows, cols;


    std::cout << "Enter the number, a maximum of 3): ";
    std::cin >> rows;
    if (rows > 3) {
        std::cout << "Dimensions cannot exceed 3." << std::endl;
        return 1;
    }
    std::cout << "Enter the number of columns, a maximum of 3: ";
    std::cin >> cols;
    if (cols > 3) {
        std::cout << "Dimensions cannot exceed." << std::endl;
        return 1;
    }

    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }

    std::cout << "\nValues of each element of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }


    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
