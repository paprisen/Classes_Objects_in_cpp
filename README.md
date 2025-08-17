# Classes_Objects_in_cpp

Aim: To study and implement Object-Oriented Programming (OOP) concepts in C++.

Tools: VS Code.

# Theory:

Object-Oriented Programming System (OOPS) in C++ is a programming approach based on the concept of objects, which combine data (attributes) and functions (methods) into a single unit called a class. It allows developers to build programs using real-world models, promoting modularity, code reusability, data hiding, and abstraction.

The key features of OOPS are:

1. Encapsulation – Wrapping data and functions into a single unit (class) to control access and maintain security.

2. Abstraction – Exposing only the necessary information to the outside world while hiding internal complexities.

3. Inheritance – Enabling new classes to reuse, extend, or modify the features of existing classes.

4. Polymorphism – Allowing functions or operators to behave differently based on the type of object.

5. Modularity – Breaking the program into smaller, independent parts for better organization.

6. Reusability – Classes and methods can be reused in multiple programs without rewriting code.

## Program-1 Student Information:

This program defines a Student class with attributes such as name, branch, subject, year, and result. It creates objects to store and display information for multiple students, showing how classes can represent real-world entities. The attributes of each student are accessed and printed using the dot (.) operator, which connects object instances to their class members.

## Algorithm:

1. Start.

2. Define a class Student with public variables: name, branch, subject, year, and result.

3. In the main() function:

4. Create objects s1 of class Student.

5. Assign hardcoded values to each data member of s1.

6. Display all details of s1 on the console.

7. Stop.

## Program-2 Car Details:

This program uses a Car class to store attributes like brand, model, price, year, and mileage. Objects are created for multiple cars, and user input is taken to fill their details. It shows how classes can be used to group related information together and create different objects with their own set of values.

## Algorithm:

1. Start.

2. Define a class Car with public data members: brand, model, price, year, mileage.

3. In main(), create an object c1 of class Car.

4. Prompt the user to enter brand, model, year, and cost for c1 and store them.

5. Display the details of c1.

6. Stop.

## Program-3 Rectangle Area Calculation:

This program defines a Rectangle class with attributes length and width, and a method area() to calculate area. It checks whether a rectangle is also a square and compares areas of two rectangles, demonstrating decision-making with class methods.

## Algorithm:

1. Start

2. Define a class Rect with:

* Public variables length and width

* A public member function area(length, width) that returns length × width

3. In main(), create an object r1 of class Rect.

4. Prompt the user to enter length and store it in r1.length.

5. Prompt the user to enter width and store it in r1.width.

6. Call r1.area(r1.length, r1.width) and store/print the result.

7. Display the calculated area.

 8. Stop.

## Program-4 Calculator:

This program demonstrates Object-Oriented Programming in C++ by creating a class Calc that performs basic arithmetic operations. The class has two public float variables num1 and num2 for storing input values, and four member functions — add(), sub(), multi(), and div() — for performing addition, subtraction, multiplication, and division respectively. In main(), an object c1 is created, and the user is prompted to enter two numbers. Each arithmetic operation is then performed by calling the respective member functions with the entered values. The results are displayed on the screen.

## Algorithm:

1. Start

2. Define a class Calc with:

3. Two float variables: num1, num2

4. add(num1, num2) → returns sum

5. sub(num1, num2) → returns difference

6. multi(num1, num2) → returns product

7. div(num1, num2) → returns quotient

8. In main(), create an object c1 of class Calc.

9. Prompt the user to enter the first number and store it in c1.num1.

10. Prompt the user to enter the second number and store it in c1.num2.

11. Call the add() function and display the result.

12. Call the sub() function and display the result.

13. Call the multi() function and display the result.

14. Call the div() function and display the result.

15. Stop

## Program-5 Cube Volume (Function inside & outside a class):

This program demonstrates how to create a class and define member functions in C++. The Cube class has a public data member side to store the cube's side length, and two functions to calculate its volume. The first function, vol_in(), is defined inside the class, while the second, vol_out(), is declared inside but defined outside the class using the scope resolution operator ::. Both use the formula: side × side × side. In main(), the user inputs the side length, and the program calculates and displays the volume using both methods. This example shows the difference between inline (inside the class) and outside-class function definitions in C++.

## Algorithm:

1. Start.

2. Define Cube class with attribute side.

3. Define volume() method inside the class.

4. Define vol() method outside the class.

5. Create two cube objects.

6. Input side lengths.

7. Calculate and print volumes using both methods.

8. Stop.

## Program-6 Cube Volume Calculation:

This program shows the use of access specifiers. The attribute side is private, so it cannot be accessed directly from outside the class. Instead, a public method volume() is used to calculate and return the cube’s volume. If we try to access side separately in main, it will give an error because private data can only be used inside the class methods.

## Algorithm:

1. Start.

2. Define Cube class with private attribute side and public method volume().

3. Create an object of Cube.

4. Call volume() method to calculate cube volume.

5. Print result.

6. Stop.

# Conclusion:
We learned how C++ programs can be structured using classes and objects.
Student & Car classes showed how to store and display related information.
Rectangle & Calculator classes used member functions to perform calculations and comparisons.
Types of Methods explained how functions can be written inside and outside a class.
Access Specifiers showed how some data can be kept private and accessed only through functions.
Together, these programs give a basic understanding of how classes and objects work in C++.
