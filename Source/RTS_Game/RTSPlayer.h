// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RTSPlayer.generated.h"

UCLASS()
class RTS_GAME_API ARTSPlayer : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARTSPlayer();
	
private:
	FVector lastPosition;
	FVector movementValue;
	FVector targetPosition;
	FVector horizontalVelocity;
	FVector startDrag;
	bool bIsDragJustPressed;
	ULocalPlayer player;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* inputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveCameraAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* DragCameraAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* ZoomCameraAction;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void HandleKeyboardInputs(FVector2d inputValue);
	FVector GetCameraRight();
	FVector GetCameraForward();
	void UpdateVelocity();
	void UpdateBasePosition();
	void HandleCameraZoom();
	void MoveCameraWithCursor();
	void DragCamera();

public:
	bool bShouldUseScreenEdge;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
