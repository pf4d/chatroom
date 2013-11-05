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
