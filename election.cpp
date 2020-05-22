#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  int maxvalue=0
  int win;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {

    while ( getline (myfile,vid) && getline(myfile,cid) )
    {
      if(vid > maxvalue)
      {
          maxvalue=vid;
          win=cid

      }
      else if (vid == maxvalue && win.compareTo(cid) > 0)
        {
            win=cid
        }

      else if(cid > 1)
      {
          cout<"fraud"
      }
        cout<<win
    }
    myfile.close();
  }

  else
    cout << "Unable to open file";

  return 0;
}
