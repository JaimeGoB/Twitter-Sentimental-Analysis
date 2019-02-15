//TwitterUser.cpp
#include "TwitterUser.h"
#include <iostream>
#include <iomanip>
#include<string>
#include<set>
#include <algorithm>
/*
 *This obj will be incharge of allocating data to the correct maps
 */
using namespace std;
 
TwitterUser:: TwitterUser()
{

}

TwitterUser:: ~TwitterUser()
{

}

void TwitterUser :: setuserName(string tName)
{
    userName = tName;
}

string TwitterUser :: getuserName()
{
    return userName;
}

void TwitterUser::putADJECTIVE(string word) {
    map<string,int>::iterator iter = ADJECTIVE.find(word);
    if(iter != ADJECTIVE.end()) {//it exists
        ++iter->second;

    }
    else{
        ADJECTIVE.emplace(word, 1);
    }
}

void TwitterUser:: putADJECTIVE_OR_NUMERAl(string word) {
    map<string,int>::iterator iter = ADJECTIVE_OR_NUMERAL.find(word);
    if(iter != ADJECTIVE_OR_NUMERAL.end()) {//it exists
        ++iter->second;
    }
    else{
        ADJECTIVE_OR_NUMERAL.emplace(word, 1);
    }
}

void TwitterUser::putADVERB(string word) {
    map<string,int>::iterator iter = ADVERB.find(word);
    if(iter != ADVERB.end()) {//it exists
        ++iter->second;

    }
    else{
        ADVERB.emplace(word, 1);
    }
}

void TwitterUser::putCLOSING_PARENTHESIS(string word) {
    map<string,int>::iterator iter = CLOSING_PARENTHESIS.find(word);
    if(iter != CLOSING_PARENTHESIS.end()) {//it exists
        ++iter->second;

    }
    else{
        CLOSING_PARENTHESIS.emplace(word, 1);
    }
}

void TwitterUser::putCLOSING_QUOTATION_MARK(string word) {
    map<string,int>::iterator iter = CLOSING_QUOTATION_MARK.find(word);
    if(iter != CLOSING_QUOTATION_MARK.end()) {//it exists
         ++iter->second;

    }
    else{
       CLOSING_QUOTATION_MARK.emplace(word, 1);
    }
}

void TwitterUser::putCOLON_OR_ELLIPSIS(string word) {
    map<string,int>::iterator iter = COLON_OR_ELLIPSIS.find(word);
    if(iter != COLON_OR_ELLIPSIS.end()) {//it exists
        ++iter->second;

    }
    else{
        COLON_OR_ELLIPSIS.emplace(word, 1);
    }
}

void TwitterUser::putCOMMA(string word) {
    map<string,int>::iterator iter = COMMA.find(word);
    if(iter != COMMA.end()) {//it exists
        ++iter->second;

    }
    else{
        COMMA.emplace(word, 1);
    }
}

void TwitterUser::putCONJUNCTION(string word) {
    map<string,int>::iterator iter = CONJUNCTION.find(word);
    if(iter != CONJUNCTION.end()) {//it exists
        ++iter->second;

    }
    else{
        CONJUNCTION.emplace(word, 1);
    }
}

void TwitterUser::putDETERMINER(string word) {
    map<string,int>::iterator iter = DETERMINER.find(word);
    if(iter != DETERMINER.end()) {//it exists
        ++iter->second;

    }
    else{
        DETERMINER.emplace(word, 1);
    }
}

void TwitterUser::putDOLLAR(string word) {
    map<string,int>::iterator iter = DOLLAR.find(word);
    if(iter != DOLLAR.end()) {//it exists
        ++iter->second;
    }
    else{

        DOLLAR.emplace(word, 1);
    }
}

void TwitterUser::putEXISTENTIAL_THERE(string word) {
    map<string,int>::iterator iter = EXISTENTIAL_THERE.find(word);
    if(iter != EXISTENTIAL_THERE.end()) {//it exists
         ++iter->second;
    }
    else{

        EXISTENTIAL_THERE.emplace(word, 1);
    }
}

void TwitterUser::putFOREIGN_WORD(string word) {
    map<string,int>::iterator iter = FOREIGN_WORD.find(word);
    if(iter != FOREIGN_WORD.end()) {//it exists
         ++iter->second;
    }
    else{

        FOREIGN_WORD.emplace(word, 1);
    }
}

void TwitterUser::putGENITIVE_MARKER(string word) {
    map<string,int>::iterator iter = GENITIVE_MARKER.find(word);
    if(iter != GENITIVE_MARKER.end()) {//it exists
        ++iter->second;
    }
    else{

        GENITIVE_MARKER.emplace(word, 1);
    }
}

void TwitterUser::putHASHTAG(string word) {
    map<string,int>::iterator iter = HASHTAG.find(word);
    if(iter != HASHTAG.end()) {//it exists
        ++iter->second;
    }
    else{

        HASHTAG.emplace(word, 1);
    }
}

void TwitterUser::putINTERJECTION(string word) {
    map<string,int>::iterator iter = INTERJECTION.find(word);
    if(iter != INTERJECTION.end()) {//it exists
        ++iter->second;
    }
    else{

        INTERJECTION.emplace(word, 1);
    }
}

void TwitterUser::putMODAL_AUXILIARY(string word) {
    map<string,int>::iterator iter = MODAL_AUXILIARY.find(word);
    if(iter != MODAL_AUXILIARY.end()) {//it exists
        ++iter->second;
    }
    else{

        MODAL_AUXILIARY.emplace(word, 1);
    }
}

void TwitterUser::putNOUN(string word) {
    map<string,int>::iterator iter = NOUN.find(word);
    if(iter != NOUN.end()) {//it exists
        ++iter->second;
    }
    else{
        NOUN.emplace(word, 1);
    }
}

void TwitterUser::putNUMBER(string word) {
    map<string,int>::iterator iter = NUMBER.find(word);
    if(iter != NUMBER.end()) {//it exists
        ++iter->second;
    }
    else{

        NUMBER.emplace(word, 1);
    }
}

void TwitterUser::putNUMERAL(string word) {
    map<string,int>::iterator iter = NUMERAL.find(word);
    if(iter != NUMERAL.end()) {//it exists
        ++iter->second;
    }
    else{

        NUMERAL.emplace(word, 1);
    }
}

void TwitterUser::putOPENING_PARENTHESIS(string word) {
    map<string,int>::iterator iter = OPENING_PARENTHESIS.find(word);
    if(iter != OPENING_PARENTHESIS.end()) {//it exists
        ++iter->second;
    }
    else{

        OPENING_PARENTHESIS.emplace(word, 1);
    }
}

void TwitterUser::putPARTICLE(string word) {
    map<string,int>::iterator iter = PARTICLE.find(word);
    if(iter != PARTICLE.end()) {//it exists
        ++iter->second;
    }
    else{

        PARTICLE.emplace(word, 1);
    }
}

void TwitterUser::putPREPOSITION_OR_CONJUNCTION(string word) {
    map<string,int>::iterator iter = PREPOSITION_OR_CONJUNCTION.find(word);

    if(iter != PREPOSITION_OR_CONJUNCTION.end()) {//it exists
        ++iter->second;
    }
    else{

        PREPOSITION_OR_CONJUNCTION.emplace(word, 1);
    }
}

void TwitterUser::putPRONOUN(string word) {
    map<string,int>::iterator iter = PRONOUN.find(word);
    if(iter != PRONOUN.end()) {//it exists
        ++iter->second;
    }
    else{

        PRONOUN.emplace(word, 1);
    }
}

void TwitterUser::putSENTENCE_TERMINATOR(string word) {
    map<string,int>::iterator iter = SENTENCE_TERMINATOR.find(word);
    if(iter != SENTENCE_TERMINATOR.end()) {//it exists
        ++iter->second;
    }
    else{

        SENTENCE_TERMINATOR.emplace(word, 1);
    }
}

void TwitterUser::putSYMBOL(string word) {
    map<string,int>::iterator iter = SYMBOL.find(word);
    if(iter != SYMBOL.end()) {//it exists
        ++iter->second;
    }
    else{

        SYMBOL.emplace(word, 1);
    }
}

void TwitterUser::putTO(string word) {
    map<string,int>::iterator iter = TO.find(word);
    if(iter != TO.end()) {//it exists
       ++iter->second;
    }
    else{

         TO.emplace(word, 1);
    }
}

void TwitterUser::putURL(string word) {
    map<string,int>::iterator iter = URL.find(word);
    if(iter != URL.end()) {//it exists
        ++iter->second;
    }
    else{

        URL.emplace(word, 1);
    }
}

void TwitterUser::putUSERNAME(string word) {
    map<string,int>::iterator iter = USERNAME.find(word);
    if(iter != USERNAME.end()) {//it exists
        ++iter->second;
    }
    else{

        USERNAME.emplace(word, 1);
    }
}
void TwitterUser::putVERB(string word) {
    map<string,int>::iterator iter = VERB.find(word);
    if(iter != VERB.end()) {//it exists
        ++iter->second;
    }
    else{

       VERB.emplace(word, 1);
    }
}

string TwitterUser::popADJECTIVE()
{
    string retString = "";
    if( ADJECTIVE.size() == 0)
        return "[No valid part of speech]";


    int highest_score = this->ADJECTIVE.begin()->second;

    for (auto & x : this->ADJECTIVE) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(ADJECTIVE.size() > 0)
        //this->ADJECTIVE.erase(ADJECTIVE.find(retString));

    return retString;
}
//these pop functions will return a string contain Pos of what we need
string TwitterUser::popADJECTIVE_OR_NUMERAL()
{
    string retString = "";
    if(ADJECTIVE_OR_NUMERAL.size() == 0)
        return "[No valid part of speech]";


    int highest_score = this->ADJECTIVE_OR_NUMERAL.begin()->second;

    for (auto & x : this->ADJECTIVE_OR_NUMERAL) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(ADJECTIVE_OR_NUMERAL.size() > 1)
        //this->ADJECTIVE_OR_NUMERAL.erase(ADJECTIVE_OR_NUMERAL.find(retString));

    return retString;
}

string TwitterUser::popADVERB()
{
    string retString = "";

    if(ADVERB.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->ADVERB.begin()->second;

    for (auto & x : this->ADVERB) {//this will organize the poS by the one used more so we can output
        if (highest_score < x.second) {//the top 3 most used poS
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(ADVERB.size() > 1)
        //this->ADVERB.erase(ADVERB.find(retString)); //seg here dahhhhhhhhhh

    return retString;
}

string TwitterUser::popCLOSING_PARENTHESIS()
{
    string retString = "";
    if(CLOSING_PARENTHESIS.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->CLOSING_PARENTHESIS.begin()->second;

    for (auto & x : this->CLOSING_PARENTHESIS) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(CLOSING_PARENTHESIS.size() > 1)
        //this->CLOSING_PARENTHESIS.erase(CLOSING_PARENTHESIS.find(retString));

    return retString;
}

string TwitterUser::popCLOSING_QUOTATION_MARK()
{
    string retString = "";
    if(CLOSING_QUOTATION_MARK.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->CLOSING_QUOTATION_MARK.begin()->second;

    for (auto & x : this->CLOSING_QUOTATION_MARK) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(CLOSING_QUOTATION_MARK.size() > 1)
        //this->CLOSING_QUOTATION_MARK.erase(CLOSING_QUOTATION_MARK.find(retString));

    return retString;
}

string TwitterUser::popCOLON_OR_ELLIPSIS()
{
    string retString = "";
    if(COLON_OR_ELLIPSIS.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->COLON_OR_ELLIPSIS.begin()->second;

    for (auto & x : this->COLON_OR_ELLIPSIS) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(COLON_OR_ELLIPSIS.size() > 1)
        //this->COLON_OR_ELLIPSIS.erase(COLON_OR_ELLIPSIS.find(retString));

    return retString;
}

string TwitterUser::popCOMMA()
{
    string retString = "";
    if(COMMA.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->COMMA.begin()->second;

    for (auto & x : this->COMMA) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(COMMA.size() > 1)
        //this->COMMA.erase(COMMA.find(retString));

    return retString;
}

string TwitterUser::popCONJUNCTION()
{
    string retString = "";
    if(CONJUNCTION.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->CONJUNCTION.begin()->second;

    for (auto & x : this->CONJUNCTION) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(CONJUNCTION.size() > 1)
        //this->CONJUNCTION.erase(CONJUNCTION.find(retString));

    return retString;
}

string TwitterUser::popDETERMINER()
{
    string retString = "";
    if(DETERMINER.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->DETERMINER.begin()->second;

    for (auto & x : this->DETERMINER) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(DETERMINER.size() > 1)
        //this->DETERMINER.erase(DETERMINER.find(retString));

    return retString;
}

string TwitterUser::popDOLLAR()
{
    string retString = "";
    if(DOLLAR.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->DOLLAR.begin()->second;

    for (auto & x : this->DOLLAR) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(DOLLAR.size() > 1)
        //this->DOLLAR.erase(DOLLAR.find(retString));

    return retString;
}

string TwitterUser::popEXISTENTIAL_THERE()
{
    string retString = "";
    if(EXISTENTIAL_THERE.size() == 0)
        return "[No valid part of speech]";


    int highest_score = this->EXISTENTIAL_THERE.begin()->second;

    for (auto & x : this->EXISTENTIAL_THERE) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(EXISTENTIAL_THERE.size() > 1)
        //this->EXISTENTIAL_THERE.erase(EXISTENTIAL_THERE.find(retString));

    return retString;
}

string TwitterUser::popFOREIGN_WORD()
{
    string retString = "";
    if(FOREIGN_WORD.size() == 0)
        return "[No valid part of speech]";


    int highest_score = this->FOREIGN_WORD.begin()->second;

    for (auto & x : this->FOREIGN_WORD) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(FOREIGN_WORD.size() > 1)
        //this->FOREIGN_WORD.erase(FOREIGN_WORD.find(retString));

    return retString;
}

string TwitterUser::popGENITIVE_MARKER()
{
    string retString = "";
    if(GENITIVE_MARKER.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->GENITIVE_MARKER.begin()->second;

    for (auto & x : this->GENITIVE_MARKER) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(GENITIVE_MARKER.size() > 1)
        //this->GENITIVE_MARKER.erase(GENITIVE_MARKER.find(retString));

    return retString;
}

string TwitterUser::popHASHTAG()
{
    string retString = "";

    if(HASHTAG.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->HASHTAG.begin()->second;

    for (auto & x : this->HASHTAG) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(HASHTAG.size() > 1)
        //this->HASHTAG.erase(HASHTAG.find(retString));

    return retString;
}

string TwitterUser::popINTERJECTION()
{
    string retString = "";
    if(INTERJECTION.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->INTERJECTION.begin()->second;

    for (auto & x : this->INTERJECTION) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(INTERJECTION.size() > 1)
        //this->INTERJECTION.erase(INTERJECTION.find(retString));

    return retString;
}

string TwitterUser::popMODAL_AUXILIARY()
{
    string retString = "";
    if(MODAL_AUXILIARY.size() == 0)
        return "[No valid part of speech]";


    int highest_score = this->MODAL_AUXILIARY.begin()->second;

    for (auto & x : this->MODAL_AUXILIARY) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(MODAL_AUXILIARY.size() > 1)
        //this->MODAL_AUXILIARY.erase(MODAL_AUXILIARY.find(retString));

    return retString;
}

string TwitterUser::popNOUN()
{
    string retString = "";
    if(NOUN.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->NOUN.begin()->second;

    for (auto & x : this->NOUN) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(NOUN.size() > 1)
        //this->NOUN.erase(NOUN.find(retString));

    return retString;
}

string TwitterUser::popNUMBER()
{
    string retString = "";
    if(NUMBER.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->NUMBER.begin()->second;

    for (auto & x : this->NUMBER) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(NUMBER.size() > 1)
        //this->NUMBER.erase(NUMBER.find(retString));

    return retString;
}

string TwitterUser::popNUMERAL()
{
    string retString = "";
    if(NUMERAL.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->NUMERAL.begin()->second;

    for (auto & x : this->NUMERAL) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(NUMERAL.size() > 1)
        //this->NUMERAL.erase(NUMERAL.find(retString));

    return retString;
}

string TwitterUser::popOPENING_PARENTHESIS()
{
    string retString = "";
    if(OPENING_PARENTHESIS.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->OPENING_PARENTHESIS.begin()->second;

    for (auto & x : this->OPENING_PARENTHESIS) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(OPENING_PARENTHESIS.size() > 1)
        //this->OPENING_PARENTHESIS.erase(OPENING_PARENTHESIS.find(retString));

    return retString;
}

string TwitterUser::popPARTICLE()
{
    string retString = "";
    if(PARTICLE.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->PARTICLE.begin()->second;

    for (auto & x : this->PARTICLE) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(PARTICLE.size() > 1)
        //this->PARTICLE.erase(PARTICLE.find(retString));

    return retString;
}

string TwitterUser::popPREPOSITION_OR_CONJUNCTION()
{
    string retString = "";
    if(PREPOSITION_OR_CONJUNCTION.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->PREPOSITION_OR_CONJUNCTION.begin()->second;

    for (auto & x : this->PREPOSITION_OR_CONJUNCTION) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(PREPOSITION_OR_CONJUNCTION.size() > 1)
        //this->PREPOSITION_OR_CONJUNCTION.erase(PREPOSITION_OR_CONJUNCTION.find(retString));

    return retString;
}

string TwitterUser::popPRONOUN()
{
    string retString = "";
    if(PRONOUN.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->PRONOUN.begin()->second;

    for (auto & x : this->PRONOUN) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(PRONOUN.size() > 1)
       // this->PRONOUN.erase(PRONOUN.find(retString));

    return retString;
}

string TwitterUser::popSENTENCE_TERMINATOR()
{
    string retString = "";
    if(SENTENCE_TERMINATOR.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->SENTENCE_TERMINATOR.begin()->second;

    for (auto & x : this->SENTENCE_TERMINATOR) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(SENTENCE_TERMINATOR.size() > 1)
        //this->SENTENCE_TERMINATOR.erase(SENTENCE_TERMINATOR.find(retString));

    return retString;
}

string TwitterUser::popSYMBOL()
{
    string retString = "";
    if(SYMBOL.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->SYMBOL.begin()->second;

    for (auto & x : this->SYMBOL) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(SYMBOL.size() > 1)
        //this->SYMBOL.erase(SYMBOL.find(retString));

    return retString;
}

string TwitterUser::popTO()
{
    string retString = "";

    if(TO.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->TO.begin()->second;

    for (auto & x : this->TO) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(TO.size() > 1)
        //this->TO.erase(TO.find(retString));

    return retString;
}

string TwitterUser::popURL()
{
    string retString = "";
    if(URL.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->URL.begin()->second;

    for (auto & x : this->URL) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(URL.size() > 1)
        //this->URL.erase(URL.find(retString));

    return retString;
}

string TwitterUser::popUSERNAME()
{
    string retString = "";
    if(USERNAME.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->USERNAME.begin()->second;

    for (auto & x : this->USERNAME) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(USERNAME.size() > 1)
        //this->USERNAME.erase(USERNAME.find(retString));

    return retString;
}

string TwitterUser::popVERB()
{

    string retString = "";
    if(VERB.size() == 0)
        return "[No valid part of speech]";

    int highest_score = this->VERB.begin()->second;

    for (auto & x : this->VERB) {
        if (highest_score < x.second) {
            highest_score = x.second;
            retString = x.first;
        }
    }

    if(VERB.size() > 1)
        //this->VERB.erase(VERB.find(retString));

    return retString;
}


