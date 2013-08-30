#include "User.hpp"
#include "Server.hpp"
#include "Client.hpp"

User* Client::createUser(string name)
{
  User* user = new User(name);
  this->userList.push_back(user);
  return user;
}

Server* Client::createServer(string IP, int maxUsers, int maxRooms)
{
  Server* server = new Server(IP, maxUsers, maxRooms);
  this->serverList.push_back(server);
  return server;
}
