#pragma once
class MovieShow {
private:
	std::string show_id;
	std::string movie_id;
	std::string theater_name;
	ShowTiming show_time;
	Screen& screen;
	int screen_id;
	int num_of_seats;
	int available_seats;
	bool *seats;
public:
	MovieShow(std::string movie_id, std::string theater_name, ShowTiming show_time, Screen& screen) :
		movie_id(movie_id), theater_name(theater_name), show_time(show_time), screen(screen) {
		screen_id = screen.getID();
		show_id = theater_name + movie_id + std::to_string(screen_id + static_cast<int>(show_time));
		num_of_seats = screen.getNumberOfSeats();
		available_seats = num_of_seats;
		seats = new bool[num_of_seats] {};
		screen.addMovieShow(show_time, show_id);
	};
	std::string getID() const;
	std::string getMovieID() const;
	std::vector<int> bookSeats(int count, int startSeat);
	std::vector<int> bookSeats(int count);
	virtual ~MovieShow() {
		screen.removeMovieShow(show_time, show_id);
		delete[] seats;
	};
	friend std::ostream &operator<<(std::ostream &out, const MovieShow &show);
};

