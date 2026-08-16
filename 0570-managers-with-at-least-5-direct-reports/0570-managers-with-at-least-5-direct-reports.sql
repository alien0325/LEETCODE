/* Write your T-SQL query statement below */
SELECT name
FROM (
    SELECT 
    e1.name AS name,
    count(*) AS cnt
    FROM Employee AS e1
    LEFT JOIN Employee AS e2
    ON e1.id = e2.managerId
    WHERE e2.id IS NOT NULL
    GROUP BY e1.id, e1.name
)t
WHERE cnt >= 5