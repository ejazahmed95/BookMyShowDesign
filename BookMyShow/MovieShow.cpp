#include "stdafx.h"
#include "MovieShow.h"

using namespace std;

std::string MovieShow::getID() const {
	return show_id;
}

std::string MovieShow::getMovieID() const {
	return movie_id;
}

vector<int> MovieShow::bookSeats(int count, int start_seat) {
	vector<int> booked_seats(count);
	if (available_seats < count) throw BookingErrors::SEATS_NOT_AVAILABLE;
	for (int i = 0; i < count; i++) {
		if ((start_seat + i) >= num_of_seats || seats[start_seat + i]) {
			throw BookingErrors::SEATS_NOT_AVAILABLE;
		}
	}
	for (int i = 0; i < count; i++) {
		booked_seats[i] = start_seat + i;
		seats[start_seat + i] = true;
	}
	available_seats -= count;
	return booked_seats;
}

vector<int> MovieShow::bookSeats(int count) {
	vector<int> booked_seats(count);
	if (available_seats < count) throw BookingErrors::SEATS_NOT_AVAILABLE;
	for (int i = 0; i < num_of_seats; ++i) {
		booked_seats[i] = i;
		if (!seats[i]) seats[i] = true;
	}
	available_seats -= count;
	return booked_seats;
}

std::ostream &operator<<(std::ostream &out, const MovieShow &show) {
	out << "___________________" << std::endl;
	out << show.show_id << std::endl;
	out << show.movie_id << std::endl;
	out << show.show_time << std::endl;
	out << "-------------------" << std::endl;
	return out;
}
