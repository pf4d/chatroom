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
