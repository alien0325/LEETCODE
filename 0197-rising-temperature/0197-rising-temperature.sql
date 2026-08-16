/* Write your T-SQL query statement below */
SELECT
today.id
FROM Weather today
JOIN Weather yesterday
ON today.recordDate = DATEADD(day, 1, yesterday.recordDate)
WHERE today.temperature > yesterday.temperature;