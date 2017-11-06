// File Name: Question.cpp
//
// Author: Gabriel Leitao
// Date: 11/05/2017
// Assignment Number:4
// CS 2308 Fall 2017
// Instructor: Yijuan Lu
//
// Method definitions for the Question class outlined in "Question.h"

#include <iostream>
#include <string>
#include "Question.h" 

using namespace std;


// Some default values for the answers array. It doesn't matter what we pick
string default_array[4] = {"A", "B", "C", "D"};

//***********************************************************
// Constructor: with default params and with custom params
//
// _stem: the question
// _answers[4]: an array of the 4 multiple choice options
// _key: the correct answer (A, B, C, or D)
// returns: nothing. This is just a setter function
//***********************************************************
Question::Question() {
	Question::setStem("");
	Question::setAnswers(default_array);
	Question::setKey('*');
}
Question::Question(string _stem, string _answers[4], char _key) {
	Question::setStem(_stem);
	Question::setAnswers(_answers);
	Question::setKey(_key);
}

//***********************************************************
// setStem: sets a quiz question
//
// question: the question
// returns: (void)
//***********************************************************
void Question::setStem(string question) {
    stem = question;
}

//***********************************************************
// getStem: get the quiz question
//
// returns: the quiz question
//***********************************************************
string Question::getStem() const {
	return stem;
}

//***********************************************************
// setAnswers: sets the 4 multiple choice answers
//
// _answers[]: an array with 4 elements showing the multiple choice options
// returns: (void)
//***********************************************************
void Question::setAnswers(string _answers[]) {

	for (int c = 0; c < 4; c++) {
		answers[c] = _answers[c];
	}

}

//***********************************************************
// getAnswer: gets a particular quiz question multiple choice answer
//
// i: the index of the question option: is it the 1st, 2nd, 3rd, or 4th?
// returns: the i-th multiple choice option
//***********************************************************
string Question::getAnswer(int i) const {
	return answers[i];
}

//***********************************************************
// setKey: sets the answer key
//
// _key: the correct answer key
// returns: (void)
//***********************************************************
void Question::setKey(char _key) {
	key = _key;
}

//***********************************************************
// getKey: gets the answer key
//
// returns: the answer key
//***********************************************************
char Question::getKey() const {
	return key;
}

//***********************************************************
// display: displays the particular quiz question
//
// returns: outputs the quiz question
//***********************************************************
void Question::display() const {

	// Display question:
	cout << stem << endl;
	
	// Display all multiple choice answers:
	char keyMap[4] = {'A', 'B', 'C', 'D'};
	for (int c = 0; c < 4; c++) {

		cout << keyMap[c] << ". " << Question::getAnswer(c) << "\n";

	}

	cout << endl;

}

