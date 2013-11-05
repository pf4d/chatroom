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
#ifndef CHATROOM_HPP
#define CHATROOM_HPP

#include <vector>
#include <string>

using namespace std;

class User;
class Server;

class Chatroom
{
  private:
    vector<User*> userList;
    Server* server;
    string name;
  public:
    Chatroom(string name, Server* server, int maxUsers);
    void addUser(User* user);
    void notify(string user, string message);
    string getName();
};

#endif
