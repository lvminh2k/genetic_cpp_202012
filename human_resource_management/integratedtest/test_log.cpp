#include <iostream>
#include <string>
#include "../libs/Log.h"
using namespace std;

int main(){
    string s = "hello world";
    Log::Write(s);
    return 0;
}