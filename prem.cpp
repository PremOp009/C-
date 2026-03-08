#include<iostream>
#include<string>
using namespace std;

class Fighter{

    private:
        int bullets;
        float health;

    public:
        string name;

        Fighter(string n){
            name = n;
            bullets = 100;
            health = 100.0;
        }

        void shoot(){
            if(bullets > 0){
                bullets--;
                cout << name << " Fired Bullets" << endl;

            }
            else{
                cout << "No bullets left !!";
            }
        }

        void status(){
            cout << "Name : " << name << endl;
            cout << "Health : " << health << endl;
            cout << "Bullets : "  << bullets << endl; 
        }

    virtual void specialattackcharger(){
        cout << name << "special attack move is charged !" << endl;
    }

    void powertack(){
        cout << "Powertack is used !!" << endl;
    }

};

class NewFighter : public Fighter{

    public:
        NewFighter(string n) : Fighter(n){}


        void specialattackcharger(){
            cout << "Special attack move is charged !" << endl;
        }

        void powertack(){
        cout << "Powertack is used !!" << endl;
    }
};





int main(){


    Fighter f1("Prem");
    NewFighter f2("Daksh");

    cout << "Prem's Attack !" << endl;

    f1.shoot();
    f1.shoot();
    f1.specialattackcharger();
    f1.powertack();
    f1.status();

    cout << "--------------------------------------------------------------------------------------------------" << endl;

    cout << "Daksh's Attack !" << endl;

    f2.shoot();
    f2.shoot();
    f2.specialattackcharger();
    f2.powertack();
    f2.shoot();
    f2.status();


    return 0;
}
