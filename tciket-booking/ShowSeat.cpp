#include <iostream>
#include <string>
using namespace std;

// Maintains the availability status of a seat for a particular show
class ShowSeat {
private:
    Seat* seat;
    string status;

public:
    ShowSeat(Seat* seatReference) {
        seat = seatReference;
        status = "AVAILABLE";
    }

    Seat* getSeat() {
        return seat;
    }

    bool isAvailable() {
        return status == "AVAILABLE";
    }

    string getStatus() {
        return status;
    }

    void book() {
        status = "BOOKED";
    }

    void release() {
        status = "AVAILABLE";
    }
};
