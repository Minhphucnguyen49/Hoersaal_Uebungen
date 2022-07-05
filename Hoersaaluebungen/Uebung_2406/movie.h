#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <fstream>
#include <vector>

class Movie
{
public:
    Movie( std::string, int, std::vector<int>,  std::string );

    void readData(const std::string& path, const std::vector<Movie*>& movies);

    const std::string &getTitle() const;
    void setTitle(const std::string &newTitle);
    int getLength() const;
    void setLength(int newLength);
    const std::vector<int> &getAssessment() const;
    void setAssessment(const std::vector<int> &newAssessment);
    const std::string &getGenre() const;
    void setGenre(const std::string &newGenre);

private:
    std::string title;
    int length;
    std::vector<int> assessment;
    std::string genre;
};

#endif // MOVIE_H
