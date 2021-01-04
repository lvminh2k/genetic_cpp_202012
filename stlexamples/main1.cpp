#include <iostream>
#include "Contact.h"
using namespace std;

int main(){
    Contact c1("Trump", "123456");
    Contact c2("Tap", "234567");
    Contact c3("Putin", "345678");
    Contact c4("Kim", "456789");
    Contact c5("Nguyen", "567890");
    Contact c6("Hussein", "678901");
    int N = 6;
    Contact* contacts = new Contact[N];
    contacts[0] = c1;
    contacts[1] = c2;
    contacts[2] = c3;
    contacts[3] = c4;
    contacts[4] = c5;
    contacts[5] = c6;
    string s;
    cout << "Find phone from name: " ; cin >> s;
    for (int i = 0; i<N; i++){
        Contact c = contacts[i];
        if (c.name == s){
            cout << c.phone;
        }
    }
    return 0;
}