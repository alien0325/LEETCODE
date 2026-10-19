/* Write your T-SQL query statement below */
SELECT 
FORMAT(T.trans_date,'yyyy-MM') as month,
SUM(amount) as trans_total_amount,
COUNT(*) as trans_count,
country,
SUM(CASE WHEN state = 'approved' THEN 1 ELSE 0 END) as approved_count,
SUM(CASE WHEN state = 'approved' THEN amount ELSE 0 END) as approved_total_amount
FROM Transactions as T
GROUP BY FORMAT(T.trans_date,'yyyy-MM'), country 
