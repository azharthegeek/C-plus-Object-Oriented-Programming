#include<iostream>
#include"Disease.h"
using namespace std;

    //Default Constructer
    Disease::Disease()
    {

    }
    // Overloaded Constructer
    Disease::Disease(string Dname,string Dlevel,string Dcategory)
    {
        this->NameofDesease = Dname;
        this->SeveritLevel = Dlevel;
        this->category = Dcategory;
    }

    void Disease::setNameofDesease(string Dname)
    {
        this->NameofDesease = Dname;
    }
    string Disease::getNameofDesease()
    {
        return NameofDesease;
    }

    void Disease::setSeveritLevel(string Dlevel)
    {
        this->SeveritLevel = Dlevel;
    }
    string Disease::getSeveritLevel()
    {
        return SeveritLevel;
    }

    void Disease::setCategory(string Dcategory)
    {
        this->category = Dcategory;
    }
    string Disease::getCategory()
    {
        return category;
    }


    void Disease::DisplayData()
    {
        cout<<endl<<"\t\t\t************************************************************************************";
        cout<<endl<<"\t\t\t                             Disease Information";
        cout<<endl<<"\t\t\t************************************************************************************";
        cout<<endl<<"\t\t\tDisease Name           : "<<Disease::NameofDesease;
        cout<<endl<<"\t\t\tDisease Category       : "<<Disease::category;
        cout<<endl<<"\t\t\tDisease Severity Level : "<<Disease::SeveritLevel;
        cout<<endl<<"\t\t\t************************************************************************************";
    }

