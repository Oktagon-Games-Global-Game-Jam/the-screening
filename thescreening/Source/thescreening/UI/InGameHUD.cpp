// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameHUD.h"

AInGameHUD::AInGameHUD()
{

}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (UObjectsWidgetClass)
	{
		ObjectWidget = CreateWidget<UObjectsWidget>(GetWorld(), UObjectsWidgetClass);
		if (ObjectWidget)
		{
			ObjectWidget->AddToViewport();
		}
	}
}

void AInGameHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}