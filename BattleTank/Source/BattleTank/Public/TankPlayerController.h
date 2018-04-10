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
	ATank * GetControlledTank() const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

	// Starts the tank moving the barrel shot would hit where
	// the crosshair intercepts the world
	void AimTowardsCrosshair();
	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = 0.5; // Half across the screen
	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = 0.33333; // A third down the screen
	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000; // Range/Distance to trace 1mill cm 

public:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
};
