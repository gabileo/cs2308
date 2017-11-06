// File Name: Question.h
//
// Author: Gabriel Leitao
// Date: 11/05/2017
// Assignment Number:4
// CS 2308 Fall 2017
// Instructor: Yijuan Lu
//
// The Question class definition header file

#ifndef QUESTION_H
#define QUESTION_H

#include <string>
using namespace std;

class Question {

   private:
     // question and array of 4 multipe choice answers
     string stem, answers[4];

     // Key only has a single letter, so we choose to use char
     char key;

   public:

    // Constructor with default params
     Question();
    // Constructor with parameters
     Question(string stem, string answers[4], char key);
    
     // Set and get the quiz question
     void setStem(string stem);
     string getStem() const;

     // Set and get an array of 4 possible multiple choice answers
     void setAnswers(string answers[4]);
     string getAnswer(int i) const;

     // Set and obtain the correct answer option
     void setKey(char key);
     char getKey() const;

     // Output the question
     void display() const;

};

#endif