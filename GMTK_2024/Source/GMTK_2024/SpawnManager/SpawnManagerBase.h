#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnManagerBase.generated.h"

UCLASS(Blueprintable)
class GMTK_2024_API ASpawnManagerBase : public AActor
{
    GENERATED_BODY()
    
public:    
    // Sets default values for this actor's properties
    ASpawnManagerBase();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:    
    // Called when a property is changed or actor is constructed
    virtual void OnConstruction(const FTransform& Transform) override;

    // Function to populate vertex positions
    void PopulateVertexPositions();

protected:
    // Static Mesh Component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    // Array to store vertex positions, accessible in Blueprints
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vertices")
    TArray<FVector> VertexPositions;
};
