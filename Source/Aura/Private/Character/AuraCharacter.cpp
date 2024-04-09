// Jimi


#include "Character/AuraCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"


// Here's the constructor we declared in the header file
AAuraCharacter::AAuraCharacter()
{
	// So in this constructor we are setting a few parameters on the GetCharacterMovement method

	// This line I think means that it will rotate towards which way it's moving (WASD)
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// How fast it rotates
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
	
	

	
	
}
