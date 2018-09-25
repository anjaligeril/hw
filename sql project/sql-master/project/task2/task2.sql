create database task2;

use task2;

select * from customers;

select * from orderdetails;

select * from orders;

select * from products;

--2.	Once you have finished this, create a query that displays :CompanyName, Address, of the customer along with the total for each order that the customer has made. Save this query as a sql script called Question2.sql to your desktop

select customers.address from Customers inner join orders on customers.CustomerID=orders.CustomerID 

select count(customerid) from orders group by customerid;

select Customers.CompanyName,Customers.Address,count(Orders.OrderID) as total_no_of_orders from Orders  join Customers on customers.CustomerID=orders.CustomerID  ;
--group by orders.CustomerID

select Customers.CompanyName,Customers.Address from Customers inner join ( select count(orders.OrderID) as total_no_of_orders from Orders group by orders. CustomerID) on customers.CustomerID=orders.CustomerID;



--3.	Create a View that joins the customers table to the orders table and have the view show CompanyName, Address, City and OrderDate. Save the View as CustomersView.


create view  CustomersView as select  Customers.CompanyName,Customers.Address,Customers.City,Orders.OrderDate from Orders inner join Customers on Orders.CustomerID=Customers.CustomerID;


--4.	Once the CustomersView is created query the view to show only Customers from London.


select * from CustomersView where CustomersView.City='London';

Select Customers.CompanyName,Customers.Address,Customers.City,OrderDetails.ProductId, (OrderDetails.UnitPrice * OrderDetails.Quantity) as Total
from Customers JOIN Orders on Customers.CustomerId = Orders.CustomerId JOIN OrderDetails ON OrderDetails.OrderID = Orders.OrderId;
