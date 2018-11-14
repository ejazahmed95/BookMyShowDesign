#pragma once

class Ticket {
	std::string theater_name = "";
	int date = 0;
	ShowTiming time;
	int screen_id;
	std::vector<int> ticket_numbers;
public:
	Ticket(std::string theater_name, int date, ShowTiming time, int screen_id) {};
	virtual ~Ticket();
	friend std::ostream &operator<<(std::ostream &out, const Ticket &ticket);
};