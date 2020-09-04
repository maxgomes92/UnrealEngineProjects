// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    HiddenWord = TEXT("stockholm");
    
    PrintLine(TEXT("Welcome to the game!"));
    PrintLine(TEXT("Guess the word"));
    PrintLine(TEXT("Press tab to begin..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if (Input == HiddenWord) {
        PrintLine(TEXT("Win"));
    } else {
        PrintLine(TEXT("Loose"));
    }
}