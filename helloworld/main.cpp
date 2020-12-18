#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    for (int i:a){
        cout << i <<endl;
    }
    cout << "Hello world" << endl;
    return 0;
}