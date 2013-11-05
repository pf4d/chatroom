/*
    Copyright (C) <2012>  <cummings.evan@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <iostream>

#include "User.hpp"
#include "Server.hpp"
#include "Chatroom.hpp"

using namespace std;

User::User(string name)
{
  this->name = name;
}

void User::send(string roomName, string message)
{
  for(unsigned int i=0; i<this->roomList.size(); i++)
  {
    Chatroom* room = this->roomList[i];
    if(room->getName() == roomName)
    {
      room->notify(this->name, message);
    }
  }
}

void User::print(string room, string user, string message)
{
  cout << "[" + this->name + "'s console, room: " + room + 
           "]: <" + user + "> " + message + "\n";
}

void User::joinChatroom(Chatroom* room)
{
  room->addUser(this);
  this->roomList.push_back(room);
}

void User::joinServer(Server* server)
{
  server->registerUser(this);
  this->server = server;
}
