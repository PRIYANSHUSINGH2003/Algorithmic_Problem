
#include <iostream>
using namespace std;
class Palindreme_number
{
public:
    int x, temp = 0, a, n;
    void palinfreme()
    {
        cout << "Enter an integer: ";
        cin >> a;
        n = a;
        while (a != 0)
        {
            x = a % 10;
            temp = temp * 10 + x;
            a /= 10;
        }
        cout << "Revers Order : " << temp;
        if (n == temp)
        {
            cout << "\n This is a Palindrome...";
        }
        else
        {
            cout << "\n This is not a Palindrome...";
        }
    }
};
//  Transpose of matrix
class Transpose_Of_matrix
{
public:
    int arr[3][3], c[3][3], row, col;
    void tramspose()
    {
        cout << "Enter the number of values :- ";
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
            cout << endl;
        }
        cout << "Simple Matrix......." << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "\t|__" << arr[i][j] << "__|";
            }
            cout << endl;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = arr[j][i];
            }
            cout << endl;
        }
        cout << "Transpise Matrix......." << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "\t|__" << c[i][j] << "__|";
            }
            cout << endl;
        }
    }
};
// Armstrong_Number
class Armstrong_Number
{
public:
    int num, temp, rem, sum = 0;
    void Armstrong()
    {
        cout << "Enter the number : ";
        cin >> temp;
        num = temp;
        while (num != 0)
        {

            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if (sum == temp)
        {
            cout << "\n Armstrong number : " << temp << endl
                << "True";
        }
        else
        {
            cout << "This is not a Armstrong number :" << temp << endl
                << "False";
        }
    }
};

//  Dragone_Egg
class Dragone_Egg{
    public:
    int gold,Grams_Gold,silver,Grams_Silver,Amount;
    void dragone(){
        cout<<"Enter the Grams of Gold : ";
        cin>>Grams_Gold;
        cout<<"Enter the Price of Gold : ";
        cin>>gold;
        cout<<"Enter the Grams of Silver : ";
        cin>>Grams_Silver;
        cout<<"Enter the Price of Silver : ";
        cin>>silver;
        Amount = Grams_Gold*gold;
        int Amount2 = Grams_Silver* silver; 
        if(Amount>Amount2){
            cout<<"Gold";
        }
        else{
            cout<<"Silver";
        }
    }
};

// Mex Of 2
class Mex_Of_2{
    public:
    int a,b;
    void mexOf2(){
        cout<<"Enter the value of A : ";
        cin>>a;
        cout<<"Enter the value of B : ";
        cin>>b;
        if(a==0 && b==0){
            cout<<"1";
        }
        if(a==0 || b==0){
            if(a==1 || b==1){
                cout<<"2";
            }
            else if(a==2 || b==2){
                cout<<"1";
            }
        }
        else{
            cout<<"0";
        }
    }
};
int main()
{
    Palindreme_number p;
    p.palinfreme();
    Transpose_Of_matrix t;
    t.tramspose();
    Armstrong_Number a;
    a.Armstrong();
    Dragone_Egg g;
    g.dragone();
    Mex_Of_2 m;
    m.mexOf2();
    return 0;
}
