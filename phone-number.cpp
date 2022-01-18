
#include <iostream>
#include<regex>
#include<stdio.h>
using namespace std;

bool Email_check(string email)
{
     const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email,pattern);
}

int main()
{
    string a;
    int edit, hapus; 
    string phone[4];
    char loops;
    int pilihan;
    cout << " ________________ \n";
        cout << "|                                              |\n";
        cout << "|             Contact Number                   |\n";
        cout << " ________________ \n";
        cout << "|                                              |\n";
        cout << "| 1. Input Phone Number                        |\n";
        cout << "| 2. Show all Data                             |\n";
        cout << "| 3. Edit Data                                 |\n";
        cout << "| 4. Hapus Data                                |\n";
        cout << "|________________|\n\n";
        
       
        string str;
        cout<<"Enter your Email-Id:"<<endl;
        cin>>str;
        if(Email_check(str)){
            cout<<"Your Email-Id is valid"<<endl;

            do{
             cout<<"Masukkan Pilihan Anda: "<<endl;
             cin>>pilihan;
            switch(pilihan){
                case 1:
                    for(int i = 0; i < 1;i++ ){
                    cout << "input phone number " << i +1 << " :";
                    cin >> phone[i];
                    }
                    break;
                case 2:
                    cout << "List Contact : "<<endl; 
                    for(int i = 0; i < 4;i++ ){
                        cout << phone[i] << endl;
                    }
                    break;
                case 3:
                    cout << "pilih index yang diedit : " ;
                    cin >> edit;
                    
                    cout << "masukkan nomor baru : ";
                    cin >> phone[edit-1];
                    
                     for(int i = 0; i < 4;i++ ){
                        cout << phone[i] << endl;
                    }
                    break;
                case 4:
                    cout << "pilih index yang akan dihapus : " ;
                    cin >> hapus;
                
                    phone[hapus-1] = "";
                    
                     for(int i = 0; i < 4;i++ ){
                        cout << phone[i] << endl;
                    }
                    break;
                default:
                cout<< "invalid inputan";
        
            }
       
            cout<< "ulangi lagi?";
            cin>>loops;
                    
            }while(loops == 'Y');
                }
        else{
            
            cout<<"Your Email-Id is invalid"<<endl;
        }
    
}
