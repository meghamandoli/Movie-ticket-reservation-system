#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Represents the cinema and the screens available in it
class Cinema {
private:
    string name;
    vector<Screen> screens;

public:
    Cinema(string cinemaName) {
        name = cinemaName;
    }

    void addScreen(Screen screen) {
        screens.push_back(screen);
    }

    vector<Screen>& getScreens() {
        return screens;
    }

    string getName() {
        return name;
    }
   
};

