# Experiment-6

# 1. Program: Using while loop to print numbers from 1 to 20
# Aim:
To write a C++ program using a while loop to print numbers from 1 to 20.

# Theory:
The while loop is used when we don’t know exactly how many times the loop will run, but want it to continue until a condition becomes false. In this case, we start from 1 and keep printing numbers until we reach 20.

# Conclusion:
We successfully printed numbers from 1 to 20 using a while loop. This helped us understand how conditions and incrementing work inside loops.

# 2. Program: Using while loop to Authenticate the Password
# Aim:
To create a C++ program that keeps asking the user for a password until the correct one is entered.

# Theory:
In this program, the while loop is used to repeat the prompt until the correct password is typed. The loop runs as long as the input is not equal to the correct password.

# Algorithm:
Start the program.

Set the correct password (e.g., "@619").

Ask the user to enter a password.

Use a while loop to keep checking if the entered password is incorrect.

If incorrect, ask again.

When correct, exit the loop and show success.

End the program.

# Conclusion:
This program taught us how to keep checking user input using a while loop. It also showed a real-life use of loops in password validation.

# 3. Program: Using for loop to print “SIT” 5 times
# Aim:
To write a C++ program using a for loop to print the word “SIT” 5 times.

# Theory:
The for loop is ideal when we know how many times we want something to repeat. In this case, the loop will repeat 5 times and print “SIT” in each round.

# Conclusion:
We used a for loop to repeat a print statement. It helped us understand loop structure and how to repeat a task in C++.

# 4. Program: Using for loop to print even numbers between 0 to 10
# Aim:
To write a C++ program to print even numbers between 0 and 10 using a for loop.

# Theory:
Even numbers are divisible by 2. A for loop can go through numbers from 0 to 10, and we can check inside the loop if a number is even using the % (modulus) operator.

# Algorithm:
Start the program.

Run a for loop from 0 to 10.

In each loop, check if the number % 2 == 0.

If yes, print the number.

End the loop.

End the program.

# Conclusion:
We printed even numbers in a range using the for loop. It helped us practice using conditions with loops.

# 5. Program: Nested for loop stars pyramid
# Aim: 
To write a C++ program using nested for loops to print a star pattern.

# Theory:
Nested for loops are used in C++ when one loop runs inside another. This structure is especially useful for pattern printing tasks where output is organized in rows and columns.
In a typical star pattern:
The outer loop determines the number of rows.
The inner loop controls how many stars (*) are printed in each row.

# Conclusion:
We used nested for loops to print a star pattern. This helped us understand how multiple loops interact and how to structure output in a patterned format.

# 6. Program:Hourglass Star Pattern
# Aim: This program prints a symmetric hourglass pattern using stars (*). 
# Theory:
It is divided into two parts:
i) The first for loop creates the upper inverted triangle.
ii) The second for loop prints the lower triangle.
Spacing is handled using nested loops to align the stars properly.
# ALGORITHM:
1> Start
2> Declare variables:
i, j, k (int) – loop counters
n = 5 – controls the size of the pattern
3> First Half (Upper Inverted Triangle):
Loop i from 1 to n - 1
Loop j from -1 to i - 1 → print space (" ")
Loop k from 1 to n - i + 1 → print "* "
Print newline
4> Second Half (Lower Triangle):
Loop i from n down to 1
Loop j from 1 to i + 1 → print space (" ")
Loop k from 1 to n - i + 1 → print "* "
Print newline
5> End
# Conclusion:
Looping constructs in C++ simplify tasks that require repeated execution of code. Each loop type has its ideal use case depending on whether the number of repetitions is known, unknown, or requires guaranteed execution.

# 7. Program: Flyod's Series
# Aim:
Program to print a triangle pattern of consecutive numbers starting from 1. 
# Theory:
It uses nested for loops: the outer loop controls the number of rows, and the inner loop prints the numbers while incrementing a counter variable after each print.
# ALGORITHM:
1> Start
2> Declare variables:
num (int) = 1 – to hold the current number to print
rows (int) = 4 – total number of rows in the pattern
3> Use outer loop from i = 1 to rows
Controls the number of lines
4> Use inner loop from j = 1 to i
Print num followed by space
Increment num by 1 after each print
5> After inner loop, print newline (endl) to move to next row
6> End
