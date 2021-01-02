#include<bits/stdc++.h>
using namespace std;

void printIteinery(map<string,string>dataset)
{
    map<string,string>reversemap;
    map<string,string>::iterator it;

    for(it=dataset.begin();it!=dataset.end();it++){
        reversemap[it->second]=it->first;
    }

    string start;

    for(it=dataset.begin();it!=dataset.end();it++){
        if(reversemap.find(it->first)==reversemap.end())
        {
            start=it->first;
            break;
        }
    }

    if(start.empty())
    {
        cout<<"Invalid Input"<<endl;
        return;
    }
    it=dataset.find(start);
    while(it!=dataset.end())
    {
        cout<<it->first<<"->"<<it->second<<endl;
        it=dataset.find(it->second);
    }
}
int main()
{
    map<string,string>dataset;
    dataset["chennai"]="Banglore";
    dataset["Mumbai"]="Delhi";
    dataset["Goa"]="Chennai";
    dataset["Delhi"]="Goa";

    printIteinery(dataset);
    return 0;
}

