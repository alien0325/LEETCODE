/* Write your T-SQL query statement below */
SELECT T.tweet_id
FROM Tweets as T
WHERE LEN(T.content)> 15