/* Write your T-SQL query statement below */
SELECT
c.name AS Customers
FROM Customers AS c
WHERE c.id NOT IN (
    SELECT customerID 
    FROM Orders AS o
)