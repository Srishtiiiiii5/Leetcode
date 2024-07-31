# Write your MySQL query statement below
select *,
(select count(*)
from Examinations e
where e.student_id= s.student_id and e.subject_name= s.subject_name
) as attended_exams
from (select * from Students cross join Subjects) as s

order by s.student_id , s.subject_name