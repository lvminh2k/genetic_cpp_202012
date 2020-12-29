#include <iostream>
#include "../businessobject/Employee.h"
#include "../dataaccess/EmployeeData.h"
using namespace std;

int main(){
    EmployeeData employeeData("EmployeeData.txt");
    Employee* e0 = employeeData.GetPointer(0);
    cout << e0->GetId() << endl;
    cout << e0->GetFName() << endl;
    cout << e0->GetAddress() << endl;
    Employee* e1 = employeeData.GetPointer(1);
    cout << e1->GetId() << endl;
    cout << e1->GetFName() << endl;
    cout << e1->GetAddress() << endl;
    return 0;
}

