#include "EmployeeData.h"
#include <fstream>

string replaceAll(string s, const string &search, const string &replace ) {
    for( size_t pos = 0; ; pos += replace.length() ) {
        // Locate the substring to replace
        pos = s.find( search, pos );
        if( pos == string::npos ) break;
        // Replace by erasing and inserting
        s.erase( pos, search.length() );
        s.insert( pos, replace );
    }
    return s;
}

EmployeeData::EmployeeData(){
    _maxId = 0;
    _data.resize(0);
}
EmployeeData::EmployeeData(string fileName){
    _maxId = 0;
    _data.resize(0);
    ifstream fileIn(fileName);
    int numberEmployees;
    fileIn >> numberEmployees;
    int Id; //id is increasing number
    string FName, MInit, LName;
    long SSN;
    string BDate, Address;
    char Sex;
    int Salary;
    long SuperSSN;
    int DNO;
    for (int i =0; i<numberEmployees; i++){
        fileIn >> Id;
        fileIn >> FName >> MInit >> LName;
        fileIn >> SSN;
        fileIn >> BDate >> Address;
        fileIn >> Sex >> Salary >> SuperSSN >> DNO;
        Employee employee(Id, 
        replaceAll(FName, "_", " "), replaceAll(MInit, "_", " "), replaceAll(LName, "_", " "),
        SSN,
        replaceAll(BDate, "_", " "), replaceAll(Address, "_", " "),
        Sex, Salary, SuperSSN, DNO
        );
        _data.push_back(employee);
        _maxId = Id;
    }

    fileIn.close();
}
int EmployeeData::GetMaxId(){
    return _maxId;
}

int EmployeeData::PushBack(Employee employee){
    //assume: there is 5 employees, _maxId =5
    _maxId++; //_maxId = 6
    employee.SetId(_maxId); // employee id = 6
    _data.push_back(employee); //add to list
    return _maxId; //return 6
}
//Employee EmployeeData::Get(int i){}
Employee* EmployeeData::GetPointer(int i){
    Employee* employee = nullptr;
    if (i >= 0 && i<_data.size())
        employee = &_data[i];
    return employee;
}

int EmployeeData::Export(string fileName){
    ofstream fileOut(fileName);
    fileOut << _data.size() << endl;
    for (Employee employee:_data){
        fileOut << employee.GetId() << endl;
        fileOut << replaceAll(employee.GetFName(), " ", "_") << endl;
        fileOut << replaceAll(employee.GetMInit(), " ", "_") << endl;
        fileOut << replaceAll(employee.GetLName(), " ", "_") << endl;
        fileOut << employee.GetSSN() << endl;
        fileOut << replaceAll(employee.GetBDate(), " ", "_") << endl;
        fileOut << replaceAll(employee.GetAddress(), " ", "_") << endl;
        fileOut << employee.GetSex() << endl;
        fileOut << employee.GetSalary() << endl;
        fileOut << employee.GetSuperSSN() << endl;
        fileOut << employee.GetDNO() << endl;
    }

    fileOut.close();
    return 1; //deal with error in last chapter
}