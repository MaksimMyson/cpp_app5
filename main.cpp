#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int array[100][100]{};
    int value = 0;  
    cout << "The array is: " << endl;
    cin >> value;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = value;
            value *= 2;  
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}