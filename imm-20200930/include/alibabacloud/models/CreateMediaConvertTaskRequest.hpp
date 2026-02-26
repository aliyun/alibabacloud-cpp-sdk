// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetAudio.hpp>
#include <alibabacloud/models/TargetImage.hpp>
#include <alibabacloud/models/TargetSubtitle.hpp>
#include <alibabacloud/models/TargetVideo.hpp>
#include <vector>
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
  class CreateMediaConvertTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConvertTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlignmentIndex, alignmentIndex_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConvertTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlignmentIndex, alignmentIndex_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateMediaConvertTaskRequest() = default ;
    CreateMediaConvertTaskRequest(const CreateMediaConvertTaskRequest &) = default ;
    CreateMediaConvertTaskRequest(CreateMediaConvertTaskRequest &&) = default ;
    CreateMediaConvertTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConvertTaskRequest() = default ;
    CreateMediaConvertTaskRequest& operator=(const CreateMediaConvertTaskRequest &) = default ;
    CreateMediaConvertTaskRequest& operator=(CreateMediaConvertTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(Audio, audio_);
        DARABONBA_PTR_TO_JSON(Container, container_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(Segment, segment_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(StripMetadata, stripMetadata_);
        DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
        DARABONBA_PTR_TO_JSON(Video, video_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(Audio, audio_);
        DARABONBA_PTR_FROM_JSON(Container, container_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(Segment, segment_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(StripMetadata, stripMetadata_);
        DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
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
      class Segment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Segment& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(StartNumber, startNumber_);
        };
        friend void from_json(const Darabonba::Json& j, Segment& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(StartNumber, startNumber_);
        };
        Segment() = default ;
        Segment(const Segment &) = default ;
        Segment(Segment &&) = default ;
        Segment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Segment() = default ;
        Segment& operator=(const Segment &) = default ;
        Segment& operator=(Segment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->format_ == nullptr && this->startNumber_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Segment& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Segment& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // startNumber Field Functions 
        bool hasStartNumber() const { return this->startNumber_ != nullptr;};
        void deleteStartNumber() { this->startNumber_ = nullptr;};
        inline int32_t getStartNumber() const { DARABONBA_PTR_GET_DEFAULT(startNumber_, 0) };
        inline Segment& setStartNumber(int32_t startNumber) { DARABONBA_PTR_SET_VALUE(startNumber_, startNumber) };


      protected:
        // Segment length. Unit: seconds.
        shared_ptr<double> duration_ {};
        // Media slicing method. The value range is as follows:
        // - hls
        // - dash
        shared_ptr<string> format_ {};
        // Starting sequence number, supported only for hls, default is 0.
        shared_ptr<int32_t> startNumber_ {};
      };

      virtual bool empty() const override { return this->audio_ == nullptr
        && this->container_ == nullptr && this->image_ == nullptr && this->segment_ == nullptr && this->speed_ == nullptr && this->stripMetadata_ == nullptr
        && this->subtitle_ == nullptr && this->URI_ == nullptr && this->video_ == nullptr; };
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


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const TargetImage & getImage() const { DARABONBA_PTR_GET_CONST(image_, TargetImage) };
      inline TargetImage getImage() { DARABONBA_PTR_GET(image_, TargetImage) };
      inline Targets& setImage(const TargetImage & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Targets& setImage(TargetImage && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


      // segment Field Functions 
      bool hasSegment() const { return this->segment_ != nullptr;};
      void deleteSegment() { this->segment_ = nullptr;};
      inline const Targets::Segment & getSegment() const { DARABONBA_PTR_GET_CONST(segment_, Targets::Segment) };
      inline Targets::Segment getSegment() { DARABONBA_PTR_GET(segment_, Targets::Segment) };
      inline Targets& setSegment(const Targets::Segment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
      inline Targets& setSegment(Targets::Segment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline float getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0.0) };
      inline Targets& setSpeed(float speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // stripMetadata Field Functions 
      bool hasStripMetadata() const { return this->stripMetadata_ != nullptr;};
      void deleteStripMetadata() { this->stripMetadata_ = nullptr;};
      inline bool getStripMetadata() const { DARABONBA_PTR_GET_DEFAULT(stripMetadata_, false) };
      inline Targets& setStripMetadata(bool stripMetadata) { DARABONBA_PTR_SET_VALUE(stripMetadata_, stripMetadata) };


      // subtitle Field Functions 
      bool hasSubtitle() const { return this->subtitle_ != nullptr;};
      void deleteSubtitle() { this->subtitle_ = nullptr;};
      inline const TargetSubtitle & getSubtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, TargetSubtitle) };
      inline TargetSubtitle getSubtitle() { DARABONBA_PTR_GET(subtitle_, TargetSubtitle) };
      inline Targets& setSubtitle(const TargetSubtitle & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
      inline Targets& setSubtitle(TargetSubtitle && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


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
      // Audio processing parameter configuration.
      // >Notice: If Audio is null, the first audio stream (if present) will be directly copied to the output file.</notice>
      shared_ptr<TargetAudio> audio_ {};
      // Media container type. Available container types are as follows:
      // - Audio and video containers: mp4, mkv, mov, asf, avi, mxf, ts, flv
      // - Audio containers: mp3, aac, flac, oga, ac3, opus
      // >Notice: Both Container and URI parameters need to be set. If only subtitle extraction, frame capture, sprite image capture, or media-to-gif conversion is performed, both Container and URI should be set to null, making the Segment, Video, Audio, and Speed parameters meaningless.</notice>
      shared_ptr<string> container_ {};
      // Configuration for frame capture, sprite image capture, and media to animated image conversion.
      shared_ptr<TargetImage> image_ {};
      // Media segment settings, no segmentation by default.
      shared_ptr<Targets::Segment> segment_ {};
      // Media playback speed setting, with a value range of [0.5,1.0], default is 1.0.
      // > The ratio of the playback speed of the transcoded media file to the original media file, not a speed-up transcoding.
      shared_ptr<float> speed_ {};
      // Removes metadata from the media file, such as `title`, `album`, etc. The default value is false.
      shared_ptr<bool> stripMetadata_ {};
      // Subtitle processing parameter configuration.
      // >Notice: If Subtitle is null, the first subtitle stream (if present) will be directly copied to the output file.</notice>
      shared_ptr<TargetSubtitle> subtitle_ {};
      // OSS address for the output file of media transcoding.
      // 
      // The OSS address rule is `oss://${Bucket}/${Object}`, where `${Bucket}` is the name of the OSS Bucket in the same region (Region) as the current project, and `${Object}` is the complete path of the file including the file extension.
      // - When **URI** has an extension, the OSS address for the transcoded media file will be **URI**. If there are multiple output files, they may overwrite each other.
      // - When **URI** does not have an extension, the OSS address for the transcoded media file is determined by the **URI**, **Container**, and **Segment** parameters. For example, if **URI** is `oss://examplebucket/outputVideo`:
      //    -  When **Container** is `mp4` and **Segment** is empty, the generated media file\\"s OSS address will be `oss://examplebucket/outputVideo.mp4`.
      //    -  When **Container** is `ts` and **Segment**\\"s **Format** is `hls`, it will generate an m3u8 file with the OSS address `oss://examplebucket/outputVideo.m3u8` and multiple ts files with the prefix `oss://examplebucket/outputVideo`.
      shared_ptr<string> URI_ {};
      // Video processing parameter configuration.
      // >Notice: If Video is null, the first video stream (if present) will be directly copied to the output file.</notice>
      shared_ptr<TargetVideo> video_ {};
    };

    class Sources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sources& obj) { 
        DARABONBA_PTR_TO_JSON(AlignMode, alignMode_);
        DARABONBA_PTR_TO_JSON(Attached, attached_);
        DARABONBA_PTR_TO_JSON(DisableAudio, disableAudio_);
        DARABONBA_PTR_TO_JSON(DisableVideo, disableVideo_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Sources& obj) { 
        DARABONBA_PTR_FROM_JSON(AlignMode, alignMode_);
        DARABONBA_PTR_FROM_JSON(Attached, attached_);
        DARABONBA_PTR_FROM_JSON(DisableAudio, disableAudio_);
        DARABONBA_PTR_FROM_JSON(DisableVideo, disableVideo_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      Sources() = default ;
      Sources(const Sources &) = default ;
      Sources(Sources &&) = default ;
      Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sources() = default ;
      Sources& operator=(const Sources &) = default ;
      Sources& operator=(Sources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Subtitles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Subtitles& obj) { 
          DARABONBA_PTR_TO_JSON(Language, language_);
          DARABONBA_PTR_TO_JSON(TimeOffset, timeOffset_);
          DARABONBA_PTR_TO_JSON(URI, URI_);
        };
        friend void from_json(const Darabonba::Json& j, Subtitles& obj) { 
          DARABONBA_PTR_FROM_JSON(Language, language_);
          DARABONBA_PTR_FROM_JSON(TimeOffset, timeOffset_);
          DARABONBA_PTR_FROM_JSON(URI, URI_);
        };
        Subtitles() = default ;
        Subtitles(const Subtitles &) = default ;
        Subtitles(Subtitles &&) = default ;
        Subtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Subtitles() = default ;
        Subtitles& operator=(const Subtitles &) = default ;
        Subtitles& operator=(Subtitles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->language_ == nullptr
        && this->timeOffset_ == nullptr && this->URI_ == nullptr; };
        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Subtitles& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // timeOffset Field Functions 
        bool hasTimeOffset() const { return this->timeOffset_ != nullptr;};
        void deleteTimeOffset() { this->timeOffset_ = nullptr;};
        inline double getTimeOffset() const { DARABONBA_PTR_GET_DEFAULT(timeOffset_, 0.0) };
        inline Subtitles& setTimeOffset(double timeOffset) { DARABONBA_PTR_SET_VALUE(timeOffset_, timeOffset) };


        // URI Field Functions 
        bool hasURI() const { return this->URI_ != nullptr;};
        void deleteURI() { this->URI_ = nullptr;};
        inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
        inline Subtitles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


      protected:
        // The language of the subtitle, referenced by ISO 639-2, with a default value of empty.
        shared_ptr<string> language_ {};
        // The subtitle delay time, in seconds, with a default value of 0.
        shared_ptr<double> timeOffset_ {};
        // The OSS address rule is `oss://${Bucket}/${Object}`, where `${Bucket}` is the name of the OSS Bucket in the same region (Region) as the current project, and `${Object}` is the complete path of the file including the file extension.
        // Supported subtitle formats include: srt, vtt, mov_text, ass, dvd_sub, pgs.
        shared_ptr<string> URI_ {};
      };

      virtual bool empty() const override { return this->alignMode_ == nullptr
        && this->attached_ == nullptr && this->disableAudio_ == nullptr && this->disableVideo_ == nullptr && this->duration_ == nullptr && this->startTime_ == nullptr
        && this->subtitles_ == nullptr && this->URI_ == nullptr; };
      // alignMode Field Functions 
      bool hasAlignMode() const { return this->alignMode_ != nullptr;};
      void deleteAlignMode() { this->alignMode_ = nullptr;};
      inline string getAlignMode() const { DARABONBA_PTR_GET_DEFAULT(alignMode_, "") };
      inline Sources& setAlignMode(string alignMode) { DARABONBA_PTR_SET_VALUE(alignMode_, alignMode) };


      // attached Field Functions 
      bool hasAttached() const { return this->attached_ != nullptr;};
      void deleteAttached() { this->attached_ = nullptr;};
      inline bool getAttached() const { DARABONBA_PTR_GET_DEFAULT(attached_, false) };
      inline Sources& setAttached(bool attached) { DARABONBA_PTR_SET_VALUE(attached_, attached) };


      // disableAudio Field Functions 
      bool hasDisableAudio() const { return this->disableAudio_ != nullptr;};
      void deleteDisableAudio() { this->disableAudio_ = nullptr;};
      inline bool getDisableAudio() const { DARABONBA_PTR_GET_DEFAULT(disableAudio_, false) };
      inline Sources& setDisableAudio(bool disableAudio) { DARABONBA_PTR_SET_VALUE(disableAudio_, disableAudio) };


      // disableVideo Field Functions 
      bool hasDisableVideo() const { return this->disableVideo_ != nullptr;};
      void deleteDisableVideo() { this->disableVideo_ = nullptr;};
      inline bool getDisableVideo() const { DARABONBA_PTR_GET_DEFAULT(disableVideo_, false) };
      inline Sources& setDisableVideo(bool disableVideo) { DARABONBA_PTR_SET_VALUE(disableVideo_, disableVideo) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline Sources& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
      inline Sources& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // subtitles Field Functions 
      bool hasSubtitles() const { return this->subtitles_ != nullptr;};
      void deleteSubtitles() { this->subtitles_ = nullptr;};
      inline const vector<Sources::Subtitles> & getSubtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Sources::Subtitles>) };
      inline vector<Sources::Subtitles> getSubtitles() { DARABONBA_PTR_GET(subtitles_, vector<Sources::Subtitles>) };
      inline Sources& setSubtitles(const vector<Sources::Subtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
      inline Sources& setSubtitles(vector<Sources::Subtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Sources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The alignment strategy for adding audio and video streams, with the following value range:
      // - false (default): No alignment.
      // - loop: Loop the audio and video content to align.
      // - pad: Align by padding silent frames and black video frames.
      // > - Only valid when the Attached parameter is true.
      shared_ptr<string> alignMode_ {};
      // Add the current source media file as a synchronized audio or video stream to the output media file, with a default value of false.
      // 
      // > - The AlignmentIndex parameter pointing to the Attached parameter of the Source cannot be true.
      shared_ptr<bool> attached_ {};
      // Whether to disable the audio in the source media file. The value range is as follows:
      // 
      // - true: Disable.
      // - false (default): Do not disable.
      shared_ptr<bool> disableAudio_ {};
      // Whether to disable the video in the source media file. The value range is as follows:
      // 
      // - true: Disable.
      // - false (default): Do not disable.
      shared_ptr<bool> disableVideo_ {};
      // The duration of media transcoding, in seconds. The default value is 0, indicating until the end of the video.
      shared_ptr<double> duration_ {};
      // The start time for media transcoding, in seconds. The value range is as follows:
      // - 0 (default): Start transcoding from the beginning of the media.
      // - n (greater than 0): Start transcoding n seconds after the beginning of the media.
      shared_ptr<double> startTime_ {};
      // A list of subtitles to add, which is empty by default.
      shared_ptr<vector<Sources::Subtitles>> subtitles_ {};
      // The OSS address rule is `oss://${Bucket}/${Object}`, where `${Bucket}` is the name of the OSS Bucket in the same region (Region) as the current project, and `${Object}` is the complete path of the file including the file extension.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->alignmentIndex_ == nullptr
        && this->credentialConfig_ == nullptr && this->notification_ == nullptr && this->projectName_ == nullptr && this->sources_ == nullptr && this->tags_ == nullptr
        && this->targets_ == nullptr && this->userData_ == nullptr; };
    // alignmentIndex Field Functions 
    bool hasAlignmentIndex() const { return this->alignmentIndex_ != nullptr;};
    void deleteAlignmentIndex() { this->alignmentIndex_ = nullptr;};
    inline int32_t getAlignmentIndex() const { DARABONBA_PTR_GET_DEFAULT(alignmentIndex_, 0) };
    inline CreateMediaConvertTaskRequest& setAlignmentIndex(int32_t alignmentIndex) { DARABONBA_PTR_SET_VALUE(alignmentIndex_, alignmentIndex) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateMediaConvertTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateMediaConvertTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateMediaConvertTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateMediaConvertTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateMediaConvertTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateMediaConvertTaskRequest::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateMediaConvertTaskRequest::Sources>) };
    inline vector<CreateMediaConvertTaskRequest::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<CreateMediaConvertTaskRequest::Sources>) };
    inline CreateMediaConvertTaskRequest& setSources(const vector<CreateMediaConvertTaskRequest::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateMediaConvertTaskRequest& setSources(vector<CreateMediaConvertTaskRequest::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateMediaConvertTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateMediaConvertTaskRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<CreateMediaConvertTaskRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<CreateMediaConvertTaskRequest::Targets>) };
    inline vector<CreateMediaConvertTaskRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<CreateMediaConvertTaskRequest::Targets>) };
    inline CreateMediaConvertTaskRequest& setTargets(const vector<CreateMediaConvertTaskRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline CreateMediaConvertTaskRequest& setTargets(vector<CreateMediaConvertTaskRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateMediaConvertTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // When performing media concatenation, the index of the primary media file (which provides the default transcoding parameters for `Video` and `Audio`, including resolution, frame rate, etc.) in the concatenation list. The default value is 0 (aligning with the first media file in the concatenation list).
    shared_ptr<int32_t> alignmentIndex_ {};
    // **If there are no special requirements, please leave this blank.**
    // 
    // Chain authorization configuration. For more information, see [Using Chain Authorization to Access Other Entity Resources](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // Notification configuration. For details, click Notification. The format of asynchronous notification messages can be found in [Asynchronous Notification Message Format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
    // The name of the project. For how to obtain it, see [Creating a Project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // A list of media files. If the list contains more than one element, it indicates that the Concat (concatenation) function is enabled. The Concat order follows the sequence of the input video file URIs.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateMediaConvertTaskRequest::Sources>> sources_ {};
    // Custom tags used for searching and filtering asynchronous tasks.
    Darabonba::Json tags_ {};
    // List of media processing tasks, supporting multiple task configurations.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateMediaConvertTaskRequest::Targets>> targets_ {};
    // User-defined information that will be returned in asynchronous message notifications, used for convenient association and processing within your system. The maximum length is 2048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
