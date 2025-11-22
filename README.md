# <CENTER> EMPLOYEE BENIFIT MANAGEMENT</CENTER>  #

___

****ABSTRACT****

The Employee Benefit Management System is a C-based console application designed to manage and calculate employee benefits efficiently. The program allows users tO store, update, search, and delete employee information using structures. It calculates important salary-related deductions such as health insurance and retirement  benefits based on user-defined percentage values. The system also computes the total benefits and the net salary after deductions, providing a clear financial summary for each employee. With a user-friendly menu-driven interface, the project demonstrates the practical use of structures, functions, and arrays in C programming. This system is useful for understanding basic employee record management and benefit calculation techniques in real-world applications.

____

****FEATURES****


**1. Add Employee Details**

Allows the user to enter a new employee’s information.

Inputs include:

Employee ID

Name

Salary

Health Insurance percentage

Retirement percentage


Automatically stores the employee data in a structure array.

**2. Display All Employee Records**

Shows a complete list of all employees stored in the system.

Displays:

Employee ID

Name

Basic Salary

Health Insurance deduction amount

Retirement deduction amount

Total benefits (deductions)

Net salary after deductions


**3. Search Employee by ID**

Helps the user quickly find an employee using ID.

Displays the full details of the matched employee.

Shows “Employee Not Found” if the ID does not exist.


**4. Update Employee Information**

Allows modifying an existing employee’s:

Name

Salary

Health Insurance %

Retirement %


Updates the structure with new values.


**5. Delete Employee Record**

Removes an employee using ID.

Automatically shifts remaining elements to prevent empty gaps.

Shows confirmation after successful deletion.


**6. Calculate Benefits Automatically**

The program computes:

Health Insurance deduction

Retirement deduction

Total deductions (benefits)

Net salary after deducting benefits


Calculation is done inside a separate function for clean logic.


**7. User-Friendly Menu System**

Repeated menu until the user chooses Exit.

Simple numbered options for easy navigation.


**8. Efficient Data Storage Using Structures**

Uses arrays of structures to store up to 100 employees.

Ensures organized and structured management of employee records.


****TECHICAL FEATURES****


**1. Use of Structures (struct)**

Employee data is organized using a custom structure containing ID, name, salary, and benefit percentages.

Helps in systematic storage and easy access of employee records.


**2. Array-Based Data Storage**

Stores up to 100 employee records in an array of structures.

Efficient for small to medium datasets without using files or databases.


**3. Search Employee by ID**

Helps the user quickly find an employee using ID.

Displays the full details of the matched employee.

Shows “Employee Not Found” if the ID does not exist.




**4. Update Employee Information**

Allows modifying an existing employee’s:

Name

Salary

Health Insurance %

Retirement %


Updates the structure with new values.





**5. Delete Employee Record**

Removes an employee using ID.

Automatically shifts remaining elements to prevent empty gaps.

Shows confirmation after successful deletion.





**6. Calculate Benefits Automatically**

The program computes:

Health Insurance deduction

Retirement deduction

Total deductions (benefits)

Net salary after deducting benefits


Calculation is done inside a separate function for clean logic.





**7. User-Friendly Menu System**

Repeated menu until the user chooses Exit.

Simple numbered options for easy navigation.





**8. Efficient Data Storage Using Structures**

Uses arrays of structures to store up to 100 employees.

Ensures organized and structured management of employee records


******HOW TO RUN CODE******

 Option 1: Run Using an Online C Compiler

This is the easiest method.

1. Go to any online compiler:

Replit

OnlineGDB

Programiz C Compiler



2. Copy the entire C code.


3. Paste it into the editor.


4. Click Run.


5. The menu will appear in the output window.



 Option 2: Run on Windows Using GCC (CodeBlocks / MinGW)

Method A: Using CodeBlocks

1. Install CodeBlocks with GCC compiler (if not installed).


2. Open CodeBlocks → Create New Project → Console Application → C.


3. Replace the default code with your project code.


4. Press Build & Run (F9).


5. The program will open in a console window.




Method B: Using GCC (MinGW Terminal)

1. Install MinGW (adds gcc to your system).


2. Save your program as  employee_management.c


3. Open Command Prompt in the folder where the file is saved.


4. Compile the program using:

gcc employee_management.c -o employee


5. Run the compiled program:

employee


6. The menu will appear, and you can start using the system.



 Option 3: Run on Linux (Ubuntu / Kali / Mint)

1. Save the file as employee_management.c.


2. Open Terminal in that folder.


3. Compile using:

gcc employee_management.c -o employee


4. Run the program:

./employee



 Option 4: Run on Android (Termux)

1. Install Termux from Play Store.


2. Run:

pkg install clang


3. Create a file:

nano employee.c


4. Paste your code → Save (CTRL + O) → Exit (CTRL + X)


5. Compile:

clang employee.c -o employee


6. Run:

./employee

*******SCREENSHORTS*******

**1)MAIN MENU**


<p align="center">
  <img src="https://github.com/madhurya7569-rgb/course_project_/blob/e275df2ca27f15a3c1dfc7e4a041f7cf97ab5584/SC1.jpeg" width="500">
</p>

**2)ADDING AN EMPLOYEE**


<p align="center">
  <img src="https://github.com/madhurya7569-rgb/course_project_/blob/e275df2ca27f15a3c1dfc7e4a041f7cf97ab5584/SC2.jpeg" width="500">
</p>

**3)DISPLAYING ALL EMPLOYEES**


<p align="center">
  <img src="https://github.com/madhurya7569-rgb/course_project_/blob/e275df2ca27f15a3c1dfc7e4a041f7cf97ab5584/SC3.jpeg" width="500">
</p>

**4) SEARCHING FOR EMPLOYEE**


<p align="center">
  <img src="https://github.com/madhurya7569-rgb/course_project_/blob/e275df2ca27f15a3c1dfc7e4a041f7cf97ab5584/SC4.jpeg" width="500">
</p>

**5) UPADATING EMPLOYEE**


<p align="center">
  <img src="https://github.com/madhurya7569-rgb/course_project_/blob/e275df2ca27f15a3c1dfc7e4a041f7cf97ab5584/SC4.jpeg" width="500">
</p>

**6) DELETING EMPLOYEE**


<p align="center">
  <img src="https://github.com/madhurya7569-rgb/course_project_/blob/e275df2ca27f15a3c1dfc7e4a041f7cf97ab5584/SC5.jpeg" width="500">
</p>
