create database where_clause;
use where_clause;
create table student(
marks int not null,
city varchar(50)
);
insert into student 
(marks,city)
values
(89,"Lahore"),
(90,"Gujrat"),
(70,"Islamabd");
insert into student 
(marks,city)
values
(59,"Lahore"),
(60,"Gujrat"),
(35,"Islamabd");

select* from student where (marks>80 or city="Lahore");
select* from student where (marks>80 and city="Gujrat");
select *from student where marks between 80 and 90;
select* from student where city in ("Lahore","Murre");
select* from student where city not in ("Lahore","Murre");
select* from student limit 3;
select* from student where marks>=70 limit 2;
select * from student order by marks asc;
select * from student 
where marks>=50
order by city asc
limit 5;
select * from student ;


select avg(marks) from student;
select count(city) from student;

