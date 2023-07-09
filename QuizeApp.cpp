#include <iostream>
#include <string>

using namespace std;

// Function to display the quiz questions
void displayQuestion(string question) {
    cout << "Q: " << question << endl;
}

// Function to get user's answer
string getUserAnswer() {
    string answer;
    cout << "Your Answer: ";
    cin >> answer;
    return answer;
}

// Function to check the user's answer against the correct answer
bool checkAnswer(string userAnswer, string correctAnswer) {
    return (userAnswer == correctAnswer);
}

int main() {
    int score = 0;

    // Quiz questions and their respective answers
    string questions[] = {
        "What is the capital of France?",
        "Who is the author of 'Pride and Prejudice'?",
        "What is the symbol for the chemical element Iron?"
    };
    string answers[] = {
        "Paris",
        "Jane Austen",
        "Fe"
    };

    int numQuestions = sizeof(questions) / sizeof(questions[0]);

    for (int i = 0; i < numQuestions; i++) {
        displayQuestion(questions[i]);
        string userAnswer = getUserAnswer();
        if (checkAnswer(userAnswer, answers[i])) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect!" << endl;
        }
        cout << endl;
    }

    cout << "Quiz complete!" << endl;
    cout << "Your score: " << score << "/" << numQuestions << endl;

    return 0;
}
