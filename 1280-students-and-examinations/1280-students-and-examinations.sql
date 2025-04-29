# Write your MySQL query statement below
select s.student_id,s.student_name,s1.subject_name,count(e.student_id) as attended_exams
from Students s 
cross join Subjects s1 on 1=1
left join Examinations e on s.student_id=e.student_id AND e.subject_name = s1.subject_name
group by s.student_id,s1.subject_name,s.student_name 
ORDER BY s.student_id,s1.subject_name; 