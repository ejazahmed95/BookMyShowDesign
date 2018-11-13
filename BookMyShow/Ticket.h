#pragma once

class Ticket {
	std::string theater_name = "";
	int date = 0;
	ShowTiming time;
	int screen_id;
	std::vector<int> ticket_numbers;
public:
	Ticket(std::string theater_name, int date, ShowTiming time, );
	virtual ~Ticket();
	friend std::ostream &operator<<(std::ostream &out, const Ticket &ticket);
};

std::ostream &operator<<(std::ostream &out, const Ticket &ticket) {
	out << ticket.theater_name << " | Date: " << ticket.date << " | Time: " << ticket.time << std::endl;
	out << "Screen : " << ticket.screen_id << " |";
	for (int i = 0; i < ticket.ticket_numbers.size(); ++i) {
		out << " | " << ticket.ticket_numbers[i];
	}
	out << " | " << std::endl;
	return out;
};
