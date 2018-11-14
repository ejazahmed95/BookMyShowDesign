#pragma once
class Movie {
private:
	std::string id;
	std::string name;
	LanguageType language;
	static int num_of_movies;
public:
	Movie(std::string id, std::string name, LanguageType language) :
		id(id), name(name), language(language) {};
	Movie() : id("M" + std::to_string(++num_of_movies)), name("No Name" + std::to_string(num_of_movies)), language(LanguageType::ENGLISH)  {};
	std::string getID() const;
	std::string getName() const;
	virtual ~Movie() {};
};

