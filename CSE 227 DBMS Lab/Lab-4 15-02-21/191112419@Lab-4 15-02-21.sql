select Fname,Minit,Lname from employee where salary > 30000;

select Fname,Minit,Lname from employee where Lname like 'W%';

select Ssn, Fname, Salary + Salary*0.1 as Incremented_Salary from employee where Salary<=25000;

select Dnumber from dept_locations where Dlocation like '%d';

select * from employee order by salary asc;

select * from employee where Dno in (select Dnumber from department where Dname in ('Headquarters','Research')); 