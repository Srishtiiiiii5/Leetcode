# Write your MySQL query statement below
###
/*
select Products.product_name , Sum(Orders.unit) as unit
from (
    select Orders.product_id, sum(Orders.unit), Products.product_name
    from Orders left join Products on Orders.product_id = Products.product_id 
    where year(order_date) = 2020 and month(order_date) = 2
)
group by Orders.product_id
having sum(Orders.unit)>=100;
*/
SELECT product_name, total_units AS unit
FROM (
    SELECT p.product_name, SUM(o.unit) AS total_units
    FROM Products p
    JOIN Orders o ON p.product_id = o.product_id
    WHERE o.order_date BETWEEN '2020-02-01' AND '2020-02-29'
    GROUP BY p.product_id, p.product_name
) AS FebruaryOrders
WHERE total_units >= 100;
