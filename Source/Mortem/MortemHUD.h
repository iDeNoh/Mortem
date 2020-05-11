// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MortemHUD.generated.h"

UCLASS()
class AMortemHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMortemHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:

};

