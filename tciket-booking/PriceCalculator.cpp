#include <iostream>
#include <vector>
using namespace std;

// Calculates the total ticket price for selected seats
class PriceCalculator {
public:
    double calculateTotal(vector<ShowSeat*> selectedSeats) {
        double total = 0;

        for (int i = 0; i < selectedSeats.size(); i++) {
            total = total + selectedSeats[i]->getSeat()->getPrice();
        }

        return total;
    }
};
