WITH Sales AS (
    SELECT 
        p.product_id,
        COALESCE(u.units, 0) AS units,
        p.price,
        COALESCE(u.units * p.price, 0) AS revenue
    FROM 
        Prices p
    LEFT JOIN 
        UnitsSold u ON p.product_id = u.product_id 
                   AND u.purchase_date BETWEEN p.start_date AND p.end_date
)

SELECT 
    s.product_id,
    ROUND(COALESCE(SUM(s.revenue) / NULLIF(SUM(s.units), 0), 0), 2) AS average_price
FROM 
    Sales s
GROUP BY 
    s.product_id;
