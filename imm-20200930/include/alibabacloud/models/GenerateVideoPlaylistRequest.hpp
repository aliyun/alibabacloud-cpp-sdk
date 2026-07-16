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
        DARABONBA_PTR_TO_JSON(Container, container_);
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
        DARABONBA_PTR_FROM_JSON(Container, container_);
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
        && this->container_ == nullptr && this->duration_ == nullptr && this->initialSegments_ == nullptr && this->initialTranscode_ == nullptr && this->subtitle_ == nullptr
        && this->tags_ == nullptr && this->transcodeAhead_ == nullptr && this->URI_ == nullptr && this->video_ == nullptr; };
      // audio Field Functions 
      bool hasAudio() const { return this->audio_ != nullptr;};
      void deleteAudio() { this->audio_ = nullptr;};
      inline const TargetAudio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, TargetAudio) };
      inline TargetAudio getAudio() { DARABONBA_PTR_GET(audio_, TargetAudio) };
      inline Targets& setAudio(const TargetAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
      inline Targets& setAudio(TargetAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


      // container Field Functions 
      bool hasContainer() const { return this->container_ != nullptr;};
      void deleteContainer() { this->container_ = nullptr;};
      inline string getContainer() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
      inline Targets& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


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
      // The audio processing parameter settings. An empty value (default) indicates that audio processing is disabled and the output TS files do not contain audio streams.
      // > The Audio and Subtitle fields within the same Target are mutually exclusive. If the Audio field is set, the Subtitle field is ignored. Audio and Video can be set simultaneously. Audio specifies the audio information in the output video. You can also set only Audio to generate audio-only output.
      shared_ptr<TargetAudio> audio_ {};
      shared_ptr<string> container_ {};
      // The playback duration of a single TS file. Unit: seconds. Default value: 10. Valid values: [5, 15].
      shared_ptr<float> duration_ {};
      // The array of initial transcoding TS file durations. The maximum array length is 6. This parameter is empty by default and is independent of the **Duration** parameter.
      shared_ptr<vector<float>> initialSegments_ {};
      // The initial transcoding duration. Unit: seconds. Default value: 30.
      // 
      // - If the value is set to 0, no pre-transcoding is performed.
      // - If the value is less than 0 or exceeds the source video length, the entire video is initially transcoded.
      // - If the specified duration falls in the middle of a TS file, transcoding continues until the end of that TS file.
      // 
      // > This parameter is primarily used to reduce the wait time for initial video playback and improve the playback experience. If you want to replace traditional VOD business scenarios, try initially transcoding the entire video.
      shared_ptr<float> initialTranscode_ {};
      // The subtitle processing parameter settings.
      // > The Subtitle field is mutually exclusive with the Video or Audio fields within the same Target. Subtitles are generated only when Subtitle is set independently.
      shared_ptr<TargetSubtitle> subtitle_ {};
      // The OSS object [tags](https://help.aliyun.com/document_detail/106678.html) to add to the generated TS files. You can use OSS tags to control the lifecycle of OSS files.
      // > The tag values at this level are merged with the Tags defined at the parent level to form the tag values for the current Target. If a tag with the same name exists, the value at this level takes precedence.
      shared_ptr<map<string, string>> tags_ {};
      // The number of TS files to transcode ahead when just-in-time transcoding is triggered. By default, 2 minutes of video is transcoded ahead.
      // 
      // - Example: If **Duration** is 10, the default value of **TranscodeAhead** is 12. You can specify this parameter to control the number of asynchronous ahead-of-time transcoding files. Valid values: [10, 30].
      shared_ptr<int32_t> transcodeAhead_ {};
      // The OSS URI prefix of the just-in-time transcoding output files, including M3U8 files and TS files.
      // 
      // The OSS URI follows the format oss://${Bucket}/${Object}, where ${Bucket} is the name of the OSS bucket in the same region as the current project, and ${Object} is the full path prefix of the file without the file name extension.
      // 
      // - Example: If URI is oss://test-bucket/test-object/output-video, an oss://test-bucket/test-object/output-video.m3u8 file and multiple oss://test-bucket/test-object/output-video-${token}-${index}.ts files are generated. ${token} is a unique string generated based on the transcoding parameters and is included in the API response. ${index} is the sequence number of the TS file starting from 0.
      // 
      // > If the **MasterURI** parameter is not empty, the URI must be in the same directory as or a subdirectory of the **MasterURI** parameter.
      shared_ptr<string> URI_ {};
      // The video processing parameter settings. An empty value (default) indicates that video processing is disabled and the output TS files do not contain video streams.
      // > The Video and Subtitle fields within the same Target are mutually exclusive. If the Video field is set, the Subtitle field is ignored.
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
      // The subtitle language. The value follows the ISO 639-2 standard. This parameter is empty by default.
      shared_ptr<string> language_ {};
      // The OSS URI of the subtitle to embed.
      // 
      // The OSS URI follows the format oss://${Bucket}/${Object}, where ${Bucket} is the name of the OSS bucket in the same region as the current project, and ${Object} is the full path of the file.
      // > The **MasterURI** parameter must not be empty, and the OSS URI `oss://${Bucket}/${Object}` of the subtitle must be in the same directory as or a subdirectory of the **MasterURI** parameter.
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
    // **Leave this parameter empty unless you have specific requirements.**
    // 
    // The China authorization configuration. This parameter is optional. For more information, see [Use Chinese authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The OSS URI of the Master Playlist.
    // 
    // The OSS URI follows the format oss://${Bucket}/${Object}, where ${Bucket} is the name of the OSS bucket in the same region as the current project, and ${Object} is the full path of the file with the ".m3u8" extension.
    // > If the playlist has subtitle input or multiple Target outputs, MasterURI is required. The subtitle URI or Target URI must be in the same directory as or a subdirectory of MasterURI.
    shared_ptr<string> masterURI_ {};
    // The message notification configuration. Click Notification for details. For the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
    // The overwrite policy when a Media Playlist already exists. Valid values:
    // 
    // - overwrite (default): overwrites the existing Media Playlist.
    // - skip-existing: skips generation and retains the existing Media Playlist.
    shared_ptr<string> overwritePolicy_ {};
    // The project name. For information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The duration for generating the playlist. Unit: seconds. Valid values:
    // 
    // - 0 (default) or empty: continues until the end of the source video.
    // 
    // - A value greater than 0: continues for the specified duration from the start time of the playlist.
    // 
    // > If the time point corresponding to the specified parameter exceeds the end of the source video, the default value is used.
    shared_ptr<float> sourceDuration_ {};
    // The start time for generating the playlist. Unit: seconds. Valid values:
    // 
    // - 0 (default) or empty: starts from the beginning of the source video.
    // 
    // - A value greater than 0: starts from the specified time point in the source video.
    // 
    // > You can set this parameter together with **SourceDuration** to generate a playlist for a specific portion of the source video.
    shared_ptr<float> sourceStartTime_ {};
    // The list of subtitles to add. This parameter is empty by default. A maximum of two subtitles are supported.
    shared_ptr<vector<GenerateVideoPlaylistRequest::SourceSubtitles>> sourceSubtitles_ {};
    // The OSS URI of the video.
    // 
    // The OSS URI follows the format oss://${Bucket}/${Object}, where ${Bucket} is the name of the OSS bucket in the same region as the current project, and ${Object} is the full path of the file including the file name extension.
    // > Only OSS buckets with Standard storage class are supported.
    // > Buckets with hotlink protection whitelist configured are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> sourceURI_ {};
    // The OSS object [tags](https://help.aliyun.com/document_detail/106678.html) to add to the generated TS files. You can use tags to control the lifecycle of OSS files.
    shared_ptr<map<string, string>> tags_ {};
    // The array of just-in-time transcoding playlists. The maximum array length is 6. Each Target corresponds to at most one video Media Playlist and one or more subtitle Media Playlists.
    // > If more than one Target is configured, the **MasterURI** parameter must not be empty.
    // 
    // This parameter is required.
    shared_ptr<vector<GenerateVideoPlaylistRequest::Targets>> targets_ {};
    // The custom information, which is returned in asynchronous message notifications. This allows you to associate message notifications with specific processes in your system. Maximum length: 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
