//EXPERIMENT-9
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

int main() {
    int Arr[5] = {10, 20, 30, 40, 50};  
    int length = sizeof(Arr) / sizeof(Arr[0]); 

    cout << "Original array:" << endl;
    for (int i = 0; i < length; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    int* ptr = &Arr[length - 1];

    cout << "Traversed array:" << endl;
    for (int i = length - 1; i >= 0; i--) {
        cout << *ptr << " ";
        ptr--;  
    }

    return 0;
}


/*Output:-

Original array:
10 20 30 40 50 
Traversed array:
50 40 30 20 10 

*/
