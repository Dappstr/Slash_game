#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Red, true);
#define DRAW_SPHERE_SINGLE_FRAME(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Red, false, -1);
#define DRAW_BOX(Location) if (GetWorld()) DrawDebugBox(world, Location, FVector{ 10, 10, 10 }, FColor::Red, true, -1.0f, 0U, 1.0);
#define DRAW_LINE(Location, End_Location) if (GetWorld()) DrawDebugLine(GetWorld(), Location, End_Location, FColor::Red, true, -1.f, 0U, 1.f);
#define DRAW_LINE_SINGLE_FRAME(Location, End_Location) if (GetWorld()) DrawDebugLine(GetWorld(), Location, End_Location, FColor::Red, false, -1.f, 0U, 1.f);
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Blue, true);
#define DRAW_POINT_SINGLE_FRAME(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Blue, false, -1);
#define DRAW_VECTOR(Location, End_Location) if (GetWorld()) \
	{ \
		DrawDebugLine(GetWorld(), Location, End_Location, FColor::Red, true, -1.f, 0U, 1.f); \
		DrawDebugPoint(GetWorld(), End_Location, 15.f, FColor::Blue, true); \
	}
#define DRAW_VECTOR_SINGLE_FRAME(Location, End_Location) if (GetWorld()) \
	{ \
		DrawDebugLine(GetWorld(), Location, End_Location, FColor::Red, false, -1.f, 0U, 1.f); \
		DrawDebugPoint(GetWorld(), End_Location, 15.f, FColor::Blue, false, -1.f); \
	}