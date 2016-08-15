// Fill out your copyright notice in the Description page of Project Settings.

#include "CC.h"
#include "SMenuUI.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SMenuUI::Construct(const FArguments& InArgs)
{
	this->MenuHUD = InArgs._MenuHUD;

	ChildSlot
	[
		SNew(SOverlay)+SOverlay::Slot().HAlign(HAlign_Center).VAlign(VAlign_Top)
		[
			SNew(STextBlock).ColorAndOpacity(FLinearColor::White).ShadowColorAndOpacity(FLinearColor::Black).ShadowOffset(FIntPoint(1,-1)).Font(FSlateFontInfo("Arial", 26)).Text(FText::FromString("MAIN MENU"))
		]+
		SOverlay::Slot().HAlign(HAlign_Center).VAlign(VAlign_Center)
		[
			SNew(SVerticalBox) + SVerticalBox::Slot()
			[
				SNew(SButton).Text(FText::FromString("Play Game!") ).OnClicked(this, &SMenuUI::PlayGameClicked)
			]
			+SVerticalBox::Slot()
			[
				SNew(SButton).Text(FText::FromString("Quit Game!")).OnClicked(this, &SMenuUI::QuitGameClicked)
			]
		]
	];	
}


FReply SMenuUI::PlayGameClicked(){
	
	return FReply::Handled();
}

FReply SMenuUI::QuitGameClicked(){
	
	return FReply::Handled();
}


END_SLATE_FUNCTION_BUILD_OPTIMIZATION
