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
