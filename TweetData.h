//TweetData.h
#ifndef TWEETDATA_H
#define TWEETDATA_H
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

class TweetData
{
private :
    int TotalOfHappyTweets, TotalOfSadTweets, TotalOfTweets;//initilize in constructor
    int avgH, avgS;
    string userName, text;
    string wordAndIdentifier;
    string Word, Identifier;
    int target;
    char* finalCStringText;
    vector<string>TotalWords;
    vector<string>TotalIdentifiers;
public :
    TweetData();
    ~TweetData();
    //getters and setters
    void setuserName(string tName);
    string getuserName();
    void setText(string t);
    string getText();
    void setWordAndIdentifier(string subS);
    void setWord(string W);
    void setIdentifier(string I);
    string getWord();
    string getIdentifier();
    void displayVector();
    void IncrementTotalSadTweets();
    void IncrementTotalHappyTweets();
    void IncrementTotalTweets();
    void IncrementAverageHappyWordsPerTweet();
    void IncrementAverageSadWordsPerTweet();
    void resetAverage();
    void displayWordsVector();
    void displayTotalIdentifiersVector();
    vector<string> getWordVector();
    vector<string> getIdentifierVector();
    int TotalSadTweets();
    int TotalHappyTweets();
    int TotalTweets();
    int getAverageWordsHappyTweet();
    int getAverageWordsSadTweet();
    //conversion functions
    void convertStringTarget(int targ);
    int getTarget();

};
 
#endif
