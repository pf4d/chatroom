#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <vector>
#include <string>

using namespace std;

class User;
class Server;

class Client
{
  private:
    vector<User*> userList;
    vector<Server*> serverList;
  public:
    User* createUser(string name);
    Server* createServer(string IP, int maxUsers, int maxRooms);
};

#endif
