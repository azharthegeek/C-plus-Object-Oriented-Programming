
#include<iostream>
#include"Patient.h"
using namespace std;


    //Default Constructer
    Patient::Patient()
    {
    }

    // Overloaded Constructer
    Patient::Patient(double pid,string pname,string paddress,double pcontactnumber,string pemail,int patientage,string psex,string bg)
    {
       this->id=pid;
       this->name= pname;
       this->address= paddress;
       this->contactnumber= pcontactnumber;
       this->email=pemail;
       this->age=patientage;
       this->sex=psex;
       this->blood_group=bg;
    }



    void Patient::setid(double pid)
    {
        this->id = pid;
    }
    double Patient::getid()
    {
        return id;
    }

    void Patient::setpatientname(string pname)
    {
        this->name= pname;
    }
    string Patient::getpatientname()
    {
        return name;
    }

    void Patient::setaddress(string paddress)
    {
        this->address= paddress;
    }
    string Patient::getaddress()
    {
        return address;
    }

    void Patient::setcontactnumber(double pcontactnumber)
    {
        this->contactnumber= pcontactnumber;
    }
    double Patient::getcontactnumber()
    {
        return contactnumber;
    }

    void Patient::setemail(string pemail)
    {
        this->email= pemail;
    }
    string Patient::getemail()
    {
        return email;
    }

    void Patient::setage(int patientage)
    {
        this->age=patientage;
    }
    int Patient::getage()
    {
        return age;
    }

    void Patient::setsex(string psex)
    {
        this->sex=psex;
    }
    string Patient::getsex()
    {
        return sex;
    }

    void Patient::setblood_group(string bg)
    {
        this->blood_group=bg;
    }
    string Patient::getblood_group()
    {
        return blood_group;
    }



    void Patient::DisplayData()
    {
        cout<<endl<<"\t\t\t*************************************************";
        cout<<endl<<"\t\t\t*****Currently Showing Data of ID : "<< Patient::id <<"*****"<<endl;
        cout<<endl<<"\t\t\tName : "<< Patient::name;
        cout<<endl<<"\t\t\tAddress : "<< Patient::address;
        cout<<endl<<"\t\t\tContact Number : "<< Patient::contactnumber;
        cout<<endl<<"\t\t\tEmail : "<<Patient::email;
        cout<<endl<<"\t\t\tAge : "<<Patient::age;
        cout<<endl<<"\t\t\tSex : "<< Patient::sex;
        cout<<endl<<"\t\t\tBlood Group : "<< Patient::blood_group;
        cout<<endl<<"\t\t\t*************************************************";

    }
