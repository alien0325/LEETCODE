/* Write your T-SQL query statement below */
SELECT 
e.name AS Employee
FROM Employee AS e
WHERE e.salary > (
        SELECT
        m.salary
        FROM Employee AS m
        WHERE m.id = e.managerId
);