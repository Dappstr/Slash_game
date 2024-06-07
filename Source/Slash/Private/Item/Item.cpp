#include "Item/Item.h"
#include "Slash/Debug_Macros.h"
#include "Slash/Slash.h"

AItem::AItem() {
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay() {
	Super::BeginPlay();

	/*
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Called!"));

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Hello game!"));
	}
	*/

	/*
	UWorld* world{ GetWorld() };
	
	FVector location = GetActorLocation();
	FVector forward{ GetActorForwardVector() };


	DRAW_SPHERE(location);
	//DRAW_BOX(location);
	//DRAW_LINE(location, location + forward * 100.f);
	//DRAW_POINT(location + forward * 100.f);
	DRAW_VECTOR(location, location + forward * 100.f);
	*/

}

void AItem::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	/*
	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

	if (GEngine) {
		const FString name = GetName();
		FString message{ FString::Printf(TEXT("Item name: %s"), *name) };
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, message);
		UE_LOG(LogTemp, Warning, TEXT("Item name: %s"), *name);
	}
	*/
	/*
	float movement_rate{ 50.f };
	float rotation_rate{ 45.f };

	//movement_rate * DeltaTime (cm/s) * (s/frame)
	AddActorWorldOffset(FVector{ movement_rate * DeltaTime, 0.f, 0.f });
	AddActorWorldRotation(FRotator{ 0.f, rotation_rate * DeltaTime, 0.f });
	*/

	m_running_time += DeltaTime;

	//float delta_z{ m_amplitude * FMath::Sin(m_running_time * m_time_constant) };
	//AddActorWorldOffset(FVector{ 0.f, 0.f, delta_z });

	DRAW_SPHERE_SINGLE_FRAME(GetActorLocation());
	DRAW_VECTOR_SINGLE_FRAME(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);
}

float AItem::transformed_sin() {
	return m_amplitude * FMath::Sin(m_running_time * m_time_constant);
}

float AItem::transformed_cos() {
	return m_amplitude * FMath::Cos(m_running_time * m_time_constant);
}