#ifndef Project_dataaccess_Employee_Data_H_
#define Project_dataaccess_Employee_Data_H_
#include <vector>
#include "../businessobject/Employee.h"
using namespace std;

class EmployeeData{
private:
    vector<Employee> _data;
    int _maxId;
public:
    EmployeeData();
    EmployeeData(string fileName);
    int GetMaxId();

    /** @brief Function add an employee object to list of employees
     *  
     *  Function add an employee object to list of employees
     *  @return return employee id
     *  if fail, return -1;
     */
    int PushBack(Employee);
    
    //Employee Get(int i);

    /** @brief Get a point to an employee at index i
     *  
     *  Get a point to an employee at index i
     *  @return pointer of Employee
     *  if fail, return nullpoiter;
     */
    Employee* GetPointer(int i);

    /** @brief Export all employees to file with input filename
     *  
     *  Export all employees to file with input filename
     *  @return 1 if ok, 0 if fail
     */
    int Export(string fileName);
};
#endif