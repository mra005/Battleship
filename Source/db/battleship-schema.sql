CREATE TABLE Players(
player_name     VARCHAR(20) NOT NULL,
skey            VARCHAR(20) NOT NULL,
PRIMARY KEY (Player_name));

CREATE TABLE Ships(
player_name     VARCHAR(20) NOT NULL,
ship_1          VARCHAR(12),
ship_2          VARCHAR(12),
ship_3          VARCHAR(12),
FOREIGN KEY(player_name) REFERENCE (Players player_name));

CREATE TABLE Shots(
player_name     VARCHAR(20) NOT NULL,
shot            NUMBER(3),
FOREIGN KEY (player_name) REFERENCE (Players player_name));
