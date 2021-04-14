# Requirements
## Introduction
 * Minesweeper is a single-player puzzle game available on several operating systems and
GUIs. At the start of a game, the player receives an n * m rectangular grid of covered
squares or cells. Each turn, the player may probe or uncover a square revealing either
a mine or an integer. This integer represents the number of mines adjacent to that
particular square. As such, the number on a cell ranges from 0 to 8 since a cell cannot
have more than eight neighbors.
 * The game ends when the player probes a cell containing
a mine. The objective of the game is to uncover every square that does not contain a
mine.

## Research
### Minesweepers Software System Features and Benefits
In 2000, Richard Kaye suggested that Minesweeper was a computationally difficult game.
In particular, Kaye analyzes a specific problem that players face called Minesweeper
Consistency or simply Consistency in his paper \Minesweeper is NP-complete".
Consistency is a decision problem which asks whether a Minesweeper configuration is
consistent.
There are three dificulty levels for Minesweeper: beginner, intermediate, and expert.
Beginner has a total of ten mines and the board size is either 8 * 8, 9 * 9, or 10 * 10.
Intermediate has 40 mines and also varies in size between 13 * 15 and 16 * 16. Finally,
expert has 99 mines and is always 16 * 30 (or 30 * 16). Typically in beginner, guessing
is rarely necessary.

### Benefits
Improves the thinking ability of users.



## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
| 2000  |  The game had been given the name of Flower Field instead of Minesweeper in some translations of Windows 2000 (like the Italian version), featuring flowers instead of mines. Flower Field's gameplay was otherwise unchanged, as was the executable file name.| Cost-effective |
| 2003 | Microsoft created a variation called Minesweeper Flags in MSN Messenger, which is played against an opponent with the objective to find the mines rather than the surrounding squares.| Cost-effective |
| 2007 | The game's color scheme changed with the release of Vista (from gray to either blue or green). The icons were updated to match the Aero look. It also came with a more peaceful "flower" motif (called "Flower Garden") to replace the landmines (a game style called "Minesweeper").| Cost-effective |
| 2010 |  Microsoft removed Minesweeper from Windows 8 and instead published a free equivalent on Microsoft Store. The new version is developed by Arkadium and is ad-supported.| $0.5 Million |




## Defining Our System
### Given below is the flow graph of the system:

![Description](https://github.com/chetan2237/Mini_Project/blob/master/1_Requirements/DesignFlow.png)
### Explanation:
* Minesweepers game has few functions like:
    * Mine_field generator.
    * Printing field
    * Guess
    * boom etc
         

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/chetan2237/Mini_Project/blob/master/1_Requirements/swot.PNG)

# 4W&#39;s and 1&#39;H

## Who:
* Persons within all age groups can play this game.

## What:
* This game is developed by Microsoft and provided as a inbuilt game and most sae in Windows xp.

## When:
* This game was begun in 2000 and it was still up and running.

## Where:
* Can we played on any operating systems.

## How:
* This game include high thinking knowledge. 

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new patient record | Techincal | TBD-S1 | 
| HR02 | User shall be able to read a patient record | Techincal | TBD-S1 |
| HR03 | User shall be able to update a patient record | Techincal | TBD-S1 |
| HR04 | User shall be able to delete a patient record | Techincal | TBD-S1 |
| HR05 | User shall be able to save records in a file | Techincal | TBD-S1 |
| HR06 | User shall be able to read data from a file | Techincal | TBD-S1 |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | Data should always be stored when closing the system | Scenario | TBD-S1 |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | New record shall be added by providing all the asked information and the id should be unique or else patient record should not be accepted. | HR01 | TBD-S1 |
| LR02 | Reading patient data should be possible in 2 ways, first being by searching by id of a patient and second by printing all the records available | HR02 | TBD-S1 |
| LR03 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | HR02 | FUTURE |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02 | TBD-S1 |
| LR05 | User need to search by id for the pateint record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 | TBD-S1 |
| LR06 | User need to search by id for the pateint record to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 | TBD-S1 |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 | TBD-S1 |
| LR06 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR08 | TBD-S1 |
| LR07 | When user Log off the system, message shall be prompted asking the user to save new records to file before exiting or not | HR08 | TBD-S1 |
