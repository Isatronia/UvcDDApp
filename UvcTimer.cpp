//***************************************************************************************
// UvcTimer.cpp by Aaron Jsc (C) 2020 All Rights Reserved.
// licenced under CC BY-NC-SA License.
//***************************************************************************************
#include "UvcTimer.h"

UvcTimer::UvcTimer() {
	mBaseTime = GetTickCount64();
	return;
}

//return total time sence the Timer been setted up
__int64 UvcTimer::TotalTIme()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return GetTickCount64() - mBaseTime;
}

__int64 UvcTimer::DeltaTime()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return GetTickCount64() - mPrevTime;
}

void UvcTimer::Reset()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	mBaseTime = GetTickCount64();
}

void UvcTimer::Start()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	if (mStopped)
	{
		mStopped = false;
	}
}

void UvcTimer::Stop()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	if (!mStopped)
	{
		mStopped = true;
	}
}

void UvcTimer::Sign()
{
	mPrevTime = GetTickCount64();
}

void UvcTimer::FrameBegin()
{
	mTimeOfThisFrime = GetTickCount64();
	return;
}