#include <iostream>
#include "MyClass.h"
#include "MyIntArray.h"

using namespace std;

void test_simple_datatype(){
    MyClass i;
    i.Set(5);
    cout << "i = " << i.Get() << endl;

    MyClass j(i);
    cout << "j = " << j.Get() << endl;

    j.Set(6);
    cout << "j after Set: " << j.Get() << endl;
    cout << "i after Set j: " << i.Get() << endl;
}
int main(){
    MyIntArray A(10);
    A.Update(5,1);
    cout << "A: " << A.Get(5) << endl;

    MyIntArray B(A);
    cout << "B: " << B.Get(5) << endl;

    B.Update(5,2);
    cout << "B after update: " << B.Get(5) << endl;
    cout << "A after B update: " << A.Get(5) << endl;
    return 0;
}