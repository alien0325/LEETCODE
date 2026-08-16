/* Write your T-SQL query statement below */
-- SELECT 
-- email
-- FROM (
--     SELECT 
--     email, 
--     count(*) AS num
--     FROM Person AS P1
--     GROUP BY email
--     )t
-- WHERE num>= 2

SELECT email from Person
group by email
having count(email) > 1
