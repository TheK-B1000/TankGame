// K-B 2021

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API ATank : public ABasePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadWrite, meta = (AllowPrivateAccess))
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadWrite, meta = (AllowPrivateAccess))
	class UCameraComponent* Camera;

	void Move(float Value);
};
