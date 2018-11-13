#pragma once
class Movie {
private:
	std::string id;
	std::string name;
	LanguageType language;
public:
	Movie();
	std::string getName() const;
	virtual ~Movie();
};

