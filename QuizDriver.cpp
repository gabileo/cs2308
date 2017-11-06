// File Name: QuizDriver.cpp
//
// Author: Gabriel Leitao
// Date: 11/05/2017
// Assignment Number: 4
// CS 2308 Fall 2017
// Instructor: Yijuan Lu
//
// Driver to test the Question class.
// Outputs all 5 multiple choice questions, and an answer key at the bottom

#include <iostream>
#include <iomanip>
using namespace std;

#include "Question.h"

int main()
{
    
	const int numQuestions = 5;

    // All 5 questions:
    string q1Stem = "What name is given to half of a Byte (4 bits)?";
	string q1Answers [] = {"Nibble","Ort","Scrap","Snippet"}; //answer A
	string q2Stem = "Which country is home to the Kangaroo?";
	string q2Answers [] = {"China","India","Mexico","Australia"}; //answer D
	string q3Stem = "What do you use to measure an angle?";
	string q3Answers [] = {"Compass","Protractor","Ruler","T-Square"}; //ans B
	string q4Stem = 
	"The Great Sphinx has the head of a human and the body of a what?";
	string q4Answers [] = {"Camel","Eagle","Lion","Alligator"}; //answer C
	string q5Stem = 
	"What is the flat rubber disc used in a game of ice hockey?";
	string q5Answers [] = {"Birdie","Puck","Dart","Tile"}; //answer B

	// Initialize array of quiz questions:
    Question QuizQuestion[numQuestions] = {
    	Question(q1Stem, q1Answers, 'A'),
    	Question(q2Stem, q2Answers, 'D'),
    	Question(q3Stem, q3Answers, 'B'),
    	Question(q4Stem, q4Answers, 'C'),
    	Question(q5Stem, q5Answers, 'B'),
    };

    // Variable containing the Answer Key: 
    string AnswerKey = "Answers:\n";

    for (int c = 0; c < numQuestions; c++) {

    	// Output the number of the question first, followed by "."
    	cout << c+1 << ". ";
    	QuizQuestion[c].display();

    	// Save to answer key, with a whitespace between each
    	// Ignore whitespace if it's the last question
    	AnswerKey += QuizQuestion[c].getKey();
    	if (c+1 < numQuestions) {
    		AnswerKey += " ";
    	}
    
    }

    cout << AnswerKey << endl;
    return 0;
    
}