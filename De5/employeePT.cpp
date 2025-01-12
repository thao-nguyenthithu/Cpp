#include "person.cpp"

class EmployeePT : public Person
{
private:
    int hour; 
    long money; 
public:
    EmployeePT() :  Person(){}
    EmployeePT(string name, int age, string add, string tel, string sex, int hour, long money) : Person(name, age, add, tel, sex), hour(hour), money(money) {}
    int getHour(){ return hour;}
    long getMoney(){ return money;}
    long salary(){
        return hour*money;
    }
    void display(){
        Person::display();
        cout << ", Hour: " << hour << ", Money: " << money << ", Salary: "<< salary() << endl;
    }
    static vector<EmployeePT> getMaxSalary(vector<EmployeePT> pt)
    {
        long max = pt[0].salary();
        for (int i = 1; i < pt.size(); i++)
        {
            if (pt[i].salary() > max)
            {
                max = pt[i].salary();
            }
        }

        vector<EmployeePT> v;
        for (int i = 0; i < pt.size(); i++)
        {
            if (pt[i].salary() == max)
            {
                v.push_back(pt[i]);
            }
        }
        return v;
    }
};

