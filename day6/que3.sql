Problem Statement



From the following table, write a query to find the maximum order (purchase) amount by each customer. The customer ID should be in the range 3002 and 3007(Begin and end values are included.). The return customer id and maximum purchase amount.



The following table is already created, and the records are inserted into the table.



Note: Table names are case sensitive

Input format :
The input records are already prepopulated, as given in the problem statement.

Output format :
The output displays the maximum order (purchase) amount by each customer.

select customer_id , max(purch_amt) 
from orders
where customer_id >= 3002 and customer_id <= 3007
group by customer_id;