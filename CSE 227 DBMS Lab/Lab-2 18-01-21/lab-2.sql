INSERT INTO student VALUES 
( 191112419, "Vivek", "Kumar", "Ahirwar", "CSE", "C-1/10 Rishi Nagar", "Ujjain", "M.P.", 456010);

select * FROM STUDENT;

INSERT INTO student VALUES
(191112251, "Ayush", "Singh", "Patel", "CSE", "Ghantaghar", "Khandwa", "M.P.", 450001 ),
(191112450, "Yuvraj", "Singh", "Rathore", "CSE", "Jethari", "Anuppur", "M.P.", 484224),
(191112053, "Uday", "", "Chaturvedi", "CSE", "B-133 Chirahula Colony", "REWA", "M.P.", 486001 ),
(191112341, "Priya", "", "Gupta", "CSE", "Bichhiya", "Rewa", "M.P.", 486001 ),
(191112024, "Bhushan", "Singh", "Sharma", "CSE", "MPNagar", "Bhopal", "M.P.", 462004),
(191112423, "Ankit", "", "Sharma", "CSE", "Ridhi Sidhi Nagar", "Kota", "Rajasthan", 324008),
(191112202, "Amit", "", "Rajak", "CSE", "Ram Nagar", "Vidhisha", "M.P.", 464001),
(191114035, "Karuna", "", "Sharma", "ECE", "A P Sabha", "Lucknow", "U.P.", 226003 ),
(191114001, "Mahesh", "Kumar", "Saran", "ECE", "TTNagar", "Bhopal", "M.P.", 462001),
(191114002, "Rajat", "", "Meena", "ECE", "New City", "Jabalpur", "M.P.", 482001),
(191114003, "Dilip", "Kumar", "Dole", "ECE", "Vijay Nagar", "Balaghat", "M.P.", 462004),
(191114004, "Pranav", "", "Gupta", "ECE", "Bangali Mohalla", "Indore", "M.P.", 451010);
select * FROM STUDENT;

INSERT INTO student VALUES
( 191116042, "Anurag", "Prasad", "Pandey", "Mechanical", "Near Sanchi stoop", "Vidisha", "M.P.", 464001 ),
( 191113054, "Sandeep", "", "Shukla", "Electrical", "Near global institute", "Jabalpur", "M.P.", 482001 ),
( 191116043, "Abhishek", "", "Dwivedi", "Mechanical", "Vijay Nagar", "Indore", "M.P.", 452010 ),
( 191113058, "Vijay", "Pratap", "Singh", "Electrical", "Bhawarkua", "Indore", "M.P.", 452014),
( 191117001, "Anushka", "", "Pandey", "Chemical", "C-67 sambhav nagar", "Surat", "Gujarat", 335009 ),
( 191113012, "Divya", "", "Tiwari", "Electrical", "C A Park", "Allahabad", "U.P.", 211001 ),
( 191116074, "Krishna", "Kumar" , "Shrivastava", "Mechanical", "A N L Colony", "Lucknow", "U.P.", 226001 );
select * FROM STUDENT;


create table Rolllist 
as select Enrollment_number, First_name, Middle_name, Last_name from student;
describe Rolllist;
select * from rolllist;


create table CSE as 
select Enrollment_number, First_name, Middle_name, Last_name from student where branch = "CSE";
describe CSE;
select * from CSE;

alter table CSE add Email_id VARCHar(200);
describe CSE;

alter table CSE modify column Email_id VARCHar(250);
describe CSE;
select * from CSE;

alter table CSE drop column Email_id;
describe CSE;

truncate table CSE;
select * from CSE;

drop table CSE;