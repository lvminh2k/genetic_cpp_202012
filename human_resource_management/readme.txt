build command
g++ main.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp -o main.exe

build test export employees 
g++ integratedtest/export_employees.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp -o main.exe

buil test read employees
g++ integratedtest/read_employees.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp -o main.exe