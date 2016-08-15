// Fill out your copyright notice in the Description page of Project Settings.

#include "CC.h"
#include "SMenuUI.h"
#include "MenuHUD.h"
#include "Engine.h"


AMenuHUD::AMenuHUD(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{}

void AMenuHUD::PostInitializeComponents(){
	Super::PostInitializeComponents();

	SAssignNew(MenuUI, SMenuUI).MenuHUD(this);

	if(GEngine->IsValidLowLevel()){
		GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MenuUI.ToSharedRef()));
	}
}