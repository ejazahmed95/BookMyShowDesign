#include "stdafx.h"
#include "Movie.h"

int Movie::num_of_movies = 0;

std::string Movie::getID() const {
	return id;
}

std::string Movie::getName() const {
	return name;
}
