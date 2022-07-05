#include <iostream>
#include <fstream>
#include <vector>
#include "movie.h"
#include <algorithm>

//std::vector<int> temp {1,1};
//Movie* m1 = new Movie("", 1, temp , "");
//Movie* m2 = new Movie("", 1, temp , "");
//std::vector<Movie*> movies{
//    m1,m2
//};
std::vector<Movie*> movies{};

void writeData()
{
    std::string path = "file.txt";
    std::ofstream target(path, std::ofstream::out | std::ofstream::trunc);

    if ( !target.good() )
    {
        throw ("file can not be opened");
    }

    std::ofstream data ("file.txt");
    data << "Film-DatenBank" << std::endl;
    data << "Eintraege: " << movies.size() << std::endl;
    for (auto& x : movies)
    {
        data << "**********" << std::endl;
        data << "Titel: " << x->getTitle() << std::endl;
        data << "Laenge: "  << x->getLength() << std::endl;
        for(size_t i = 0; i < x->getAssessment().size(); i++)
        {
            data << "Bewertungen: "  << x->getAssessment().at(i) << " ";
        }
        data << std::endl;
        data << "Genre: "  << x->getGenre() << std::endl;
    }
}
/**
 * always using call by reference because
 * in class std::fstream (as well as std::ifstream)
 * the copy constructor is defined = delete
 * i.e. call by value (aka make a copy of it)
 * will be prohibited
 */
void readData( std::ifstream& data, std::vector<Movie*>& movies_in)
{
    if ( !data.good() )
    {
        throw ("file can not be opened");
    }
    std::string line;
    getline(data, line);// ignore the first line

    std::string eintraege;
    int numMovies;
    data >> eintraege;
    //std::cin.get()
    data >> numMovies;
    //std::cout << eintraege << " " << numMovies << std::endl;


    while( !data.eof() )
    {
        int i = 0;
        data >> eintraege;
        getline(data, line);//ignore ******* line
        data >> eintraege;//Title:
        std::string title;
        getline(data, title);// read the title of movie

        data >> eintraege;//Länge:
        int lange;
        data >> lange;

        data >> eintraege;//Bewertungen:
        std::string assessment_S;
        getline(data,assessment_S);
        //remove ' ' aka space Leerzeichen from string
        // Do not forget to include <algorithm>
        assessment_S.erase(remove(assessment_S.begin(), assessment_S.end(), ' '), assessment_S.end());

        std::vector<int> assessment;
        for( auto a : assessment_S )
        {
            int i = (int)a - 48;// (int)a is ASCII, i.e. 0 entspricht 48
            assessment.push_back(i);
        }

//        std::vector<int> assessment;
//        for( auto a : assessment )
//        {
//            data >> a;
//        }

        data >> eintraege;//Genre:
        std::string genre;
        data >> genre;// read the Genre of movie

        Movie* m = new Movie(title, lange, assessment, genre);
        movies_in.push_back(m);
        i++;
    }
}
void print()
{
    for ( auto& m : movies )
    {
        std::cout << "Eintraege: " << movies.size() << std::endl;
        std::cout << "Title: " << m->getTitle() << std::endl;
        std::cout << "Laenge: " << m->getLength() << std::endl;
        for(auto a : m->getAssessment())
        {
            std::cout << "Bewertungen: " << a << " ";
        }
        std::cout << std::endl;
        std::cout << "Genre: " << m->getGenre() << std::endl;
    }
}
int main() try
{

    /**
     * Empty objects erstellen
     * and then ghi de len
     *

    movies.at(0)->setTitle( "The Dark Night" );
    movies.at(0)->setLength (152);
    movies.at(0)->setAssessment ( {5, 5} );
    movies.at(0)->setGenre ( "Action" );

    movies.at(1)->setTitle( "Amen" );
    movies.at(1)->setLength (180);
    movies.at(1)->setAssessment ( {5, 5, 1, 1, 4} );
    movies.at(1)->setGenre ( "Science-Fiction" );

    //using push back to add new elements
    Movie* m3 = new Movie("Star War", 180, std::vector<int>{5, 5, 5, 5} , "Action");
    Movie* m4 = new Movie("Gone with the wind", 230, std::vector<int>{1, 1, 1, 1, 1} , "Schön");
    movies.push_back(m3);
    movies.push_back(m4);
    */

    //std::ifstream database("database.txt");
    std::string database = "database.txt";
    std::ifstream file(database);
    //file.open("database.txt", std::ios::in);
    readData(file, movies);

    //print();
    writeData();

    file.close();
}
catch ( const char* &e )
{
    std::cout << e << std::endl;
}

