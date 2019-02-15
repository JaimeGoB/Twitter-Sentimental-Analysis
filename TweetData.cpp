//TweetData.cpp
#include "TweetData.h"
#include <iostream>
#include <iomanip>
#include<string>
#include <algorithm>
#include <sstream>
#include <vector>
#include <iterator>

/*
 * These functions will parce through the text in main and store it
 */

using namespace std;
 
TweetData:: TweetData()
{
    target = 1;
    TotalOfHappyTweets = 0;
    TotalOfSadTweets = 0;
    TotalOfTweets = 0;
    avgH = 0;
    avgS = 0;

}

TweetData :: ~TweetData()
{

}

void TweetData :: setuserName(string tName)
{
    userName = tName;
}

string TweetData :: getuserName()
{
    return userName;
}

void TweetData :: setText(string t)
{
    int tempTarget0 = 0, tempTarget4 =4;
    if( text[text.length()-1] == '0' ){//change this line accordling to string
        convertStringTarget(tempTarget0);
        IncrementTotalSadTweets();
    }
    else{
        convertStringTarget(tempTarget4);
        IncrementTotalHappyTweets();
    }

    text = t;//copying t to text, dont change text
    char* cText = &text[2];//copy text to cstring
    string temp = "\0";
    int beg = 0;

    for(int i = 0; i < text.length(); i++){

        if(cText[i] == '('){

            if(cText[i+2] == '(' ){
                temp = "('";
            }else
                beg = i;//beginning is (

        }

        if(cText[i] == ')'){
            if(cText[i+1] == ',' || cText[i+1] == ']'){
                for(int k = beg; k <= i; k++){
                    if (temp == "\0")
                        temp = cText[k];
                     else
                        temp = (temp + cText[k]);
                }
                //cout << temp << endl;
                setWordAndIdentifier(temp);
                temp = "\0";

            }

        }
    }


}

string TweetData :: getText()
{
    return text;
}

void TweetData :: convertStringTarget(int targ)
{
    target = targ;
}  

int TweetData :: getTarget()
{
    return target;
}

 void TweetData :: setWordAndIdentifier(string subS)
 {

    //delete first and last two characters
   wordAndIdentifier = subS.substr(2, subS.length()-4);
   char tokens[] = "\",\'";


   for(int i = 0; i < 3; i++){

       if(wordAndIdentifier[0] == ',' && wordAndIdentifier[1] == '\'')//so it doesnt erase comma
            wordAndIdentifier.erase( remove(wordAndIdentifier.begin()+1, wordAndIdentifier.end(), tokens[i] ), wordAndIdentifier.end() );
      else
       if(wordAndIdentifier[0] == '\"' && wordAndIdentifier[1] == '\''){//so it doesnt erase single quote
           wordAndIdentifier.erase( remove(wordAndIdentifier.begin()+1, wordAndIdentifier.end(), tokens[i] ), wordAndIdentifier.end() );
      }else
           wordAndIdentifier.erase( remove(wordAndIdentifier.begin(), wordAndIdentifier.end(), tokens[i] ), wordAndIdentifier.end() );
   }

   //seperate word and identifier
   int firstSpace = 0;
   for(int i = 0; i < 1; i++){//because we are only looking for one space
       firstSpace = (wordAndIdentifier.find(" ", firstSpace))+1;
   }

   Word = wordAndIdentifier.substr(0,firstSpace);
   Identifier = wordAndIdentifier.substr(firstSpace);

   TotalWords.push_back(Word);
   TotalIdentifiers.push_back(Identifier);

   if( target == 4)
        IncrementAverageHappyWordsPerTweet();
   else
       IncrementAverageSadWordsPerTweet();
}

/*
 void TweetData :: displayVector()
 {
     cout << "\nOutput of vector: \n" << endl;

     for(auto &i: WordsAndIdentifiers)
         cout << i << endl; //output one element per line
 }
*/
 void TweetData :: IncrementTotalSadTweets()
 {
     TotalOfSadTweets++;
 }

 void TweetData :: IncrementTotalHappyTweets()
 {

     TotalOfHappyTweets++;
 }

 void TweetData :: IncrementTotalTweets()
 {
     TotalOfTweets++;
 }

 int TweetData :: TotalSadTweets()
 {
     return TotalOfSadTweets;
 }

 int TweetData :: TotalHappyTweets()
 {
     return TotalOfHappyTweets;
 }

 int TweetData :: TotalTweets()
 {
     return TotalOfTweets;
 }

 void TweetData :: IncrementAverageHappyWordsPerTweet()
 {
     avgH++;
 }

 void TweetData :: IncrementAverageSadWordsPerTweet()
 {
     avgS++;
 }


 int TweetData :: getAverageWordsHappyTweet()
 {
    return avgH;
 }

 int TweetData ::  getAverageWordsSadTweet()
 {
    return avgS;
 }

 void TweetData :: setWord(string W)
 {
     Word = W;
 }

 void TweetData :: setIdentifier(string I)
 {
     Identifier =I;
 }

 string  TweetData :: getWord()
 {
    return Word;
 }

 string  TweetData :: getIdentifier()
 {
    return Identifier;
 }

 vector<string> TweetData :: getWordVector(){

     return TotalWords;
 }

 vector<string> TweetData :: getIdentifierVector(){

     return TotalIdentifiers;
 }














