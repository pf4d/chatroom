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
