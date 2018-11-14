#include "stdafx.h"
#include "Screen.h"

using namespace std;

void Screen::setupShows() {
	shows[ShowTiming::MORNING] = "";
	shows[ShowTiming::MATINEE] = "";
	shows[ShowTiming::FIRST_SHOW] = "";
	shows[ShowTiming::SECOND_SHOW] = "";
}

bool Screen::getFreeSlot(OUT ShowTiming & slot) {
	for (auto show : shows) {
		if (show.second.empty()) {
			slot = show.first;
			return true;
		}
	}
	return false;
}

void Screen::addMovieShow(ShowTiming slot, std::string show_id) {
	if (!shows[slot].empty()) {
		throw TheaterErrors::SCREEN_ALREADY_IN_USE;
	}
	shows[slot] = show_id;
}

void Screen::removeMovieShow(ShowTiming slot, std::string show_id) {
	if (shows[slot].empty()) {
		throw TheaterErrors::SHOW_ALREADY_REMOVED;
	}
	shows[slot] = show_id;
}

int Screen::getID() const {
	return id;
}

int Screen::getNumberOfSeats() const {
	return num_of_seats;
}
