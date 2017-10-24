Write a C++ program that
– reads all numbers from a file data.txt;
– computes the 25 % percentile, the 50 % percentile, and the 75 % percentile of these numbers; and
– outputs the computed percentiles to the console.
The x % percentile of a set S is the smallest element e in S such that at least x % of the elements in S
(including e) are smaller than or equal to e.
Your program should be in a single file percentile.cpp. It should contain a function named percentile
which takes a percentage-value as input and returns the corresponding percentile. Do not use any
third party libraries.
The numbers in the file data.txt are all integers. Each line of the file contains a single number. The
first number of the file states how many numbers follow, it should be ignored when computing the
percentiles. You can read the numbers using the code below.

Bonus. Write the numbers in ascending order into a file dataSorted.txt. The numbers should be
in a single line separated by a single space character. The first number in the file states how many
numbers follow.

#output

![alt text](https://github.com/pfdinc/sorting_and_percentile/blob/master/Screen%20Shot%202017-10-22%20at%208.26.04%20AM.png)

#data.txt


![alt text](https://github.com/pfdinc/sorting_and_percentile/blob/master/Screen%20Shot%202017-10-22%20at%2010.04.59%20AM.png )


#datasorted.txt

![alt text](https://github.com/pfdinc/sorting_and_percentile/blob/master/Screen%20Shot%202017-10-22%20at%2010.05.14%20AM.png )

