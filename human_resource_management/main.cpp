#include <iostream>
#include "businessobject/Employee.h"
#include "dataaccess/EmployeeData.h"
using namespace std;

int main(){
    cout << "hello" << endl;
    Employee e(1, "Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 5);
    EmployeeData employeeData;
    employeeData.PushBack(e);

    Employee* e1 = employeeData.GetPointer(2);
    if (e1 == nullptr){
        cout << "can not get Employee" << endl;
    }
    else{
        cout << e1->GetId() << endl;
    }
    return 0;
}

