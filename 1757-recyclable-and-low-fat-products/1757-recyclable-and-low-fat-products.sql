/* Write your T-SQL query statement below */
SELECT pd.product_id
FROM Products as pd
WHERE pd.low_fats = 'Y' AND pd.recyclable = 'Y'