#include<iostream>
#include<string>
#include<iomanip>
using namespace std; 

class InventoryItem
{
private:
    string descriptions;
    float cost; 
    int units;
public:
    InventoryItem() {
        descriptions = " ";
        cost = 0.0; 
        units = 0;
    }

    InventoryItem(string d, float c, int u){
        descriptions = d; 
        cost = c; 
        units = u; 
    }

    void setDescriptions(string d){
        descriptions = d;
    }
    void setCost(float c){
        cost = c;
    }
    void setUnits(int u){
        units = u;
    }

    string getDescriptions() const{
        return descriptions;
    }
    float getCost(){
        return cost;
    }
    int getUnits(){
        return units;
    }
};

int main(){
    const int NUM = 3;
    InventoryItem inv[NUM] = {
        InventoryItem("Ao dai", 12.4, 3),
        InventoryItem("Ao Khoac", 23.5, 2),
        InventoryItem("Ao the thao", 45, 1 )
    };
    for(int i = 0; i < NUM; i++){
        cout << setw(15) << inv[i].getDescriptions();
        cout << setw(15) << inv[i].getCost();
        cout << setw(15) << inv[i].getUnits() << endl;   
    }
    return 0;
}