#include <iostream>
#include <math.h>
#include <string>

// Benedikt M. Scheving-Thorsteinsson
// GNU GLPv3 Licence 2015-01-29.
// Please follow the GPL properly and link to my name if you use this. I'd be very thankful.

using namespace std;


void switcher(int& month, int& date){
	switch (month) {
		case 1: // january
			if (date <= 19){
				//Steingeitin
				cout << "You are Capricorn" << endl;
			}
			else if (date >= 20) {
				//Vatnsberinn
				cout << "There are people in Africa dying of thirst, and you think you got water? Aquarius, give them their water!" << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 2: // febuary
			if (date <= 18){
				//Vatnsberinn
				cout << "There are people in Africa dying of thirst, and you think you got water? Aquarius, give them their water!" << endl;
			}
			else if (date >= 19) {
				//Fiskurinn
				cout << "You are a bloody fish." << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 3: // march
			if (date <= 20){
				//Fiskurinn
				cout << "You are a bloody fish." << endl;
			}
			else if (date >= 21) {
				//Hruturinn
				cout << "You are a Dodge Ram." << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 4: // april
			if (date <= 19){
				//Hrúturinn
				cout << "You are a Dodge Ram." << endl;
			}
			else if (date >= 20) {
				//Nautið
				cout << "You are Taurus, the tasty bull." << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 5: // may
			if (date <= 20){
				//Nautið
				cout << "You are Taurus, the tasty bull." << endl;
			}
			else if (date >= 21) {
				//Tvíburinn
				cout << "You are Gemini. Some twin you are." << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 6: // june
			if (date <= 20){
				// Tvíburinn
				cout << "You are Gemini. Some twin you are." << endl;
			}
			else if (date >= 21) {
				//Krabbinn
				cout << "You have cancer." << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 7: // july
			if (date <= 22){
				//Krabbinn
				cout << "You have cancer." << endl;
			}
			else if (date >= 23) {
				//Ljónið
				cout << "You are one feasty Lion." << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 8: // august
			if (date <= 22){
				//Ljónið
				cout << "You are one feasty Lion" << endl;
			}
			else if (date >= 23) {
				//Meyjan
				cout << "You are one fetching Virgo" << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 9: // september
			if (date <= 22){
				//Meyjan
				cout << "You are one fetching Virgo." << endl;
			}
			else if (date >= 23) {
				//Volgin
				cout << "You are the libra, the law of nothing. I guess." << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 10: // october
			if (date <= 22){
				//Volginn
				cout << "You are the Libra, the law of nothing. I guess." << endl;
			}
			else if (date >= 23) {
				//Sporðdrekinn
				cout << "You are the mighty awesome Scorpion" << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 11: // november
			if (date <= 21){
				//Spordrekinn
				cout << "You are the mighty awesome Scorpion" << endl;
			}
			else if (date >= 22) {
				//Bogamaðurinn
				cout << "You are the Bowman. Don't be welsh in Scotland" << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
		case 12: // december
			if (date <= 21){
				//Bogamaðurinn
				cout << "You are the Bowman. Don't be Welsh in Scotland" << endl;
			}
			else if (date >= 22) {
				//Steingeitin
				cout << "You are Capricorn" << endl;
			}
			else {
				cout << "Something went wrong." << endl;
			}
		break;
	}
}
int main() {
	int month = 0;
	int date = 0;
	bool nofunallowed = true;
	string yesno;
	while (nofunallowed) {
		cout << "What month were you born in?" << endl;
		cin >> month;
		cout << "What day were you born in?" << endl;
		cin >> date;
		switcher (month, date);
		cout << "Do you want to do this again? (y/n)" << endl;
		cin >> yesno;
		if (yesno == "n" || yesno == "N") {
			nofunallowed = false;
		}
	}











}
