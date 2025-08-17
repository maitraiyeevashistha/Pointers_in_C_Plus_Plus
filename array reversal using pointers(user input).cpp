//EXPERIMENT-9
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

int main() {
    int Arr[50] ;
    int l;
    cout<< "enter the number of elements in your array: ";
    cin>>l;
    cout<<"enter the elements of your array: ";
    for(int i=0;i<l;i++){
        cin>>Arr[i];
    }
    
    cout<<endl;
    
    int length = sizeof(Arr) / sizeof(Arr[0]); 

    cout << "Original array:" << endl;
    for (int i = 0; i < l; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    int* ptr = &Arr[l - 1];

    cout << "Traversed array:" << endl;
    for (int i = l - 1; i >= 0; i--) {
        cout << *ptr << " ";
        ptr--;  
    }

    return 0;
}


/*Output:-
enter the number of elements in your array: 4
enter the elements of your array: 1 2 3 4

Original array:
1 2 3 4 
Traversed array:
4 3 2 1 
*/
