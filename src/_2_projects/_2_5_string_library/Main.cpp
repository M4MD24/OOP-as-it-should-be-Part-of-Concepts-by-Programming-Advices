#include "libraries/String.h"
using namespace std;

int main() {
    string example = "Aa,, Bb cC dD Ff";

    cout << "Original Text: " << example << endl;

    String::printFirstCharacters(
        example
    );

    String::printFirstUppercaseLetters(
        example
    );

    String::printFirstLowercaseLetters(
        example
    );

    String::printVowelsInText(
        example
    );

    String::printWords(
        example
    );

    cout << "Word Count: " << String::invertAllLetterCases(
        example
    ) << endl;

    cout << "Inverted All Letter Cases: " << String::invertAllLetterCases(
        example
    ) << endl;

    cout << "To Uppercase: " << String::toUppercaseText(
        example
    ) << endl;

    cout << "To Lowercase: " << String::toLowercaseText(
        example
    ) << endl;

    cout << "Capital Letter Count: " << String::capitalLetterCount(
        example
    ) << endl;

    cout << "Small Letter Count: " << String::smallLetterCount(
        example
    ) << endl;

    cout << "Target Letter Count: " << String::targetLetterCount(
        example,
        'A',
        true
    ) << endl;

    cout << "Count of Vowels: " << String::countOfVowels(
        example
    ) << endl;

    cout << "Reversed Word Order: " << String::reverseWordOrder(
        example
    ) << endl;

    String::replaceText(
        example,
        "aa",
        "AaA"
    );
    cout << "After Replacing The Text: " << example << endl;

    String::removeAllPunctuations(
        example
    );
    cout << "After Removing Punctuations: " << example << endl;

    vector<string> words;

    String::splitText(
        example,
        words,
        " "
    );
    String::printWords(
        words
    );

    cout << "Join Text: " << String::joinText(
        words,
        "-"
    ) << endl;

    example = "             Aa Bb cC dD Ff             ";
    cout << "Original Text: " << example << endl;
    cout << "Trim: " << String::trim(
        example
    ) << endl;
    cout << "Trim Left: " << String::trimLeft(
        example
    ) << endl;
    cout << "Trim Right: " << String::trimRight(
        example
    ) << endl;
}