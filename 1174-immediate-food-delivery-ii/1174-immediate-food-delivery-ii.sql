/* Write your T-SQL query statement below */
SELECT
ROUND(AVG(CASE WHEN order_date = customer_pref_delivery_date THEN 1.0 ELSE 0.0 END)*100,2) as immediate_percentage
FROM(
    SELECT *, ROW_NUMBER() OVER(PARTITION BY customer_id ORDER BY order_date) as rnk
    FROM Delivery 
) t
WHERE rnk = 1 
