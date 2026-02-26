// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetAudio.hpp>
#include <vector>
#include <alibabacloud/models/TargetSubtitle.hpp>
#include <map>
#include <alibabacloud/models/TargetVideo.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(MasterURI, masterURI_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(OverwritePolicy, overwritePolicy_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceDuration, sourceDuration_);
      DARABONBA_PTR_TO_JSON(SourceStartTime, sourceStartTime_);
      DARABONBA_PTR_TO_JSON(SourceSubtitles, sourceSubtitles_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(MasterURI, masterURI_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(OverwritePolicy, overwritePolicy_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceDuration, sourceDuration_);
      DARABONBA_PTR_FROM_JSON(SourceStartTime, sourceStartTime_);
      DARABONBA_PTR_FROM_JSON(SourceSubtitles, sourceSubtitles_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GenerateVideoPlaylistRequest() = default ;
    GenerateVideoPlaylistRequest(const GenerateVideoPlaylistRequest &) = default ;
    GenerateVideoPlaylistRequest(GenerateVideoPlaylistRequest &&) = default ;
    GenerateVideoPlaylistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistRequest() = default ;
    GenerateVideoPlaylistRequest& operator=(const GenerateVideoPlaylistRequest &) = default ;
    GenerateVideoPlaylistRequest& operator=(GenerateVideoPlaylistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
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
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audio_ == nullptr
        && this->duration_ == nullptr && this->initialSegments_ == nullptr && this->initialTranscode_ == nullptr && this->subtitle_ == nullptr && this->tags_ == nullptr
        && this->transcodeAhead_ == nullptr && this->URI_ == nullptr && this->video_ == nullptr; };
      // audio Field Functions 
      bool hasAudio() const { return this->audio_ != nullptr;};
      void deleteAudio() { this->audio_ = nullptr;};
      inline const TargetAudio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, TargetAudio) };
      inline TargetAudio getAudio() { DARABONBA_PTR_GET(audio_, TargetAudio) };
      inline Targets& setAudio(const TargetAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
      inline Targets& setAudio(TargetAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline Targets& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // initialSegments Field Functions 
      bool hasInitialSegments() const { return this->initialSegments_ != nullptr;};
      void deleteInitialSegments() { this->initialSegments_ = nullptr;};
      inline const vector<float> & getInitialSegments() const { DARABONBA_PTR_GET_CONST(initialSegments_, vector<float>) };
      inline vector<float> getInitialSegments() { DARABONBA_PTR_GET(initialSegments_, vector<float>) };
      inline Targets& setInitialSegments(const vector<float> & initialSegments) { DARABONBA_PTR_SET_VALUE(initialSegments_, initialSegments) };
      inline Targets& setInitialSegments(vector<float> && initialSegments) { DARABONBA_PTR_SET_RVALUE(initialSegments_, initialSegments) };


      // initialTranscode Field Functions 
      bool hasInitialTranscode() const { return this->initialTranscode_ != nullptr;};
      void deleteInitialTranscode() { this->initialTranscode_ = nullptr;};
      inline float getInitialTranscode() const { DARABONBA_PTR_GET_DEFAULT(initialTranscode_, 0.0) };
      inline Targets& setInitialTranscode(float initialTranscode) { DARABONBA_PTR_SET_VALUE(initialTranscode_, initialTranscode) };


      // subtitle Field Functions 
      bool hasSubtitle() const { return this->subtitle_ != nullptr;};
      void deleteSubtitle() { this->subtitle_ = nullptr;};
      inline const TargetSubtitle & getSubtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, TargetSubtitle) };
      inline TargetSubtitle getSubtitle() { DARABONBA_PTR_GET(subtitle_, TargetSubtitle) };
      inline Targets& setSubtitle(const TargetSubtitle & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
      inline Targets& setSubtitle(TargetSubtitle && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
      inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
      inline Targets& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Targets& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transcodeAhead Field Functions 
      bool hasTranscodeAhead() const { return this->transcodeAhead_ != nullptr;};
      void deleteTranscodeAhead() { this->transcodeAhead_ = nullptr;};
      inline int32_t getTranscodeAhead() const { DARABONBA_PTR_GET_DEFAULT(transcodeAhead_, 0) };
      inline Targets& setTranscodeAhead(int32_t transcodeAhead) { DARABONBA_PTR_SET_VALUE(transcodeAhead_, transcodeAhead) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Targets& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


      // video Field Functions 
      bool hasVideo() const { return this->video_ != nullptr;};
      void deleteVideo() { this->video_ = nullptr;};
      inline const TargetVideo & getVideo() const { DARABONBA_PTR_GET_CONST(video_, TargetVideo) };
      inline TargetVideo getVideo() { DARABONBA_PTR_GET(video_, TargetVideo) };
      inline Targets& setVideo(const TargetVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
      inline Targets& setVideo(TargetVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


    protected:
      // The audio processing configuration. If you set this parameter to null (default), audio processing is disabled. The generated TS files do not contain audio streams.
      // 
      // >  The Audio and Subtitle parameters in the same element are mutually exclusive. If the Audio parameter is configured, the Subtitle parameter is ignored. The Audio and Video parameters can be configured at the same time. You can also configure only the Audio parameter to generate only audio.
      shared_ptr<TargetAudio> audio_ {};
      // The playback duration of a single TS file. Unit: seconds. Default value: 10. Valid values: 5 to 15.
      shared_ptr<float> duration_ {};
      // The array of the durations of the pre-transcoded TS files. The maximum length of the array is 6. By default, this parameter is left empty. This parameter is independent of the **Duration** parameter.
      shared_ptr<vector<float>> initialSegments_ {};
      // The pre-transcoding duration. Unit: seconds. Default value: 30.
      // 
      // *   If you set this parameter to 0, pre-transcoding is disabled.
      // *   If you set this parameter to a value that is less than 0 or greater than the duration of a source video, the entire video is pre-transcoded.
      // *   If you set this parameter to a value that is within the middle of the playback duration of a TS file, the transcoding continues until the end of the playback duration.
      // 
      // >  This parameter reduces the time required to start the first playback, which enhances the viewing experience. If you want to use live transcoding in traditional video-on-demand scenarios, you can pre-transcode entire videos.
      shared_ptr<float> initialTranscode_ {};
      // The subtitle processing configuration.
      // 
      // >  The Subtitle and Video or Audio parameters in the same element are mutually exclusive. You must configure the Subtitle parameter independently to generate subtitles.
      shared_ptr<TargetSubtitle> subtitle_ {};
      // The [tags](https://help.aliyun.com/document_detail/106678.html) that you want to add to a TS file in OSS. You can use tags to manage the lifecycles of TS files in OSS.
      // 
      // >  The combination of the value of the Tags parameter and the value of the Tags parameter in the upper level is used as the tag value of the current output. If the value of the Tags parameter in the current level is the same as the value of the Tags parameter in the upper level, the value of the Tags parameter in the current level is used.
      shared_ptr<map<string, string>> tags_ {};
      // The number of TS files that are pre-transcoded when the live transcoding is triggered. By default, a 2-minute video is pre-transcoded.
      // 
      // *   Example: If you set the **Duration** parameter to 10, the value of the **TranscodeAhead** parameter is 12 by default. You can configure this parameter to manage the number of pre-transcoded files. Valid values: 10 to 30.
      shared_ptr<int32_t> transcodeAhead_ {};
      // The prefix of the OSS path that is used to store the live transcoding files. The live transcoding files include a M3U8 file and multiple TS files.
      // 
      // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the prefix of the full path that does not contain the file name extension.
      // 
      // *   Example: If the URI is oss://test-bucket/test-object/output-video, the output-video.m3u8 file and multiple output-video-${token}-${index}.ts files are generated in the oss://test-bucket/test-object/ directory. ${token} is a unique string generated based on the transcoding parameters. The ${token} parameter is included in the response of the operation. ${index} is the serial number of the generated TS files that are numbered starting from 0.
      // 
      // >  If the **MasterURI** parameter is not left empty, the path specified by this parameter must be in the directory specified by the **MasterURI** parameter or its subdirectory.
      shared_ptr<string> URI_ {};
      // The video processing configuration. If you set this parameter to null (default), video processing is disabled. The generated TS files do not contain video streams.
      // 
      // >  The Video and Subtitle parameters in the same element are mutually exclusive. If the Video parameter is configured, the Subtitle parameter is ignored.
      shared_ptr<TargetVideo> video_ {};
    };

    class SourceSubtitles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceSubtitles& obj) { 
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, SourceSubtitles& obj) { 
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      SourceSubtitles() = default ;
      SourceSubtitles(const SourceSubtitles &) = default ;
      SourceSubtitles(SourceSubtitles &&) = default ;
      SourceSubtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceSubtitles() = default ;
      SourceSubtitles& operator=(const SourceSubtitles &) = default ;
      SourceSubtitles& operator=(SourceSubtitles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->language_ == nullptr
        && this->URI_ == nullptr; };
      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline SourceSubtitles& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline SourceSubtitles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The subtitle language. If you configure this parameter, the value must comply with the ISO 639-2 standard. By default, this parameter is left empty.
      shared_ptr<string> language_ {};
      // The OSS path of the subtitle file.
      // 
      // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file.
      // 
      // >  The **MasterURI** parameter cannot be left empty, and the OSS path `oss://${Bucket}/${Object}` of a subtitle file must be in the directory specified by the **MasterURI** parameter or its subdirectory.
      // 
      // This parameter is required.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->credentialConfig_ == nullptr
        && this->masterURI_ == nullptr && this->notification_ == nullptr && this->overwritePolicy_ == nullptr && this->projectName_ == nullptr && this->sourceDuration_ == nullptr
        && this->sourceStartTime_ == nullptr && this->sourceSubtitles_ == nullptr && this->sourceURI_ == nullptr && this->tags_ == nullptr && this->targets_ == nullptr
        && this->userData_ == nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline GenerateVideoPlaylistRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline GenerateVideoPlaylistRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // masterURI Field Functions 
    bool hasMasterURI() const { return this->masterURI_ != nullptr;};
    void deleteMasterURI() { this->masterURI_ = nullptr;};
    inline string getMasterURI() const { DARABONBA_PTR_GET_DEFAULT(masterURI_, "") };
    inline GenerateVideoPlaylistRequest& setMasterURI(string masterURI) { DARABONBA_PTR_SET_VALUE(masterURI_, masterURI) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline GenerateVideoPlaylistRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline GenerateVideoPlaylistRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // overwritePolicy Field Functions 
    bool hasOverwritePolicy() const { return this->overwritePolicy_ != nullptr;};
    void deleteOverwritePolicy() { this->overwritePolicy_ = nullptr;};
    inline string getOverwritePolicy() const { DARABONBA_PTR_GET_DEFAULT(overwritePolicy_, "") };
    inline GenerateVideoPlaylistRequest& setOverwritePolicy(string overwritePolicy) { DARABONBA_PTR_SET_VALUE(overwritePolicy_, overwritePolicy) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GenerateVideoPlaylistRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceDuration Field Functions 
    bool hasSourceDuration() const { return this->sourceDuration_ != nullptr;};
    void deleteSourceDuration() { this->sourceDuration_ = nullptr;};
    inline float getSourceDuration() const { DARABONBA_PTR_GET_DEFAULT(sourceDuration_, 0.0) };
    inline GenerateVideoPlaylistRequest& setSourceDuration(float sourceDuration) { DARABONBA_PTR_SET_VALUE(sourceDuration_, sourceDuration) };


    // sourceStartTime Field Functions 
    bool hasSourceStartTime() const { return this->sourceStartTime_ != nullptr;};
    void deleteSourceStartTime() { this->sourceStartTime_ = nullptr;};
    inline float getSourceStartTime() const { DARABONBA_PTR_GET_DEFAULT(sourceStartTime_, 0.0) };
    inline GenerateVideoPlaylistRequest& setSourceStartTime(float sourceStartTime) { DARABONBA_PTR_SET_VALUE(sourceStartTime_, sourceStartTime) };


    // sourceSubtitles Field Functions 
    bool hasSourceSubtitles() const { return this->sourceSubtitles_ != nullptr;};
    void deleteSourceSubtitles() { this->sourceSubtitles_ = nullptr;};
    inline const vector<GenerateVideoPlaylistRequest::SourceSubtitles> & getSourceSubtitles() const { DARABONBA_PTR_GET_CONST(sourceSubtitles_, vector<GenerateVideoPlaylistRequest::SourceSubtitles>) };
    inline vector<GenerateVideoPlaylistRequest::SourceSubtitles> getSourceSubtitles() { DARABONBA_PTR_GET(sourceSubtitles_, vector<GenerateVideoPlaylistRequest::SourceSubtitles>) };
    inline GenerateVideoPlaylistRequest& setSourceSubtitles(const vector<GenerateVideoPlaylistRequest::SourceSubtitles> & sourceSubtitles) { DARABONBA_PTR_SET_VALUE(sourceSubtitles_, sourceSubtitles) };
    inline GenerateVideoPlaylistRequest& setSourceSubtitles(vector<GenerateVideoPlaylistRequest::SourceSubtitles> && sourceSubtitles) { DARABONBA_PTR_SET_RVALUE(sourceSubtitles_, sourceSubtitles) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline GenerateVideoPlaylistRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline GenerateVideoPlaylistRequest& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GenerateVideoPlaylistRequest& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<GenerateVideoPlaylistRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<GenerateVideoPlaylistRequest::Targets>) };
    inline vector<GenerateVideoPlaylistRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<GenerateVideoPlaylistRequest::Targets>) };
    inline GenerateVideoPlaylistRequest& setTargets(const vector<GenerateVideoPlaylistRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline GenerateVideoPlaylistRequest& setTargets(vector<GenerateVideoPlaylistRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateVideoPlaylistRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The OSS path of the master playlist.
    // 
    // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file that is suffixed with .m3u8.
    // 
    // >  If a playlist contains subtitles or multiple outputs, the MasterURI parameter is required and the URI of subtitle files or outputs must be in the directory specified by the MasterURI parameter or its subdirectory.
    shared_ptr<string> masterURI_ {};
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
    // The overwrite policy when the media playlist exists. Valid values:
    // 
    // *   overwrite (default): overwrites an existing media playlist.
    // *   skip-existing: skips generation and retains the existing media playlist.
    shared_ptr<string> overwritePolicy_ {};
    // The project name.[](~~478153~~)
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The period of time during which the playlist is generated. Unit: seconds.
    // 
    // *   If you set this parameter to 0 (default) or leave this parameter empty, a playlist is generated until the end time of the source video.
    // *   If you set this parameter to a value greater than 0, a playlist is generated for the specified period of time from the start time that you specify.
    // 
    // >  If you set this parameter to a value that exceeds the end time of a source video, use the default value.
    shared_ptr<float> sourceDuration_ {};
    // The time when the playlist starts to generate. Unit: seconds.
    // 
    // *   If you set this parameter to 0 (default) or leave this parameter empty, the start time of the source video is used as the time when a playlist starts to generate.
    // *   If you set this parameter to a value greater than 0, the time when a playlist starts to generate is the specified point in time.
    // 
    // >  If you use this parameter together with the **SourceDuration** parameter, a playlist can be generated based on the partial content of a source video.
    shared_ptr<float> sourceStartTime_ {};
    // The subtitle files. By default, this parameter is left empty. Up to two subtitle files are supported.
    shared_ptr<vector<GenerateVideoPlaylistRequest::SourceSubtitles>> sourceSubtitles_ {};
    // The OSS path of the video file.
    // 
    // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file that contains the file name extension.
    // 
    // >  Only OSS buckets of the Standard storage class are supported. OSS buckets for which hotlink protection whitelists are configured are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> sourceURI_ {};
    // The [tags](https://help.aliyun.com/document_detail/106678.html) that you want to add to a TS file in OSS. You can use tags to manage the lifecycles of TS files in OSS.
    shared_ptr<map<string, string>> tags_ {};
    // The array of live transcoding playlists. The maximum length of the array is 6. Each element corresponds to at most one video media playlist and one or more subtitle media playlists.
    // 
    // >  If the array contains more than one element, the **MasterURI** parameter cannot be left empty.
    // 
    // This parameter is required.
    shared_ptr<vector<GenerateVideoPlaylistRequest::Targets>> targets_ {};
    // The custom user information, which is returned in asynchronous notifications to help you handle the notifications in the system. The maximum length of a notification is 2048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
