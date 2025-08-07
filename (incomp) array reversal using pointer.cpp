//EXPERIMENT-9
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;
int main() {
    int arr[]={10,20,30,40,50};
    int lenght = sizeof(arr)/sizeof(arr[0]);
    int *p= arr + lenght - 1; 
    
    cout<<"the reversed array will be: "<<endl;
    
    
    for(int i =0;i<lenght;++i){
        
        cout<<*p<<" ";
        p--;
    }
}

/* Output :
the reversed array will be: 
50 40 30 20 10 
*/
