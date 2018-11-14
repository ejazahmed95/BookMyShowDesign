#include "stdafx.h"
#include "Theater.h"

int Theater::num_of_theaters = 0;

using namespace std;

void Theater::addNewMovie(Movie & movie, int min_shows_in_a_day) {
	if (shows.size() + min_shows_in_a_day > screens.size() * 4) {
		throw TheaterErrors::SLOTS_NOT_AVAILABLE;
	}
	int shows_added = 0;
	int screen_id = 0;
	ShowTiming slot;
	while (shows_added < min_shows_in_a_day && screen_id < screens.size()) {
		if (screens[screen_id]->getFreeSlot(slot)) {
			shows.push_back(new MovieShow(movie.getID(), id, slot, *screens[screen_id]));
			++shows_added;
		}
		else {
			++screen_id;
		}
	}
}

void Theater::removeMovie(Movie & movie) {
	string movie_id = movie.getID();
	// TODO: If erasing is not linear, swap element with last element and pop_back()
	for (auto it = shows.begin(); it != shows.end(); ++it) {
		(*it)->getMovieID() == movie_id;
		delete *it;
		shows.erase(it);
	}
}

void Theater::displayShows(Movie & movie) const {
	string movie_id = movie.getID();
	for (auto show : shows) {
		if (show->getMovieID() == movie_id) {
			cout << *show << endl;
		}
	}
}

void Theater::displayAllShows() const {
	for (auto show : shows) {
		cout << *show << endl;
	}
}

