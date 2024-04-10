// Jimi


#include "Character/AuraCharacterBase.h"

// This is a constructor
AAuraCharacterBase::AAuraCharacterBase()
{
	// Google what this does..
	PrimaryActorTick.bCanEverTick = false;

	// This takes our weapon variable that we declared in the headerfile
	// and makes it a default Subobject so that when the characters constructed
	// it's already in the Blueprint and will be called 'Weapon'
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");

	// This sets up an attatchment between the Weapon and the parent Mesh + the socket (by FName) / IE what the sockets called..
	// So it will look at the parents Mesh and search for a socket with that name
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));

	// This sets the default collision to No Collision for the Weapon
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

UAbilitySystemComponent* AAuraCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Calls Begin Play.. Not sure why?
void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}




