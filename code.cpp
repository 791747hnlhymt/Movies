#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;


 struct movie{
    string title, actor;
    int year;
    double rating;
};


int main()
{
    string user_input;
    vector<movie>movies;
      
    
    while(user_input != "e"){
        movie s;
        cout << "Would you like to (a)dd a movie, (l)ist movies, or (e)xit? ";
        cin >> user_input;
        if(user_input == "a"){
            cout << "Please enter the title: ";
            cin >> s.title;
            cout << "Please enter an actor: ";
            cin >> s.actor;
            cout << "please enter the year: ";
            cin >> s.year;
            cout << "Please enter the rating(1-10): ";
            cin >> s.rating;
            movies.push_back(s);
        }else if(user_input == "l"){
         for(int i = 0; i < movies.size(); i++){
             
             cout << "Title: " << movies[i].title << endl;
             cout << "Year: " << movies[i].year << endl;
             cout << "actor: " << movies[i].actor << endl;
             cout << "Rating: " << movies[i].rating << endl;
             movies.clear();
         }
         
        }
    }
    
    cout << endl;
    cout << endl;
    cout << endl;
    
    ifstream in;
    in.open("movies.txt");
    
    if(in.fail())
        cout << "File didnt open." << endl;
    
    double count = 0;
    string line;
    
    while(true){
        getline(in, line);  
        if (in.fail()) break;
        int number;
        count ++;
    }
    
    
    cout << "Total count: " << count << endl;
    
    
    
    return 0;
}
