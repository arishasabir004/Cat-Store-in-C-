#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

double BRD(string breed, string category, int age, double totalprice);
double package(string c, double totalprice);

// Function to convert a string to uppercase for comparison purposes
string to_uppercase(string str) {
    for (char& c : str) {
        c = toupper(c);
    }
    return str;
}

int main()
{
    cout << setw(55) << "WELCOME TO PAWS!!";
    cout << "\n" << setw(51) << "CAT STORE";
    cout << "\n";
    cout << "\n    BREED NAME" << setw(30) << " CATEGORY" << setw(33) << "PRICE\n";
    cout << "\n1.PERSIAN" << setw(39) << "Kitten(2-8MONTHS)" << setw(33) << "39,000-45,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "30,000-38,000\n";
    cout << "\n2.BRITISH SHORT HAIR" << setw(28) << "Kitten(2-8MONTHS)" << setw(33) << "43,000-50,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "30,000-42,000\n";
    cout << "\n3.SPHYNX" << setw(40) << "Kitten(2-8MONTHS)" << setw(33) << "45,000-58,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "34,000-40,000\n";
    cout << "\n4.PUNCH FACE" << setw(36) << "Kitten(2-8MONTHS)" << setw(33) << "33,000-40,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "25,000-32,000\n";
    cout << "\n5.SIBERIAN" << setw(38) << "Kitten(2-8MONTHS)" << setw(33) << "33,000-40,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "26,000-34,000\n";
    cout << "\n6.RAGDOLL" << setw(39) << "Kitten(2-8MONTHS)" << setw(33) << "40,000-48,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "30,000-39,000\n";
    cout << "\n7.MUNCHKIN" << setw(38) << "Kitten(2-8MONTHS)" << setw(33) << "38,000-46,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "30,000-43,000\n";
    cout << "\n8.AMERICAN S.H" << setw(34) << "Kitten(2-8MONTHS)" << setw(33) << "33,000-43,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "30,000-38,000\n";
    cout << "\n9.TURKISH ANGORA" << setw(32) << "Kitten(2-8MONTHS)" << setw(33) << "31,000-41,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "24,000-30,000\n";
    cout << "\n10.JAPANESE BOBTAIL" << setw(29) << "Kitten(2-8MONTHS)" << setw(33) << "41,000-53,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "30,000-40,000\n";
    cout << "\n11.STRAY (UNKNOWN BREED)" << setw(24) << "Kitten(2-8MONTHS)" << setw(33) << "08,000-14,000";
    cout << "\n" << setw(47) << "Adult(1-4YEARS)" << setw(35) << "04,000-07,000\n";
    cout << "\n";
    cout << "\n    PACKAGES" << setw(30) << "ITEMS" << setw(35) << "PRICE";
    cout << "\n   1.LOW" << setw(44) << "Litter Box & Sand(5 kg)" << setw(25) << "1500";
    cout << "\n   2.STANDARD" << setw(46) << "Litter Box,Sand(5 kg) & Food(10 kg)" << setw(18) << "2500";
    cout << "\n   3.PREMIUM" << setw(50) << "Litter Box,Sand(5 kg),Food(10 kg) & TREATS" << setw(15) << "3500";

    string  breed, category, pkg, Choice;
    int age;
    double totalprice = 0;
    char C1;
    cout << "\nDO YOU WANT TO BUY SOMETHING(Y/N):";
    cin >> C1;
    if (toupper(C1) == 'Y')
    {
        cout << "\nWHAT DO YOU WANT TO BUY(CAT OR ACCESSORIES):";
        cin >> Choice;
        Choice = to_uppercase(Choice);  // Convert input to uppercase for comparison
        if (Choice == "CAT")
        {
            cout << "\nENTER THE BREED NAME:";
            cin >> breed;
            breed = to_uppercase(breed);  // Convert input to uppercase for comparison
            cout << "\nENTER THE AGE:";
            cin >> age;
            cout << "\nENTER THE CATEGORY (KITTEN/ADULT):";
            cin >> category;
            category = to_uppercase(category);  // Convert input to uppercase for comparison
            totalprice = BRD(breed, category, age, totalprice);
        }
        else if (Choice == "ACCESSORIES")
        {
            cout << "\nENTER THE PACKAGE (LOW, STANDARD, PREMIUM):";
            cin >> pkg;
            pkg = to_uppercase(pkg);  // Convert input to uppercase for comparison
            totalprice = package(pkg, totalprice);
        }
    }
    cout << "\nYOUR TOTAL BILL AMOUNT IS: " << totalprice;
    return 0;
}

double BRD(string breed, string category, int age, double totalprice)
{
    if (breed == "PERSIAN" && category == "KITTEN" && age >= 2 && age <= 8)
    {
        totalprice += 39000;
    }
    else if (breed == "PERSIAN" && category == "ADULT" && age >= 1 && age <= 4)
    {
        totalprice += 30000;
    }
    else if (breed == "BRITISH" && category == "KITTEN" && age >= 2 && age <= 8)
    {
        totalprice += 43000;
    }
    else if (breed == "BRITISH" && category == "ADULT" && age >= 1 && age <= 4)
    {
        totalprice += 30000;
    }
    else if (breed == "SPHYNX" && category == "KITTEN" && age >= 2 && age <= 8)
    {
        totalprice += 45000;
    }
    else if (breed == "SPHYNX" && category == "ADULT" && age >= 1 && age <= 4)
    {
        totalprice += 34000;
    }
    // Add similar conditions for all other breeds and categories
    return totalprice;
}

double package(string c, double totalprice)
{
    if (c == "LOW")
    {
        totalprice += 1500;
    }
    else if (c == "STANDARD")
    {
        totalprice += 2500;
    }
    else if (c == "PREMIUM")
    {
        totalprice += 3500;
    }
    return totalprice;
}
