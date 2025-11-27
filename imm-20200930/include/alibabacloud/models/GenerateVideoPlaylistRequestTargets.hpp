// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTREQUESTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTREQUESTTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetAudio.hpp>
#include <vector>
#include <alibabacloud/models/TargetSubtitle.hpp>
#include <map>
#include <alibabacloud/models/TargetVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistRequestTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistRequestTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InitialSegments, initialSegments_);
      DARABONBA_PTR_TO_JSON(InitialTranscode, initialTranscode_);
      DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TranscodeAhead, transcodeAhead_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistRequestTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InitialSegments, initialSegments_);
      DARABONBA_PTR_FROM_JSON(InitialTranscode, initialTranscode_);
      DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TranscodeAhead, transcodeAhead_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    GenerateVideoPlaylistRequestTargets() = default ;
    GenerateVideoPlaylistRequestTargets(const GenerateVideoPlaylistRequestTargets &) = default ;
    GenerateVideoPlaylistRequestTargets(GenerateVideoPlaylistRequestTargets &&) = default ;
    GenerateVideoPlaylistRequestTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistRequestTargets() = default ;
    GenerateVideoPlaylistRequestTargets& operator=(const GenerateVideoPlaylistRequestTargets &) = default ;
    GenerateVideoPlaylistRequestTargets& operator=(GenerateVideoPlaylistRequestTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->duration_ == nullptr && return this->initialSegments_ == nullptr && return this->initialTranscode_ == nullptr && return this->subtitle_ == nullptr && return this->tags_ == nullptr
        && return this->transcodeAhead_ == nullptr && return this->URI_ == nullptr && return this->video_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::TargetAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::TargetAudio) };
    inline Models::TargetAudio audio() { DARABONBA_PTR_GET(audio_, Models::TargetAudio) };
    inline GenerateVideoPlaylistRequestTargets& setAudio(const Models::TargetAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline GenerateVideoPlaylistRequestTargets& setAudio(Models::TargetAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GenerateVideoPlaylistRequestTargets& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // initialSegments Field Functions 
    bool hasInitialSegments() const { return this->initialSegments_ != nullptr;};
    void deleteInitialSegments() { this->initialSegments_ = nullptr;};
    inline const vector<float> & initialSegments() const { DARABONBA_PTR_GET_CONST(initialSegments_, vector<float>) };
    inline vector<float> initialSegments() { DARABONBA_PTR_GET(initialSegments_, vector<float>) };
    inline GenerateVideoPlaylistRequestTargets& setInitialSegments(const vector<float> & initialSegments) { DARABONBA_PTR_SET_VALUE(initialSegments_, initialSegments) };
    inline GenerateVideoPlaylistRequestTargets& setInitialSegments(vector<float> && initialSegments) { DARABONBA_PTR_SET_RVALUE(initialSegments_, initialSegments) };


    // initialTranscode Field Functions 
    bool hasInitialTranscode() const { return this->initialTranscode_ != nullptr;};
    void deleteInitialTranscode() { this->initialTranscode_ = nullptr;};
    inline float initialTranscode() const { DARABONBA_PTR_GET_DEFAULT(initialTranscode_, 0.0) };
    inline GenerateVideoPlaylistRequestTargets& setInitialTranscode(float initialTranscode) { DARABONBA_PTR_SET_VALUE(initialTranscode_, initialTranscode) };


    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline const Models::TargetSubtitle & subtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, Models::TargetSubtitle) };
    inline Models::TargetSubtitle subtitle() { DARABONBA_PTR_GET(subtitle_, Models::TargetSubtitle) };
    inline GenerateVideoPlaylistRequestTargets& setSubtitle(const Models::TargetSubtitle & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
    inline GenerateVideoPlaylistRequestTargets& setSubtitle(Models::TargetSubtitle && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline GenerateVideoPlaylistRequestTargets& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GenerateVideoPlaylistRequestTargets& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transcodeAhead Field Functions 
    bool hasTranscodeAhead() const { return this->transcodeAhead_ != nullptr;};
    void deleteTranscodeAhead() { this->transcodeAhead_ = nullptr;};
    inline int32_t transcodeAhead() const { DARABONBA_PTR_GET_DEFAULT(transcodeAhead_, 0) };
    inline GenerateVideoPlaylistRequestTargets& setTranscodeAhead(int32_t transcodeAhead) { DARABONBA_PTR_SET_VALUE(transcodeAhead_, transcodeAhead) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline GenerateVideoPlaylistRequestTargets& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::TargetVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::TargetVideo) };
    inline Models::TargetVideo video() { DARABONBA_PTR_GET(video_, Models::TargetVideo) };
    inline GenerateVideoPlaylistRequestTargets& setVideo(const Models::TargetVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline GenerateVideoPlaylistRequestTargets& setVideo(Models::TargetVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio processing configuration. If you set this parameter to null (default), audio processing is disabled. The generated TS files do not contain audio streams.
    // 
    // >  The Audio and Subtitle parameters in the same element are mutually exclusive. If the Audio parameter is configured, the Subtitle parameter is ignored. The Audio and Video parameters can be configured at the same time. You can also configure only the Audio parameter to generate only audio.
    std::shared_ptr<Models::TargetAudio> audio_ = nullptr;
    // The playback duration of a single TS file. Unit: seconds. Default value: 10. Valid values: 5 to 15.
    std::shared_ptr<float> duration_ = nullptr;
    // The array of the durations of the pre-transcoded TS files. The maximum length of the array is 6. By default, this parameter is left empty. This parameter is independent of the **Duration** parameter.
    std::shared_ptr<vector<float>> initialSegments_ = nullptr;
    // The pre-transcoding duration. Unit: seconds. Default value: 30.
    // 
    // *   If you set this parameter to 0, pre-transcoding is disabled.
    // *   If you set this parameter to a value that is less than 0 or greater than the duration of a source video, the entire video is pre-transcoded.
    // *   If you set this parameter to a value that is within the middle of the playback duration of a TS file, the transcoding continues until the end of the playback duration.
    // 
    // >  This parameter reduces the time required to start the first playback, which enhances the viewing experience. If you want to use live transcoding in traditional video-on-demand scenarios, you can pre-transcode entire videos.
    std::shared_ptr<float> initialTranscode_ = nullptr;
    // The subtitle processing configuration.
    // 
    // >  The Subtitle and Video or Audio parameters in the same element are mutually exclusive. You must configure the Subtitle parameter independently to generate subtitles.
    std::shared_ptr<Models::TargetSubtitle> subtitle_ = nullptr;
    // The [tags](https://help.aliyun.com/document_detail/106678.html) that you want to add to a TS file in OSS. You can use tags to manage the lifecycles of TS files in OSS.
    // 
    // >  The combination of the value of the Tags parameter and the value of the Tags parameter in the upper level is used as the tag value of the current output. If the value of the Tags parameter in the current level is the same as the value of the Tags parameter in the upper level, the value of the Tags parameter in the current level is used.
    std::shared_ptr<map<string, string>> tags_ = nullptr;
    // The number of TS files that are pre-transcoded when the live transcoding is triggered. By default, a 2-minute video is pre-transcoded.
    // 
    // *   Example: If you set the **Duration** parameter to 10, the value of the **TranscodeAhead** parameter is 12 by default. You can configure this parameter to manage the number of pre-transcoded files. Valid values: 10 to 30.
    std::shared_ptr<int32_t> transcodeAhead_ = nullptr;
    // The prefix of the OSS path that is used to store the live transcoding files. The live transcoding files include a M3U8 file and multiple TS files.
    // 
    // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the prefix of the full path that does not contain the file name extension.
    // 
    // *   Example: If the URI is oss://test-bucket/test-object/output-video, the output-video.m3u8 file and multiple output-video-${token}-${index}.ts files are generated in the oss://test-bucket/test-object/ directory. ${token} is a unique string generated based on the transcoding parameters. The ${token} parameter is included in the response of the operation. ${index} is the serial number of the generated TS files that are numbered starting from 0.
    // 
    // >  If the **MasterURI** parameter is not left empty, the path specified by this parameter must be in the directory specified by the **MasterURI** parameter or its subdirectory.
    std::shared_ptr<string> URI_ = nullptr;
    // The video processing configuration. If you set this parameter to null (default), video processing is disabled. The generated TS files do not contain video streams.
    // 
    // >  The Video and Subtitle parameters in the same element are mutually exclusive. If the Video parameter is configured, the Subtitle parameter is ignored.
    std::shared_ptr<Models::TargetVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
