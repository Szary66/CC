// Fill out your copyright notice in the Description page of Project Settings.

#include "CC.h"
#include "MenuGameMode.h"
#include "MenuHUD.h"
#include "MenuPlayerController.h"


AMenuGameMode::AMenuGameMode(const class FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	HUDClass = AMenuHUD::StaticClass();
	PlayerControllerClass = AMenuPlayerController::StaticClass();
}