# Working with Constants

Named constant variables can be used that are defined with the `const` modifier and normally have an upper-case identifier (name). Named constants are important because they help us avoid using "magic numbers" in our code that may be confusing and error prone. Named constants are preferred over normal variables because their values cannot be accidentally changed after they are initialized.

The code in main.cpp is similar to Lab 4.1, except now the variables for the number of "at bats" and hits are changed to named constants. Examine and run the code to verify it works as expected.

Now, modify the batting average program to prompt the user for the number of at bats and the number of hits using `cin` statements. First, try to store the inputs using the named constants like this code:

const int HITS = 123;
cout << "Enter the number of hits:\n";
cin >> HITS;

Does it run properly? Why not? Fix the program so it runs as expected. Because we are now having the user input the values, we do not need to use named constants and can instead use normal variables to hold the input values.

*Sample run:*

Enter the number of at bats:
**421**
Enter the number of hits:
**123**
The batting average is 0.292162 


