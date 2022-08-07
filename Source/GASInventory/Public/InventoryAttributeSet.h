// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "InventoryAttributeSet.generated.h"


/**
 * 
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


UCLASS()
class GASINVENTORY_API UInventoryAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	//base ingredients

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="InventoryAttribute")
	FGameplayAttributeData Apple;
	ATTRIBUTE_ACCESSORS(UInventoryAttributeSet, Apple);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryAttribute")
	FGameplayAttributeData Orange;
	ATTRIBUTE_ACCESSORS(UInventoryAttributeSet, Orange);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryAttribute")
	FGameplayAttributeData Pineapple;
	ATTRIBUTE_ACCESSORS(UInventoryAttributeSet, Pineapple);

	//Craftable Items

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryAttribute")
	FGameplayAttributeData ApplePie;
	ATTRIBUTE_ACCESSORS(UInventoryAttributeSet, ApplePie);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryAttribute")
	FGameplayAttributeData FruitCocktail;
	ATTRIBUTE_ACCESSORS(UInventoryAttributeSet, FruitCocktail);

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	
};
