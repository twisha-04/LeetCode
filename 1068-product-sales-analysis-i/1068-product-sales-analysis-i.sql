# Write your MySQL query statement below
select product.product_name,Sales.year,Sales.price from sales left join product on sales.product_id=Product.product_id;