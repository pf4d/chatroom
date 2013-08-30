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
