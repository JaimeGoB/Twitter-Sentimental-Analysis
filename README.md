# Twitter-Sentimetal-Analysis

Program that will PREDICT FUTURE TWEETS from users Mad Libs style, it will use text analysis of  tweets to fill in the blanks based on words that a particular Twitter user has used in his/her tweets.

For example the Future Tweet Prediction File will contain tweets that composed of twitter user id (someUser) and part of speech missing(adjective): 

someUser Isn’t it [adjective] outside today!! #weather

Using a file containing tweets from thousands of users. The program will find tweets from “someUser” and replace the part “[adjective]” with an adjective “someUser” used in a previous tweet. 

The program will also include analysis of the original data set from the tweets and includ one output file that will contain summary statistics about tweets and also another file containing the predicted future tweets. 

Summary Statistics of Tweets file:

● Total Number of Tweets
● Total Number of Happy Tweets
Within the happy Tweets
○ Average Number of words per tweet:
○ Total number of words attributed to each unique part of speech(adjective, noun, verb, etc.).
○ Top three most common words for each part of speech. Break ties using alphabetical ordering.

● Total Number of Sad Tweets
Within the sad Tweets
○ Average Number of words per tweet:
○ Total number of words attributed to each unique part of speech(adjective, noun, verb, etc.).
○ Top three most common words for each part of speech. Break ties using alphabetical ordering.

Future Tweet Prediction File

Will contain a file that has predicted a random users tweet based on what they previously said. 

Attached is a picture containing the data from tweets:
![alt text](https://github.com/JaimeGoB/Twitter-Sentimental-Analysis/blob/master/tweetData.png)

Here is a picture of the the file containing the future tweet to predict:
![alt text](https://github.com/JaimeGoB/Twitter-Sentimental-Analysis/blob/master/image.png)

Here is the file containing the solved Mad Libs (Tweet Prediction File):

![alt text](https://github.com/JaimeGoB/Twitter-Sentimental-Analysis/blob/master/image.png)
