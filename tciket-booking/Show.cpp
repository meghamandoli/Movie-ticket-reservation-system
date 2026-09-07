#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Connects a movie with a screen and its scheduled show time
class Show {
private:
    Movie* movie;
    Screen* screen;
    string startTime;
    vector<ShowSeat> showSeats;

public:
    Show(Movie* movieReference, Screen* screenReference, string time) {
        movie = movieReference;
        screen = screenReference;
        startTime = time;

        // Create show-specific seats from the screen seats
        for (int i = 0; i < screenReference->getSeats().size(); i++) {
            showSeats.push_back(ShowSeat(&screenReference->getSeats()[i]));
        }
    }

    Movie* getMovie() {
        return movie;
    }

    Screen* getScreen() {
        return screen;
    }

    string getStartTime() {
        return startTime;
    }

    vector<ShowSeat>& getShowSeats() {
        return showSeats;
    }

    ShowSeat* findSeat(string seatNumber) {
        for (int i = 0; i < showSeats.size(); i++) {
            if (showSeats[i].getSeat()->getNumber() == seatNumber)
                return &showSeats[i];
        }

        return NULL;
    }

    void showSeatsLayout() {
        for (int i = 0; i < showSeats.size(); i++) {
            cout << showSeats[i].getSeat()->getNumber();

            if (showSeats[i].isAvailable())
                cout << "[ ] ";
            else
                cout << "[X] ";
        }

        cout << endl;
    }
};