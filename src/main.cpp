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
