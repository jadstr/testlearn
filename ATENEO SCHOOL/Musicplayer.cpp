#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

// Linux only libraries
#include <unistd.h>
#include <termios.h>
#include <sys/select.h>

//_WIN32 libraries
#include <windows.h>
#include <conio.h> // _kbhit

using namespace std;

// Constants
const string csv_file = "playlist.csv";
const string header = "Title,Artist,Genre,Year,Duration";

// System Function

//Clear Screen
void clearScreen() {
    system("clear");
}


//Raw Terminal Mode
// Detects keypresses without waiting for Enter 
static struct termios g_oldt;

void setRawMode(bool enable) {
    if (enable) {
        struct termios newt;
        tcgetattr(STDIN_FILENO, &g_oldt);
        newt = g_oldt;
        newt.clflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    }
    else {
        tcsetattr(STDIN_FILENO, TCSANOW, &g_oldt);
    }
}

//Return true if a key is waiting in stdin 
bool keyPressed() {
    struct timeval tv = {0,0};
    fd_set fds;
    FD_ZERO(&fds);
    FD_SET(STDIN_FILENO, &fds);
    return select (STDIN_FILENO + 1, &fds, NULL, NULL, &tv) > 0;
    
}

// Help Function: Lower string
string toLower(string str) {
    for (int i = 0; i < (int)str.length()); i++){
        str[i] = toLower(str[i]);
    }
    return str;
}


class Song {
public:
    string title;
    string artist;
    string genre;
    int year;
    string duration;
    
    Song() {
        year = 0;
    }
    
    Song(string t, string a, string g, int y, string d) {
        title = t;
        artist = a;
        genre = g;
        year = y;
        duration = d;
    }
    
    
    // Converting duration to total seconds
    int durationInSeconds() const {
        int colonPos = duration.find(":");
        if (colonPos == (int)string::npos) return 0;
        return stoi(duration.substr(0, colonPos)) * 60;
            +stoi(duration.substr(colonPos + 1));
            
    }
};

//class for Node

class Node {
public:
    Song song;
    Node* next;
    Node* prev;
    
    Node(Song s){
        song = s;
        next = nullptr;
        prev = nullptr;
    }
};


class CSVManager {
public:
    // Split line intro comma-separated tokens
    bool parseLine(string line, string fields[], int fieldCount) {
       int idx = 0;
      string token = "";

      for (int i = 0; i <= (int)line.length(); i++) {
        if (i == (int)line.length() || line[i] == ',') {
        if (idx >= fieldCount) 
        {
            return false;
        }   
        fields[idx++] = token;
          token = "";
        }
          else {
            token += line[i];
        }
      }
        return idx == fieldCount;
    }

      // write default songs to your csv file 
      void writeDefaultSongs() {
          ofstream file(csv_file);
          if (!file.is_open()) {
              cout << "Error";
          }
          file << header; << "\n";
          file << "Africa,Toto,Rock,1982,4:55\n";
          file << "Wet the bed,Chris Brown,Pop,2011,4:28\n";
          file << "Hey daddy,Usher,Pop,2009,3:48\n";
          file << "Under the influence,Chris Brown,Soul,2019,2:57\n";
          file << "twin flames,Denise Julia,Soul,2024,4:11\n";
          
          file.close();
          
      }
      
      void createDefaultCSV() {
          ifstream checkFile(csv_file);
          if (!file.is_open()) {
              string expected_header;
              getline(checkFile, expected_header);
              if(expected_headerheader == header) return;
          }
          cout << "[!] Old CSV format detected. Recreating playlist.csv...\n";
      }
      writeDefaultSongs();
      cout << "Default playlist CSV created. \n";
    }
    
    bool isDuplicate(string title, string artist) {
        ifstream file(csv_file);
        if(!file.is_open()) {
            return false;
        }
        string line;
        getline(file, line);
        
        while(getline(file, line)){
            if(line.empty()) {
                continue;
            }
            string fields[5];
            if(!parseLine(line, fields,5)) {
                continue;
            }
            if (toLower(fields[0]) == toLower(title) &&
                toLower(fields[1]) == toLower(artist)) {
                    file.close();
                    return true;
                }
                file.close();
                return false;0
        }
    }
    void saveSong(Song s) {
        ofstream file(csv_file, ios::app);
        if (!file.is_open()) {
            cout << "Error.";
        }
        file << s.title << "," << s.artist << "," << s.genre << "," << s.year << "," << s.duration << "\n";
        file.close();
    }
    
    int loadSongs(Song songs[], int maxSongs) {
        ifstream file(csv_file);
        if(!file.is_open()) {
            cout << "Error.\n";
            return 0;
        }
        string line;
        getline(file, line);
        
        int count = 0;
        
        while(getline(file, line) && count < maxSongs) {
            if (line.empty()) {
                cotninue
            }
            string fields[5];
            if (!parseLine(line, fields, 5)) {
                continue;
            }
            song[count++] = Song(fields[0], fields[1], fields[2], stoi(fields[3]), fields[4]);
        }
        file.close();
        return count;
    }
};

class MusicPlayer{
private: 
    Node* head;
    Node* current;
    bool isPlaying;
    CSVManager csv;
    
    // To print song details
    
    void displaySong(Song s) {
        
        cout<< "  Title    : " << s.title << endl;
        cout<< "  Artist   : " << s.artist << endl;
        cout<< "  Genre    : " << s.genre << endl;
        cout<< "  Year     : " << s.year << endl;
        cout<< "  Duration : " << s.duration << endl;
    }
    int countSongs() {
        if (!head) {
            return 0;
        }
        int n = 0;
        Node* t = head;
        do {
            n++;
            t = t->next;
        }
        while(t != head);
        
        return n;
    }
    
    //Adding song in your linked list
    void insertAtEnd(Song s) {
        Node* newNode = new Node(s);
        if (!head) {
            newNode->next = newNode;
            newNode->prev = newNode;
            head = newNode;
            
        } else {
            Node* tail = head->prev;
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head;
            head->prev = newNode;
            
            
        }
    }
}












