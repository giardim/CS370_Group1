# Data Structure Visualizer

This project will help students in the Data Structures and Algorithms class at SUNY Poly.

### Project Goals

* A header file for students to include in their C++ programs
* A function to extract the data structure
* A function to convert the data structure into a format which can be loaded into a local webpage
* Abstract as much complexity from the user as possible

### Status

Currently we are exporting data into a CSV file. Our webpage is using p5.js

Browsers prevent loading files from disk as a security feature. To circumvent this we will save our 
CSV data as javascript variables in a .js file. For example:

`
var step1 = "1,5,2,4"
var step2 = "1,2,5,4"
var step3 = "1,2,4,5"

`
