// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHLIGHTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHLIGHTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetAudio.hpp>
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
  class CreateHighlightTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighlightTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Edit, edit_);
      DARABONBA_PTR_TO_JSON(Highlight, highlight_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighlightTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Edit, edit_);
      DARABONBA_PTR_FROM_JSON(Highlight, highlight_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateHighlightTaskRequest() = default ;
    CreateHighlightTaskRequest(const CreateHighlightTaskRequest &) = default ;
    CreateHighlightTaskRequest(CreateHighlightTaskRequest &&) = default ;
    CreateHighlightTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighlightTaskRequest() = default ;
    CreateHighlightTaskRequest& operator=(const CreateHighlightTaskRequest &) = default ;
    CreateHighlightTaskRequest& operator=(CreateHighlightTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sources& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Sources& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->startTime_ == nullptr && this->URI_ == nullptr; };
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


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Sources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The duration of the media clip. Unit: seconds. Default value: 0, which indicates the end of the video.
      // This parameter takes effect only when Type is set to Concat.
      shared_ptr<double> duration_ {};
      // The start time of the media resource. Valid values: [0, video duration].
      // This parameter takes effect only when Type is set to Concat.
      shared_ptr<double> startTime_ {};
      // The URI of the media resource (OSS URI). Only videos are supported.
      // 
      // This parameter is required.
      shared_ptr<string> URI_ {};
    };

    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Audio, audio_);
        DARABONBA_PTR_TO_JSON(Container, container_);
        DARABONBA_PTR_TO_JSON(MaxDuration, maxDuration_);
        DARABONBA_PTR_TO_JSON(Segment, segment_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
        DARABONBA_PTR_TO_JSON(Video, video_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Audio, audio_);
        DARABONBA_PTR_FROM_JSON(Container, container_);
        DARABONBA_PTR_FROM_JSON(MaxDuration, maxDuration_);
        DARABONBA_PTR_FROM_JSON(Segment, segment_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
        DARABONBA_PTR_FROM_JSON(Video, video_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
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
        inline int64_t getStartNumber() const { DARABONBA_PTR_GET_DEFAULT(startNumber_, 0L) };
        inline Segment& setStartNumber(int64_t startNumber) { DARABONBA_PTR_SET_VALUE(startNumber_, startNumber) };


      protected:
        // The segment duration. Unit: seconds.
        shared_ptr<double> duration_ {};
        // The media segmentation format. Valid values:
        // 
        // - hls
        // 
        // - dash.
        shared_ptr<string> format_ {};
        // The start number. Only hls is supported. Default value: 0.
        shared_ptr<int64_t> startNumber_ {};
      };

      virtual bool empty() const override { return this->audio_ == nullptr
        && this->container_ == nullptr && this->maxDuration_ == nullptr && this->segment_ == nullptr && this->speed_ == nullptr && this->URI_ == nullptr
        && this->video_ == nullptr; };
      // audio Field Functions 
      bool hasAudio() const { return this->audio_ != nullptr;};
      void deleteAudio() { this->audio_ = nullptr;};
      inline const TargetAudio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, TargetAudio) };
      inline TargetAudio getAudio() { DARABONBA_PTR_GET(audio_, TargetAudio) };
      inline Output& setAudio(const TargetAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
      inline Output& setAudio(TargetAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


      // container Field Functions 
      bool hasContainer() const { return this->container_ != nullptr;};
      void deleteContainer() { this->container_ = nullptr;};
      inline string getContainer() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
      inline Output& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


      // maxDuration Field Functions 
      bool hasMaxDuration() const { return this->maxDuration_ != nullptr;};
      void deleteMaxDuration() { this->maxDuration_ = nullptr;};
      inline double getMaxDuration() const { DARABONBA_PTR_GET_DEFAULT(maxDuration_, 0.0) };
      inline Output& setMaxDuration(double maxDuration) { DARABONBA_PTR_SET_VALUE(maxDuration_, maxDuration) };


      // segment Field Functions 
      bool hasSegment() const { return this->segment_ != nullptr;};
      void deleteSegment() { this->segment_ = nullptr;};
      inline const Output::Segment & getSegment() const { DARABONBA_PTR_GET_CONST(segment_, Output::Segment) };
      inline Output::Segment getSegment() { DARABONBA_PTR_GET(segment_, Output::Segment) };
      inline Output& setSegment(const Output::Segment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
      inline Output& setSegment(Output::Segment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline double getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0.0) };
      inline Output& setSpeed(double speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Output& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


      // video Field Functions 
      bool hasVideo() const { return this->video_ != nullptr;};
      void deleteVideo() { this->video_ = nullptr;};
      inline const TargetVideo & getVideo() const { DARABONBA_PTR_GET_CONST(video_, TargetVideo) };
      inline TargetVideo getVideo() { DARABONBA_PTR_GET(video_, TargetVideo) };
      inline Output& setVideo(const TargetVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
      inline Output& setVideo(TargetVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


    protected:
      // The audio processing parameter settings.
      // >Notice: If Audio is empty, the first audio stream (if any) is directly copied to the output file.
      shared_ptr<TargetAudio> audio_ {};
      // The media container type. This parameter is required when Type is set to Concat or Compose. Valid values:
      // 
      // - Audio and video containers: mp4, mkv, mov, asf, avi, mxf, ts, flv
      // 
      // >Notice: Container and URI must be specified together..
      shared_ptr<string> container_ {};
      // The maximum duration of the clipped video. Unit: seconds.
      shared_ptr<double> maxDuration_ {};
      // The media segmentation settings. By default, no segmentation is performed.
      shared_ptr<Output::Segment> segment_ {};
      // The playback speed of the media. Valid values: [0.5, 1.0]. Default value: 1.0.
      // 
      // > This value is the ratio of the default playback speed of the transcoded media file to that of the source media file. This is not speed-adjusted transcoding.
      shared_ptr<double> speed_ {};
      // The URI of the output file.
      // 
      // This parameter is required.
      shared_ptr<string> URI_ {};
      // The video processing parameter settings.
      // >Notice: If Video is empty, the first video stream (if any) is directly copied to the output file.
      shared_ptr<TargetVideo> video_ {};
    };

    class Highlight : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Highlight& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
      };
      friend void from_json(const Darabonba::Json& j, Highlight& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
      };
      Highlight() = default ;
      Highlight(const Highlight &) = default ;
      Highlight(Highlight &&) = default ;
      Highlight(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Highlight() = default ;
      Highlight& operator=(const Highlight &) = default ;
      Highlight& operator=(Highlight &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Highlight& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    protected:
      // The highlight content. Valid values:
      // 
      // - Pets
      // 
      // - People
      // 
      // - Sports
      // 
      // - Meetings
      // 
      // The value cannot exceed 100 characters.
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
    };

    class Edit : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Edit& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundMusicMode, backgroundMusicMode_);
        DARABONBA_PTR_TO_JSON(BackgroundMusics, backgroundMusics_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(TransitionMode, transitionMode_);
        DARABONBA_PTR_TO_JSON(Transitions, transitions_);
        DARABONBA_PTR_TO_JSON(VfxEffectMode, vfxEffectMode_);
        DARABONBA_PTR_TO_JSON(VfxEffects, vfxEffects_);
      };
      friend void from_json(const Darabonba::Json& j, Edit& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundMusicMode, backgroundMusicMode_);
        DARABONBA_PTR_FROM_JSON(BackgroundMusics, backgroundMusics_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(TransitionMode, transitionMode_);
        DARABONBA_PTR_FROM_JSON(Transitions, transitions_);
        DARABONBA_PTR_FROM_JSON(VfxEffectMode, vfxEffectMode_);
        DARABONBA_PTR_FROM_JSON(VfxEffects, vfxEffects_);
      };
      Edit() = default ;
      Edit(const Edit &) = default ;
      Edit(Edit &&) = default ;
      Edit(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Edit() = default ;
      Edit& operator=(const Edit &) = default ;
      Edit& operator=(Edit &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VfxEffects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VfxEffects& obj) { 
          DARABONBA_PTR_TO_JSON(VfxEffect, vfxEffect_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, VfxEffects& obj) { 
          DARABONBA_PTR_FROM_JSON(VfxEffect, vfxEffect_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        VfxEffects() = default ;
        VfxEffects(const VfxEffects &) = default ;
        VfxEffects(VfxEffects &&) = default ;
        VfxEffects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VfxEffects() = default ;
        VfxEffects& operator=(const VfxEffects &) = default ;
        VfxEffects& operator=(VfxEffects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->vfxEffect_ == nullptr
        && this->weight_ == nullptr; };
        // vfxEffect Field Functions 
        bool hasVfxEffect() const { return this->vfxEffect_ != nullptr;};
        void deleteVfxEffect() { this->vfxEffect_ = nullptr;};
        inline string getVfxEffect() const { DARABONBA_PTR_GET_DEFAULT(vfxEffect_, "") };
        inline VfxEffects& setVfxEffect(string vfxEffect) { DARABONBA_PTR_SET_VALUE(vfxEffect_, vfxEffect) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline VfxEffects& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The visual effect. For more information, see [Effects](https://www.alibabacloud.com/help/en/imm/developer-reference/effects).
        // 
        // This parameter is required.
        shared_ptr<string> vfxEffect_ {};
        // The effect weight. Valid values: [1, 100]. Default value: 50.
        // This parameter takes effect when VfxEffectMode is set to Random.
        shared_ptr<int64_t> weight_ {};
      };

      class Transitions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Transitions& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Transition, transition_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Transitions& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Transition, transition_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        Transitions() = default ;
        Transitions(const Transitions &) = default ;
        Transitions(Transitions &&) = default ;
        Transitions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Transitions() = default ;
        Transitions& operator=(const Transitions &) = default ;
        Transitions& operator=(Transitions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->transition_ == nullptr && this->weight_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Transitions& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // transition Field Functions 
        bool hasTransition() const { return this->transition_ != nullptr;};
        void deleteTransition() { this->transition_ = nullptr;};
        inline string getTransition() const { DARABONBA_PTR_GET_DEFAULT(transition_, "") };
        inline Transitions& setTransition(string transition) { DARABONBA_PTR_SET_VALUE(transition_, transition) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline Transitions& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The transition duration. Unit: seconds. If the transition duration is greater than the clip duration minus 1, the transition effect on that clip does not take effect.
        // Valid values: [0, 5].
        shared_ptr<double> duration_ {};
        // The transition effect. For more information, see [Transition effects](https://www.alibabacloud.com/help/en/imm/developer-reference/transition-effect).
        // 
        // This parameter is required.
        shared_ptr<string> transition_ {};
        // The transition weight. Valid values: [1, 100]. Default value: 50.
        // This parameter takes effect when TransitionMode is set to Random.
        shared_ptr<int64_t> weight_ {};
      };

      class BackgroundMusics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackgroundMusics& obj) { 
          DARABONBA_PTR_TO_JSON(URI, URI_);
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, BackgroundMusics& obj) { 
          DARABONBA_PTR_FROM_JSON(URI, URI_);
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        BackgroundMusics() = default ;
        BackgroundMusics(const BackgroundMusics &) = default ;
        BackgroundMusics(BackgroundMusics &&) = default ;
        BackgroundMusics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackgroundMusics() = default ;
        BackgroundMusics& operator=(const BackgroundMusics &) = default ;
        BackgroundMusics& operator=(BackgroundMusics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->URI_ == nullptr
        && this->volume_ == nullptr; };
        // URI Field Functions 
        bool hasURI() const { return this->URI_ != nullptr;};
        void deleteURI() { this->URI_ = nullptr;};
        inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
        inline BackgroundMusics& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline double getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0.0) };
        inline BackgroundMusics& setVolume(double volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        // The URI of the background music (OSS URI). Only audio files are supported.
        // 
        // This parameter is required.
        shared_ptr<string> URI_ {};
        // The volume intensity of the background music. Valid values: [0, 10]. Default value: 0.2. A value of 1 indicates the original volume.
        shared_ptr<double> volume_ {};
      };

      virtual bool empty() const override { return this->backgroundMusicMode_ == nullptr
        && this->backgroundMusics_ == nullptr && this->mode_ == nullptr && this->transitionMode_ == nullptr && this->transitions_ == nullptr && this->vfxEffectMode_ == nullptr
        && this->vfxEffects_ == nullptr; };
      // backgroundMusicMode Field Functions 
      bool hasBackgroundMusicMode() const { return this->backgroundMusicMode_ != nullptr;};
      void deleteBackgroundMusicMode() { this->backgroundMusicMode_ = nullptr;};
      inline string getBackgroundMusicMode() const { DARABONBA_PTR_GET_DEFAULT(backgroundMusicMode_, "") };
      inline Edit& setBackgroundMusicMode(string backgroundMusicMode) { DARABONBA_PTR_SET_VALUE(backgroundMusicMode_, backgroundMusicMode) };


      // backgroundMusics Field Functions 
      bool hasBackgroundMusics() const { return this->backgroundMusics_ != nullptr;};
      void deleteBackgroundMusics() { this->backgroundMusics_ = nullptr;};
      inline const vector<Edit::BackgroundMusics> & getBackgroundMusics() const { DARABONBA_PTR_GET_CONST(backgroundMusics_, vector<Edit::BackgroundMusics>) };
      inline vector<Edit::BackgroundMusics> getBackgroundMusics() { DARABONBA_PTR_GET(backgroundMusics_, vector<Edit::BackgroundMusics>) };
      inline Edit& setBackgroundMusics(const vector<Edit::BackgroundMusics> & backgroundMusics) { DARABONBA_PTR_SET_VALUE(backgroundMusics_, backgroundMusics) };
      inline Edit& setBackgroundMusics(vector<Edit::BackgroundMusics> && backgroundMusics) { DARABONBA_PTR_SET_RVALUE(backgroundMusics_, backgroundMusics) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Edit& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // transitionMode Field Functions 
      bool hasTransitionMode() const { return this->transitionMode_ != nullptr;};
      void deleteTransitionMode() { this->transitionMode_ = nullptr;};
      inline string getTransitionMode() const { DARABONBA_PTR_GET_DEFAULT(transitionMode_, "") };
      inline Edit& setTransitionMode(string transitionMode) { DARABONBA_PTR_SET_VALUE(transitionMode_, transitionMode) };


      // transitions Field Functions 
      bool hasTransitions() const { return this->transitions_ != nullptr;};
      void deleteTransitions() { this->transitions_ = nullptr;};
      inline const vector<Edit::Transitions> & getTransitions() const { DARABONBA_PTR_GET_CONST(transitions_, vector<Edit::Transitions>) };
      inline vector<Edit::Transitions> getTransitions() { DARABONBA_PTR_GET(transitions_, vector<Edit::Transitions>) };
      inline Edit& setTransitions(const vector<Edit::Transitions> & transitions) { DARABONBA_PTR_SET_VALUE(transitions_, transitions) };
      inline Edit& setTransitions(vector<Edit::Transitions> && transitions) { DARABONBA_PTR_SET_RVALUE(transitions_, transitions) };


      // vfxEffectMode Field Functions 
      bool hasVfxEffectMode() const { return this->vfxEffectMode_ != nullptr;};
      void deleteVfxEffectMode() { this->vfxEffectMode_ = nullptr;};
      inline string getVfxEffectMode() const { DARABONBA_PTR_GET_DEFAULT(vfxEffectMode_, "") };
      inline Edit& setVfxEffectMode(string vfxEffectMode) { DARABONBA_PTR_SET_VALUE(vfxEffectMode_, vfxEffectMode) };


      // vfxEffects Field Functions 
      bool hasVfxEffects() const { return this->vfxEffects_ != nullptr;};
      void deleteVfxEffects() { this->vfxEffects_ = nullptr;};
      inline const vector<Edit::VfxEffects> & getVfxEffects() const { DARABONBA_PTR_GET_CONST(vfxEffects_, vector<Edit::VfxEffects>) };
      inline vector<Edit::VfxEffects> getVfxEffects() { DARABONBA_PTR_GET(vfxEffects_, vector<Edit::VfxEffects>) };
      inline Edit& setVfxEffects(const vector<Edit::VfxEffects> & vfxEffects) { DARABONBA_PTR_SET_VALUE(vfxEffects_, vfxEffects) };
      inline Edit& setVfxEffects(vector<Edit::VfxEffects> && vfxEffects) { DARABONBA_PTR_SET_RVALUE(vfxEffects_, vfxEffects) };


    protected:
      // The background music mode. Default value: Closed. Valid values:
      // 
      // - Random: custom background music, randomly selected based on weight.
      // 
      // - Sequential: custom background music, applied in order.
      // 
      // - Closed: no background music.
      shared_ptr<string> backgroundMusicMode_ {};
      // The background music tracks. This parameter takes effect when BackgroundMusicMode is set to Random or Sequential.
      // **The maximum number is 1.**.
      shared_ptr<vector<Edit::BackgroundMusics>> backgroundMusics_ {};
      // The editing mode. Valid values:
      // 
      // - Sequential: sequential mode.
      // 
      // This parameter is required.
      shared_ptr<string> mode_ {};
      // The transition mode. Default value: Closed. Valid values:
      // 
      // - Auto: automatic transition.
      // 
      // - Random: custom transition, randomly selected based on weight.
      // 
      // - Sequential: custom transition, applied in order.
      // 
      // - Closed: no transition.
      shared_ptr<string> transitionMode_ {};
      // The transition effects.
      // This parameter takes effect when TransitionMode is set to Random or Sequential.
      // A maximum of 10 transitions are supported.
      shared_ptr<vector<Edit::Transitions>> transitions_ {};
      // The effect mode. Default value: Closed. Valid values:
      // 
      // - Auto: automatic effect.
      // 
      // - Random: custom effect, randomly selected based on weight.
      // 
      // - Sequential: custom effect, applied in order.
      // 
      // - Closed: no effect.
      shared_ptr<string> vfxEffectMode_ {};
      // The visual effects. This parameter takes effect when VfxEffectMode is set to Random or Sequential.
      // A maximum of 10 effects are supported.
      shared_ptr<vector<Edit::VfxEffects>> vfxEffects_ {};
    };

    virtual bool empty() const override { return this->credentialConfig_ == nullptr
        && this->edit_ == nullptr && this->highlight_ == nullptr && this->mode_ == nullptr && this->notification_ == nullptr && this->output_ == nullptr
        && this->projectName_ == nullptr && this->sources_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->userData_ == nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateHighlightTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateHighlightTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // edit Field Functions 
    bool hasEdit() const { return this->edit_ != nullptr;};
    void deleteEdit() { this->edit_ = nullptr;};
    inline const CreateHighlightTaskRequest::Edit & getEdit() const { DARABONBA_PTR_GET_CONST(edit_, CreateHighlightTaskRequest::Edit) };
    inline CreateHighlightTaskRequest::Edit getEdit() { DARABONBA_PTR_GET(edit_, CreateHighlightTaskRequest::Edit) };
    inline CreateHighlightTaskRequest& setEdit(const CreateHighlightTaskRequest::Edit & edit) { DARABONBA_PTR_SET_VALUE(edit_, edit) };
    inline CreateHighlightTaskRequest& setEdit(CreateHighlightTaskRequest::Edit && edit) { DARABONBA_PTR_SET_RVALUE(edit_, edit) };


    // highlight Field Functions 
    bool hasHighlight() const { return this->highlight_ != nullptr;};
    void deleteHighlight() { this->highlight_ = nullptr;};
    inline const CreateHighlightTaskRequest::Highlight & getHighlight() const { DARABONBA_PTR_GET_CONST(highlight_, CreateHighlightTaskRequest::Highlight) };
    inline CreateHighlightTaskRequest::Highlight getHighlight() { DARABONBA_PTR_GET(highlight_, CreateHighlightTaskRequest::Highlight) };
    inline CreateHighlightTaskRequest& setHighlight(const CreateHighlightTaskRequest::Highlight & highlight) { DARABONBA_PTR_SET_VALUE(highlight_, highlight) };
    inline CreateHighlightTaskRequest& setHighlight(CreateHighlightTaskRequest::Highlight && highlight) { DARABONBA_PTR_SET_RVALUE(highlight_, highlight) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateHighlightTaskRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateHighlightTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateHighlightTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const CreateHighlightTaskRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, CreateHighlightTaskRequest::Output) };
    inline CreateHighlightTaskRequest::Output getOutput() { DARABONBA_PTR_GET(output_, CreateHighlightTaskRequest::Output) };
    inline CreateHighlightTaskRequest& setOutput(const CreateHighlightTaskRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline CreateHighlightTaskRequest& setOutput(CreateHighlightTaskRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateHighlightTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateHighlightTaskRequest::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateHighlightTaskRequest::Sources>) };
    inline vector<CreateHighlightTaskRequest::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<CreateHighlightTaskRequest::Sources>) };
    inline CreateHighlightTaskRequest& setSources(const vector<CreateHighlightTaskRequest::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateHighlightTaskRequest& setSources(vector<CreateHighlightTaskRequest::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateHighlightTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateHighlightTaskRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateHighlightTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateHighlightTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The China authorization configuration. **Leave this parameter empty unless you have specific requirements.**.
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The editing configuration.
    shared_ptr<CreateHighlightTaskRequest::Edit> edit_ {};
    // The highlight configuration.
    shared_ptr<CreateHighlightTaskRequest::Highlight> highlight_ {};
    // The highlight recognition mode. Valid values:
    // 
    // - Scene: scene and frame recognition.
    // 
    // - Average (default): average slice recognition.
    shared_ptr<string> mode_ {};
    // The message notification configuration. For more information, click Notification. For the format of asynchronous notification messages, see [Asynchronous notification message format](https://www.alibabacloud.com/help/en/imm/developer-reference/asynchronous-notification-message-examples).
    shared_ptr<Notification> notification_ {};
    // The output configuration.
    // 
    // This parameter is required.
    shared_ptr<CreateHighlightTaskRequest::Output> output_ {};
    // The project name.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The list of media resources to process.
    // A maximum of 10 videos are supported.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateHighlightTaskRequest::Sources>> sources_ {};
    // The custom tags used to search for and filter asynchronous tasks.
    Darabonba::Json tags_ {};
    // The processing type. Valid values:
    // 
    // - Retrieval: highlight extraction.
    // 
    // - Concat: video composition.
    // 
    // - Compose: one-click video creation.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The custom user data, which is returned in asynchronous message notifications.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
