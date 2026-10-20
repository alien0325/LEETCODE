/* Write your T-SQL query statement below */
SELECT p.project_id,
ROUND(SUM(experience_years)*1.0/COUNT(*),2) as average_years
FROM Project as p
LEFT JOIN Employee as e
ON p.employee_id = e.employee_id
GROUP BY p.project_id