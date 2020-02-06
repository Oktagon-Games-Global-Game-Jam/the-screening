
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectsWidget.generated.h"

/**
 * 
 */
UCLASS()
class THESCREENING_API UObjectsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UObjectsWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBox* TXTCombo;
	
};
