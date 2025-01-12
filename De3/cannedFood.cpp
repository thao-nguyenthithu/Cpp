#include "food.cpp"
#include <vector>

class CannedFood : public Food
{
private:
    int numberBox;
public:
    CannedFood(){}
    CannedFood(string name, double price, int numberBox) : Food(name, price){ 
        this->numberBox = numberBox;
    }
    void display(){
        cout << "Name: " << Food::getName() << endl; 
        cout << "Price: " << Food::getPrice() << endl; 
        cout << "NumberBox: " << this->numberBox << endl;
        cout << "----------------------" << endl;
    }
    void setNumberBox(int n){ 
        numberBox = n;
    }
    int getNumberBox(){return numberBox;}
    // taang dan
    static void sortNumberBox(vector<CannedFood> &vt){
        for(int i = 0 ; i < vt.size() - 1 ; i++){ 
            for(int j = i + 1; j < vt.size(); j++){ 
                if(vt[j].numberBox < vt[i].numberBox){ 
                    swap(vt[j], vt[i]);
                }
            }
        }
    }
};

