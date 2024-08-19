#include "SpawnManagerBase.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "StaticMeshResources.h"

// Sets default values
ASpawnManagerBase::ASpawnManagerBase()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create and attach Static Mesh Component
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ASpawnManagerBase::BeginPlay()
{
    Super::BeginPlay();
}

// Called when a property is changed or actor is constructed
void ASpawnManagerBase::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    // Populate the VertexPositions array with the mesh's vertex positions
    PopulateVertexPositions();
}

// Function to populate vertex positions
void ASpawnManagerBase::PopulateVertexPositions()
{
    VertexPositions.Empty();

    if (MeshComponent && MeshComponent->GetStaticMesh())
    {
        UStaticMesh* StaticMesh = MeshComponent->GetStaticMesh();
        const FStaticMeshLODResources& LODResource = StaticMesh->GetRenderData()->LODResources[0];

        const FPositionVertexBuffer& VertexBuffer = LODResource.VertexBuffers.PositionVertexBuffer;
        for (uint32 i = 0; i < VertexBuffer.GetNumVertices(); ++i)
        {
            FVector3f VertexPositionFloat = VertexBuffer.VertexPosition(i);  // FVector3f
            FVector VertexPosition = FVector(VertexPositionFloat);  // Explicit conversion to FVector (double precision)
            VertexPositions.Add(VertexPosition);
        }

        UE_LOG(LogTemp, Log, TEXT("Populated VertexPositions with %d vertices"), VertexPositions.Num());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("MeshComponent or StaticMesh is null"));
    }
}

