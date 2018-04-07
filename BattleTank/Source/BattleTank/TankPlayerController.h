// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be the last include1

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	// Return an OUT paramet, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;
	
public:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	ATank * GetControlledTank() const;

	// Starts the tank moving the barrel shot would hit where
	// the crosshair intercepts the world
	void AimTowardsCrosshair();
};
