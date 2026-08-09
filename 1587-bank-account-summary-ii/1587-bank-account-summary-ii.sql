# Write your MySQL query statement below
select u.name,sum(t.amount) as balance from Transactions as t join Users as u on t.account=u.account group by u.account having sum(t.amount)>10000 ;
