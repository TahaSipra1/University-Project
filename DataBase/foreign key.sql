create database company;
use company;
create table employee(
id int not null,
name varchar(50),
salary int  default 250000
);
insert into employee values(101,"Taha",490000);
insert into employee values(102,"ALi",4999);
select * from employee;
insert into employee(id)  values(103);
insert into employee values(104,"ALi",499);

