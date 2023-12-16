# CS210Proj2
Project 2, CS 210 SNHU

The purpose of this project was to create a program that would calculate the details
of an investment given user input. Essentially, it would prompt the user to enter an
initial investment, monthly deposit amount, annual interest rate, and total number of years
that the investment would be given to grow. Using these numbers, it would compund the interest
monthly and give the user a report for two scenarios: one for if they were to include a monthly
deposit, and one without.

One thing that I feel I did particularly well was my calculation for the monthly compounding
interest. It took me several tries to figure out how to come out with the correct numbers, as
in my first few attempts I was only calculating the interest added at the end of each year rather
than at the end of each month. Eventually, I decided to use nested for loops, one for the years 
of the deposit and one for the months. After the loop that adds monthly iterates 12 times, the 
current amounts are printed as a yearly report before the monthly loop resets with the next year.

The first enhancement I would make to my code would be to format the output in a more visually
pleasing way. I believe that as is, it serves the purposes it was created for, but I would have
liked to make the UI more appealing.

For me, the most challenging parts of writing this code were the calculations of monthly interest
(which are detailed above) and the linking of the header and cpp files. Over the course of writing
this code, I learned of an easier way to include header files (#pragma once). Knowing this new
method helped me to avoid the confusion that I've had with traditional C++ guards up to this 
point. Because of this, I learned that one of the most important resources for learning new
methods in coding is the official documentation of a language, and trying to keep up to date
with any changes that are made in newer versions.

I think this project helped me to feel more comfortable with declaring and defining classes, as
this was the first assignment in which we had to do so on our own. Being comfortable with this 
was extremely helpful for approaching project 3.

Using in-line comments helped me greatly in making this program maintainable, readable, and
adaptable. It made it significantly easier to navigate through and make tweaks within the code.
Additionally, using classes was a great help with organization. It allowed me to keep my main 
file as short as possible, and also helped with navigation and ease of understanding.
