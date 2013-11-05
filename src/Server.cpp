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
