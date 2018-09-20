create database university_accomodation_office;

use university_accomodation_office;

--student table

create table university_student (
student_id varchar(20) not null primary key,
first_name varchar(20) not null,
last_name varchar(20) not null,
home_addr_street varchar(20) not null,
home_addr_city varchar(20) not null,
home_addr_zipcode varchar(10) not null,
dob varchar(20) not null,
sex varchar(15) not null,
category varchar(20) not null,
nationality varchar(25) not null,
current_status varchar(20) not null,
course_no varchar(20) not null,
comment_for_student varchar(100) ,
status_accomodation varchar(25) not null,
type_of_room varchar(20) null,
advisor_id varchar(20) not null,
place_no varchar(20) null,
check (status_accomodation='currently renting' or status_accomodation='waiting list'),
check(type_of_room='hall of residence' or type_of_room='student flat')
);

--advisor table

create table student_advisor(
advisor_id varchar(10) not null primary key,
full_name varchar(50) not null,
postion varchar(30) not null,
department_name varchar(30) not null,
phone_number varchar(15) not null,
office_location varchar(30) null,
office_phone varchar(15) null,
);

--hall of residence table

create table hall_of_residence (
hall_id varchar(10) not null primary key,
hall_name varchar(20) not null,
hall_addr varchar(50) not null,
phone_no varchar(15) not null,
manager varchar(50) not null,
);

--hall room table

create table hall_room (
place_no varchar(20) not null primary key ,
room_no varchar(20) not null,
hall_id varchar(10) not null,
Monthly_rent_rate varchar(20) not null
);


--student flat table 

create table student_flat(
flat_no varchar(20) not null primary key,
flat_address varchar(50) not null,
no_of_rooms integer not null,
check(no_of_rooms ='2' or no_of_rooms ='3' or no_of_rooms ='4')
);

--lease table

create table lease(
lease_no varchar(10) not null primary key,
duration_of_lease integer not null,
check (duration_of_lease between 1 and 4),
student_id varchar(20) not null,
first_name varchar(20) not null,
last_name varchar(20) not null,
place/flat_no varchar(10) not null,
addr_of_hall/flat varchar(50) not null,
date_enter_room varchar(20) not null,
date_exit_room varchar(20) not null
);

--invoice table 

create table invoice(
invoice_no varchar(50) not null primary key,
lease_no varchar(10) not null,
quarter_no varchar(5) not null,
payment_due varchar()
);

drop table university_student;
