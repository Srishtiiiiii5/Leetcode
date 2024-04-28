# Write your MySQL query statement below
SELECT "Low Salary" AS category,
       sum(income < 20000) AS accounts_count
FROM Accounts
UNION
SELECT "Average Salary" AS category,
       sum(income BETWEEN 20000 AND 50000) AS accounts_count
FROM Accounts
UNION
SELECT "High Salary" AS category,
       sum(income > 50000) AS accounts_count
FROM Accounts;

#income>2000 returns bool value. toh 1+0+1... karke sum akrke count aa jaega