#include "game.h"
#include "book.h"
#include "library.h"
#include <iostream>
/*
Testing on terminal:
g++ -o anyname main.cpp library.cpp game.cpp
./anyname

To display on new text file:
./anyname > anyname.txt instead of just ./anyname
*/
int main() {
    Library library;

    Game oot("Ocarina of Time", "Zelda", 9);
    oot.setCompletionStatus(true);

    Game totk("Tears of the Kingdom", "Zelda", 8.5);
    totk.setCompletionStatus(true);

    library.addGame(oot);
    library.addGame(totk);
    library.addGame("Ender Lilies", "Metroidvania", true, 10);
    library.addGame("Hollow Knight", "Metroidvania", true, 10);

    library.addGame("Spirit Tracks", "Zelda", false, 0.0);
    library.updateGameCompletionStatus("Spirit Tracks", true);
    library.updateGameRating("Spirit Tracks", 7);

    //oot.updateCompletionStatus(false);
    //oot.displayGameDetails();

    //library.displayGamesByCompletionStatus(false);
    //library.displayGamesByGenre("Zelda");
    //library.displayGamesByAscendingRating();
    //library.displayGamesByDescendingRating();
    //library.displayAllGames();
    
    Book ln1("title1", "Romance", "Light Novel", false, 8);
    Book ln2("title2", "Romance", "Light Novel", false, 8);

    library.addBook(ln1);
    library.addBook(ln2);
    library.addBook("title3", "Romance", "Manga", false, 10);
    library.updateBookCompletionStatus("title3", true);
    library.updateBookRating("title3", 9);

    library.removeItem("title1");
    library.removeItem("Spirit Tracks");
    //ln2.displayBook();
    library.displayAllBooks();
    library.displayAllGames();
    //library.displayBooksByAscendingRating();
    //library.displayBooksByDescendingRating();

    return 0;
}