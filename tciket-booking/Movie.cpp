#include <iostream>
#include <string>
using namespace std;

// Stores basic information about a movie
class Movie {
private:
    string title;
    string language;
    int duration;

public:
    Movie(string movieTitle, string movieLanguage, int movieDuration) {
        title = movieTitle;
        language = movieLanguage;
        duration = movieDuration;
    }

    string getTitle() {
        return title;
    }

    string getLanguage() {
        return language;
    }

    int getDuration() {
        return duration;
    }
};
