//MadLibbs.cpp
#include "MadLibbs.h"
#include <iostream>
#include <iomanip>
#include<string>
#include <fstream>
#include<sstream>
#include<set>
#include <algorithm>

using namespace std;
 
MadLibbs:: MadLibbs()
{

}
MadLibbs::MadLibbs(map<string, TwitterUser> & mainUser, char* file)
{
    FinalUsers = &mainUser;//passing in user map from main


    ifstream MadFile;
    MadFile.open(file);

    if(!MadFile){
        cerr << "File could not be opned." << endl;
        exit(EXIT_FAILURE);
    }

    //reading file and parcing
    while(getline(MadFile, userName, ' ') ){
        if(userName == "\n")//the last line in file was output twice, this checks for null strings
            break;//it will avoid repeating tweet
        uName.push_back(userName);

        getline(MadFile, line);

        finalMadLibbs.push_back(line);
        setPoS(line);

        //add strings fisrt part, finalPoS, third part





    }
    getPos();

    MadFile.close();


}

MadLibbs:: ~MadLibbs()
{

}

//getting the pos from the file
void MadLibbs :: setPoS(string SpeechPart)
{
    char* cline = &SpeechPart[0];//copy text to cstring
    string temp = "\0";
    int beg = 0;
    int endOfFirstPart, begOfThirdPart;

    for(int i = 0; i < SpeechPart.length(); i++){

        if(cline[i] == '['){
                beg = i+1;//beginning is [
                endOfFirstPart = i;
        }

        if(cline[i] == ']'){

            begOfThirdPart = i +1;
                for(int k = beg; k < i; k++){
                    if (temp == "\0"){
                        temp = cline[k];

                    }else
                        temp = (temp + cline[k]);
                }
                //cout << temp <<endl;
                userIdentifier.push_back(temp);
                temp = "\0";

            }

        }

    string p1= SpeechPart.substr(0, endOfFirstPart);
    firstPart.push_back(p1);
    string p3= SpeechPart.substr(begOfThirdPart, SpeechPart.length());
    thirdPart.push_back(p3);

}
//using pointers to get the pos stored in the map of users
vector<string> MadLibbs :: getPos()
{
    for (int i = 0; i < userIdentifier.size(); i++){

    //string a ="k";
    //FinalUsers->at(a);//a).getTopVERB, takes verb with
    //gettop for highest element in map second(values) then pop/remove that value
    string a = uName[i];//userNAme
    string Identifier = userIdentifier[i];

    if(Identifier == "ADJECTIVE"){
    finalPoS.push_back(FinalUsers->at(a).popADJECTIVE());// seg fault here
    }else
    if(Identifier == "ADJECTIVE OR NUMERAL"){
    finalPoS.push_back(FinalUsers->at(a).popADJECTIVE_OR_NUMERAL());
    }else
    if(Identifier == "ADVERB")
    finalPoS.push_back(FinalUsers->at(a).popADVERB());
    else
    if(Identifier == "CLOSING PARENTHESIS")
    finalPoS.push_back(FinalUsers->at(a).popCLOSING_PARENTHESIS());
    else
    if(Identifier == "CLOSING QUOTATION MARK")
    finalPoS.push_back(FinalUsers->at(a).popCLOSING_QUOTATION_MARK());
    else
    if(Identifier == "COLON OR ELLIPSIS")
    finalPoS.push_back(FinalUsers->at(a).popCOLON_OR_ELLIPSIS());
    else
    if(Identifier == "COMMA")
    finalPoS.push_back(FinalUsers->at(a).popCOMMA());
    else
    if(Identifier == "CONJUNCTION")
    finalPoS.push_back(FinalUsers->at(a).popCONJUNCTION());
    if(Identifier == "DETERMINER")
    finalPoS.push_back(FinalUsers->at(a).popDETERMINER());
    else
    if(Identifier == "DOLLAR")
    finalPoS.push_back(FinalUsers->at(a).popDOLLAR());
    else
    if(Identifier == "EXISTENTIAL THERE")
    finalPoS.push_back(FinalUsers->at(a).popEXISTENTIAL_THERE());
    else
    if(Identifier == "FOREIGN WORD")
    finalPoS.push_back(FinalUsers->at(a).popFOREIGN_WORD());
    else
    if(Identifier == "GENITIVE MARKER")
    finalPoS.push_back(FinalUsers->at(a).popGENITIVE_MARKER());
    else
    if(Identifier == "HASHTAG")
    finalPoS.push_back(FinalUsers->at(a).popHASHTAG());
    else
    if(Identifier == "INTERJECTION")
    finalPoS.push_back(FinalUsers->at(a).popINTERJECTION());
    else
    if(Identifier == "MODAL AUXILIARY")
    finalPoS.push_back(FinalUsers->at(a).popMODAL_AUXILIARY());
    if(Identifier == "NOUN")
    finalPoS.push_back(FinalUsers->at(a).popNOUN());
    else
    if(Identifier == "NUMBER")
    finalPoS.push_back(FinalUsers->at(a).popNUMERAL());
    else
    if(Identifier == "NUMERAL")
    finalPoS.push_back(FinalUsers->at(a).popOPENING_PARENTHESIS());
    else
    if(Identifier == "OPENING PARENTHESIS")
    finalPoS.push_back(FinalUsers->at(a).popPARTICLE());
    if(Identifier == "PARTICLE")
    finalPoS.push_back(FinalUsers->at(a).popPREPOSITION_OR_CONJUNCTION());
    else
    if(Identifier == "PREPOSITION OR CONJUNCTION")
    finalPoS.push_back(FinalUsers->at(a).popPRONOUN());
    else
    if(Identifier == "PRONOUN")
    finalPoS.push_back(FinalUsers->at(a).popSENTENCE_TERMINATOR());
    else
    if(Identifier == "SENTENCE TERMINATOR")
    finalPoS.push_back(FinalUsers->at(a).popSYMBOL());
    else
    if(Identifier == "TO")
    finalPoS.push_back(FinalUsers->at(a).popTO());
    else
    if(Identifier == "URL")
    finalPoS.push_back(FinalUsers->at(a).popURL());
    else
    if(Identifier == "USERNAME")
    finalPoS.push_back(FinalUsers->at(a).popUSERNAME());
    else
    if(Identifier == "VERB")
    finalPoS.push_back(FinalUsers->at(a).popVERB());
    }


    return finalPoS;
}

//adding strings to the final mad libbs
void MadLibbs :: setFinalPoS()
{
    for(int i = 0; i < finalPoS.size(); i++){
        string u = uName[i]+" ";
        string part1 = firstPart[i];//userNAme
        string part2 = finalPoS[i];
        string part3 = thirdPart[i];
        string f;
        f.append(u).append(part1).append(part2).append(part3);
        finalMadLibbs[i] = f;
    }
}
//display the final mad libbs solved before writting to file
void MadLibbs :: displayFinalPoS()
{
    //for(auto i = firstPart.begin(); i < firstPart.end(); i++){
    for(auto i = finalMadLibbs.begin(); i < finalMadLibbs.end(); i++){
        cout << *i << "\n"<< endl;
    }
}
//creating and writting to file
void MadLibbs :: outPutFile()
{
    cout << endl;
    ofstream outFile("SolvedMadLibbs.txt");
    for(int i = 0; i < finalMadLibbs.size(); i++)
        outFile << finalMadLibbs[i] << endl;


    outFile.close();
}
