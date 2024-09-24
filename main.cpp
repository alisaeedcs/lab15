#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Movie {
private:
    string movie;
    int year;
    string writer;
public:
    //getter & setter functions
    string getMovie() { return movie; }
    void setMovie(string m) { movie = m; }
    int getYear() { return year; }
    void getYear(int y) { year = y; }
    string getWriter() { return writer; }
    void getWriter(string w) { writer = w; }

    void print() {
        cout << setw(15) << "Movie: " << movie << endl;
        cout << setw(15) << "Year released: " << year << endl;
        cout << setw(15) << "Screenwriter: " << writer << endl;
    }
};

int main() {
    //make vector of the movies
    vector<Movie> movies;
    //take input from txt
    ifstream fin("input.txt");
    //make temporary holders for data
    string m; // hold temp movie
    int y; // hold temp year
    string w; //hold temp screenwriter
    int i = 0; //temp index
    return 0;
}