#include <iostream>
using namespace std;

int main()
{
    string motherAllele, fatherAllele;
    cout << "Enter Alleles of Mother: ";
    cin >> motherAllele;
    cout << "Enter Alleles of Father: ";
    cin >> fatherAllele;
    
    if((motherAllele == "GG" && fatherAllele == "gg") || (motherAllele == "gg" && fatherAllele == "GG"))
    {
        cout << "Gg: 100%";
    }
    else if((motherAllele == "Gg" && fatherAllele == "GG") || (motherAllele == "GG" && fatherAllele == "Gg"))
    {
        cout << "50% Gg && 50% GG";
    }
    else if(motherAllele == "gg" && fatherAllele == "gg")
    {
        cout << "100% gg";
    }
    else if(motherAllele == "GG" && fatherAllele == "GG")
    {
        cout << "100% GG";
    }
    else if(motherAllele == "Gg" && fatherAllele == "Gg")
    {
        cout << "25% GG and Gg 50% and gg 25%";
    }
    else if((motherAllele == "gg" && fatherAllele == "Gg") || (motherAllele == "Gg" && fatherAllele == "gg"))
    {
        cout << "Gg 50% gg 50%";
    }
    else
    {
        cout << "Enter Valid Alleles in the form of \"G\" or \"g\"";
    }
    
    return 0;
}
