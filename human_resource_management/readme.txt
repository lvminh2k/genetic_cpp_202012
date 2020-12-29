build command
g++ main.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp -o main.exe

build test export employees 
g++ integratedtest/export_employees.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp libs/Utility.cpp libs/Log.cpp -o main.exe

buil test read employees
g++ integratedtest/read_employees.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp libs/Utility.cpp libs/Log.cpp -o main.exe

build test utility
g++ integratedtest/test_utility.cpp libs/Utility.cpp -o main.exe

build test log
g++ integratedtest/test_log.cpp libs/Log.cpp -o main.exe
