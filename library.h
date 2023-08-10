#ifndef LIBRARY_H
#define LIBRARY_H

#include "game.h"
#include "book.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Library {
public:
    Library();

    void addGame(const std::string& title, const std::string& genre,
        bool completed, double inputted_rating);
    void addGame(const Game& game);

    void updateGameCompletionStatus(const std::string& title, bool newCompletionStatus);
    void updateGameRating(const std::string& title, double newRating);

    void displayAllGames() const;
    void displayGamesByGenre(const std::string& genre) const;
    void displayGamesByCompletionStatus(bool completed) const;
    void displayGamesByAscendingRating() const;
    void displayGamesByDescendingRating() const;

    void addBook(const Book& book);
    void addBook(const std::string& book_title, const std::string& book_genre,
        const std::string& book_type, bool completed_status, double book_rating);


    void updateBookCompletionStatus(const std::string& title, bool newCompletionStatus);
    void updateBookRating(const std::string& title, double newRating);

    void displayAllBooks() const;
    void displayBooksByGenre(const std::string& genre) const;
    void displayBooksByType(const std::string& type) const;
    void displayBooksByCompletionStatus(bool completed) const;
    void displayBooksByAscendingRating() const;
    void displayBooksByDescendingRating() const;

private:
    std::vector<Game> game_library;
    std::vector<Book> book_library;
};



#endif // LIBRARY_H