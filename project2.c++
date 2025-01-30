#include<iostream>
using namespace std;
class railway_reservation{
    public:
    int train_number;
    string train_name;
    string source;
    string destination;
    int train_time;
railway_reservation(){
    
}
    railway_reservation(int train_number, string train_name,string source,string destination,int train_time){
        this->train_number=train_number;
        this->train_name=train_name;
        this->source=source;
        this->destination=destination;
        this->train_time=train_time;

     };
     void getData(){
        cout<<"Train Number : "<< train_number<<endl;
        cout<<"Train Name : "<< train_name<<endl;
        cout<<"Source : "<< source<<endl;
        cout<<"Destination : "<< destination<<endl;
        cout<<"Train Time : "<< train_time<<" hours"<<endl;
     };


};
 main(){
    // int arr[5];
railway_reservation arr[5];
for(int i=0;i<5;i++){
    cout<< " enter the details of the reservation : "<< (i+1)<<endl;
    int tn;   // train number 
    string tna;   // train name 
    string s;  // train source
    string d;  // train destination
    int tt;   // train time 
    cout<< " train_number : "<<endl;
    cin>>tn;
    cout<< " train_name : "<<endl;
    cin>>tna;
    cout<< " source : ";
    cin>>s;
    cout<< " destination : "<<endl;
    cin>>d;
    cout<< " train_time :"<<endl;
    cin>>tt;
    arr[i]= railway_reservation(tn,tna,s,d,tt);
   
};



cout<< " reservation details are :"<<endl;
for(int i=0;i<5;i++){
    arr[i].getData();


}

}