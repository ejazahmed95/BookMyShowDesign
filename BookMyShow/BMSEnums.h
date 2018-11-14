#pragma once

enum LanguageType { HINDI, ENGLISH, TELUGU, MISC};

enum class ShowTiming {
	MORNING,
	MATINEE,
	FIRST_SHOW,
	SECOND_SHOW
};

enum BookingErrors {
	SEATS_NOT_AVAILABLE
};

enum TheaterErrors {
	SCREEN_ALREADY_IN_USE,
	SHOW_ALREADY_REMOVED,
	SLOTS_NOT_AVAILABLE
};

std::ostream &operator<<(std::ostream &out, const ShowTiming &time);
