SELECT e1.name
FROM Employee e1
where
-- WHERE e1.managerId IS NULL 
--     ANd 
(SELECT COUNT(*) 
        FROM Employee e2 
        WHERE e2.managerId = e1.id)>= 5
