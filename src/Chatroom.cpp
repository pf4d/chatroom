#include "Chatroom.hpp"
#include "User.hpp"

Chatroom::Chatroom(string name, Server* server, int maxUsers)
{
  this->name = name;
  this->server = server;
  this->userList.reserve(maxUsers);
}

void Chatroom::addUser(User* user)
{
  this->userList.push_back(user);
}

void Chatroom::notify(string user, string message)
{
  for(unsigned int i=0; i<this->userList.size(); i++)
  {
    this->userList[i]->print(this->name, user, message);
  }
}

string Chatroom::getName()
{
  return this->name;
}
