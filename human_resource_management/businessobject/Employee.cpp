#include "Employee.h"

Employee::Employee(){}
Employee::Employee(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno){
    Id = id;
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}
int Employee::GetId(){
    return Id;
}

void Employee::SetId(int id){
    Id = id;
}

string Employee::GetFName(){
    return FName;
}
string Employee::GetMInit(){
    return MInit;
}
string Employee::GetLName(){
    return LName;
}
long Employee::GetSSN(){
    return SSN;
}
string Employee::GetBDate(){
    return BDate;
}
string Employee::GetAddress(){
    return Address;
}
char Employee::GetSex(){
    return Sex;
}
int Employee::GetSalary(){
    return Salary;
}
long Employee::GetSuperSSN(){
    return SuperSSN;
}
int Employee::GetDNO(){
    return DNO;
}