#include "movie.h"

Movie::Movie(
      std::string title_in,
      int length_in,
      std::vector<int> assessment_in,
      std::string genre_in
     )
    :title(title_in), length(length_in), genre(genre_in)
{
    for(size_t x = 0; x < assessment.size(); ++x)
    {
        assessment_in[x] = assessment[x];
    }
}

const std::string &Movie::getTitle() const
{
    return title;
}

void Movie::setTitle(const std::string &newTitle)
{
    title = newTitle;
}

int Movie::getLength() const
{
    return length;
}

void Movie::setLength(int newLength)
{
    length = newLength;
}

const std::vector<int> &Movie::getAssessment() const
{
    return assessment;
}

void Movie::setAssessment(const std::vector<int> &newAssessment)
{
    assessment = newAssessment;
}

const std::string &Movie::getGenre() const
{
    return genre;
}

void Movie::setGenre(const std::string &newGenre)
{
    genre = newGenre;
}

