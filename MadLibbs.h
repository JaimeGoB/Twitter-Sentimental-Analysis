//MadLibbs.h
#ifndef MadLibbs_H
#define MadLibbs_H
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<iterator>
#include<map>
#include "TwitterUser.h"

using namespace std;

class MadLibbs
{
private :
    string userName, ignoreThis, line, PoS, MadLibbsLine;
    vector<string> uName;
    vector<string> userIdentifier;
    vector<string> firstPart, thirdPart;
    vector<string> finalPoS;
    vector<string> finalMadLibbs;
    map<string, TwitterUser> * FinalUsers;

public :
    MadLibbs();
    MadLibbs(map<string, TwitterUser> & mainUser, char* F); //read from file
    ~MadLibbs();
    void setPoS(string SpeechPart);
    vector<string> getPos();
    void setFinalPoS();
    void displayFinalPoS();
    void outPutFile();


};
 
#endif

