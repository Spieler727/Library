#include "library.h"

Library::Library(){}

void Library::addGame(const std::string& title, const std::string& genre, bool completed, double rating) {
    Game newGame(title, genre, completed, rating);
    game_library.push_back(newGame);
}
void Library::addGame(const Game& game) {
    game_library.push_back(game);
}

void Library::updateGameCompletionStatus(const std::string& title, bool newCompletionStatus) {
    for (Game& game : game_library) {
        if (game.getTitle() == title) {
            game.setCompletionStatus(newCompletionStatus);
            break;
        }
    }
}

void Library::updateGameRating(const std::string& title, double newRating) {
    for (Game& game : game_library) {
        if (game.getTitle() == title) {
            game.setRating(newRating);
            break;
        }
    }
}

void Library::displayAllGames() const {
    std::cout << "Games in the Library:" << std::endl;
    std::cout << "------------------------" << std::endl;
    for (const Game& game : game_library) {
        game.displayGameDetails();
        std::cout << "------------------------" << std::endl;
    }
}

void Library::displayGamesByGenre(const std::string& genre) const {
    std::cout << "Games in the Library with Genre: " << genre << std::endl;
    std::cout << "------------------------" << std::endl;
    for (const Game& game : game_library) {
        if (game.getGenre() == genre) {
            game.displayGameDetails();
            std::cout << "------------------------" << std::endl;
        }
    }
}

void Library::displayGamesByCompletionStatus(bool completed) const {
    std::cout << "Games in the Library with Completion Status: " << (completed ? "Completed" : "Not Completed") << std::endl;
    std::cout << "------------------------" << std::endl;
    for (const Game& game : game_library) {
        if (game.getCompletionStatus() == completed) {
            game.displayGameDetails();
            std::cout << "------------------------" << std::endl;
        }
    }
}

void Library::displayGamesByAscendingRating() const {
    std::cout << "Games in the Library (Ascending Order by Rating):" << std::endl;
    std::cout << "------------------------" << std::endl;

    //A copy of the games_library vector is created for sorting purposes
    std::vector<Game> sortedGames = game_library;

    /* In the third parameter of the sort function, lambda function is used.
    [] is a capture clause but there is no need for any variables to be used.
    Then, take two Game objects, a & b, by reference for comparison through the implemented code
    in the body (indicated through {...}) of the lambda function. */
    std::sort(sortedGames.begin(), sortedGames.end(), [](const Game& a, const Game& b) {

        /*If the rating of Game object, a, is lower than b's rating, then return true and
        a will come before b in the newly sorted order. */
        return a.getRating() < b.getRating();
    });

    for (const Game& game : sortedGames) {
        game.displayGameDetails();
        std::cout << "------------------------" << std::endl;
    }
}

void Library::displayGamesByDescendingRating() const {
    std::cout << "Games in the Library (Descending Order by Rating):" << std::endl;
    std::cout << "------------------------" << std::endl;

    //A copy of the games_library vector is created for sorting purposes
    std::vector<Game> sortedGames = game_library;

    std::sort(sortedGames.begin(), sortedGames.end(), [](const Game& a, const Game& b) {
        return a.getRating() > b.getRating();
    });

    for (const Game& game : sortedGames) {
        game.displayGameDetails();
        std::cout << "------------------------" << std::endl;
    }
}

void Library::addBook(const Book& book) {
    book_library.push_back(book);
}
void Library::addBook(const std::string& book_title, const std::string& book_genre,
    const std::string& book_type, bool completed_status, double book_rating){

    Book newBook(book_title, book_genre, book_type, completed_status, book_rating);
    book_library.push_back(newBook);
}

void Library::displayAllBooks() const {
    std::cout << "=== All Books in Library ===" << std::endl;
        for (const Book& book : book_library) {
            book.displayBook();
            std::cout << "------------------------" << std::endl;
        }
}
void Library::displayBooksByGenre(const std::string& genre) const{
    std::cout << "=== Books by Genre === " << genre << std::endl;
    for (const Book& book : book_library) {
        if (book.getGenre() == genre) {
            book.displayBook();
            std::cout << "------------------------" << std::endl;
        }
    }
}
void Library::displayBooksByType(const std::string& type) const{
    std::cout << "=== Books by Type === " << type << std::endl;
    for (const Book& book : book_library) {
        if (book.getGenre() == type) {
            book.displayBook();
            std::cout << "------------------------" << std::endl;
        }
    }
}
void Library::displayBooksByCompletionStatus(bool completed) const{
    std::cout << "=== Books by Completion Status ===" << std::endl;
        for (const Book& book : book_library) {
            if (book.getCompletionStatus() == completed) {
                book.displayBook();
                std::cout << "------------------------" << std::endl;
            }
        }
}
void Library::displayBooksByAscendingRating() const{
    std::vector<Book> sortedBooks = book_library;
    std::sort(sortedBooks.begin(), sortedBooks.end(), [](const Book& a, const Book& b) {
        return a.getRating() < b.getRating();
    });

    std::cout << "=== Books by Ascending Rating ===" << std::endl;
    for (const Book& book : sortedBooks) {
        book.displayBook();
        std::cout << "------------------------" << std::endl;
    }
}

void Library::displayBooksByDescendingRating() const{
    std::vector<Book> sortedBooks = book_library;
    std::sort(sortedBooks.begin(), sortedBooks.end(), [](const Book& a, const Book& b) {
        return a.getRating() > b.getRating();
    });

    std::cout << "=== Books by Descending Rating ===" << std::endl;
    for (const Book& book : sortedBooks) {
        book.displayBook();
        std::cout << "------------------------" << std::endl;
    }
    
}

void Library::updateBookCompletionStatus(const std::string& title, bool newCompletionStatus) {
    for (Book& book : book_library) {
        if (book.getTitle() == title) {
            book.setCompletionStatus(newCompletionStatus);
            break;
        }
    }
}

void Library::updateBookRating(const std::string& title, double newRating) {
    for (Book& book : book_library) {
        if (book.getTitle() == title) {
            book.setRating(newRating);
            break;
        }
    }
}