#include "stdafx.h"
#include "Ticket.h"


Ticket::~Ticket() {
}

std::ostream &operator<<(std::ostream &out, const Ticket &ticket) {
	out << ticket.theater_name << " | Date: " << ticket.date << " | Time: " << ticket.time << std::endl;
	out << "Screen : " << ticket.screen_id << " |";
	for (int i = 0; i < ticket.ticket_numbers.size(); ++i) {
		out << " | " << ticket.ticket_numbers[i];
	}
	out << " | " << std::endl;
	return out;
};
