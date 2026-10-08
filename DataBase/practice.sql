create database bank;
use bank;
create table payment(
id int primary key,
customer varchar(50),
modde varchar(50),
city varchar(50)
);
insert into payment(id,customer,modde,city)
values
(101,"Taha","Netbanking","Gujrat"),
(102,"Ali","Credit card","Karachi"),
(103,"Ahmed","Credit card","Lahore"),
(104,"Hassan","Netbanking","Islamabad"),
(105,"Hamza","Credit card","Rawalpindi"),
(106,"Usman","Debit card","Faisalabad"),
(107,"Ayesha","Debit card","Multan"),
(108,"Fatima","Netbanking","Peshawar"),
(109,"Hira","Netbanking","Quetta"),
(110,"Zainab","Credit card","Gujranwala");
select modde,count(customer)from payment
where modde in ("Netbanking")
group by modde;
select modde,count(customer)from payment
where modde in ("Credit card")
group by modde;
select modde,count(customer)from payment
where modde in ("Debit card")
group by modde;

set sql_safe_updates=0;


select*from payment;

update payment
set modde="Jazz cash"
where modde="Netbanking";

update payment 
set id=109
where id=110;


delete from  payment
where id =110;


