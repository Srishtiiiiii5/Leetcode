# Write your MySQL query statement below
# quality :  avg - rating:position
#poor quality percentage :   ratings less than 3

select query_name, round(avg(rating/position),2) as quality,
round((sum(if(rating<3, 1, 0))  * 100/ count(rating)),2) as  poor_query_percentage
from queries
where query_name is not NULL
group by query_name