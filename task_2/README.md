# Task 2 - Guess the number 🔍

## Background story

Imagine you are a game developer, and you are asked to create a simple Number Guessing Game where the player has to guess a secret number chosen by the computer. The player has a limited number of attempts to guess the correct number.

## Project requirements

➤ How the game works:

1. The computer will pick a random number between 1 and 50.

2. The player must guess the number.

3. The player has only 5 attempts to guess correctly.

4. After each guess, the program will tell the player:

   - If the guess is too high,
   - If the guess is too low, or
   - If the guess is correct.

5. If the player guesses correctly, the game ends immediately with a congratulations message.

6. If the player fails to guess the number after 5 tries, the program reveals the correct number.

7. After the end of each game, back to the main menu with option to Start game or Exit.

## Prototype

```
====== Number Guessing Game ======
1. Start Game
2. Exit
Choose an option: 1

I have selected a number between 1 and 50. You have 5 tries.

Attempt 1: Enter your guess: 25
Too low!

Attempt 2: Enter your guess: 40
Too high!

Attempt 3: Enter your guess: 35
Too high!

Attempt 4: Enter your guess: 30
Too low!

Attempt 5: Enter your guess: 33
Congratulations! You guessed it in 5 attempts!

====== Number Guessing Game ======
1. Start Game
2. Exit
Choose an option: ...
```

or if FAILED:

```
Attempt 5: Enter your guess: 45
Too high!
Sorry, you've used all your attempts. The correct number was: 37
```

## Code requirements

1. You are allowed to use library to generate the random number
2. You must implement the following concepts:
   - Input / Output
   - Variable and datatypes
   - While loop / do while loop
   - For loop
   - Switch statement
   - If statement

## Additional Requirement

1. Create a feature branch from `main` for this task, with the format: {your-name}/task-{task-number}/guess-the-number
2. Follow conventional commit naming conventions: conventionalcommits.org
3. Lastly, create a Pull Request from your feature branch into main. Don't merge until you got LGTM from reviewer.
4. Implement clean and modular code.

## Scoring

| **Category**                          | **Criteria**                                                                      | **Points** |
| ------------------------------------- | --------------------------------------------------------------------------------- | ---------- |
| **1. Code Functionality (40 points)** | Program runs without errors                                                       | 10         |
|                                       | Random number is correctly generated between 1 and 50                             | 5          |
|                                       | Limited to exactly **5 attempts**                                                 | 5          |
|                                       | Correct feedback: **too high, too low, correct** after each guess                 | 5          |
|                                       | Game ends immediately when correct answer is guessed                              | 5          |
|                                       | Correct result is displayed if all attempts used without success                  | 5          |
|                                       | Main menu is displayed after each game                                            | 5          |
| **2. Code Quality (35 points)**       | Uses **meaningful variable names**                                                | 5          |
|                                       | Code is **clean, modular, readable, and well-indented**                           | 15         |
|                                       | Uses **while / do while** appropriately                                           | 5          |
|                                       | Uses **for loop** appropriately                                                   | 5          |
|                                       | Uses **switch statement** appropriately                                           | 5          |
| **3. Process & Git (15 points)**      | Feature branch created with correct naming: `{your-name}/task-3/guess-the-number` | 5          |
|                                       | Uses **conventional commit** messages                                             | 5          |
|                                       | Pull Request created correctly, without merging before review                     | 5          |
| **4. Additional (10 points)**         | Handles **edge cases** (e.g., invalid inputs)                                     | 5          |
|                                       | Bonus: Adds extra fun (e.g., hints for "very close" guesses)                      | 5          |

## Grading Guideline

| Score Range | Grade             | Notes                                                |
| ----------- | ----------------- | ---------------------------------------------------- |
| 90 - 100    | ⭐ Excellent      | Fully functional, clean, polished, good process      |
| 75 - 89     | 👍 Good           | Functional with minor issues in code/process         |
| 60 - 74     | 🆗 Sufficient     | Basic functionality works, some errors or messy code |
| < 60        | ❌ Needs Revision | Incomplete or major issues in both code and process  |

# Good luck and Have fun!

## 🗓️ Due date: 18 Jul 2025
