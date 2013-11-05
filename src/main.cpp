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
#include "Client.hpp"
#include "Server.hpp"
#include "Chatroom.hpp"
#include "User.hpp"


int main(int argc, const char *argv[])
{ 
  Client client;

  Server* server  = client.createServer("192.168.0.0.1", 10, 10);
  Chatroom* factory = server->createRoom("FunFactory", 10);
  Chatroom* awesome = server->createRoom("AwesomeTown", 10);
  
  User* jack = client.createUser("Jack");
  User* jill = client.createUser("Jill");

  jack->joinServer(server);
  jill->joinServer(server);

  jack->joinChatroom(factory);
  jack->joinChatroom(awesome);
  jill->joinChatroom(factory);

  jack->send("AwesomeTown", "Hello?");
  jack->send("FunFactory", "Hi you guys!");
  jill->send("FunFactory", "oh great it's you again.");

  return 0;

}
