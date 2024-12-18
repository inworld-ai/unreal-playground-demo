/**
 * Copyright 2023-2024 Theai, Inc. dba Inworld AI
 *
 * Use of this source code is governed by the Inworld.ai Software Development Kit License Agreement
 * that can be found in the LICENSE.md file or at https://www.inworld.ai/sdk-license
 */
#pragma once

#ifdef INWORLD_AUDIO_DUMP

#include <string>
#include <mutex>

class AudioSessionDumper
{
public:
	void OnSessionStart(const std::string& InFileName);
	void OnSessionStop();
	void OnMessage(const std::string& Msg);

private:
	std::string _FileName;
    std::mutex _Mutex;
	bool _bStarted = false;
};

#endif