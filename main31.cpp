/*c++ program to design data structure that supports following operations in theta(n) time
1.insertion.
2.deletion.
3.search.
4.getramdom.*/

#include<bits/stdc++.h>
using namespace std;

class mydatsstructure
{
    vector<int> v;
    map<int,int>hash;

    public:
    void add(int x){
        if(hash.find(x)!=hash.end()){
            return;
        }
        int index=v.size();
        v.emplace_back(x);
        hash.insert(pair<int,int>(x,index));
    }

    void remove(int x){
        if(hash.find(x)==hash.end()){
            return;
        }
        int index=hash.at(x);
        hash.erase(x);

        int last=v.size()-1;
        swap(arr[index],arr[last]);
        v.pop_back();

        hash.at(arr[index])=index;
    }
    int search(int x){
        if(hash.find(x)!=hash.end()){
            return hash.at(x);
        }
        else{
            return -1;
        }
    }
    int getrandom(){
        srand(time NULL);
        int random_index=rand()%v.size();
        return v.at(random_index);
    }
};

int main()
{
    mydatsstructure ds;
    ds.add(10);
    ds.add(20);
    ds.add(30);
    ds.add(40);
    ds.add(50);
    cout<<ds.search(30)<<endl;
    ds.remove(20);
    ds.add(20);
    cout<<ds.search(50)<<endl;
    cout<<ds.getrandom()<<endl;
    return 0;
}