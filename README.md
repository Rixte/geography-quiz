# A Geography Quiz

This is a beginner-friendly command-line **Geography Quiz** built in **C**, focusing on the following goals:
- All control flow is implemented using **`while` loops** and **if/else logic**, as well as one function only.
- No usage of:
  - `goto` statements
  - `switch` statements
  - `do-while` loops
  - `for` loops

<br>

## Features

- Contains **3 main questions** about geography
- Each correct answer awards **10 points**
- Question 3 grants **5 bonus points** if the user’s guess is close to the correct answer
- Passing mark is **15 out of 30**
- If the user scores full marks (30), they unlock a **bonus question** for a prize!! (just kidding no prize 😞)
- Handles:
  - Input validation
  - Retrying incorrect answers (only one extra try per question)
  - Displaying running scores
- Clean separation of logic into functions (e.g. `result()`)

<br>

## How It Works

1. Displays instructions and quiz rules
2. Loops through 3 questions
3. For each question:
    - User inputs an answer
    - Program validates the input
    - Scores are calculated
4. Displays final score after finishing the quiz:
    - If user passes (minimally 15/30): offers to retry
    - If user fails (below 15/30): prompts to try again
    - If user scores full marks (30/30): unlocks a **bonus question**
5. Bonus question asks a 4th geographical question

<br>

## Files

- `Geography Quiz.c` → Main quiz logic
- Uses standard C library (`stdio.h`) only

<br>

## How To Run the Program
- One way is by using an IDE like Code::Blocks or Visual Studio:
- Create a new C project
- Copy-paste the code
- Build and run

## Future Enhancements?
- Integrate a file system to save high scores
- Add more quiz questions
- Implement a scoring leaderboard
- Use colors for better console UI (if terminal supports it)
