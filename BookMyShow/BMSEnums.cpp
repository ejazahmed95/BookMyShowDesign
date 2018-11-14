#include "stdafx.h"
#include "BMSEnums.h"

std::ostream &operator<<(std::ostream &out, const ShowTiming &time) {
	switch (time) {
	case ShowTiming::MORNING:
		out << "MORNING";
	case ShowTiming::MATINEE:
		out << "MATINEE";
	case ShowTiming::FIRST_SHOW:
		out << "FIRST_SHOW";
	case ShowTiming::SECOND_SHOW:
		out << "SECOND_SHOW";
	default:
		break;
	}
	return out;
}