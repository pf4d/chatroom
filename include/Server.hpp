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
#ifndef SERVER_HPP
#define SERVER_HPP

#include <vector>
#include <string>

using namespace std;

class User;
class Chatroom;

class Server
{
  private:
    vector<User*> userList;
    vector<Chatroom*> roomList;
    string IP;
  public:
    Server(string IP, int maxUsers, int maxRooms);
    Chatroom* createRoom(string name, int maxUsers);
    void registerUser(User* user);
    string getIP();
};

#endif
