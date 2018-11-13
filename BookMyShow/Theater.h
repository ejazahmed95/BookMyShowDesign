#pragma once

// Each theater has multiple screens, each screen 
class Theater {
private:
	std::string id;
	std::string name;
	std::vector<Screen> screens;
	std::vector<MovieShow> shows;
	int current_day = START_DAY;
public:
	Theater(std::string id, std::string name, int num_of_screens) :
		id(id), name(name) {
		for (int i = 0; i < num_of_screens; i++) {
			screens.push_back(Screen(i, id));
		}
	};
	void addMovie(Movie &movie, int min_shows_in_a_day);
	void removeMovie(Movie &movie);
	void displayShows(Movie &movie) const;
	void displayAllShows() const;
	virtual ~Theater();
};

