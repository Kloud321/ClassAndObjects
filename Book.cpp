// Created by Ivan on 7.1.2024 г..

#include "Book.h"
#include <iostream>  // Don't forget to include necessary headers

// Constructor
Book::Book(string bookName, string author, int pages, double price)
{
    this->bookName = bookName;
    this->author = author;
    this->pages = pages;
    this->price = price;
}

// Setter for the BookName
void Book::setBookName(string bookName) {
    this->bookName = bookName;
}

// Setter for the author
void Book::setAuthor(string author) {
    this->author = author;
}

// Setter for the pages
void Book::setPages(int pages) {
    this->pages = pages;
}

// Setter for the price
void Book::setPrice(double price) {
    this->price = price;
}

// Getter for the full name
string Book::getBookNameAndAuthor() {
    return bookName + ", " + author;
}

// Getter for the pages
int Book::getPages() {
    return pages;
}

// Getter for the price
double Book::getPrice() {
    return price;
}



// Display information about the book
void Book::displayInfo() {
    cout << "Book Name and Author: " << getBookNameAndAuthor() << endl;
    cout << "Pages: " << pages << endl;
    cout << "Price: " << price << endl;  // Fixed typo in variable name (preice to price)
}
