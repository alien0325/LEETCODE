/* Write your T-SQL query statement below */
SELECT EmU.Unique_id, Em.name 
FROM Employees as Em
LEFT JOIN EmployeeUNI as EmU
ON Em.id = EmU.id