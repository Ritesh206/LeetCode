select a.name Employee from employee a join employee b on a.managerid=b.id
where a.salary> b.salary