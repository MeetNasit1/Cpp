#include <iostream>
#include <string>
using namespace std;

class HotelMenu
{
private:
    string item;
    float price;

public:
    float price;
    void setItem(string itemName, float itemPrice)
    {
        item = itemName;
        price = itemPrice;
    }

    void displayItem() 
    {
        cout << setw(20) << left << item << "Rs. " << price << endl;
    }
};

class GSTBill {
private:
    float totalAmount;
    float gstRate;

public:
    GSTBill(float rate) {
        gstRate = rate;
        totalAmount = 0;
    }

    void addToBill(float amount) 
    {
        totalAmount += amount;
    }

    float calculateGST() {
        return totalAmount * (gstRate / 100);
    }

    void displayBill() 
    {
        cout << fixed << setprecision(2);
        cout << "Total Amount: Rs. " << totalAmount << endl;
        cout << "GST (" << gstRate << "%): Rs. " << calculateGST() << endl;
        cout << "Grand Total: Rs. " << totalAmount + calculateGST() << endl;
    }
};

int main()
 {
    HotelMenu menu[5];
    menu[0].setItem("Veg Biryani", 150);
    menu[1].setItem("Paneer Tikka", 200);
    menu[2].setItem("Butter Naan", 50);
    menu[3].setItem("Dal Makhani", 120);
    menu[4].setItem("Gulab Jamun", 80);

    GSTBill bill(18); // 18% GST rate

    cout << "Welcome to Hotel XYZ!" << endl;
    cout << "Menu:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        menu[i].displayItem();
        bill.addToBill(menu[i].price);
    }

    cout << "\nYour Bill:" << endl;
    bill.displayBill();

    return 0;
}
