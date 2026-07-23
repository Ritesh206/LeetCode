# Write your MySQL query statement below
SELECT p.firstname, p.lastname, s.city, s.state
FROM Person p
Left Join Address s
on p.personId = s.personId