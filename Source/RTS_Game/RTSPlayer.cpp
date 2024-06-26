// Fill out your copyright notice in the Description page of Project Settings.


#include "EnhancedInputSubsystems.h"
#include "RTSPlayer.h"

// Sets default values
ARTSPlayer::ARTSPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARTSPlayer::BeginPlay()
{
	Super::BeginPlay();

	if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
	{
		Subsystem->AddMappingContext(inputMappingContext, 0);
	}
}

// Called every frame
void ARTSPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ARTSPlayer::GetCameraRight()
{
	
}

FVector ARTSPlayer::GetCameraForward()
{
	
}


void ARTSPlayer::HandleKeyboardInputs(FVector2D inputValue)
{
	
}


