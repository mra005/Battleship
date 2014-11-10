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
	db.open(BATTLESHIP_DB);
	
	//** Creates Players Table --> Houses Player #, Players Name, and Players skey
		query = "CREATE TABLE Players" +
		"(playerNum INT NOT NULL," +
		"playerName VARCHAR(20) NOT NULL," + 
		"skey VARCHAR(20) NOT NULL," +
		"PRIMARY KEY(playerNum),"+
		"FOREIGN KEY(playerName) REFERENCES Ships(player),Shots(player));";
		//** Connect to DB
		

	
}//end main


