/* Write your T-SQL query statement below */
SELECT p.product_id, 
ROUND(
        COALESCE(SUM(p.price * u.units) * 1.0 /
                 NULLIF(SUM(u.units), 0), 0),
        2
    ) AS average_price
FROM Prices as p
LEFT JOIN UnitsSold as u
ON P.product_id = u.product_id 
    AND u.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id
