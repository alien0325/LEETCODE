/* Write your T-SQL query statement below */
SELECT * 
FROM Cinema as C
WHERE (C.id % 2) = 1 AND C.description != 'boring'
ORDER BY C.rating DESC