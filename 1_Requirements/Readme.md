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
| 1968-1975  |  problem-oriented medical record (POMR) (1).  Clinicians now had access to a patient’s entire medical history and the system allowed third-party facilities to verify diagnoses | $1 Million |
| 1982 | Dragon Systems developed a voice recognition prototype,  they were used more for billing and scheduling rather than electronic medical records.| $0.25 Million |
| 1991 | Master Patient Index (MPI) was introduced in the 1980s to keep track of patients and their medical data. This paved the way for the Indiana Network for Patient Care (INPC)| Cost-effective |
| 2009 |  Health Information Technology for Economic and Clinical Health (HITECH)| $0.5 Million |




## Defining Our System
### Certain assumptions:
* Few systems already exists with which our system will interact
    * Hospital Management Application
    * Analytics System
    * Emergency Services
![Description](https://github.com/chetan2237/Mini_Project/blob/master/1_Requirements/DesignFlow.png)
### Explanation:
* Patient Management Application have few inbuilt features like:
    * Create a patient record
    * Delete a patient record
    * Read a patient record
    * Update a patient record
    * Save record to file
    * Read record from file 

* Since we have assumed that few systems already exists we can say that in future sprints new features could be added in which for instance patient record from PMS can be sent to HMS or Analytics or even to emegency services if some patient record shows abnormal pattern.

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/chetan2237/Mini_Project/blob/master/1_Requirements/swot.PNG)

# 4W&#39;s and 1&#39;H

## Who:
* Small and medium size clinics Providing Covid vaccinations to patients

## What:
* Many Clinics are not able to afford high end HMS or ERP systems and hence still depend on manual filing systems. During COVID vaccinations it becomes a tedious task to manage every patient with hand written file system

## When:
* This problem began in February 2021, when COVID Vaccination Drive began and small/medium clinics will soon have to administer vaccinations to people.

## Where:
* This problem is expected to surface in all states of India.

## How:
* This problem may cause ineffective vaccine management and hence there can be a huge amount of vaccine wastage. As per recent data in cities like Noida and Delhi till date 9%-18% vaccines have gone to waste.

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
