// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_DesertWarriorAnimInstance.h"


UNPC_DesertWarriorAnimInstance::UNPC_DesertWarriorAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> primary_attack_object(
		TEXT("AnimMontage'/Game/CombatSystem/NPC/Desert/Knight/Attack_Montage.Attack_Montage'"));
	static ConstructorHelpers::FObjectFinder<UAnimMontage> death_object(
		TEXT("AnimMontage'/Game/CombatSystem/NPC/Desert/Knight/Death_Montage.Death_Montage'"));
	static ConstructorHelpers::FObjectFinder<UAnimMontage> hit_object(
		TEXT("AnimMontage'/Game/CombatSystem/NPC/Desert/Knight/Hit_Montage.Hit_Montage'"));

	if (primary_attack_object.Succeeded())
	{
		primary_attack_montage = primary_attack_object.Object;
	}

	if (death_object.Succeeded())
	{
		death_montage = death_object.Object;
	}

	if (hit_object.Succeeded())
	{
		hit_montage = hit_object.Object;
	}
}
