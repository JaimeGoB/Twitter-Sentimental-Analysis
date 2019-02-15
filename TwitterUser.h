//Twitterh
#ifndef TWITTERUSER_H
#define TWITTERUSER_H
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<iterator>
#include<map>
//include .h file here

using namespace std;

class TwitterUser
{
private :
     string userName;
     map<string, int>ADJECTIVE;
     map<string, int>ADJECTIVE_OR_NUMERAL;
     map<string, int>ADVERB;
     map<string, int>CLOSING_PARENTHESIS;
     map<string, int>CLOSING_QUOTATION_MARK;
     map<string, int>COLON_OR_ELLIPSIS;
     map<string, int>COMMA;
     map<string, int>CONJUNCTION;
     map<string, int>DETERMINER;
     map<string, int>DOLLAR;
     map<string, int>EXISTENTIAL_THERE;
     map<string, int>FOREIGN_WORD;
     map<string, int>GENITIVE_MARKER;
     map<string, int>HASHTAG;
     map<string, int>INTERJECTION;
     map<string, int>MODAL_AUXILIARY;
     map<string, int>NOUN;
     map<string, int>NUMBER;
     map<string, int>NUMERAL;
     map<string, int>OPENING_PARENTHESIS;
     map<string, int>PARTICLE;
     map<string, int>PREPOSITION_OR_CONJUNCTION;
     map<string, int>PRONOUN;
     map<string, int>SENTENCE_TERMINATOR;
     map<string, int>SYMBOL;
     map<string, int>TO;
     map<string, int>URL;
     map<string, int>USERNAME;
     map<string, int>VERB;
public :
    TwitterUser();
    ~TwitterUser();
    //getters and mapters
    void setuserName(string tName);
    string getuserName();
    //void putNOUN(string);
    void putADJECTIVE(string);

    void putADJECTIVE_OR_NUMERAl(string);

    void putADVERB(string);

    void putCLOSING_PARENTHESIS(string);

    void putCLOSING_QUOTATION_MARK(string);

    void putCOLON_OR_ELLIPSIS(string);

    void putCOMMA(string);

    void putCONJUNCTION(string);

    void putDETERMINER(string);

    void putDOLLAR(string);

    void putEXISTENTIAL_THERE(string);

    void putFOREIGN_WORD(string);

    void putGENITIVE_MARKER(string);

    void putHASHTAG(string);

    void putINTERJECTION(string);

    void putMODAL_AUXILIARY(string);

    void putNOUN(string);

    void putNUMBER(string);

    void putNUMERAL(string);

    void putOPENING_PARENTHESIS(string);

    void putPARTICLE(string);

    void putPREPOSITION_OR_CONJUNCTION(string);

    void putPRONOUN(string);

    void putSENTENCE_TERMINATOR(string);

    void putSYMBOL(string);

    void putTO(string);

    void putURL(string);

    void putUSERNAME(string);

    void putVERB(string);

    string popADJECTIVE();

    string popADJECTIVE_OR_NUMERAL();

    string popADVERB();

    string popCLOSING_PARENTHESIS();

    string popCLOSING_QUOTATION_MARK();

    string popCOLON_OR_ELLIPSIS();

    string popCOMMA();

    string popCONJUNCTION();

    string popDETERMINER();

    string popDOLLAR();

    string popEXISTENTIAL_THERE();

    string popFOREIGN_WORD();

    string popGENITIVE_MARKER();

    string popHASHTAG();

    string popINTERJECTION();

    string popMODAL_AUXILIARY();

    string popNOUN();

    string popNUMBER();

    string popNUMERAL();

    string popOPENING_PARENTHESIS();

    string popPARTICLE();

    string popPREPOSITION_OR_CONJUNCTION();

    string popPRONOUN();

    string popSENTENCE_TERMINATOR();

    string popSYMBOL();

    string popTO();

    string popURL();

    string popUSERNAME();

    string popVERB();

};
 
#endif
