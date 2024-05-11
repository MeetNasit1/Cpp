#include <iostream>
using namespace std;
class hotal
{

public:
    int arr[5] = {240, 160, 120, 30, 400};
    char item;
    int qty[1];
    int qty2[1];
    int qty3[1];
    int qty4[1];
    int qty5[1];
    int q;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int Total = 0;
    int GST;
    int SubTotal = 0;

    void manudata()
    {
        cout << "***********************manu****************************" << endl;
        cout << " 1.  Pizza                                Rs:240 |" << endl;
        cout << " 2.  Burger                               Rs:160 |" << endl;
        cout << " 3.  Green Sandwich                       Rs:120 |" << endl;
        cout << " 4.  cold                                 Rs:30  |" << endl;
        cout << " 5.  Biryani                              Rs:400 |" << endl;
    }
    void orderdata()
    {

        int arr[5] = {240, 160, 120, 30, 400};
        char item;
        cout << "enter the order:-" << endl;
        cin >> item;

        switch (item)
        {
        case '1':

            for (int i = 0; i < 1; i++)
            {
                cout << "enter the qut:-" << endl;
                cin >> qty[i];
            }
            break;

        case '2':

            for (int i = 0; i < 1; i++)
            {
                cout << "enter the qut:-" << endl;
                cin >> qty2[i];
            }
            break;

        case '3':

            for (int i = 0; i < 1; i++)
            {
                cout << "enter the qut:-" << endl;
                cin >> qty3[i];
            }
            break;

        case '4':

            for (int i = 0; i < 1; i++)
            {
                cout << "enter the qut:-" << endl;
                cin >> qty4[i];
            }
            break;

        case '5':

            for (int i = 0; i < 1; i++)
            {
                cout << "enter the qut:-" << endl;
                cin >> qty5[i];
            }
            break;
        }
    }
    void bill()
    {

        for (int i = 0; i < 1; i++)
        {
            sum1 = qty[i] * arr[0];
            sum2 = qty2[i] * arr[1];
            sum3 = qty3[i] * arr[2];
            sum4 = qty4[i] * arr[3];
            sum5 = qty5[i] * arr[4];

            Total = sum1 + sum2 + sum3 + sum4 + sum5;

            GST = Total * 18 / 100;
            SubTotal = Total + GST;

            if (qty[i] >= 1)
            {
                cout << "pizza" << "\t\t\t" << qty[i] << "\t\t\t" << arr[0] << "\t\t\t" << sum1 << endl;
            }
            if (qty2[i] >= 1)
            {
                cout << "Burger" << "\t\t\t" << qty2[i] << "\t\t\t" << arr[1] << "\t\t\t" << sum2 << endl;
            }
            if (qty3[i] >= 1)
            {
                cout << "Green Sandwich" << "\t" << qty3[i] << "\t\t\t" << arr[2] << "\t\t\t" << sum3 << endl;
            }
            if (qty4[i] >= 1)
            {
                cout << "Cold" << "\t\t\t" << qty4[i] << "\t\t\t" << arr[3] << "\t\t\t" << sum4 << endl;
            }
            if (qty5[i] >= 1)
            {
                cout << "Biryani" << "\t\t\t" << qty5[i] << "\t\t\t" << arr[4] << "\t\t\t" << sum5 << endl;
            }
            cout << "________________________________________________________" << endl;
            cout << "                                  Total    : " << Total << endl;
            cout << "                                  GST 18%  : " << GST << endl;
            cout << "________________________________________________________" << endl;
            cout << "                                  SubTotal  : " << SubTotal << endl;
        }
    }
};

int main()
{
    hotal obj;

    char w;
    do
    {
        cout << "1.manu" << endl;
        cout << "2.enter the order" << endl;
        cout << "3.bill" << endl;
        cout << "4.Exit" << endl;
        cout << "************************************************" << endl;

        cout << "choose the option" << endl;
        cin >> w;
        switch (w)
        {
        case '1':
            obj.manudata();
            break;

        case '2':
            obj.orderdata();
            break;

        case '3':
            obj.bill();
            break;

        case '4':
            goto end;
            break;
        }
    } while (w != 7);
    {
    end:
        cout << "thankyou for visiting";

        return 0;
    }
}
