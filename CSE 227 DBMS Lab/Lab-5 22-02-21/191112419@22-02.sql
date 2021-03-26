-- Query -1
select Bdate, Address 
from employee 
where  (Fname,Minit,Lname) = ('John','B','Smith');

-- Query -2
select CONCAT(Fname,' ', Minit, '. ', Lname) as Name, Address 
from employee, department 
where Dname='Research';

-- Query -3
select Pnumber, Dnum, Lname, Address, Bdate 
from  project, department, employee 
where Plocation='Stafford' and Dnumber=Dnum and Ssn = Mgr_ssn ;

-- Query -4
select E.Fname, E.Lname, S.Fname, S.Lname 
from employee as E, employee as S 
where S.Ssn = E.Super_ssn;

-- Query -5
select all Salary from employee;
select distinct Salary from employee;

-- Query -6
(select Pnumber from project, works_on, employee 
where Lname ='Smith' and (Pnumber,Essn)=(Pno,Ssn) )
union
(select Pnumber from project, department, employee 
where Lname ='Smith' and (Dnum,Mgr_ssn)=(Dnumber,Ssn) );

-- Query -7
select * from employee where Address like '%Houston TX%';

-- Query -8
select * from employee where Bdate like '%1965%';

-- Query -9
select Ssn, Fname, (Salary+Salary*0.1) as Resulting_Salary  
from employee, works_on, project 
where Pname='ProductX' and employee.Ssn = works_on.Essn and works_on.Pno = project.Pnumber;

-- Query -10
select * from employee 
where Dno = 5 and Salary between 30000 and 40000; 
