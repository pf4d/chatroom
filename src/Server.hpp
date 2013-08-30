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
