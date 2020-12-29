#ifndef Project_businessobject_Employee_h_
#define Project_businessobject_Employee_h_
#include <string>
using namespace std;
class Employee{
    int Id; //id is increasing number
    string FName, MInit, LName;
    long SSN;
    string BDate, Address;
    char Sex;
    int Salary;
    long SuperSSN;
    int DNO;

public:
    Employee();
    Employee(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno);
    int GetId();
    void SetId(int id);
    string GetFName();
    string GetMInit();
    string GetLName();
    long GetSSN();
    string GetBDate();
    string GetAddress();
    char GetSex();
    int GetSalary();
    long GetSuperSSN();
    int GetDNO();
};
#endif