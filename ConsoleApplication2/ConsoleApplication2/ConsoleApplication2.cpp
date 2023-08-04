#include <iostream>
using namespace std;
int main()
{
    //1-Write a program that takes an integer from user then print it
    cout << endl << "1-__________________________________________________________________________" << endl;
    int num;
    cout << "enter num : ";
    cin >> num;
    cout << num;

    cout << endl << "2-__________________________________________________________________________" << endl;

    //2-write a program that ask the user to insert 3 numbers then print the sum
    int x, y, z;
    cout << "enter nums : ";
    cin >> x >> y >> z;
    cout << (x + y + z);

    cout << endl << "3-__________________________________________________________________________" << endl;

    //3-write a program that ask the user to insert 3 integers then print the average as decimal number
    int a, b, c;
    cout << "Please enter first number: ";
    cin >> a;

    cout << "Please enter second number: ";
    cin >> b;

    cout << "Please enter third number: ";
    cin >> c;

    double average = (a + b + c) / 3.0;
    cout << average;

    cout << endl << "4-__________________________________________________________________________" << endl;

    //4-Write a program to compute the perimeter and area of a rectangle. Your code should ask the user to insert the width and the height
    float width, hight;
    cout << "please enter rectangle width : ";
    cin >> width;
    cout << "please enter rectangle hight : ";
    cin >> hight;
    cout << "the area of rectangle is : " << (width * hight) << endl <<
        "the perimeter of rectangle is : " << (width + hight) * 2;

    cout << endl << "5-__________________________________________________________________________" << endl;

    //5-Write a program to calculate the sum of the digits of a 3-digit number.
    int X, Y, Z;
    cin >> X >> Y >> Z;
    cout << (X + Y + Z);

    cout << endl << "6-__________________________________________________________________________" << endl;

    //6- Write a program to convert a given integer(in seconds) to hours
    int sec, h, m, s;
    cout << "pls enter time in seconds : ";
    cin >> sec;
    h = (sec / 3600);
    //convert hours to second then subtract
    m = (sec - (3600 * h)) / 60;
    //convert hours&minutes to second then subtract
    s = (sec - (3600 * h) - (m * 60));
    cout << " H:M:S - " << h << ":" << m << ":" << s;

    cout << endl << "7-__________________________________________________________________________" << endl;

    //-7 Write a program that allows the user to insert an integer then print negative if it is a negative number otherwise print positive
    int NUM;
    cout << "enter your num";
    cin >> NUM;
    if (NUM < 0) {
        cout << "ngative";
    }
    else {
        cout << "positive";
    }

    cout << endl << "8-__________________________________________________________________________" << endl;

    //8- Write a program to read any digit from 1 to 5, display it as a word
    int number;
    cout << "enter num between {1:5} : ";
    cin >> number;

    if (number == 1) {
        cout << "one";
    }
    else if (number == 2) {
        cout << "two";
    }
    else if (number == 3) {
        cout << "three";
    }
    else if (number == 4) {
        cout << "four";
    }
    else if (number == 5) {
        cout << "five";
    }
    else {
        cout << "please enter num between {1:5}";
    }

    cout << endl << "9-__________________________________________" << endl;

    //9-Write a program that reads 5 numbers and sum of all odd values between
    int odd_num[5], sum = 0;
    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> odd_num[i];
        if (odd_num[i] > 0 && odd_num[i] % 2 != 0) {
            sum += odd_num[i];
        }
    }

    cout << "The sum of odd numbers is: " << sum;

    cout << endl << "10-__________________________________________________________________________" << endl;
    //10-Write a program that reads a year then check if a year is a leap year or not: a leap year is divisible by 400 or 4 only
    int year;
    cout << "please enter the year : ";
    cin >> year;
    if (year % 4 == 0 || year % 400 == 0) {
        cout << "the year of " << year << " is a leap year";
    }
    else {
        cout << " the year of " << year << "is anormal year";
    }

    cout << endl << "11-__________________________________________" << endl;

    //11- take the birth year and check if he is above 18 or not
    int birth_year;
    cout << " enter your birth year : ";
    cin >> birth_year;
    if (2023 - birth_year > 18) {
        cout << "you are above 18 years old";
    }
    else if (2023 - birth_year < 18) {
        cout << "you are under 18 years old";
    }
    else {
        cout << "you are 18 years old";
    }

    cout << endl << "12-__________________________________________" << endl;
    //12-Ask the user to enter marks and print the corresponding grade
    float marks;
    cout << " inter your marks : ";
    cin >> marks;
    if (marks < 25 && marks >= 0) {
        cout << "your grade is 'F'";
    }
    else if (marks >= 25 && marks < 45) {
        cout << "your grade is 'E'";
    }
    else if (marks >= 45 && marks < 50) {
        cout << "your grade is 'D'";
    }
    else if (marks >= 50 && marks < 60) {
        cout << "your grade is 'C'";
    }
    else if (marks >= 60 && marks < 80) {
        cout << "your grade is 'B'";
    }
    else if (marks >= 80 && marks < 100) {
        cout << "your grade is 'A'";
    }
    else {
        cout << "enter num between {1:100}";
    }

    cout << endl << "13-__________________________________________" << endl;

    //-13 Search for Switch Case and use it to write a program that reads an integer between 1 and 12 and print the month of the year in English.
    int month;
    cout << "Insert a number between 1 to 12 to get the month name: ";
    cin >> month;
    switch (month) {
    case 1:
        cout << "january";
        break;
    case 2:
        cout << "febraury";
        break;
    case 3:
        cout << "march";
        break;
    case 4:
        cout << "april";
        break;
    case 5:
        cout << "may";
        break;
    case 6:
        cout << "july";
        break;
    case 7:
        cout << "june";
        break;
    case 8:
        cout << "augest";
        break;
    case 9:
        cout << "september";
        break;
    case 10:
        cout << "october";
        break;
    case 11:
        cout << "november";
        break;
    case 12:
        cout << "december";
        break;
    default:
        cout << "enter num between {1:12}";
        break;
    }
    cout << endl << "14-__________________________________________" << endl;
    //14-Search for ternary operator and use it to write a program that allows the user to insert integer number then Even or Odd
    int Number;
    cout << "14- enter the number : ";
    cin >> Number;
    string result = (Number % 2 == 0) ? "even" : "odd";
    cout << result;

    cout << endl << "15-__________________________________________" << endl;
    //15-.Write a program that take character from user then if it is vowel chars (a,e,I,o,u) then print vowel otherwise print consonant
    char character;
    cout << " enter character : ";
    cin >> character;
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'
        || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        cout << "vowel character";
    }
    else {
        cout << "constant character";
    }

    cout << endl << "16-__________________________________________" << endl;
    //16-.Write a program that take 3 integer from user then print the max element and the min element.
    int NUM1, NUM2, NUM3;
    cout << "enter 3 integer : ";
    cin >> NUM1 >> NUM2 >> NUM3;
    if (NUM1 > NUM2 && NUM1 > NUM3) {
        cout << NUM1 << " is the max num of them";
    }
    else if (NUM2 > NUM1 && NUM2 > NUM3) {
        cout << NUM2 << " is the max num of them";
    }
    else if (NUM3 > NUM1 && NUM3 > NUM2) {
        cout << NUM3 << " is the max num of them";
    }
    else {
        cout << "enter numbers not equal";
    }

    return 0;
}
