#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>

class Book {
public:
    Book();
    Book(const std::string& book_title, const std::string& book_genre,
        const std::string& book_type, bool completed_status, double book_rating);
    
    void setTitle(const std::string& book_title);
    void setGenre(const std::string& book_genre);
    void setType(const std::string& book_type);
    void setRating(double book_rating);
    void setCompletionStatus(bool status);

    std::string getTitle() const;
    std::string getGenre() const;
    std::string getType() const;
    double getRating() const;
    bool getCompletionStatus() const;

    void displayBook() const;

private:
    std::string title;
    std::string genre;
    std::string type;
    bool completed;
    double rating;
};



#endif // BOOK_H