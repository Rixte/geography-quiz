#include <stdio.h>

int result(char final, char char1, char char2, char char3);

void main(void)
{
    char _2tm, wp, dt, reply, char1, char2, char3, final;
    int c, attempt, q1, q2, q3, score;
    
    printf("=== Welcome to the Geography Quiz ===");
    printf("\n\nPlease read these instructions before you begin:");
    printf("\n1. This quiz contains 3 questions.");
    printf("\n2. 1 correct answer = 10 Marks. For Question 3, if your last attempt is close to the correct answer, 5 marks will be awarded."); 
    printf("\n3. You must pass the quiz. The passing mark for this quiz is 15.");
    printf("\n4. *If you score full marks for this quiz, you can choose to do the bonus question at the end to try to win a prize.*");
    printf("\nLet's begin!");
    
    reply = 'y';
    while (reply == 'y')
    {
        char1   = char2 = char3 = '0';
        score   = q1 = q2 = q3 = 0;
        attempt = 1;
        while (reply == 'y' || attempt == 1)
        {
            _2tm = 'a';
            while (_2tm == 'a')
            {
                printf("\n\nQuestion 1: What is the 2nd tallest mountain in the world?");
                printf("\na: K2  b: Mount Everest  c: Nanga Parbat  d: Makalu\n");
                scanf(" %c", &_2tm);
                
                while (!(_2tm == 'a' || _2tm == 'b' || _2tm == 'c' || _2tm == 'd'))
                {
                    printf("Invalid input! Please re-enter your answer: ");
                    scanf(" %c", &_2tm);
                }
                break;
            }
    
            printf("\nYour answer is %c.\n", _2tm);
            
            if (_2tm == 'a')
            {
                q1    = 10;
                final = 'y';
                char1 = '1';
                printf("%d marks.", result(final, char1, char2, char3));
                char1 = '2';
                final = 'x';
                break;
            }    
            else if (_2tm == 'b' || _2tm == 'c'|| _2tm == 'd')
            {   
                if (attempt == 2)
                {
                    final = 'w';
                    reply = 'n';
                    printf("%d marks.", result(final, char1, char2, char3));
                    final = 'x';
                }
                if (attempt == 1)
                {
                    final = 'w';
                    printf("%d marks.", result(final, char1, char2, char3));
                    final = 'e';
                    result(final, char1, char2, char3);
                    scanf(" %c", &reply);
                    attempt = 2;
                    final   = 'x';
                }
            }
        }
    
        attempt = 1;
        reply   = 'y';
        while (reply == 'y' || attempt == 1)
        {
            wp = 'a';
            while (wp == 'a')
            {
                printf("\n\nQuestion 2: What is the world population today [in billions]? ");
                printf("\na: 6.7  b: 9.8  c: 5.1  d: 7.9\n");
                scanf(" %c", &wp);
                
                while (!(wp == 'a' || wp == 'b' || wp == 'c' || wp == 'd'))
                {
                    printf("Invalid input! Please re-enter your answer: ");
                    scanf(" %c", &wp);
                }
                break;
            }
    
            printf("\nYour answer is %c.\n", wp);
            
            if (wp == 'd')
            {
                q2    = 10;
                final = 'y';
                char2 = '2';
                printf("%d marks.", result(final, char1, char2, char3));
                char2 = '3';
                final = 'x';
                break;
            }
            else if (wp == 'a' || wp == 'b' || wp == 'c')
            {
                if (attempt == 2)
                {
                    final = 'w';
                    reply = 'n';
                    printf("%d marks.", result(final, char1, char2, char3));
                    final = 'x';
                }
                if (attempt == 1)
                {
                    final = 'w';
                    printf("%d marks.", result(final, char1, char2, char3));
                    final = 'e';
                    result(final, char1, char2, char3);
                    scanf(" %c", &reply);
                    attempt = 2;
                    final   = 'x';
                }
            }
        }

        attempt = 1;
        reply   = 'y';
        while (reply == 'y' || attempt == 1)
        {
            c = '1';
            while (c == '1')
            {
                printf("\n\nQuestion 3: How many countries are there in Asia? ");
                printf("(Hint: The answer is less than 65 countries)\n");
                scanf("%d", &c);
                
                while (c <= 0)
                {
                    printf("Invalid input! Please re-enter your answer: ");
                    scanf("%d", &c);
                }
                break;
            }
            
            printf("\nYour answer is %d countries.\n", c);
    
            if ((48 > c && c > 44) || (48 < c && c < 52))
            {
                printf("Your answer is close to the correct answer!");
                
                if (attempt == 2)
                {
                    q3    = 5;
                    char3 = '5';
                    printf("%d marks.", result(final, char1, char2, char3));
                    final = 'x';
                    break;
                }
                if (attempt == 1)
                {
                    q3    = 5;
                    char3 = '5';
                    printf("%d marks.", result(final, char1, char2, char3));
                    final = 'e';
                    result(final, char1, char2, char3);
                    scanf(" %c", &reply);
                    attempt = 2;
                    final   = 'x';
                }
            }
            else if (c == 48)
            {
                q3    = 10;
                final = 'y';
                char3 = '3';
                printf("%d marks.", result(final, char1, char2, char3));
                char3 = '4';
                final = 'x';
                break;
            }
            else if (c != (44 < c < 52) && c > 0)
            {
                if (attempt == 2)
                {
                    q3 = 0;
                    if (char3 == '5')
                    {
                        char3 = '0';
                    }
                    final = 'w';
                    reply = 'n';
                    printf("%d marks.", result(final, char1, char2, char3));
                    final = 'x';
                }
                if (attempt == 1)
                {
                    q3    = 0;
                    char3 = '0';
                    final = 'w';
                    printf("%d marks.", result(final, char1, char2, char3));
                    final = 'e';
                    result(final, char1, char2, char3);
                    scanf(" %c", &reply);
                    attempt = 2;
                }
            }
        }
        printf("\n\n\nQuestion 1: %d marks  Question 2: %d marks  Question 3: %d marks", q1, q2, q3);
        
        score = q1 + q2 + q3;
        printf("\nYour final score is %d/30.", score);
        
        if (score >= 15 && score != 30)
        {
            printf(" You have passed the quiz. Would you like to try the quiz again? [y/n] ");
            scanf(" %c", &reply);
            if (reply != 'y')
            {
                printf("\n\nThank you for participating!");
            }
        }
        if (score < 15)
        {
            printf(" You have not met the passing mark for the quiz, please try again.");
            reply = 'y';
        }
        if (score == 30)
        {
            printf(" Congratulations, you scored full marks for the quiz!");
            printf("\n\nProceed with bonus question? (You win a prize if you're correct.) [y/n] ");
            scanf(" %c", &reply);
            
            if (reply == 'y')
            {
                printf("\n\n[1 Attempt] Bonus Question: What is the deepest trench in the ocean?");
                printf("\na: Mariana Trench  b: Philippine Trench  c: Puerto Rico Trench  d: Diamantina Trench\n");
                scanf(" %c", &dt);
                
                while (!(dt == 'a' || dt == 'b' || dt == 'c' || dt == 'd'))
                {
                    printf("Invalid input! Please re-enter your answer: ");
                    scanf(" %c", &dt);
                }
                
                if (dt == 'a')
                {
                    printf("Correct, you win a prize!");
                }
                else if (dt == 'b' || dt == 'c' || dt == 'd')
                {
                    printf("Incorrect. No prize obtained.");
                }
            }
            printf("\n\nThank you for participating!");
            reply = 'n';
        }
    }
}

int result(char final, char char1, char char2, char char3)
{   
    int score, score1, q1, q2, q3;
    score = score1 = q1 = q2 = q3 = 0;
    
    if (final == 'y')
    {
        printf("Yes! You are correct.");
    }   
    if (char1 == '1')
    {
        printf(" The 2nd tallest mountain in the world is K2!");
        q1 = 10;
    }
    if (char1 == '2')
    {
        q1 = 10;
    }
    if (char2 == '2')
    {
        printf(" The world population today is 7.9 billion!");
        q2 = 10; 
    }
    if (char2 == '3')
    {
        q2 = 10;
    }
    if (char3 == '3')
    {
        printf(" There are 48 countries in Asia!");
        q3 = 10;
    }
    if (char3 == '4')
    {
        q3 = 10;
    }
    if (char3 == '5')
    {
        q3 = 5;
    }

    if (final == 'w')
    {
        printf("Sorry, you are incorrect.");
    }
    if (final == 'e')
    {
        printf(" Try again? [y/n]: ");
    }
    
    if (final != 'e')
    {
        printf(" Your score so far is ");
    }
    
    score = q1 + q2 + q3;
    return score;
}

