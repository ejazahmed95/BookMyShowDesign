#pragma once
class Screen {
private:
	int id;
	int num_of_seats;
	std::string theater_id;
	std::map<ShowTiming, std::string> shows;
	void setupShows();
public:
	Screen(int id, std::string theater_id, int num_of_seats) : id(id), num_of_seats(num_of_seats), theater_id(theater_id) {
		setupShows();
	};
	Screen(int id, std::string theater_id) : Screen(id, theater_id, 100) {};
	bool getFreeSlot(OUT ShowTiming &slot);
	void addMovieShow(ShowTiming slot, std::string show_id);
	void removeMovieShow(ShowTiming slot, std::string show_id);
	int getID() const;
	int getNumberOfSeats() const;
	virtual ~Screen() {
	};
};

