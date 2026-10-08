create database colllege;
use colllege;
create table student(
st_id int ,
name varchar(50)
);
insert into student values(101,"Ali");
insert into student values(102,"Taha");
insert into student values(103,"Umer");
select * from student;

create table course(
st_id int,
course_name varchar(50)
);
insert into course values (102,"English");
insert into course values (105,"Math");
insert into course values (103,"Science");
insert into course values (107,"cs");
select * from course;

select *from student inner join course
on student.st_id=course.st_id;


select *from student left join course
on student.st_id=course.st_id;

select *from student right join course
on student.st_id=course.st_id;



select *from student left join course
on student.st_id=course.st_id
union
select *from student right join course
on student.st_id=course.st_id;