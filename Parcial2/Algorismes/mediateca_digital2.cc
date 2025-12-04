// X13635

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track
{
    string artist, title, genre;
    int year;
};

bool comp(const Track &a, const Track &b)
{
    if (a.artist == b.artist)
    {
        if (a.genre == b.genre)
        {
            if (a.year == b.year)
                return a.title < b.title;
            else
                return a.year < b.year;
        }
        else
        {
            return a.genre < b.genre;
        }
    }
    else
    {
        return a.artist < b.artist;
    }
}

vector<Track> read_tracks(int n)
{
    vector<Track> tracks(20);

    for (int i = 0; i < n; ++i)
    {
        cin >> tracks[i].artist;
        cin >> tracks[i].title;
        cin >> tracks[i].genre;
        cin >> tracks[i].year;
    }

    return tracks;
}

void print_track(const Track &t)
{
    cout << t.artist;
    cout << " (" << t.year;
    cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<Track> tracks(n);
    tracks = read_tracks(n);

    sort(tracks.begin(), tracks.end(), comp);

    vector<string> genres;
    string genre;

    while (cin >> genre)
    {
        genres.push_back(genre);
    }

    // for(Track t : tracks)         // AQUESTA COSA NO ME DEIXEN
    //     for(string g : genres)
    //         if (t.genre == g) print_track(t);
    // }

    int midaT = tracks.size();
    int midaG = genres.size();

    for (int i = 0; i < midaT; ++i)
        for (int j = 0; j < midaG; ++j)
            if (tracks[i].genre == genres[j])
                print_track(tracks[i]);
}