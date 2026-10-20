/* Write your T-SQL query statement below */

SELECT 
contest_id, 
ROUND(COUNT(user_id)*1.0/(SELECT count(user_id)*1.0 FROM Users as u)*100,2) AS percentage  
FROM Register as R
GROUP BY contest_id
ORDER BY percentage DESC, contest_id ASC
