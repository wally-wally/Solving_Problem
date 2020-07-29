SELECT X, Y
FROM functions
WHERE X = Y
GROUP BY X, Y
HAVING COUNT(*) = 2

UNION

SELECT f1.X, f1.Y
FROM functions AS f1
    INNER JOIN functions AS f2 ON f1.X = f2.Y AND f1.Y = f2.X
WHERE f1.X < f1.Y
ORDER BY X