extern "C" {
#include <libavformat/avformat.h>
}

const char* filename = "/Volumes/Projects/2019-10-21 Rehearsals/2019-10-21 Rehearsal 1 - Loser.mp3";

int main(int argc, const char** argv) {

    AVFormatContext* pFormatCtx = NULL;
    int ret = avformat_open_input(&pFormatCtx, filename, NULL, NULL);
    if (ret < 0)
    {
        printf("Could not open file %s.\n", filename);
        return -1;
    }

    return 0;
}
