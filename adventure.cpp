// adventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


string answer;
bool powerCore = false;
int answerInt;
int loop = 0;
int translateLoop = 0;
int attackLoop = 0;

void fixShipFirst() {
	if (powerCore == false) {
		cout << "You head inside your ship.  You investigate the engine to see that the jump completly drained the power supply, you'll need to find a new one before you can leave.\n";
	}
	else if (powerCore == true) {
		cout << "You head inside your ship.  You investigate the engine and see that the jump drained your power supply completly.  But it turns out you have the power supply so you install it and prepare to leave.\n";
		cout << "The end for now\n";
	}
	else {
		cout << "error";
	}
}

int main()
{
	cout << "Welcome to Space Quest!\nIn this game you are on a one man mission to explore a nearby star but somethinggoes wrong and your warp drive sends you to a far away system.\n";
	cout << "Now you must make your way back to Earth with limited supplies.  Don't worry youcan stop at planets to get things you need to survive\n";
	cout << "Are you ready to begin?\n";
	cin >> answer;
	if (answer == "no" || answer == "No") {
		cout << "Ok then, come back again some other time!";
		return 0;
	}
	else {
		cout << "Ok let's go then!\n";
	}
	cout << "The malfunction in the jump caused your ship to malfunction and your ship crashed on a nearby planet.\nAccording to scans the atmosphere is breathable and you decide to exit the ship\n";
	cout << "Out side you are surrounded by a forest, you looke behind your ship to see a trail of fire that your ship left during the crash.\nYou notice some movement in the woods,\nWhat do you do?\n";
	cout << "1. Investigate\n2. Fire your weapon into the woods\n3. Run away\n";
	while (loop == 0) {
	cin >> answerInt;
		switch (answerInt) {
		case 1:
			cout << "You walk towards the forest and suddenly an alien jumps out, they don't attack but instead pull out a device and hand it to you.  They point at the device then point at your ear\n";
			cout << "What do you do?\n1. Put it in your ear\n2. Attack the alien\n3. Run away\n";
			while (translateLoop == 0) {
				cin >> answerInt; 
				switch (answerInt) {
					case 1:
						cout << "After putting it in your ear the alien begins to speak your language.  \"Hello, it looks like your ship is in bad condition, would you like our help?\"";
						cout << "What do you do?\n1. Say yes\n2. Attack the alien\n3. Say no\n";
						while (translateLoop == 0) {
							cin >> answerInt;
							switch (answerInt) {
								case 1:
									cout << "You say yes, after doing this you see 2 more aliens emerge from the forest and head inside your ship.\n";
									cout << "The aliens come out after a few minutes and tell you that your power supply has been drained and that they have one back at their town.\n";
									cout << "What do you do?\n1. Go to their village\n2. Attack them\n3. Decline their offer\n";
									//while (translateLoop == 0) {
									//	cin >> answerInt;
									//}
								case 2:
									translateLoop = 0;
								case 3:
									cout << "The aliens say ok and leave you, you try to recharge your current power supply but you can't figure out how.\n";
									cout << "You eventually run out of water and die, the end";
									return 0;
								default:
									cout << "Enter a valid number.\n";
							}
						}
					case 2:
						translateLoop = 1;
					case 3:
						translateLoop = 1;
					default:
						cout << "Enter a valid number\n";
				}
			}
			//loop = 1;
			break;
		case 2:
			cout << "You grab your laser pistol from it's holster and fire.  You hear a scream and then a rustling sound moving away from you.\n";
			cout << "What do you do now?\n1. Investigate what you shot\n2. Work on fixing your ship\n3. Track the rustling noise\n";
			while (loop == 0) {
				cin >> answerInt;
				switch (answerInt) {
					case 1:
						cout << "You can't find what you shot but you see a pool of blue blood and a trail of the blood lead into the forest.\n";
						cout << "What do you do?\n1. Follow the trail\n2.Go back to the ship and attempt to fix it\n";
						while (attackLoop == 0) {
							cin >> answerInt;
							answerInt = answerInt + 1;
							switch (answerInt) {
								case 2:
									attackLoop = 1;
								case 3:
									attackLoop = 1;
								default:
									cout << "Enter a valid number.\n";
							}
						}
						break;
					case 2:
						fixShipFirst ();
						cout << "What do you do?\n1. Find what you shot\n2. Follow what ran away\n";
						while (loop == 0) {
							cin >> answerInt;
							if (answerInt == 2) {
								answerInt = 3;
							}

						}
						break;
					case 3:
						cout << "You follow the rustling sound until you reach a clearing and a group of about 10 aliens is pointing what appears to be very advanced weapons at you.\n";
						cout << "What do you do?\n1. Attack them\n2. Lay down your gun and surrender\n3. Run away\n";
						//while (loop == 0) {
							//cin >> answerInt;
						//}
						break;
					default:
						cout << "Enter a valid number\n";
				}
			}
			//loop = 1;
			break;
		case 3:
			translateLoop = 0;
			cout << "You run away, following the trail your ship made.  You hear the noise follow you on both sides.\n";
			cout << "What do you do.\n1. Stop running and investigate\n2. Fire at what is in the woods\n3. Keep running\n";
			break;
		default:
			cout << "Please enter a valid number.\n";
			break;
		}
	}
    return 0;
}


