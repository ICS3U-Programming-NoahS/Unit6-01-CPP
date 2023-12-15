// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Dec. 14th, 2023
// This program generates 10 random numbers
// then finds and displays the average of those numbers
#include <iostream>
#include <random>

int main() {
    // Declare constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // Initialize the sum
    int sum = 0;

    // Initialize empty list
    int listOfInt[10];

    // Providing a seed value
    srand(static_cast<unsigned>(time(NULL)));

    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        listOfInt[counter] = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
        sum = sum + listOfInt[counter];
        std::cout << listOfInt[counter] << " added to the list at position ";
        std::cout << counter << "." << std::endl;
    }

    // Find the average
    float average = sum / MAX_ARRAY_SIZE;

    // Display average
    std::cout << "The average is " << average << "." << std::endl;
}
