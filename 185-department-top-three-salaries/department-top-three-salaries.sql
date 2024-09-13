
# Write your MySQL query statement below

-- select d.name as Department, e.name as Employee , e.salary as Salary
-- from Employee e join Department d on e.DepartmentId = d.Id
-- where e.salary in (
--     select distinct top 3 salary
--     from employee e2
--     where e2.departmentId = d.id
--     order by salary desc
-- )

select d.name as Department, e.name as Employee , e.salary as Salary
from Employee e join Department d on e.DepartmentId = d.Id
where 3> (
    select count(distinct(e1.salary))
    from employee e1
    where e1.salary > e.salary
    and e.departmentId = e1.departmentId 
)





