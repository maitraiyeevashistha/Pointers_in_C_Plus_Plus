//EXPERIMENT-9
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;
int main() {
    int a=5;
    double b=447;
    bool c=0;
    float d=0.73;
    
    int *aptr;
    double *bptr;
    bool *cptr;
    float *dptr;
    
    
    aptr= &a;
    bptr= &b;
    cptr= &c;
    dptr= &d;
    
    
    cout<<"original address for integer datatype "<<a<<": "<<aptr<<endl;
    cout<<"original address for double datatype "<<b<<": "<<bptr<<endl;
    cout<<"original address for boolean datatype "<<c<<": "<<cptr<<endl;
    cout<<"original address for float datatype "<<d<<": "<<dptr<<endl;
    cout<<endl;
    
    aptr++;
    bptr++;
    cptr++;
    dptr++;
    
    cout<<"new address for integer datatype "<<a<<": "<<aptr<<endl;
    cout<<"new address for double datatype "<<b<<": "<<bptr<<endl;
    cout<<"new address for boolean datatype "<<c<<": "<<cptr<<endl;
    cout<<"new address for float datatype "<<d<<": "<<dptr<<endl;
}


/*Output :
original address for integer datatype 5: 0x7ffd3ea2523c
original address for double datatype 447: 0x7ffd3ea25230
original address for boolean datatype 0: 0x7ffd3ea2522f
original address for float datatype 0.73: 0x7ffd3ea25228

new address for integer datatype 5: 0x7ffd3ea25240
new address for double datatype 447: 0x7ffd3ea25238
new address for boolean datatype 0: 0x7ffd3ea25230
new address for float datatype 0.73: 0x7ffd3ea2522c

*/
