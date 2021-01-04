#include <iostream>
#include "Contact.h"
#include <vector>
using namespace std;

int main(){
    Contact c1("Trump", "123456");
    Contact c2("Tap", "234567");
    Contact c3("Putin", "345678");
    Contact c4("Kim", "456789");
    Contact c5("Nguyen", "567890");
    Contact c6("Hussein", "678901");
    vector<Contact> contacts;
    contacts.push_back(c1);
    contacts.push_back(c2);
    contacts.push_back(c3);
    contacts.push_back(c4);
    contacts.push_back(c5);
    contacts.push_back(c6);

    string s;
    cout << "Find phone from name: " ; cin >> s;
    for (Contact c:contacts){
        if (c.name == s){
            cout << c.phone;
        }
    }
    return 0;
}