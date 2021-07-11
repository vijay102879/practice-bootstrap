#include<iostream>
#include<list>
using namespace std;
class graph{
    int v;
    list<int>l;

    public:
    graph(int v){
        this->v=v;
        l=new list<int>[v];
    }
    void addeddge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printaddjlist(){
        for(int i=0;i<v;i++){
            cout<<"vertex"<<" "<<"->"<<i;
            for(int nbr:l[i]){
                cout<<nbr<<"  "<<;

            }
            cout<<endl;
        }
    }

} ;
int main(){
    graph g(4);
    g.addeddge(0,1);
    g.addeddge(0,2);
    g.addeddge(1,2);
    g.addeddge(2,3);
}