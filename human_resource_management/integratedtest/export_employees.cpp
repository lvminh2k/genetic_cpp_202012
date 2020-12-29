#include <iostream>
#include "../businessobject/Employee.h"
#include "../dataaccess/EmployeeData.h"
using namespace std;

int main(){
    cout << "hello" << endl;
    EmployeeData employeeData;
    Employee e1(1, "Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago US", 'M', 10000, -1, 5);
    employeeData.PushBack(e1);
    Employee e2(2, "Duong", "Tham", "Le", 222222222, "1975-04-30", "Saigon Vietnam", 'M', 10000, 111222333, 5);
    employeeData.PushBack(e2);

    employeeData.Export("EmployeeData.txt");
    return 0;
}

