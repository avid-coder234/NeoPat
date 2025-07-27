Problem Statement:



Lucas is a product manager at a tech company responsible for analyzing various aspects of product development and team performance. To gain insights into project efficiency and team satisfaction, he needs to perform the following tasks using non-correlated subqueries. The database admin has already created two tables, Expenses and Revenue. Lucas must execute the tasks using non-correlated subqueries.



Table Details:



symbol refers to the primary key 

Sample Table Records: 

Table Name: EXPENSES



Table Name: REVENUE



Tasks to be performed: 

Write a query to retrieve the DEPARTMENT from the EXPENSES table where the AMOUNT is greater than the average AMOUNT of all entries in the EXPENSES table.
Write a query to retrieve EXPENSE_ID from the EXPENSES table where the AMOUNT is less than the minimum AMOUNT from the REVENUE table.
Write a query to retrieve SOURCE from the REVENUE table where the AMOUNT is not equal to the maximum AMOUNT from the EXPENSES table.


Note: The user must write only the subqueries to select the required records.

Input format :
The input tables are already created and the records are prepopulated as mentioned in the problem statement.



Output format :
The output displays the resultant records after executing the subqueries.



Refer to the sample output.

Sample test cases :
Input 1 :
Output 1 :
DEPARTMENT
Marketing
IT
Operations
EXPENSE_ID
2
3
SOURCE
Product A
Product B
Service A
Service B
Product C


SELECT DEPARTMENT FROM EXPENSES
WHERE AMOUNT > (SELECT AVG(AMOUNT) FROM EXPENSES);

SELECT EXPENSE_ID FROM EXPENSES
WHERE AMOUNT < (SELECT MIN(AMOUNT) FROM REVENUE);

SELECT SOURCE FROM REVENUE
WHERE AMOUNT != (SELECT MAX(AMOUNT) FROM EXPENSES);