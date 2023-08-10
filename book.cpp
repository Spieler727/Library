#include "book.h"

Book::Book() {

    completed = false;
    rating = 0.0;
}

Book::Book(const std::string& book_title, const std::string& book_genre,
           const std::string& book_type, bool completed_status, double book_rating){

    title = book_title;
    genre = book_genre;
    type = book_type;
    completed = completed_status;
    rating = book_rating;
}

void Book::setTitle(const std::string& book_title) {
    title = book_title;
}

void Book::setGenre(const std::string& book_genre) {
    genre = book_genre;
}

void Book::setType(const std::string& book_type) {
    type = book_type;
}

void Book::setCompletionStatus(bool status) {
    completed = status;
}

void Book::setRating(double book_rating) {
    rating = book_rating;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getGenre() const {
    return genre;
}

std::string Book::getType() const {
    return type;
}

bool Book::getCompletionStatus() const {
    return completed;
}

double Book::getRating() const {
    return rating;
}

void Book::displayBook() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Genre: " << genre << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Completion Status: " << (completed ? "Completed" : "Not Completed") << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}