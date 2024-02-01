
/* 
Implement a class Complex which represents the Complex Number data type. Implement the following
1.	Constructor (including a default constructor which creates the complex number 0+0i).
2.	Overload operator+ to add two complex numbers.
3.	Overload operator* to multiply two complex numbers.
4.	Overload operators << and >> to print and read Complex Numbers
*/


# include<iostream>
using namespace std;
class Complex                      
    {
        double realNo;       
        double imgNo;
        public: 
        friend istream & operator >> (istream &, Complex &); 
        Complex();            
        friend ostream & operator << (ostream &, const Complex &); 
        Complex operator + (Complex); 
        Complex operator * (Complex); 
    };
    Complex::Complex()                  
    {
        realNo = 0;
        imgNo = 0;
    }
    istream & operator >> (istream &, Complex & i)
    {
        cin >> i.realNo >> i.imgNo;
        return cin;
    }
    ostream & operator << (ostream &, const Complex & d)
    {
        cout << d.realNo << " + " << d.imgNo << "i" << endl;
        return cout;
    }
        Complex Complex::operator + (Complex c1)  
    {
    Complex temp;
    temp.realNo = realNo + c1.realNo;
    temp.imgNo = imgNo + c1.imgNo;
    return temp;
     }
    Complex Complex::operator * (Complex c2)    
    {
        Complex tmp;
        tmp.realNo = realNo * c2.realNo - imgNo * c2.imgNo;
        tmp.imgNo = realNo * c2.imgNo + imgNo * c2.realNo;
        return tmp;
    }
    int main()
    {
        Complex C1, C2, C3, C4;
        int flag = 1;
        char b;
         while (flag == 1)
    {
        cout << "Enter Real and Imaginary part of the Complex Number 1 : \n";
        cin >> C1;
        cout << "Enter Real and Imaginary part of the Complex Number 2 : \n";
        cin >> C2;
        int f = 1;
        while (f == 1)
        {
            cout << "Complex Number 1 : " << C1 << endl;
            cout << "Complex Number 2 : " << C2 << endl;
            cout << "**********MENU**********" << endl;
            cout << "1. Addition of Complex Numbers" << endl;
            cout << "2. Multiplication of Complex Numbers" << endl;
            cout << "3. Exit\n";
            int a;
            cout << "Enter your choice from above MENU (1 to 3) : ";
            cin >> a;
            if (a == 1)
                 {
                    C3 = C1+C2;
                    cout << "Addition : " << C3 << endl;
                    cout << "Do you wan to perform another operation (y/n) : \n";
                    cin >> b;
                    if (b == 'y' || b == 'Y')
                     {
                            f=1;
                    }
                    else
                    {
                        cout << "Thanks for using this program!!\n";
                        flag=0;
                        f=0;
                     }
            }
             else if (a == 2)
            {
                C4 = C1 * C2;
                cout << "Multiplication : " << C4 << endl;
                cout << "Do you wan to perform another operation (y/n) : \n";
                cin >> b;
                if (b == 'y' || b == 'Y')
            {
            f=1;
             }
            else
            {
            cout << "Thanks for using this program!!\n";
             flag=0;
            f=0;
             }
             }
            else
            {
               cout << "Thanks for using this program!!\n";
                flag=0;
         f=0;
       }
        }
    }
         return 0;
 }
