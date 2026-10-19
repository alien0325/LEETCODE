/* Write your T-SQL query statement below */
SELECT c.name
FROM Customer as c
WHERE c.referee_id IS NULL 
    OR c.referee_id != 2
