Write a program to create the following Office Pay Roll System. In this simple system, we will record the salary of the office employees. The following menu will always be displayed except if exited by pressing ‘q’.  



======= Office Pay Roll System =========

• Enter ‘r’, to take salary of one employee into “salary” array of size N.

• Enter ‘s’, to search a salary amount. If found, display the index. If not found, display “Not found”. 

• Enter ‘t’, to display salary of all employees in reverse index order.

• Enter ‘q’, to quit/exit the menu system. 

• For any other input, display “Invalid Input.”





After the menu is displayed, the program will prompt the user “Enter your choice: “ to enter a choice from the menu. After user enters his choice, the program will act according to the menu choice mentioned above. 

That means, if user enters ‘r’, your program will take a salary of an employee and store that into the “salary” array from keyboard. The array size is N. N can be a large number. You need to use another variable n to represent the current number of values in the array. Initially n will be zero. Every time a user enters ‘r’, salary of another employee will be stored, and n will be increased by 1. If user enters ‘s’, it will search a salary amount. If found, display the index. If not found, display “Not found”. For choices ‘s’ and ‘t’, the program needs to check whether salary of all employees are already populated into “salary” array or not. If not populated, it will display “No salary information is found”. Please populate your salary information first.” Use switch case to handle the choice options.

