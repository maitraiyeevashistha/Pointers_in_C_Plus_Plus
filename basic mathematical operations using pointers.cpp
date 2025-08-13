//EXPERIMENT-9
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;
int main() {
    int arr[]={10,20,30,40,50};
    int *P1 = &arr[2];
    int *P2 = &arr[4];
    
    int diff= *P2-*P1;
    cout <<"The difference between the elements is: "<<diff<<endl;
    
    int add= *P2+*P1;
    cout <<"The addition between the elements is: "<<add<<endl;
    
    int multiplication= (*P2)*(*P1);
    cout <<"The multiplication between the elements is: "<<multiplication<<endl;
    
}

/*Output :
The difference between the elements is: 20
The addition between the elements is: 80
The multiplication between the elements is: 1500
*/
