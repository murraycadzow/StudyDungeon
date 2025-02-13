/**
 * @file deck.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-08-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once
#ifndef DECK_H_
#define DECK_H_



#include <windows.h>
#include <string>
#include <filesystem>
void create_flash_card();
void read_flashcard_deck();
void write_flashcard_deck();

/**
 * @brief Class that defines the properties of a flashcard
 * 
 */
struct FlashCard {
    std::string question; /** Flashcard question */
    std::string answer; /** Flashcard answer */
    int difficulty; /** User suppiled difficulty rating  */
    int n_times_answered; /** How many times has the user answered the card */

};

/**
 * @brief Class that defines a "deck" of flashcards
 * @class 
 * 
 */
class FlashCardDeck{
    std::string name;
    std::vector<FlashCard> cards;
};

/**
 * @brief Load the decks from files stored with the ".deck" extension inside decks/
 * TODO document
 */
void load_flashcard_decks(std::filesystem::path deck_path);


/**
 * @brief Reads the contents of the deck file to create cards and returns the deck
 * TODO document
 * @param deck_file 
 */
FlashCardDeck read_flashcard_deck(std::filesystem::path deck_file);


#endif
