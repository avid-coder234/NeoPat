Problem Statement



We have a database with two tables: "Students and enrollments. You need to find the names of students who are enrolled in at least one course that is also taken by another student. The query should return the name1 of these students from the Students table. Create a query to achieve this task.



Table details:





Sample Input Records:

Table Name: Students



Table Name: enrollments



Tasks to perform:

Write a query to get `name1` from the `Students` table. Select students who share at least one course with another student.  
Write a query to identify students who shares course. Use the `enrollments` table to check for shared courses.  Find `student_id`s where the `course_name` appears for multiple students.  
Write a query to use `DISTINCT` to avoid duplicate results. Ensure efficient filtering and avoid redundant subqueries.  
Input format :
The input table is already created, and records are already prepopulated, as mentioned in the problem statement.

Output format :
The output displays the name1 of the students who share at least one course with other students as shown below.

name1
Mike
Isolabella
Shravya
Supriya


SELECT name1
FROM Students
WHERE id IN (
  SELECT DISTINCT e1.student_id
  FROM enrollments e1
  WHERE e1.course_name IN (
    SELECT e2.course_name
    FROM enrollments e2
    WHERE e2.student_id != e1.student_id
  )
)