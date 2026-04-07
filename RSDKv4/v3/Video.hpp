#ifndef VIDEO_H
#define VIDEO_H

#include "theoraplay.h"

extern int currentVideoFrame;
extern int videoFrameCount;
extern int videoWidth;
extern int videoHeight;
extern float videoAR;

extern THEORAPLAY_Decoder *videoDecoder;
extern const THEORAPLAY_VideoFrame *videoVidData;
extern THEORAPLAY_Io videoCallbacks;

extern byte videoSurface;
extern int videoFilePos;
extern int videoPlaying;
extern int vidFrameMS;
extern int vidBaseticks;

#if RETRO_USING_OPENGL
extern GLuint videoBuffer;
#endif

void PlayVideoFile(char *filepath);
void UpdateVideoFrame();
int ProcessVideo();
void StopVideoPlayback();

void SetupVideoBuffer(int width, int height);
void CloseVideoBuffer();

#endif // !VIDEO_H