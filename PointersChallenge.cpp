#include <iostream>

using namespace std;

int* apply_all(const int[], size_t, const int[], size_t);
void print(const int[], size_t);

int main () {

    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1 [] {1,2,3,4,5};
    int array2 [] {10,20,30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *result = apply_all(array1, 5, array2, 3);
    cout << "Result: ";
    print(result, 15);

    delete [] result;

    return 0;
}

int* apply_all(const int arr1[], size_t size1, const int arr2[], size_t size2) {
    int *new_array {nullptr};
    new_array = new int[size1 * size2];
    int *ptr = new_array;
    for (size_t i2 {0}; i2 < size2; ++i2) {
        for (size_t i1 {0}; i1  < size1; ++i1) {
            *ptr++ = arr1[i1] * arr2 [i2];
        }
    }
    return new_array;
}

void print(const int arr[], size_t size) {
    cout << "[";
    for (size_t i {0}; i < size; ++i) {
        cout << " " << arr[i] << " ";
    }
    cout << "]" << endl;
}