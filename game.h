#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <vector>

class Game {
public:
    Game();
    Game(const std::string& inputted_title, const std::string& inputted_genre, double inputted_rating);
    Game(const std::string& inputted_title, const std::string& inputted_genre, bool completed_status, double inputted_rating);
    /*Reminder: const in the setter functions here, promises to not modify the string that's 
    being passed in but the functions can still modify the attributes (title, genre, status) of the class*/
    void setTitle(const std::string& inputted_title);
    void setGenre(const std::string& inputted_genre);
    void setCompletionStatus(bool inputted_status);
    void setRating(const double newRating);

    /*Reminder: const in the getter functions here, promises to not modify any of the object's attributes,
    preventing any potential changes when object is called */
    std::string getTitle() const;
    std::string getGenre() const;
    bool getCompletionStatus() const;
    double getRating() const;

    void displayGameDetails() const;
    void updateCompletionStatus(bool newStatus);

private:
    std::string title;
    std::string genre;
    bool completed;
    double rating;
};



#endif // GAME_H