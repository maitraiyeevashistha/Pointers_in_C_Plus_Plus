//EXPERIMENT-9
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string:" << endl;
    cin >> s;

    char* ptr = &s[0];

    cout << "Characters os string entered are:" << endl;
    while (*ptr != '\0') {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}


/*Output:-

Enter a string:
hello
Characters using pointer (while loop):
h
e
l
l
o
*/
