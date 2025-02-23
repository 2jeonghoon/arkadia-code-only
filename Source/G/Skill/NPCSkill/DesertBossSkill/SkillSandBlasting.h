// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "G/Skill/SkillBase.h"
#include "SkillSandBlasting.generated.h"

/**
 * 
 */
UCLASS()
class G_API USkillSandBlasting : public USkillBase
{
	GENERATED_BODY()

public:
	virtual bool CheckSkillPossibility() override;
	virtual void SkillStart() override;
	virtual void UseSkill() override;
	virtual void SkillEnd() override;
};
