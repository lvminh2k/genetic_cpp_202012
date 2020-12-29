#include <iostream>
#include <string>
#include "../libs/Utility.h"
using namespace std;

int main(){
    string s = "hello world";
    string s1 = Utility::replaceAll(s, " ", "_");
    cout << s1;
    return 0;
}