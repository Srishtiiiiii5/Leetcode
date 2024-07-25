select name
from Employee
where id in (
    select managerId
    from employee
    group by managerId
    having count(*)>=5

)