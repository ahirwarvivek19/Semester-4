create database `191112419`;
CREATE TABLE student (
	Enrollment_number Int,
	First_name	Varchar(20),
	Middle_name	Varchar(20),
	Last_name	Varchar(20),
	Branch	Varchar(20),
	Address	Varchar(40),
	City	Varchar(20),
	State	Varchar(20),
	Pincode	Int
);
INSERT INTO student VALUES 
( 191112419, "Vivek", "Kumar", "Ahirwar", "CSE", "C-1/10 Rishi Nagar", "Ujjain", "M.P.", 456010);
SELECT * FROM student;

INSERT INTO student VALUES 
( 191112420, "A", "B", "C", "CSE", "Ved Nagar", "Bhopal", "M.P.", 462001);
SELECT * FROM student;
