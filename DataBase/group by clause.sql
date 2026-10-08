create database grope_clause;
use grope_clause;
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


select city,count(marks)
from student
group by city;