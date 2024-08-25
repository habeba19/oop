#include<iostream>
using namespace std ;

class person
{
protected:
    string name;
    int age;
public:
    person() {}
    person( string  m, int  a)
    {

        name = m;
        age = a;
    }
    void setname( string name)
    {
        this->name = name;
    }



    string get_name()
    {
        return name;
    }

    void set_age( int age)
    {
        this-> age = age;
    }

    int get_age()
    {
        return age;
    }

    virtual void Display()const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};

class doctor: public person
{
private:
    int doctor_id;
    string specialization;
public:
    doctor():person() {}
    doctor(string name, int age, int doctor_id, string specialization):person(name, age)
    {
        this->doctor_id = doctor_id;
        this->specialization = specialization;
    }

    void set_doctor_id( int doctor_id)
    {
        this->doctor_id = doctor_id;
    }

    int get_doctor_id()
    {
        return doctor_id;
    }


    void set_specialization( string specialization)
    {
        this->specialization = specialization;
    }


    string get_specialization()
    {
        return specialization;;
    }


    void Display()const override
    {
        person::Display();
        cout << "Doctor ID: " << doctor_id << endl;
        cout << "Specialization: " << specialization << endl;
        cout<<"------------------------------------"<<endl;
    }
};

class pation: public person
{
private:
    int pation_id;
    string diagnosis;

public:
    pation():person() {}
    pation(string name,int age, string diagnosis,int pation_id):person(name,age)
    {
        this->pation_id = pation_id;
        this->diagnosis = diagnosis;
    }

    void set_pation_id( int pation_id)
    {
        this->pation_id = pation_id;
    }

    int get_pation_id()
    {
        return pation_id;
    }


    void set_diagnosis( string diagnosis)
    {
        this->diagnosis = diagnosis;
    }

    string get_diagnosis()
    {
        return diagnosis;

    }

    void Display()const override
    {
        person::Display();

        cout << "Patient ID: " << pation_id << endl;
        cout << "Diagnosis: " << diagnosis << endl;
    }
};



int main()
{
    doctor d1("Dr. ahmed", 35, 1234, "Cardiology");

    pation p1("Ali", 25, "Flu", 12345);


    cout << "Doctor Information:" << endl;
    d1.Display();
    cout << endl;
    cout << "\nPatient Information:" << endl;
    p1.Display();
    cout << endl;


    return 0;

}
