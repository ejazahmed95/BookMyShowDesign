#pragma once
class Screen {
private:
	int id;
	int num_of_seats;
	std::string theater_id;
public:
	Screen(int id, std::string theater_id, int num_of_seats) : id(id), num_of_seats(num_of_seats), theater_id(theater_id) {
	};
	Screen(int id, std::string theater_id) : Screen(id, theater_id, 100) {};
	int getID() const;
	int getNumberOfSeats() const;
	virtual ~Screen() {
	};
};

