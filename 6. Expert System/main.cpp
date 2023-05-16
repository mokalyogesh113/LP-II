#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
/*

    predicates
        proposition(name, diesease); 
        symptom(name,indication);


*/

class MedicalDignosis{
public:
    string name;
    int age;
    map<string,bool> mp;
    
    void acceptDetails(){
        cout<<"What is the name of patient ? ==>  ";
        cin>>this->name;
        cout<<"\n";
        cout<<"What is Age of "<<name<<" ? ==> ";
        cin>>this->age;           
    }


    void symptom(string patient,string symp){
        char choice;
        cout<<"Does "<<patient<<" have a "<<symp<<" (y/n) ?  ";
        cin>>choice;
        if(choice=='y' || choice=='Y'){
            mp[symp] = true ;
        }
        else{
            mp[symp] = false;
        }
    }

    bool isinfected(string symp){
        return mp[symp];
    }

    bool proposition(string diesease){
        if(diesease=="measles"){
            return (isinfected("fever") &&
                    isinfected("cough") &&
                    isinfected("conjuctivities") &&
                    isinfected("runny_nose") &&
                    isinfected("rash")); 
        }
        else if(diesease=="german_measles"){
            return (isinfected("fever") &&
                    isinfected("headache") &&
                    isinfected("runny_nose") &&
                    isinfected("rash"));
        }
        else if(diesease=="flu"){
             return (isinfected("fever") && 
                    isinfected("headache") && 
                    isinfected("body_ahce") && 
                    isinfected("conjuctivities") && 
                    isinfected("chills") && 
                    isinfected("soar_throat") && 
                    isinfected("cough") && 
                    isinfected("runny_nose"));
        }
        else if(diesease=="common_cold"){
            return (isinfected("headache") &&
                    isinfected("sneezing") &&
                    isinfected("soar_throat") &&
                    isinfected("chills") &&
                    isinfected("runny_nose"));
        }
        else if(diesease=="mumps"){
            return (isinfected("fever") &&
                    isinfected("swollen_glands"));
        }
        else if(diesease=="chicken_pox"){
            return (isinfected("fever") &&
                    isinfected("rash") &&
                    isinfected("body_ahce") &&
                    isinfected("chills"));
        }
        else if(diesease=="whooping_cough"){
            return (isinfected("cough") &&
                    isinfected("sneezing") &&
                    isinfected("runny_nose"));
        }
        return false;
    }

    void conclude(string name,string diesease){
        cout<<"\n"<<name<<" probably has "<<diesease<<endl;
    }

};


int main()
{
    
    cout<<"\n\n\n";

    MedicalDignosis obj;
    obj.acceptDetails();
    

    obj.symptom(obj.name,"fever");
    obj.symptom(obj.name,"rash");
    obj.symptom(obj.name,"headache");
    obj.symptom(obj.name,"runny_nose");
    obj.symptom(obj.name,"conjuctivities");
    obj.symptom(obj.name,"cough");
    obj.symptom(obj.name,"body_ahce");
    obj.symptom(obj.name,"chills");
    obj.symptom(obj.name,"soar_throat");
    obj.symptom(obj.name,"sneezing");
    obj.symptom(obj.name,"swollen_glands");


    bool nothingDetected = true;

    if(obj.proposition("measles")){
        obj.conclude(obj.name,"measles");
        nothingDetected =false; 
    }
    if(obj.proposition("german_measles")){
        obj.conclude(obj.name,"german_measles");
        nothingDetected =false; 
    }
    if(obj.proposition("flu")){
        obj.conclude(obj.name,"flu");
        nothingDetected =false; 
    }
    if(obj.proposition("common_cold")){
        obj.conclude(obj.name,"common_cold");
        nothingDetected =false; 
    }
    if(obj.proposition("mumps")){
        obj.conclude(obj.name,"mumps");
        nothingDetected =false; 
    }
    if(obj.proposition("chicken_pox")){
        obj.conclude(obj.name,"chicken_pox");
        nothingDetected =false; 
    }
    if(obj.proposition("whooping_cough")){
        obj.conclude(obj.name,"whooping_cough");
        nothingDetected =false; 
    }
    if(nothingDetected){
        cout<<"\nI am sorry i am unable to identify the diesease ...";
    }
    
    cout<<"\n\n";
    cout<<"PRESS ANY KEY TO EXIT";
    getch();


}
