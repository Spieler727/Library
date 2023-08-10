#include "game.h"

Game::Game() {
    completed = false;
    rating = 0.0;
}

Game::Game(const std::string& inputted_title, const std::string& inputted_genre, double inputted_rating) {
    title = inputted_title;
    genre = inputted_genre;
    completed = false;
    rating = inputted_rating;
}

Game::Game(const std::string& inputted_title, const std::string& inputted_genre, bool completed_status, double inputted_rating) {
    title = inputted_title;
    genre = inputted_genre;
    completed = completed_status;
    rating = inputted_rating;
}

/*          Setter Functions        */
void Game::setTitle(const std::string& inputted_title){
    title = inputted_title;
}

void Game::setGenre(const std::string& inputted_genre){
    genre = inputted_genre;
}

void Game::setCompletionStatus(bool inputted_status){
    completed = inputted_status;
}
void Game::setRating(const double newRating) {
    rating = newRating;
}

/*          Getter Functions        */
std::string Game::getTitle() const {
    return title;
}

std::string Game::getGenre() const {
    return genre;
}

bool Game::getCompletionStatus() const {
    return completed;
}

double Game::getRating() const {
    return rating;
}


/*      Utility Functions     */
void Game::displayGameDetails() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Genre: " << genre << std::endl;

    /*If the completed attribute is false, return No.
    If true, return Yes. */
    std::cout << "Completed: " << (completed ? "Yes" : "No") << std::endl;

    std::cout << "Rating: " << rating << std::endl;
    
}

void Game::updateCompletionStatus(bool newStatus) {
    completed = newStatus;
}