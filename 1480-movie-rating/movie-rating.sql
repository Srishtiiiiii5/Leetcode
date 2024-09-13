# Write your MySQL query statement below
#QUERY 1
(select name as results
from users inner join MovieRating using(user_id)
group by user_id
order by count(movie_id) desc, name asc
limit 1
)

UNION all

(select title as results
from movies inner join MovieRating using(movie_id)
where month(created_at)= '02' and year(created_at) = '2020'
group by movie_id 
order by avg(rating) desc, title
limit 1

)