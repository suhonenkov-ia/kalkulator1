#include <iostream>
using namespace std;


int main()
{
    cout << "vvtdite 1 dla zavershenia, 2 dla vibora novoi operachion";
    int a;
    cin >> a;
    while (a != 1)
    {
  
        double count1;
        double count2;
        int number;
        int count3;
        int count4;
        cout << "vvedite nomer oper" << endl;
        cout << "1.slogenie" << endl;
        cout << "2.visitanie" << endl;
        cout << "3.umnoshenie" << endl;
        cout << "4.delenie" << endl;
        cin >> number;
        switch (number)
        {
        case 1:cin >> count1, cin >> count2;
            cout << "slogenie " << count1 << "+" << count2 << "=" << count1 + count2 << endl;
            break;
        case 2: cin >> count1, cin >> count2;
            cout << "visitanie " << count1 << "-" << count2 << "=" << count1 - count2 << endl;
            break;
        case 3: cin >> count1, cin >> count2;
            cout << "umnoshenie " << count1 << "*" << count2 << "=" << count1 * count2 << endl;
            break;
        case 4:
            cin >> count3;
            cin >> count4;
            if (count4 == 0) {
                while (count4 == 0)
                {
                    cout << "na nol delit nelz, vvedite chislo zanovo";
                    cin >> count4;
                }

            }
            cout << "delenie " << count3 << "/" << count4 << "=" << count3 / count4 << endl;
            cout << "ostatok ot delenia = " << count3 % count4 << endl;
        }
        cout << "vvtdite 1 dla zavershenia, 2 dla vibora novoi operachion";
        cin >> a;
    }
    




}

// printf("%ihello%i", count, count2 )
// 4 выбор действия , символы деление на 0
//цифры фибаначи