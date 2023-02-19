#include <iostream>

using namespace std;

class Circle
{
private:
    int r;
public:
    void setRadius(int n)
    {
        r = n;
    };
    float area(void)
    {
        return 3.14 * r * r;
    };
    float girth(void)
    {
        return 3.14 * 2 * r;
    };
} ;

int main ()
{
    Circle a;
    int n;
    cout << "Enter circle radius: ";
    cin >> n;
    a.setRadius(n);
    cout << "Area " << a.area() << endl;
    cout << "Girth " << a.girth() << endl;
    return 0;
}