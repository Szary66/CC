// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MenuHUD.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class CC_API SMenuUI : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMenuUI)
	{}
	SLATE_ARGUMENT(TWeakObjectPtr<AMenuHUD>, MenuHUD)
	SLATE_END_ARGS()


	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);


	FReply PlayGameClicked();

	FReply QuitGameClicked();

	TWeakObjectPtr<AMenuHUD> MenuHUD;
};
