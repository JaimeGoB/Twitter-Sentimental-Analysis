#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>//to use remove function
#include "TwitterUser.h"
#include "TweetData.h"
#include "MadLibbs.h"


using namespace std;
void insertJumpTable(TwitterUser & user, vector<string> wT, vector<string> iT);
int main(int argc, char * argv[])
{

    TwitterUser TweetyBird;//creating a Tweet Object
    TweetData TweetText;

    map<string, TwitterUser> Users;//creating a map with TwitterUser objs
    ifstream tweetFile;
    tweetFile.open(argv[1]);//there are 86 positive tweets


    string userId,userName, text;
    string ignoreThis;


    string word, identifier;

    //reading through the file and parcing and storing in map of users
    getline(tweetFile, ignoreThis);//ignore first line
    int counter = 0;//start 2 because we are ignoring first line
    while(getline(tweetFile, userId, ',')){//reading until end of file
        vector<string> W;
        vector<string> I;
        if(userId == "\n")//the last line in file was output twice, this checks for null strings
            break;//it will avoid repeating tweet
        getline(tweetFile, userName, ',');

        if(!Users.count(userName)) {
            TwitterUser A;
            A.setuserName(userName);
            Users.emplace(userName, A);
        }
        TweetyBird.setuserName(userName);//passing userNames to Tweet class
        getline(tweetFile, text, '\n');//get everything until end of line
        TweetText.setText(text);

        W = TweetText.getWordVector();
        I =TweetText.getIdentifierVector();
        insertJumpTable(Users[userName],W, I);
        counter++;
    }

    tweetFile.close();

    cout << "Total number of tweets: " << counter << endl;
    cout << "Total number of Happy tweets: " << TweetText.TotalHappyTweets() << endl;
    cout << "Average number of words per Happy tweet: " << TweetText.getAverageWordsHappyTweet() / TweetText.TotalHappyTweets() << endl;
    cout << "Total number of Sad tweets: " << TweetText.TotalSadTweets() << endl;
    cout << "Average number of words per sad tweet: " << TweetText.getAverageWordsSadTweet() / TweetText.TotalSadTweets() << endl;


    MadLibbs Solver(Users, argv[2]);
    Solver.setFinalPoS();
    //Solver.displayFinalPoS();
    Solver.outPutFile();


return 0;
}

/*this will compile into a jump table
 * allows for quick O(1) insert time for each user
 */
void insertJumpTable(TwitterUser & user, vector<string> wT, vector<string> iT) {

    int PoS = -1;

    for(int i = 0; i < wT.size(); i++){

    string enumerator = iT[i];
    string word = wT[i];



     if(enumerator == "ADJECTIVE")
         PoS = 0;
     else
     if(enumerator == "ADJECTIVE OR NUMERAL")
         PoS = 1;
     else
     if(enumerator == "ADVERB")
         PoS = 2;
     else
     if(enumerator == "CLOSING PARENTHESIS")
         PoS = 3;
     else
     if(enumerator == "CLOSING QUOTATION MARK")
         PoS = 4;
     else
     if(enumerator == "COLON OR ELLIPSIS")
         PoS = 5;
     else
     if(enumerator == "COMMA")
         PoS = 6;
     else
     if(enumerator == "CONJUNCTION")
         PoS = 7;
     else
     if(enumerator == "DETERMINER")
         PoS = 8;
     else
     if(enumerator == "DOLLAR")
         PoS = 9;
     else
     if(enumerator == "EXISTENTIAL THERE")
         PoS = 10;
     else
     if(enumerator == "FOREIGN WORD")
         PoS = 11;
     else
     if(enumerator == "GENITIVE MARKER")
         PoS = 12;
     else
     if(enumerator == "HASHTAG")
         PoS = 13;
     else
     if(enumerator == "INTERJECTION")
         PoS = 14;
     else
     if(enumerator == "MODAL AUXILIARY")
         PoS = 15;
     else
     if(enumerator == "NOUN")
         PoS = 16;
     else
     if(enumerator == "NUMBER")
         PoS = 17;
     else
     if(enumerator == "NUMERAL")
         PoS = 18;
     else
     if(enumerator == "OPENING PARENTHESIS")
         PoS = 19;
     else
     if(enumerator == "PARTICLE")
         PoS = 20;
     else
     if(enumerator == "PREPOSITION OR CONJUNCTION")
         PoS = 21;
     else
     if(enumerator == "PRONOUN")
         PoS = 22;
     else
     if(enumerator == "SENTENCE TERMINATOR")
         PoS = 23;
     else
     if(enumerator == "TO")
         PoS = 24;
     else
     if(enumerator == "URL")
         PoS = 25;
     else
     if(enumerator == "USERNAME")
         PoS = 26;
     else
     if(enumerator == "VERB")
         PoS = 27;

    switch(PoS){

    case 0 :
            user.putADJECTIVE(word);
            break;
    case 1 :
            user.putADJECTIVE_OR_NUMERAl(word);
            break;
    case 2 :
            user.putADVERB(word);
            break;
    case 3 :
            user.putCLOSING_PARENTHESIS(word);
            break;
    case 4 :
           user.putCLOSING_QUOTATION_MARK(word);
            break;
    case 5 :
            user.putCOLON_OR_ELLIPSIS(word);
            break;
    case 6 :
            user.putCOMMA(word);
            break;
    case 7 :
            user.putCONJUNCTION(word);
            break;
    case 8 :
            user.putDETERMINER(word);
            break;
    case 9 :
            user.putDOLLAR(word);
            break;
    case 10 :
            user.putEXISTENTIAL_THERE(word);
            break;
    case 11 :
            user.putFOREIGN_WORD(word);
            break;
    case 12 :
            user.putGENITIVE_MARKER(word);
            break;
    case 13 :
            user.putHASHTAG(word);
            break;
    case 14 :
            user.putINTERJECTION(word);
            break;
    case 15 :
            user.putMODAL_AUXILIARY(word);
            break;
    case 16 :
            user.putNOUN(word);
            break;
    case 17 :
            user.putNUMBER(word);
            break;
    case 18 :
            user.putNUMERAL(word);
            break;
    case 19 :
            user.putOPENING_PARENTHESIS(word);
            break;
    case 20 :
            user.putPARTICLE(word);
            break;
    case 21 :
            user.putPREPOSITION_OR_CONJUNCTION(word);
            break;
    case 22 :
            user.putPRONOUN(word);
            break;
    case 23 :
            user.putSENTENCE_TERMINATOR(word);
            break;
    case 24 :
            user.putSYMBOL(word);
            break;
    case 25 :
            user.putTO(word);
            break;
    case 26 :
            user.putURL(word);
            break;
    case 27 :
            user.putUSERNAME(word);
            break;
    case 28 :
            user.putVERB(word);
            break;
        }


    }

}
