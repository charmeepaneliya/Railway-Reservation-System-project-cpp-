Railway Reservation System
--------------------------
A simple C++ console-based application for managing railway train records using Object-Oriented Programming concepts.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Project Overview
------------------
This Railway Reservation System allows users to manage train information including train details, source, destination, and timings. The system demonstrates fundamental OOP concepts like classes, objects, constructors, destructors, and encapsulation.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Features
--------

Add New Train Record: Input and store train details
Display All Train Records: View all stored train information
Search Train by Number: Find specific train using train number
Exit: Close the application
----------------------------------------------------------------------------------------------------------------------------------------------------------------

Technical Specifications
---------------------------
Classes
-----
1. Train Class
---------------

Private Data Members:
-------------------

int trainNumber
char trainName[50]
char source[50]
char destination[50]
char trainTime[10]
static int trainCount - Tracks total number of trains


Constructors:
---------------

Default Constructor
Parameterized Constructor
Copy Constructor


Destructor:
--------------

Decrements train count and displays message


Methods:
----------

Getters for all data members
display() - Shows train details
inputTrainDetails() - Takes user input
static getTrainCount() - Returns total train count
-------------------------------------------------
2. RailwaySystem Class
 -------------------

Private Data Members:

vector<Train> trains - Stores all train records


Methods:
----------

addTrain() - Adds train object to system
addTrainByInput() - Takes input and adds train
displayAllTrains() - Shows all train records
searchTrainByNumber() - Searches train by number

-----------------------------------------------------------------------------------

Usage Instructions
-------------

Run the program
Select from the menu options (1-4)
Follow on-screen prompts for input
Use option 4 to exit
---------------------------------------------------------------------------

output:
-------
<img width="1040" height="802" alt="Screenshot 2026-01-05 132741" src="https://github.com/user-attachments/assets/31d707b5-a992-425c-9d27-514abb9a323a" />
----------------------------------------------------
<img width="1062" height="546" alt="Screenshot 2026-01-05 132803" src="https://github.com/user-attachments/assets/e654512e-dac2-4ff3-955b-a07f4cb52b28" />
-----------------------------------------------
<img width="862" height="575" alt="Screenshot 2026-01-05 132815" src="https://github.com/user-attachments/assets/55479492-5509-4f62-8b15-53e077b58852" />
-----------------------------------------------

OOP Concepts Used
--------------

Encapsulation: Private data members with public methods
Constructors: Default, Parameterized, and Copy constructors
Destructor: Proper cleanup and resource management
Static Members: Track count across all objects
STL: Vector for dynamic storage
Const Correctness: Read-only methods marked as const
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Project Criteria
---------------------
User Input
------

Train Number
Train Name
Source
Destination
Train Time
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Display Requirements
------------------

Display all records
Display records by searching train number
Menu-driven approach
------------------------------------------------------------------------------------------------------

Minimum Input
-------------
At least three train records should be entered initially for testing.
-------------------------------------------------------------------------------------------------


Notes
------

All train data is stored in memory and will be lost when program exits
Train numbers should be unique for proper searching
Input validation is minimal - enter data carefully
Program uses character arrays (C-style strings) for text storage
-----------------------------------------------------------------------------------------------------

Future Enhancements
-------------------

File I/O for persistent storage
Edit and delete train records
Seat reservation functionality
Ticket booking system
Search by train name, source, or destination
Input validation and error handling
-------------------------------------------------------------------------------------------------

Author
-------
Student Project - C++ Programming Course
----------------------------------------------------------------------------------------------

License
-----------
This project is created for educational purposes.






