#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get computer's choice
string getComputerChoice() {
    int randomChoice = rand() % 3;
    if (randomChoice == 0)
        return "rock";
    else if (randomChoice == 1)
        return "paper";
    else
        return "scissors";
}

// Function to get the winner
string getWinner(string playerChoice, string computerChoice) {
    if (playerChoice == computerChoice)
        return "It's a tie!";
    else if ((playerChoice == "rock" && computerChoice == "scissors") ||
             (playerChoice == "paper" && computerChoice == "rock") ||
             (playerChoice == "scissors" && computerChoice == "paper"))
        return "You win!";
    else
        return "Computer wins!";
}

int main() {


    string playerChoice;
    string computerChoice;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter rock, paper, or scissors: ";
    cin >> playerChoice;

    computerChoice = getComputerChoice();

    cout << "Computer chose: " << computerChoice << endl;
    cout << getWinner(playerChoice, computerChoice) << endl;

    return 0;
}
