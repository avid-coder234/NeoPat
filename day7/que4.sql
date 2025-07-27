Problem Statement:



Olivia is a data analyst working for a travel agency. She has been asked to analyze the performance of various travel packages and identify trends in customer preferences. Olivia needs to use the GROUP BY and HAVING clauses to extract specific insights from the TRAVEL_PACKAGES, BOOKINGS, and CUSTOMERS tables.



Table Details:



  symbol refers to the primary key



Sample input records:

Table Name: TRAVEL_PACKAGES



Table Name: BOOKINGS



Table Name: CUSTOMERS





Tasks to Perform:

Calculate the average price for each destination from the TRAVEL_PACKAGES table and display destinations where the average price is greater than 1500. Use the alias avg_price for the average price.
Calculate the total number of tickets for each package from the BOOKINGS table and display packages where the total number of tickets is greater than 5. Use the alias total_tickets for the total number of tickets using GROUP BY clause.
Calculate the maximum age of customers in each city from the `CUSTOMERS` table. The result should display the city name and the maximum age of customers in that city, with the maximum age labeled as max_age.
Calculate the average number of tickets booked by each customer from the `BOOKINGS` table but only include customers who have booked more than 3 tickets in total. The result should display the `CUSTOMER_ID` and the average number of tickets as avg_tickets, sorted in ascending order by CUSTOMER_ID.


Note: The user must write only the queries to select the required data using the GROUP BY and HAVING clauses.

Input format :
The input tables are already created, and the records are prepopulated as mentioned in the problem statement.

Output format :
The output displays the resultant records after executing the queries using the GROUP BY and HAVING clauses.



Refer to the sample output.

Sample test cases :
Input 1 :
Output 1 :
DESTINATION	avg_price
Paris	1800.0000
Dubai	1600.0000
PACKAGE_ID	total_tickets
PKG4	7
CITY	max_age
New York	30
Los Angeles	25
Chicago	35
Houston	28
San Francisco	40
CUSTOMER_ID	avg_tickets
C1	2.0000
C3	2.5000
C4	2.0000
C5	2.5000

SELECT DESTINATION , AVG(PRICE) AS avg_price
FROM TRAVEL_PACKAGES
GROUP BY DESTINATION
HAVING avg_price > 1500;

SELECT PACKAGE_ID , SUM(NUMBER_OF_TICKETS) AS total_tickets
FROM BOOKINGS
GROUP BY PACKAGE_ID
HAVING total_tickets > 5;

SELECT CITY , MAX(AGE) AS max_age
FROM CUSTOMERS
GROUP BY CITY;


SELECT CUSTOMER_ID , AVG(NUMBER_OF_TICKETS) as avg_tickets
FROM BOOKINGS
GROUP BY CUSTOMER_ID
HAVING SUM(NUMBER_OF_TICKETS) > 3
ORDER BY CUSTOMER_ID ASC;