#include "employeeFT.cpp"
#include "employeePT.cpp"

int main(){
    vector <EmployeeFT> fulltime(3);
    fulltime[0] = EmployeeFT("A", 1, "HN", "123", "M", 10, 1000);
    fulltime[1] = EmployeeFT("B", 2, "HM", "234", "M", 5, 1000);
    fulltime[2] = EmployeeFT("C", 3, "HN", "345", "M", 3, 1000);
    for (auto &&v : fulltime)
    {
        v.display();
    }
    cout << "-----------------------------------\n";
    for (auto &&v : EmployeeFT::getMaxSalary(fulltime))
    {
        v.display();
    }
    
    cout << "-----------------------------------\n";
    vector<EmployeePT> parttimes(3);
    parttimes[0] = EmployeePT("D", 1, "HP", "123", "M", 10, 1000);
    parttimes[1] = EmployeePT("E", 2, "HN", "234", "M", 5, 1000);
    parttimes[2] = EmployeePT("F", 3, "HN", "345", "M", 3, 1000);

    for (auto &v : parttimes)
        v.display();
    cout << "-----------------------------------\n";
    for (auto &v : EmployeePT::getMaxSalary(parttimes))
        v.display();

    cout << "Danh sach nhan vien o HN la: " << endl;
    vector<Person *> persons({&fulltime[0], &fulltime[1], &parttimes[1]});
    for (auto &v : Person::findPerson(persons))
        v->display();
}