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


![5v5](https://github.com/chetan2237/Mini_Project/blob/master/1_Requirements/fivevf.PNG)


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
* Mine_field generator generates the field using '-'. Guess function is used to find the mines and 'B' to fillup blank spaces.If player successfully comples the game he wins. If player hit a mine displays you lose. If the person lost the mine_feild prints with the displaed mines,
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
| ID | Description | Status | 
| ----- | ----- | ---------|
| HR01 | Player shall be given a begginer level matrix at the start | Implemented | 
| HR02 | Player should specify the coordinates in the feild | Implemented |
| HR03 | Player should analyze the clues given based on numbers | Implemented |
| HR04 | Player should follow and give the coordinates based on clue numbers | Implemented |
| HR05 | Player should not hit mine if he does game over | Implemented |
| HR06 | Player survives the mines he wins | Implemented |
| HR07 | Player should able to select difficulty | FUTURE |
| HR08 | Player should able to flag the mines | FUTURE |
| HR09 | Player should able to see the timer | FUTURE |
##  Low level Requirements:
 
| ID | Description  | Status (Implemented/Future) |
| ------ | --------- | ----- |
| LR01 |Mine_field generator generates the field using '-' | Implemented |
| LR02 | Guess function is used to find the mines and 'B' to fillup blank spaces | Implemented |
| LR03 | Can be done using some cool GUI | FUTURE |
| LR04 | If player successfully comples the game he wins | Implemented |
| LR05 | If player hit a mine displays you lose  | Implemented |
| LR06 | If the person lost the mine_feild prints with the displaed mines | Implemented |

