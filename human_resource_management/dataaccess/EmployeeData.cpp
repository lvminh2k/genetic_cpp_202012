#include "EmployeeData.h"
#include <fstream>
#include "../libs/Utility.h"
#include "../libs/Log.h"

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
            Utility::replaceAll(FName, "_", " "), Utility::replaceAll(MInit, "_", " "), Utility::replaceAll(LName, "_", " "),
            SSN,
            Utility::replaceAll(BDate, "_", " "), Utility::replaceAll(Address, "_", " "),
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
    //Log::Write(string("EmployeeData: _maxId = ") + to_string(_maxId));
    _maxId++; //_maxId = 6
    employee.SetId(_maxId); // employee id = 6
    //Log::Write("EmployeeData: employee.Id = " + to_string(employee.GetId()));
    //Log::Write("");
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
        fileOut << Utility::replaceAll(employee.GetFName(), " ", "_") << endl;
        fileOut << Utility::replaceAll(employee.GetMInit(), " ", "_") << endl;
        fileOut << Utility::replaceAll(employee.GetLName(), " ", "_") << endl;
        fileOut << employee.GetSSN() << endl;
        fileOut << Utility::replaceAll(employee.GetBDate(), " ", "_") << endl;
        fileOut << Utility::replaceAll(employee.GetAddress(), " ", "_") << endl;
        fileOut << employee.GetSex() << endl;
        fileOut << employee.GetSalary() << endl;
        fileOut << employee.GetSuperSSN() << endl;
        fileOut << employee.GetDNO() << endl;
    }

    fileOut.close();
    return 1; //deal with error in last chapter
}