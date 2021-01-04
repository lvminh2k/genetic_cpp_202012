#include <iostream>
#include "Contact.h"
#include <map>
using namespace std;

int main(){
    Contact c1("Trump", "123456");
    Contact c2("Tap", "234567");
    Contact c3("Putin", "345678");
    Contact c4("Kim", "456789");
    Contact c5("Nguyen", "567890");
    Contact c6("Hussein", "678901");
    map<string, Contact> contacts;
    contacts[c1.name] = c1;
    contacts[c2.name] = c2;
    contacts[c3.name] = c3;
    contacts[c4.name] = c4;
    contacts[c5.name] = c5;
    contacts[c6.name] = c6;

    string s;
    cout << "Find phone from name: " ; cin >> s;
    cout << contacts[s].phone;

    return 0;
}