#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int rows = 5;
    const int cols1 = 10;
    const int cols2 = 5;

    int array1[rows][cols1]{};
    int array2[rows][cols2]{};

    

    // Fill the first array with random numbers from 0 to 50
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols1; j++) {
            array1[i][j] = rand() % 51; // Generate a random number from 0 to 50
        }
    }

    // Fill the second array according to the rule
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols2; j++) {
            array2[i][j] = array1[i][2 * j] + array1[i][2 * j + 1];
        }
    }

    // Print both arrays to the screen
    cout << "First array (5x10):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Second array (5x5):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}