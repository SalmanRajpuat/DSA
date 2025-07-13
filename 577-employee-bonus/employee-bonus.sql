# Write your MySQL query statement below
SELECT e1.name, b1.bonus from Employee e1 left join bonus b1 on e1.empId = b1.empId where bonus is null or bonus < 1000;