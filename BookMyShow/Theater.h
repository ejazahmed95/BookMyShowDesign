#pragma once

// Each theater has multiple screens, each screen 
class Theater {
private:
	std::string id;
	std::string name;
	std::vector<Screen*> screens;
	std::vector<MovieShow*> shows;
	static int num_of_theaters;
	int current_day;
public:
	Theater(std::string id, std::string name, int num_of_screens) :
		id(id), name(name) {
		for (int i = 0; i < num_of_screens; i++) {
			screens.push_back(new Screen(i, id));
		}
		current_day = START_DAY;
		++num_of_theaters;
	};
	Theater() : Theater("T" + std::to_string(++num_of_theaters), "Theater" + std::to_string(num_of_theaters), 4) {};
	void addNewMovie(Movie &movie, int min_shows_in_a_day);
	void removeMovie(Movie &movie);
	void displayShows(Movie &movie) const;
	void displayAllShows() const;
	//Ticket bookTickets(std::string show_id, int count, int start_seat);
	virtual ~Theater() {
		for (auto show : shows) {
			delete show;
		}
		for (auto screen : screens) {
			delete screen;
		}
	};
};

