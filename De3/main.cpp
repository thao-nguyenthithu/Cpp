#include "food.cpp"
#include "cannedFood.cpp"
#include "nonCFood.cpp"

int main(){ 
    vector<CannedFood> cfoods(3);
    cfoods[0] = CannedFood{"A", 3.0, 3}; 
    cfoods[1] = CannedFood("B", 2.0, 2);
    cfoods[2] = CannedFood("C", 1.0, 1);

    //Tìm đối tượng có numberBox lớn nhất và thiết lập giá trị price mới bằng ½ giá trị price cũ của đối tượng này.
    int max = 0; 
    for(int i = 0; i < cfoods.size(); i++){ 
        if(cfoods[i].getNumberBox() > cfoods[max].getNumberBox()){ 
            max = i; 
        }
    }
    cfoods[max].setPrice((cfoods[max].getPrice())/2);

    // Gọi hàm sortNumberBox  để sắp xếp các đối tượng CannedFood ở trên và hiển thị nội dung các đối tượng sau khi sắp xếp.
    CannedFood::sortNumberBox(cfoods);
    for (auto &&c : cfoods)
    {
        c.display();
    }

    // Khai báo vector gồm 3 đối tượng lớp NonCFood và khởi tạo giá trị cho các đối tượng này thông qua hàm tạo.
    vector<NonCFood> ncfoods(3); 
    ncfoods[0] = NonCFood{"A", 1.0, 1};
    ncfoods[1] = NonCFood("B", 2.0, 1);
    ncfoods[2] = NonCFood("C", 3.0, 1);

    // Tìm đối tượng có weight lớn nhất và thiết lập giá trị weight mới bằng ½ giá trị weight cũ của đối tượng này.
    int maxw = 0; 
    for(int i = 0; i <ncfoods.size(); i++){ 
        if(ncfoods[i].getWeight() > ncfoods[max].getWeight()){ 
            max = i;
        }
    }
    ncfoods[max].setWeight((ncfoods[max].getWeight())/2);

    // Gọi hàm sortWeight để sắp xếp các đối tượng NonCFood ở trên và và hiển thị nội dung các đối tượng sau khi sắp xếp.
    NonCFood::sortWeight(ncfoods);
    for (auto &&i : ncfoods)
    {
        i.display();
    }
}