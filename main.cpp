#include <iostream>
#include <iomanip>
#include <vector>
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
    void setYear(int y) { year = y; }
    string getWriter() { return writer; }
    void setWriter(string w) { writer = w; }

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

    //while input good
    if (fin.is_open()) {
        while (getline(fin, m)) {
            fin >> y;
            fin.ignore();
            getline(fin, w);
            //temporary movie class
            Movie tmp;
            tmp.setMovie(m);
            tmp.setYear(y);
            tmp.setWriter(w);
            // add temp to vector
            movies.push_back(tmp);
            //next increment
            i++;
        }
        //close input file
        fin.close();
    }
    else {
        //if file was no good
        cout << "Input file not found";
        return 1;
    }
    //output all elements in vector;
    for (int i = 0; i < movies.size(); i++) {
        movies[i].print();
    }
    return 0;
}