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
#ifndef USER_HPP
#define USER_HPP

#include <vector>
#include <string>

using namespace std;

class Chatroom;
class Server;

class User
{
  private:
    vector<Chatroom*> roomList;
    Server* server;
    string name;
  public:
    User(string name);
    void send(string roomName, string message);
    void print(string room, string user, string message);
    void joinChatroom(Chatroom* room);
    void joinServer(Server* server);
};

#endif
