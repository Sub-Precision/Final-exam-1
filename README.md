# CSCI 2421 - 001 
* Final Programming Assignment 
* Cade Nichols, Allissa Hertz, Susmitha Wilson
* Cade.nichols@UCDenver.edu, susmitha.wilson@ucdenver.edu

# What everyone did
Cade Nichols<br>
* Readme.md
* ActorActress.h
* ActorActress.cpp
* Picture.h
* Picture.cpp
* Makefile
* Testing on server

Susmitha Wilson<br>
* Sort funtionality
* Complete search functionality
* Delete functionality
* Testing program

Allissa Hertz<br>
* Design Doc
* Main.h/Main.cpp
* Add entry functionality
* Partial search functionality
* Modify functionality
* Print to csv functionality

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

**Menu 1: Choose your database**
<br>
Please choose the database you would like to view:
1. Actor/Actress 
2. Movie

**Main menu**
1. Add a new record
2. Sort Records aphabetically by a certain field
3. Search for an entry by a name. This also allows you to modify or delete a particular picture of actor/actress.
4. Print a csv file of the latest database
5. Quit

## Actor/Actress options section

**Actor/Actress - 1. Add a new record**
<br>
you selected option: 1<br>
What year was the award won? Enter a four-digit integer. For example, “1976”.
<br>
User input: 1978
<br>
What was the name of the award?
<br>
User input: bob
<br>
Did the actor/actress win the award? Enter yes or no.
<br>
User input: yes
<br>
What was the name of the actor/actress?
<br>
User input: bob
<br>
What was the name of the film the actor/actress starred in?
<br>
User input: bob
<br>
Added entry to database:
<br>
1978,bob,yes,bob,bob

**Actor/Actress - Sort records alphabetically by name**

[Prints a sorted list of all actor/actress objects]
<br>
Name : Abigail Breslin<br>
Film : Little Miss Sunshine<br>
Year: 2006<br>
Award : Actress in a Supporting Role<br>
Winner : 0<br>
-------------------------------------------------------<br>
 Name : Adolph Caesar<br>
Film : A Soldier's Story<br>
Year: 1984<br>
Award : Actor in a Supporting Role<br>
Winner : 0<br>
-------------------------------------------------------<br>
 Name : Adolphe Menjou<br>
Film : The Front Page<br>
Year: 1931<br>
Award : Actor in a Leading Role<br>
Winner : 0<br>

ect.. 

**3. Actor/Actress - Search for an entry by a name. This also allows you to modify or delete a particular picture or actor/actress.**

You selected option: 3<br>
What would you like to search for?<br>
Enter the name of the Actor/Actress. This can be a first or last name: <br>
User input:  Emil<br>
0:<br>
Name : Emil Jannings<br>
Film : The Last Command<br>
Year: 1928<br>
Award : Actor in a Leading Role<br>
Winner : 1<br>
-------------------------------------------------------<br>

1:<br>
Name : Emily Watson<br>
Film : Breaking the Waves<br>
Year: 1996<br>
Award : Actress in a Leading Role<br>
Winner : 0<br>
-------------------------------------------------------
<br>
Would you like to<br>
1. Modify<br>
2. Delete <br>
3. Continue<br>
<br>
**Modify**<br>
Which record would you like to modify?<br>
Enter a the number that corresponds with the record you want to modify.<br>
User input: 0<br>
Would you like to modify this records win?:<br>
1. Yes<br>
2.No<br>
User input: Yes.<br><br>

**Delete**<br>
Which record would you like to Delete?<br>
User input: 0<br>
The entry has been removed.<br><br>

**Continue**<br><br>

[Returns to main menu]<br><br>

**4. Print a CSV file of the latest database.**<br><br>

you selected option: 4<br>
What would you like to name your file?<br>
newdatabase<br>
Your file has been saved as a csv to the current directory.<br>
[New file saved to directory with user input name]<br><br>


## Picture options section

**Picture - 1. Add a new record**<br><br>
you selected option: 1<br>
What was the name of the film? <br>
User input: bob<br>
What year was the award won? Enter a four-digit integer. For example, “1976”.<br>
User input: 1976<br>
How many nominations did the film receive?<br>
User input: 1<br>
What was the rating of the film? Enter a two-digit decimal. For example, “1.4”<br>
User input: 1.4<br>
What was the duration of the film? Enter a whole number that represents the running time of the film in minutes. For example, “145”<br>
User input: 145<br>
What was the main genre of the film?<br>
User input: bob<br>
What was the secondary genre of the film?<br>
User input: bob<br>
What year was the film released? Enter a two-digit integer to represent the year. For example, “89”.<br>
User input: 89<br>
What was the metacritic review score? For example, For example, “89”.<br>
User input: 89<br>
Please enter a short synopsis of the film.<br>
User input: bob<br><br>

Added entry to database: <br>
bob,1976,1976,1,1.400000,145,bob,bob,89,89,bob,<br>

**Picture - Sort records alphabetically by name**

[Prints a sorted list of all picture objects]<br><br>

Name : 12 Years a Slave<br>
Year : 2013<br>
Nominations: 9<br>
Rating : 8.1<br>
Duration : 134<br>
Genre1 : Biography<br>
Genre2 : Drama<br>
Release : November<br>
Metacritic : 97<br>
Synopsis : In the antebellum United States Solomon Northup a free black man from upstate New York is abducted and sold into slavery.
<br>-------------------------------------------------------<br>
 Name : A Beautiful Mind<br>
Year : 2001<br>
Nominations: 8<br>
Rating : 8.2<br>
Duration : 135<br>
Genre1 : Biography<br>
Genre2 : Drama<br>
Release : January<br>
Metacritic : 72<br>
Synopsis : After a brilliant but asocial mathematician John Nash accepts secret work in cryptography his life takes a turn for the nightmarish.
<br>-------------------------------------------------------<br>
 Name : A Man for All Seasons<br>
Year : 1966<br>
Nominations: 8<br>
Rating : 7.9<br>
Duration : 120<br>
Genre1 : Biography<br>
Genre2 : Drama<br>
Release : May<br>
Metacritic : -1<br>
Synopsis : The story of Thomas More who stood up to King Henry VIII when the King rejected the Roman Catholic Church to obtain a divorce and remarriage.
<br>-------------------------------------------------------<br><br>

ect.. <br>

**3. Picture - Search for an entry by a name. This also allows you to modify or delete a particular picture or actor/actress.**

You selected option: 3<br>
What would you like to search for?<br>
Enter the name of the Movie. This must be an exact match: <br>
User input: bob<br>
0:<br>
Name : bob<br>
Year : 1976<br>
Nominations: 1<br>
Rating : 1.4<br>
Duration : 145<br>
Genre1 : bob<br>
Genre2 : bob<br>
Release : 89<br>
Metacritic : 89<br>
Synopsis : bob<br>
-------------------------------------------------------<br><br>

Would you like to<br>
1. Modify<br>
2. Delete <br>
3. Continue<br>

**Modify**

What would you like to modify this rating to? Please enter a two-digit double from 1 to 10. For example, 1.2, 9.7, ect..
<br><br>
Record modified!<br>
Name : Birdman<br>
Year : 2014<br>
Nominations: 9<br>
Rating : 1.7<br>
Duration : 119<br>
Genre1 : Comedy<br>
Genre2 : Drama<br>
Release : November<br>
Metacritic : 88<br>
Synopsis : Illustrated upon the progress of his latest Broadway play a former popular actors struggle to cope with his current life as a wasted actor is shown.
<br>-------------------------------------------------------

**Delete**

Enter the name of the Movie. This must be an exact match: <br>
User input:  Crash<br>
The entry has been removed.<br><br>

[Run search again and there is no match]<br><br>

**Continue**

<br><br>[Back to main menu]<br><br>


**4. Print a CSV file of the latest database.**<br><br>

you selected option: 4<br>
What would you like to name your file?<br>
newdatabase<br>
Your file has been saved as a csv to the current directory.<br>
[New file saved to directory with user input name]<br>



# Errors
As far as we can tell the program works completely
