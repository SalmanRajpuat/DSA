# Write your MySQL query statement below
select EmployeeUNI.unique_id, Employees.name FROM Employees Left JOIN EmployeeUNI on Employees.id = EmployeeUNI.id;