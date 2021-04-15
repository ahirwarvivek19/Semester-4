# Query 1
select Fname, Minit, Lname from employee, works_on, project
where ssn = essn and pno = pnumber and dno = 5 and hours >= 10 and pname = 'ProductX';

# Query 2
select Fname, Minit, Lname from employee join dependent on ssn = essn
where fname = Dependent_name;

select Fname, Minit, Lname from employee, dependent 
where ssn=Essn and Fname= dependent_name;

# Query 3
select emp.fname, emp.minit, emp.lname from employee as emp
where emp.Super_ssn in (select sup.ssn from employee as sup
		where sup.fname = 'Franklin' and sup.Lname = 'Wong');
                        
Select E1.Fname, E1.Minit, E1.Lname from employee as E1, employee as E2 
where E1.super_ssn = E2.ssn and E2.Fname = "Franklin" and E2.Lname = "Wong";

# Query 4 i
select pname, sum(hours) as total_hours from project, works_on
where pnumber = pno
group by pname;

## Query 4 ii
select pname, sum(hours) as total_hours from (project join works_on on pnumber = pno)
group by pname;

# Query 5
select fname, minit, lname from employee
where not exists ( select pnumber from project
			where not exists ( select 1 from works_on
				where ssn = essn and pno =  pnumber) );	
## for each ssn we check if No project is left from the list of 
## all projects when removing the ones where ssn works


# Query 6
select fname, minit, lname from employee
where ssn not in (select distinct essn from works_on);

# Query 7
select dname, avg(salary) from employee, department
where dno=dnumber
group by dno;

# Query 8
select fname, minit, lname from employee join works_on on ssn = essn
where pno in (select pnumber from project where Plocation = 'Houston')
and dno not in (select dnumber from dept_locations where dlocation = 'Houston');

# Query 9
select lname from employee, department
where ssn = mgr_ssn and 
not exists ( select 1 from dependent where mgr_ssn = essn);

# Query 10
select dname, count(ssn) from employee, department
where dno = dnumber
group by dname
having avg(salary) >= 40000;

# Query 11
select distinct pno from employee, works_on
where ssn = essn and lname = 'Smith'
union all
select distinct pnumber from employee, project, department
where dnum = dnumber and mgr_ssn = ssn and Lname = 'Smith';

# Query 12
select fname, minit, lname from employee
where ssn in ( select essn from works_on as w
				group by essn
                having count(pno) > 2 );

# Query 13
select emp.fname, emp.lname from employee as emp
where emp.salary > (select avg(emp2.salary) from employee as emp2
					where emp.dno = emp2.dno);
                    
                    
      
# Limit Query
select * from employee limit 5;      
      
      
#create View
create view project_work as
select concat(fname,' ', Minit, '. ', Lname) as Name,
		Pname as Project, Hours
from employee, project, works_on
where Ssn = Essn and Pno = Pnumber;
select * from project_work;

#Drop View
drop view project_work;


