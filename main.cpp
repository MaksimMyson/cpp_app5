#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int array[5][5]{};

    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = rand() % 10;
        }
    }

    cout << "Initial Matrix:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int shiftAmount;
    char direction;

    cout << "Enter the shift direction ('l' - left, 'r' - right, 'u' - up, 'd' - down): ";
    cin >> direction;

    cout << "Enter the number of positions to shift (integer): ";
    cin >> shiftAmount;

    int tempArray[5][5]{};

    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (direction == 'l') {
                tempArray[i][(j + shiftAmount + 5) % 5] = array[i][j]; 
            }
            else if (direction == 'r') {
                tempArray[i][(j - shiftAmount + 5) % 5] = array[i][j]; 
            }
            else if (direction == 'u') {
                tempArray[(i + shiftAmount + 5) % 5][j] = array[i][j]; 
            }
            else if (direction == 'd') {
                tempArray[(i - shiftAmount + 5) % 5][j] = array[i][j]; 
            }
        }
    }

  
    cout << "After the shift:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << tempArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}