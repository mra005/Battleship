/*************************************************************
gameCommands.cpp
SUBMITTED: Martin Abbott
CGI Script that will prepare the game. Inserts users into db,
populates Ships table, and populates Shots table.

NOTES:
infoFromHub hubInf;
String thisUserId,thisUserSKEY,gameID;
hubInf.loadData(1,100, , );
gameID = hubInf.instID();
thisUserID = hubInf.userID();
thisUserSKEY = hubInf.userSkey();
**************************************************************/

#include <infoFromHub.hpp>
#include <iostream>
#include <cstdlib>

using namespace std;
/*************************************************************
main
main()

Adds users to database table Players
*************************************************************/
const string DLM = "_"; //delimiter value
main(){
	string username,
		   skey;
		    
	int dbResult = 0,
		unameSize = 0;
		
	vector<string> postData;
	
	//*** OUTPUT CONTENT TYPE HEADER
	cout << "Content-Type: text/plain\n\n";
	
	//** No data sent
	if (postText == "" || postText == DLM){
		cout << "ERROR" << DLM << "Invalid data";
		return 0;
	}
	
	//** Split input into vector
	tokenizeStr(postText, DLM, postData);

	//** Invalid data length
	if (postData.size() < 6){
		cout << "ERROR" << DLM << "Invalid data";
		return 0;
	}
	//** Connects to database
	db.open(battleship_db);
	
		//** Insert players information into Players table
		query = "INSERT INTO Players (player_name, skey) VALUES (?, ?)"
		db.prepare(query);
		thisPlayer = hubInf.userID();
		thisPlayerSkey = hubInf.userSkey();
		db.bind(1, thisPlayer);
		db.bind(2, thisPlayerSkey);
		dbResult = db.runPrepared();
		if (dbResult != DB_SUCCESS) {
			cout << "ERROR" << DLM << "Failed to run prepared query [" << dbResult << "] " << " \"" << query << "\"" << endl;
			return 0;
		}
	db.close(battleship_db);
}//end main

attack(){
	string username;
	int shot;

	//** Connects to database
	db.open(battleship_db);
		//** Inserts players shot into Shot
		query = "INSERT INTO Shots (player_name, shot) VALUES (?,?)"
		db.prepare(query);
		thisPlayer = hubInf.userID();
		db.bind(1,thisPlayer);
		db.bind(2,shot);
		dbResult = db.runPrepared();
		if (dbResult != DB_SUCCESS) {
			cout << "ERROR" << DLM << "Failed to run prepared query [" << dbResult << "] " << " \"" << query << "\"" << endl;
			return 0;
		}
	db.close(battleship_db);
}//end attack

combat(){
/* combat() will pull the values of the ship locations and tokenize them into 12
 individual values which will then be compared to the values pulled from the shots
 taken from other player. If values match ships value will be replaced as NULL if all 4 
 cells are hit. Returns win condition if all of a players ships are set to value NULL.
*/
	//**Connects to database
	db.open(battleship_db);
	query = "SELECT Ship1, Ship2, Ship3 FROM Ships WHERE ?

}//end combat

