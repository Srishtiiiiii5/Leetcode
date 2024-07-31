# Write your MySQL query statement below
-- select IFNULL(max(salary), null) as SecondHighestSalary
-- from Employee
-- where salary not in (
--     select max(salary)
--     from Employee
-- )


-- SELECT MAX(salary) AS SecondHighestSalary FROM Employee WHERE salary < (SELECT MAX(salary)FROM Employee);

select IFNULL((select distinct salary
from Employee
order by salary desc
limit 1
offset 1), null) as SecondHighestSalary

