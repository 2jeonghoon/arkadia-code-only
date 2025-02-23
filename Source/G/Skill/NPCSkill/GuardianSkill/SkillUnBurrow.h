// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "G/Skill/SkillBase.h"
#include "SkillUnBurrow.generated.h"

/**
 * 
 */
UCLASS()
class G_API USkillUnBurrow : public USkillBase
{
	GENERATED_BODY()

public:
	virtual bool CheckSelectPossibility() override;
	virtual bool CheckSkillPossibility() override;
	virtual void SkillStart() override;
	virtual void UseSkill() override;
	virtual void SkillEnd() override;
};
