You will extend the assignment one. Read all the instructions of assignment one. Here are the additional instructions.

(a)

(i) Create an Employee structure that will have the following members: name (string type), gender (char type), and a salary (float type).

(ii) In the main function, create an array of size N of Employee structure type. This array will be used by all the functions. You will have a lower case n to keep track of the number of values in the array. You will pass this array and # of current employees (n) as arguments to the functions.

(b) Create a function “takeEmployeesInfoFromKeyboard” that takes an Employee structure array and n as parameters. It takes information of one Employee from keyboard and stores in the Employee structure array. Do you know that arrays are passed by reference?

(c) Create a function “searchAnEmployee” that takes an Employee structure array, a name, and n as parameters. It finds and displays the employee’s information from the array searching by the name.

(d) Create a function “displayAllEmployeesInfoReverse” that takes an Employee structure array and n as parameters. It displays all employees’ information in reverse index order in a tabular format with following values (including the given column heading):

Employee  Name – Employee  Gender - Salary

(e) Write other necessary code to create the following menu system similar to assignment one. The following menu will always be displayed except if exited by pressing ‘q’.

 

======= Office Pay Roll System =========

• Enter ‘r, to take information of one employee into the Employee structure array of size N.

• Enter ‘s’, to search an employee by name. If found, display the info of employee. If not, display “Not Found”.

• Enter ‘t’, to display the information of all the employees in reverse index order in a tabular format.

• Enter ‘q’, quit/exit the menu system. 

• For any other input, display “Invalid Input”
After the menu is displayed, the program will prompt the user “Enter your choice: “ to enter a choice from the menu. After user enters his choice, using switch case the program will call appropriate functions to do the task.


