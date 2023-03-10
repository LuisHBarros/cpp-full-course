#include <iostream>

int main(void){
    std::string questions[] = {"1. What year was C++ created? ",
                     "2. Who invented C++? ",
                     "3. What is the predecessor of C++? ",
                     "4. Is the early flat? "};
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                                {"A. C", "B. C+", "C. C--", "D. HolyC"},
                                {"A. Yes", "B. No", "C. Sometimes", "D.What's Earth?"}};
    char answerKey[] = {'C', 'B', 'A', 'B'};
    int sizeOfQuestions = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;
    int sizeOfOptions = sizeof(options[0])/sizeof(options[0][0]);
    for(int i = 0; i < sizeOfQuestions; i++){
        std::cout << "*******************************\n";
        std::cout << questions[i]<<"\n";
        std::cout << "*******************************\n";

        for(int j = 0; j < sizeOfOptions; j++){
            std::cout << options[i][j] << "\n";
        }
            std::cout << "What is your guess? ";
            std::cin >> guess;
            guess = toupper(guess);
        if(guess == answerKey[i]){
            std::cout << "CORRECT!\n";
            score ++;
        }
        else{
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << answerKey[i] << "\n";
        }
    }
    std::cout << "*******************************\n";
    std::cout << "*           Results           *\n";
    std::cout << "*******************************\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "# OF QUESTIONS: " << sizeOfQuestions<< "\n";
    std::cout << "SCORE: " << (sizeOfQuestions/(double)score)*100 <<"%";

}