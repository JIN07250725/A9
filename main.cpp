// ------------- FILE HEADER -------------
// Author: Yusong Jin
// Assignment: 9
// Date: August 26
// Description: Positive Integer Statistics Calculator
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 9
// Participation: 100%
// Challenge: 100%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: yes
// B. OUTPUT [yes/no]: yes
// C. CALCULATIONS [yes/no]: yes
// D. LOGIC and ALGORITHMS [yes/no]: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <climits>
using namespace std;

// Function prototypes
void welcome();
void goodbye();
void getInput(int &num);
void doStats(int num);

int main() {
    welcome();
    
    int numIntegers;
    cout << "How many positive integers do you want to process? "; 
    getInput(numIntegers);
    
    if (numIntegers <= 0) {
        cout << "No integers were entered." << endl;
    } else {
        doStats(numIntegers);
    }
    
    goodbye();
    return 0;
}

void welcome() {
    cout << "Welcome to my Final Exam Practice." << endl;
}

void goodbye() {
    cout << "Thank you for using my program." << endl;
}

void getInput(int &num) {
    cin >> num;
}

void doStats(int num) {
    int currentNum;
    int minVal = INT_MAX;    // Initialize to maximum possible integer
    int maxVal = INT_MIN;    // Initialize to minimum possible integer
    int minPos = 0;          // Position of minimum value
    int maxPos = 0;          // Position of maximum value
    
    for (int i = 1; i <= num; i++) {
        // Input validation loop
        while (true) {
            cout << "Enter integer #" << i << ": ";
            cin >> currentNum;
            
            if (currentNum <= 0) {
                cout << "Enter a positive integer!" << endl;
            } else {
                break;  // Valid input, exit inner loop
            }
        }
        
        // Update minimum value and its position
        if (currentNum < minVal) {
            minVal = currentNum;
            minPos = i;
        }
        
        // Update maximum value and its position
        if (currentNum > maxVal) {
            maxVal = currentNum;
            maxPos = i;
        }
    }
    
    // Output results
    cout << "The minimum number entered was " << minVal 
         << " entered in position " << minPos << "." << endl;
    cout << "The maximum number entered was " << maxVal 
         << " entered in position " << maxPos << "." << endl;
}



// ------------- DESIGN -------------
/* 
Program Name: Find Min and Max using Functions

Program Description: Positive Integer Statistics Calculator

Design:
A. INPUT
Define the input variables including name data type. 
int numIntegers;
int currentNum;

B. OUTPUT
Define the output variables including data types. 
int minVal;
int maxVal;
int minPos;
int maxPos;
string Welcome message;
string Error messages;
string Goodbye message;

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
// Minimum value detection:
IF currentNum < minVal THEN
    minVal = currentNum
    minPos = current_position

// Maximum value detection:  
IF currentNum > maxVal THEN
    maxVal = currentNum
    maxPos = current_position

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 

BEGIN
    // Function prototypes
    FUNCTION welcome(): VOID
    FUNCTION goodbye(): VOID
    FUNCTION getInput(REF num: INT): VOID
    FUNCTION doStats(num: INT): VOID

FUNCTION main():
    CALL welcome()
    
    DECLARE numIntegers: INT
    PRINT "How many positive integers do you want to process? "
    CALL getInput(numIntegers)
    
    IF numIntegers <= 0 THEN
        PRINT "No integers were entered."
    ELSE
        CALL doStats(numIntegers)
    END IF
    
    CALL goodbye()
    RETURN 0
END FUNCTION

FUNCTION welcome():
    PRINT "Welcome to my Final Exam Practice."
END FUNCTION

FUNCTION goodbye():
    PRINT "Thank you for using my program."
END FUNCTION

FUNCTION getInput(REF num: INT): VOID
    READ num  // No validation or output in this function
END FUNCTION

FUNCTION doStats(num: INT): VOID
    DECLARE currentNum, minVal, maxVal, minPos, maxPos: INT
    INITIALIZE minVal = VERY_LARGE_NUMBER
    INITIALIZE maxVal = VERY_SMALL_NUMBER
    
    FOR i FROM 1 TO num
        DO
            PRINT "Enter integer #" + i + ": "
            READ currentNum
            
            IF currentNum <= 0 THEN
                PRINT "Enter a positive integer!"
            ELSE
                BREAK  // Valid input, exit inner loop
            END IF
        WHILE true
        
        // Update minimum value and position
        IF currentNum < minVal THEN
            minVal = currentNum
            minPos = i
        END IF
        
        // Update maximum value and position
        IF currentNum > maxVal THEN
            maxVal = currentNum
            maxPos = i
        END IF
    END FOR
    
    PRINT "The minimum number entered was " + minVal + " entered in position " + minPos + "."
    PRINT "The maximum number entered was " + maxVal + " entered in position " + maxPos + "."
END FUNCTION
END



SAMPLE RUNS
Copy from assignment document.
Welcome to my Final Exam Practice.
How many positive integers do you want to process? 0
No integers were entered.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? -9
No integers were entered.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? 3
Enter integer #1: 1
Enter integer #2: 2
Enter integer #3: 3
The minimum number entered was 1 entered in position 1.
The maximum number entered was 3 entered in position 3.
Thank you for using my program.


How many positive integers do you want to process? 4
Enter integer #1: 2
Enter integer #2: 2
Enter integer #3: 2
Enter integer #4: 2
The minimum number entered was 2 entered in position 1.
The maximum number entered was 2 entered in position 1.
Thank you for using my program.


How many positive integers do you want to process? 4
Enter integer #1: 10
Enter integer #2: -9
Enter a positive integer!
Enter integer #2: 0
Enter a positive integer!
Enter integer #2: -3
Enter a positive integer!
Enter integer #2: 4
Enter integer #3: 3
Enter integer #4: -9
Enter a positive integer!
Enter integer #4: 5
The minimum number entered was 3 entered in position 3.
The maximum number entered was 10 entered in position 1.
Thank you for using my program.
*/