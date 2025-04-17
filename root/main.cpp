#include <iostream>
#include <vector>
#include <random>
using namespace std;
const int arraySize = 500;
const int parts = 100;
vector<int> generateRandomArray(int size) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(-size, size);
    vector<int> result;
    result.reserve(size);
    for (int i = 0; i < size; i++) {
        result.push_back(dis(gen));
    }
    return result;
}
int main() {
    vector<int> array = generateRandomArray(arraySize);
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
