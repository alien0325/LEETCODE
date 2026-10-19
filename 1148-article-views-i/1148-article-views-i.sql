/* Write your T-SQL query statement below */
SELECT DISTINCT v.author_id AS id
FROM Views as v
WHERE v.author_id = v.viewer_id
ORDER BY v.author_id