/* Write your T-SQL query statement below */
SELECT MAX(salary) AS SecondHighestSalary
FROM(
    SELECT 
    salary,
    DENSE_RANK() OVER(ORDER BY salary DESC) as rnk
    FROM Employee
)t
WHERE rnk = 2
