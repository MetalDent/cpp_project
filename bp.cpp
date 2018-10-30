//////////////////////////////////////////////
// database dump folder should be in the project folder
// room numbers should be present in db before program starts and in version 1, we cannot change them
// 
////////////////////////////////////////////////////

//*: first do room works then student works

//*: get all data in separate arrays when pogram starts
//*: keep index same of all, rnumber[0] = 33, rfloor[0] = 3, studentid[0] = "B117000", studentname[0] = "f l"
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<boost/algorithm/string.hpp>
using namespace std;

//*: add other functions or vectors if needed
// *: Can't use ARRAY, USE VECTOR
// *: two collection in mysql-> student, hostel(room numbers according to floor)
//*: for first version consider there is only one block in the hostel
//*: db-> hostel {room_number, floor}

// *: when del and update, confirm with input "1" and "0"

class Hostel
{
    vector<int>rnumber;
    vector<int>rfloor;
    vector<int> studentid;
    vector<string>studentname;
    vector<int>studentroom;

    void program_open();

    void header();
    
    // int idposition(int sid); // for update, delete , search

    void add_student();
    

    void stud_del();

    void get_stud_info();
    void stud_all_display();
    void stud_search();
    void stud_clear(); //remove all students

    void get_roominfo();
    // void room_add();
    void room_search();
    // void room_remove();
    // int room_position(int n); //get floor
    int check_room(int roomid);
    void available_rooms();

    


    void program_close();
}


// info: 
    // *: for CREATE< UPDATE< DELETE
    // *: coders will change the data in vectors, and after changing in vectors, update the database


// class member functions

header(){
    // only contains print statements
    // number: use
    // can be used as SWITCH CASE int main function
    // *: like 0=> exit program
}

program_open() {
    // db open,
    // push db collections and schema to vectors
}


    void add_student(){
        //get student id, name
        //user enter room,
        //if available success else show avail rooms


    }
    

    void stud_del(){
        // input id

    }

    void get_stud_info(){
        //user enter id,
        //if found show name, room, floor, and all other details

    }
    void stud_all_display(){
        //show all students

    }

    void stud_search(){

        // inpput id
        // if success -> show name and room

    }


    void stud_clear(); //remove all students

    // void get_roominfo(){

    //     // input room> get floor if success


    // }


    // void room_add(){

    //     // add room, floor        

    // }



    void room_search(){

        // if success(found) , show student details, floor        

    }

    // void room_remove(){


    // }


    // int room_position(int n); //get floor

    int check_room(int room_id){

        // 

    }
    void available_rooms(){

        //get all available rooms
    }




program_close(){
    // close db
}

main()
{

}
