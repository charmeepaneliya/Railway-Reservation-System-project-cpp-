#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class Train{
    private:
        int trainNumber;
        char trainName[50];
        char source[50];
        char destination[50];
        char trainTime[10];

        static int trainCount;

     //default constructor   

    public:

        Train(){
            trainNumber=0;
            strcpy(trainName, "Not Set");
            strcpy(source, "Not Set");
            strcpy(destination, "Not Set");
            strcpy(trainTime, "Not Set");
            cout << "default Constructor Called" << endl;
        }

        //parameterized constructor

       Train(int number,const char* name,const char* src,const char* dest,const char* time){

        trainNumber=number;
        strcpy(trainName, name);
        strcpy(source, src);
        strcpy(destination, dest);
        strcpy(trainTime, time);
        trainCount++;

        cout << "parameterized Constructor Called" << endl;

       } 
       //copy constructor

       Train(const Train &t){
            trainNumber = t.trainNumber;
            strcpy(trainName, t.trainName);
            strcpy(source, t.source);
            strcpy(destination, t.destination);
            strcpy(trainTime, t.trainTime);
            
            cout << "Copy Constructor Called" << endl;
       }  

       //destructure

        ~Train(){
            trainCount--;
            cout << "Destructor Called " << trainNumber << endl;
        }
    

       //getter method

       int getTrainNumber() const{
        return trainNumber;
       }
        const char* getTrainName(){
        return trainName;
       }
       const char* getSource(){
        return source;
       }
       const char* getDestination(){
        return destination;
       }
       const char* getTrainTime(){
        return trainTime;
       }

       void display () const{
        cout<<"...Train 1 details...:"<<endl;
        cout<<"Train Number: "<<trainNumber<<endl;
        cout<<"Train Name:"<<trainName<<endl;
        cout<<"Source: "<<source<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Train time: "<<trainTime<<endl;
       }

       //setter method

       void inputTrainDetails(){
        cout<<"Enter Train Number: ";
        cin>>trainNumber;
        cin.ignore();

        cout<<"Enter Train Name:";
        cin.getline(trainName,50);

        cout<<"Enter source: ";
        cin.getline(source,50);

        cout<<"Enter Destination: ";
        cin.getline(destination,50);

        cout<<"Enter Train Time: ";
        cin.getline(trainTime,10);
       }

       static int getTrainCount(){
        return trainCount;
       }


};

int Train::trainCount = 0;

class RailwaySystem{
    private:
     vector<Train> trains;

    public:
    
        void addTrain(const Train &t){
            trains.push_back(t);
            cout<<"Train record added..."<<endl;
        }

       void addTrainByInput(){
        Train t;
        t.inputTrainDetails();
        trains.push_back(t);
        cout<<"Train record added..."<<endl;
       }

       void displayAllTrains(){
        cout<<"\n.....All Train Records....."<<endl;

        if(trains.empty()){
            cout<<"No Train records available"<<endl;
        }else{
            for(int i=0; i<trains.size();i++){
                trains[i].display();

            }
        }
     }

     void searchTrainByNumber(int number) const{
        for(const Train &t : trains){
            if(t.getTrainNumber()==number){
                cout<<"Train found"<<endl;
                t.display();
                return;
            }
        }
        cout<<"\ntrain with number"<<number<<"not found"<<endl;
     }
       

};

int main(){

    RailwaySystem system;
    int choice;
    
    while(true){
        cout << "\n--- Railway Reservation System Menu ---" << endl;
        cout << "1. Add New Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:
                system.addTrainByInput();
                break;
                
            case 2:
                system.displayAllTrains();
                break;
                
            case 3: {
                int trainNum;
                cout << "Enter Train Number to search: ";
                cin >> trainNum;
                system.searchTrainByNumber(trainNum);
                break;
            }
                
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    
    return 0;
}