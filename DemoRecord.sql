#creating database
create database if not exists Example;
#point to database
use Example;
# Creating Table
create table if not exists CandidateInfo(Personal_No char(10),Name varchar(40),Gender char,Known_Languages varchar(40),Hobbies varchar(1000));

