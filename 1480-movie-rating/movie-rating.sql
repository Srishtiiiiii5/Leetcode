# Write your MySQL query statement below
/*
select name as results
from Users
where user_id= (
    select user_id
    from MovieRating
    group by user_id
    order by count(*) desc, name asc
    limit 1
))
union all
(
select title as results
from Movies
where movie_id = (
    select movie_id
    from MovieRating
    where (created_at between '2020-02-01' and '2020-02-29')
    group by movie_id
    order by avg(rating) desc, title asc
    limit 1
)
)
*/
(SELECT name AS results
FROM Users
INNER JOIN MovieRating USING(user_id)
GROUP BY user_id
ORDER BY COUNT(rating) DESC, name
LIMIT 1)

UNION ALL

(SELECT title AS results
FROM Movies
INNER JOIN MovieRating USING(movie_id)
WHERE MONTH(created_at) = '02' AND YEAR(created_at) = '2020'
GROUP BY title
ORDER BY AVG(rating) DESC, title
LIMIT 1)