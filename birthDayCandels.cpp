#include <iostream>
using namespace std;

int result (int size, int arr []) {             
    int i, count = 1;
    for (i = 0; i < size-1; i++) {              // check for similar max values
        if (arr [size-1] == arr [i]) {
            count ++;

        }
    }
    return count;                               
}

void sortArray (int size, int arr []) {         // sort array (5)
    int i, j;
    bool swapped;
    for (i = 0; i < size; i++) {
        swapped = false;
        for (j = 0; j < size-1; j++) {
            if (arr [j] > arr [j+1]) {
                swap (arr [j], arr [j+1]);
                swapped = true;

            }
        }
        if (swapped == false) {
            break;

        }
    }
    //result (size, arr);

    cout << result(size, arr);                      // call (6) and print (7) to get the result

}

void getArray (int size) {                          // get elemeents to array (3)
    int candles [size], i;
    for (i = 0; i < size; i++){
        cout << "Height " << i+1 << " = ";
        cin >> candles [i];

    }
    sortArray (size, candles);                  // call to sort the array   (4)
}

int main () {
    int size;
    cout << "Size = ";  
    cin >> size;                                // get the size (1)

    getArray (size);                            // call to get elements (2)
}