#include <string>
#include "Profile.h"

using namespace std;

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns)
	:name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}

string Profile::view_profile()
{
	string profile_information = "Name:     " + name;
	profile_information += "\nAge:      " + to_string(age);
	profile_information += "\nCity:     " + city;
	profile_information += "\nCountry:  " + country;
	profile_information += "\nPronouns: " + pronouns;
	profile_information += "\nHobbies:  ";
	for (int i = 0; i < hobbies.size(); i++) {
		if (hobbies.size() - i != 1) {
			profile_information += hobbies[i] + ", ";
		}
		else {
			profile_information += hobbies[i] + ".\n\n";
		}
	}
	return profile_information;
}

void Profile::add_hobby(string new_hobby)
{
	hobbies.push_back(new_hobby);
}