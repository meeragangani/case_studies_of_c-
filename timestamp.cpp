#include <iostream>
#include <list>
using namespace std;

class TimeEntries
{
    public:
    string timestamp;
    int count;
    string type;

    TimeEntries(string timestamp1,int count1,string type1)
    {
        timestamp=timestamp1;
        count=count1;
        type=type1;
    }
};

int main()
{
    list<TimeEntries> entries;
    entries.push_back(TimeEntries("1526579921",13,"Enter"));
    entries.push_back(TimeEntries("1526579982",4,"Exit"));
    entries.push_back(TimeEntries("1526580053",96,"Enter"));
    entries.push_back(TimeEntries("1526580124",41,"Exit"));
    entries.push_back(TimeEntries("1526580385",1,"Exit"));

    int pCount=0;int maxcount=0;int row=0;int i=0;

    list<TimeEntries>::iterator ent = entries.begin();
     while(ent != entries.end()) {

            if(ent->type=="Enter")
            {
                pCount=pCount+ ent->count;
                if(pCount>maxcount)
                {
                    maxcount=pCount;
                    row=i;
                }
            }
            else if(ent->type=="Exit")
                pCount=pCount-ent->count;

        i++;
        ent++;
      }

    if(row!=entries.size()-1)
    {
        advance(ent,(row+1));
        cout<<"Busiest period in buildig is From " <<ent->timestamp;
        ent++;
        cout<<" to "<<ent->timestamp<<endl;
    }
    else
    {

        advance(ent,(row+1));
        cout<<"Busiest period in buildig is From "<<ent->timestamp;
        cout<<" to "<<ent->timestamp<<endl;
    }
    return 0;
}
