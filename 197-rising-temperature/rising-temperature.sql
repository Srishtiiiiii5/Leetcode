# Write your MySQL query statement below
select id
from weather w1
where temperature> (
    select temperature
    from weather w2
    where datediff(w1.recordDate, w2.recordDate)= 1
)