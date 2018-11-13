#pragma once
class MovieShow {
private:
	std::string show_id;
	std::string movie_id;
	std::string theater_id;
	ShowTiming show_time;
	int screen_id;
	int num_of_seats;
	int available_seats;
	bool *seats;
public:
	MovieShow(std::string show_id, std::string movie_id, std::string theater_id, int num_of_seats, int screen_id, ShowTiming show_time) :
		show_id(show_id), movie_id(movie_id), theater_id(theater_id), num_of_seats(num_of_seats), screen_id(screen_id), show_time(show_time) {
		available_seats = num_of_seats;
		seats = new bool[num_of_seats] {};
	};
	std::vector<int> bookSeats(int count, int startSeat);
	std::vector<int> bookSeats(int count);
	virtual ~MovieShow() {
		delete[] seats;
	};
};

