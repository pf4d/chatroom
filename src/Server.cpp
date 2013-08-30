#include "Server.hpp"
#include "Chatroom.hpp"

Server::Server(string IP, int maxUsers, int maxRooms)
{
  this->IP = IP;
  this->userList.reserve(maxUsers);
  this->roomList.reserve(maxRooms);
}

Chatroom* Server::createRoom(string name, int maxUsers)
{
  Chatroom* room = new Chatroom(name, this, maxUsers);
  this->roomList.push_back(room);
  return room;
}

void Server::registerUser(User* user)
{
  this->userList.push_back(user);
}

string Server::getIP()
{
  return this->IP;
}
