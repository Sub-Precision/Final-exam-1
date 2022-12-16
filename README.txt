# CSCI 2421 - 001 
* Final Programming Assignment 
* Cade Nichols, Allissa Hertz, Susmitha Wilson
* Cade.nichols@UCDenver.edu, susmitha.wilson@ucdenver.edu

# Project Files
* ActorActress.h - Contains definition of ActorActress class
* ActorActress.cpp - Contains implementation of ActorActress class
* ActorActressDb.h - Contains definition of ActorActressDb class (Database class)
* ActorActressDb.cpp - Contains implementation of ActorActress class
* BST.h - Contains definition and implementation of BinarySearchTree class
* Exceptions.h - Contains Exception handling functions for invalid inputs
* Picture.h - Contains definition of Picture class
* Picture.cpp - Contains implementation of Picture class
* PictureDb.h - Contains definition of PictureDb class
* PictureDb.cpp = Contains implementation of PictureDb class
* main.h - Contains definitions of vector functions
* main.cpp - Implements functionality to add and delete records, calls all necessary functions, calls to create objects, calls the sorting algorithms, takes the users input to make a choice, as well as accepts input to run search functions, allows the user to search via actress/actor
* Makefile - g++ command to compile project
* actor_actress.csv - File that contains all the information about actors and actresses to be sorted
* pictures.csv - File that contains all the information about the films to be sorted

# Compilation
The project can be compiled be issuing the 'make' command on a linux terminal. Upon successful 
compilation, an executable named 'AHertzCnicholsSWilson.exe' will be created in the current directory

# Running
Issue './AHertzCNicholsSWilson.exe' on the command line to run the program

# Sample Output
YouCan:

1. Add a new record
2. Sort Records aphabetically by a certain field
3. Search for an entry by a name. This also allows you to modify or delete a particular picture of actor/actress.
4. Print a csv file of the latest database
5. Quit
3
You selected option: 3
What would you like to search for?
Enter the name of the actor/actress: Ann
0:
Name: Ann Harding
Film: Holiday
Year: 1931
Award: Actress in a leading role
Winner: 0
--------------------------------------------------------------------------------------------------------------------
etc. etc.

# Errors
As far as we can tell the program works completely
