// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

/**
 *
 */
UCLASS()
class CC_API AMenuHUD: public AHUD
{
public:
	GENERATED_BODY()
		AMenuHUD(const FObjectInitializer& ObjectInitializer);


	void virtual PostInitializeComponents() override;

	TSharedPtr<class SMenuUI> MenuUI;
};
