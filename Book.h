// Created by Ivan on 7.1.2024 г..

#ifndef CLASSANDOBJECTS_BOOK_H
#define CLASSANDOBJECTS_BOOK_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
public:
    Book(string, string, int, double); // Describing constructor prototypes: the name and type of the return value
    void setBookName(string);
    void setAuthor(string);
    void setPages(int);
    void setPrice(double);

    void displayInfo();

    string getBookNameAndAuthor();
    int getPages();
    double getPrice();

private:
    string bookName; // Changed from 'title' to 'bookName'
    string author;
    int pages;
    double price;
};

#endif //CLASSANDOBJECTS_BOOK_H
