// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitMediaInfoJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitMediaInfoJobResponseBody() = default ;
    SubmitMediaInfoJobResponseBody(const SubmitMediaInfoJobResponseBody &) = default ;
    SubmitMediaInfoJobResponseBody(SubmitMediaInfoJobResponseBody &&) = default ;
    SubmitMediaInfoJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBody() = default ;
    SubmitMediaInfoJobResponseBody& operator=(const SubmitMediaInfoJobResponseBody &) = default ;
    SubmitMediaInfoJobResponseBody& operator=(SubmitMediaInfoJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaInfoJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaInfoJob& obj) { 
        DARABONBA_PTR_TO_JSON(Async, async_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, MediaInfoJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Async, async_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      MediaInfoJob() = default ;
      MediaInfoJob(const MediaInfoJob &) = default ;
      MediaInfoJob(MediaInfoJob &&) = default ;
      MediaInfoJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaInfoJob() = default ;
      MediaInfoJob& operator=(const MediaInfoJob &) = default ;
      MediaInfoJob& operator=(MediaInfoJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Properties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Properties& obj) { 
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(MD5, MD5_);
          DARABONBA_PTR_TO_JSON(Streams, streams_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Properties& obj) { 
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(MD5, MD5_);
          DARABONBA_PTR_FROM_JSON(Streams, streams_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        Properties() = default ;
        Properties(const Properties &) = default ;
        Properties(Properties &&) = default ;
        Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Properties() = default ;
        Properties& operator=(const Properties &) = default ;
        Properties& operator=(Properties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Streams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Streams& obj) { 
            DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
            DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
            DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
          };
          friend void from_json(const Darabonba::Json& j, Streams& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
            DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
            DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
          };
          Streams() = default ;
          Streams(const Streams &) = default ;
          Streams(Streams &&) = default ;
          Streams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Streams() = default ;
          Streams& operator=(const Streams &) = default ;
          Streams& operator=(Streams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoStreamList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoStreamList& obj) { 
              DARABONBA_PTR_TO_JSON(VideoStream, videoStream_);
            };
            friend void from_json(const Darabonba::Json& j, VideoStreamList& obj) { 
              DARABONBA_PTR_FROM_JSON(VideoStream, videoStream_);
            };
            VideoStreamList() = default ;
            VideoStreamList(const VideoStreamList &) = default ;
            VideoStreamList(VideoStreamList &&) = default ;
            VideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoStreamList() = default ;
            VideoStreamList& operator=(const VideoStreamList &) = default ;
            VideoStreamList& operator=(VideoStreamList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VideoStream : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VideoStream& obj) { 
                DARABONBA_PTR_TO_JSON(AvgFPS, avgFPS_);
                DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
                DARABONBA_PTR_TO_JSON(CodecName, codecName_);
                DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
                DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
                DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
                DARABONBA_PTR_TO_JSON(ColorPrimaries, colorPrimaries_);
                DARABONBA_PTR_TO_JSON(ColorRange, colorRange_);
                DARABONBA_PTR_TO_JSON(ColorTransfer, colorTransfer_);
                DARABONBA_PTR_TO_JSON(Dar, dar_);
                DARABONBA_PTR_TO_JSON(DolbyVision, dolbyVision_);
                DARABONBA_PTR_TO_JSON(Duration, duration_);
                DARABONBA_PTR_TO_JSON(DurationInaccurate, durationInaccurate_);
                DARABONBA_PTR_TO_JSON(Fps, fps_);
                DARABONBA_PTR_TO_JSON(HasBFrames, hasBFrames_);
                DARABONBA_PTR_TO_JSON(Height, height_);
                DARABONBA_PTR_TO_JSON(Index, index_);
                DARABONBA_PTR_TO_JSON(Lang, lang_);
                DARABONBA_PTR_TO_JSON(Level, level_);
                DARABONBA_PTR_TO_JSON(NetworkCost, networkCost_);
                DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
                DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
                DARABONBA_PTR_TO_JSON(Profile, profile_);
                DARABONBA_PTR_TO_JSON(Rotate, rotate_);
                DARABONBA_PTR_TO_JSON(Sar, sar_);
                DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                DARABONBA_PTR_TO_JSON(Timebase, timebase_);
                DARABONBA_PTR_TO_JSON(Width, width_);
              };
              friend void from_json(const Darabonba::Json& j, VideoStream& obj) { 
                DARABONBA_PTR_FROM_JSON(AvgFPS, avgFPS_);
                DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
                DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
                DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
                DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
                DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
                DARABONBA_PTR_FROM_JSON(ColorPrimaries, colorPrimaries_);
                DARABONBA_PTR_FROM_JSON(ColorRange, colorRange_);
                DARABONBA_PTR_FROM_JSON(ColorTransfer, colorTransfer_);
                DARABONBA_PTR_FROM_JSON(Dar, dar_);
                DARABONBA_PTR_FROM_JSON(DolbyVision, dolbyVision_);
                DARABONBA_PTR_FROM_JSON(Duration, duration_);
                DARABONBA_PTR_FROM_JSON(DurationInaccurate, durationInaccurate_);
                DARABONBA_PTR_FROM_JSON(Fps, fps_);
                DARABONBA_PTR_FROM_JSON(HasBFrames, hasBFrames_);
                DARABONBA_PTR_FROM_JSON(Height, height_);
                DARABONBA_PTR_FROM_JSON(Index, index_);
                DARABONBA_PTR_FROM_JSON(Lang, lang_);
                DARABONBA_PTR_FROM_JSON(Level, level_);
                DARABONBA_PTR_FROM_JSON(NetworkCost, networkCost_);
                DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
                DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
                DARABONBA_PTR_FROM_JSON(Profile, profile_);
                DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
                DARABONBA_PTR_FROM_JSON(Sar, sar_);
                DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
                DARABONBA_PTR_FROM_JSON(Width, width_);
              };
              VideoStream() = default ;
              VideoStream(const VideoStream &) = default ;
              VideoStream(VideoStream &&) = default ;
              VideoStream(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VideoStream() = default ;
              VideoStream& operator=(const VideoStream &) = default ;
              VideoStream& operator=(VideoStream &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class NetworkCost : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const NetworkCost& obj) { 
                  DARABONBA_PTR_TO_JSON(AvgBitrate, avgBitrate_);
                  DARABONBA_PTR_TO_JSON(CostBandwidth, costBandwidth_);
                  DARABONBA_PTR_TO_JSON(PreloadTime, preloadTime_);
                };
                friend void from_json(const Darabonba::Json& j, NetworkCost& obj) { 
                  DARABONBA_PTR_FROM_JSON(AvgBitrate, avgBitrate_);
                  DARABONBA_PTR_FROM_JSON(CostBandwidth, costBandwidth_);
                  DARABONBA_PTR_FROM_JSON(PreloadTime, preloadTime_);
                };
                NetworkCost() = default ;
                NetworkCost(const NetworkCost &) = default ;
                NetworkCost(NetworkCost &&) = default ;
                NetworkCost(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~NetworkCost() = default ;
                NetworkCost& operator=(const NetworkCost &) = default ;
                NetworkCost& operator=(NetworkCost &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->avgBitrate_ == nullptr
        && this->costBandwidth_ == nullptr && this->preloadTime_ == nullptr; };
                // avgBitrate Field Functions 
                bool hasAvgBitrate() const { return this->avgBitrate_ != nullptr;};
                void deleteAvgBitrate() { this->avgBitrate_ = nullptr;};
                inline string getAvgBitrate() const { DARABONBA_PTR_GET_DEFAULT(avgBitrate_, "") };
                inline NetworkCost& setAvgBitrate(string avgBitrate) { DARABONBA_PTR_SET_VALUE(avgBitrate_, avgBitrate) };


                // costBandwidth Field Functions 
                bool hasCostBandwidth() const { return this->costBandwidth_ != nullptr;};
                void deleteCostBandwidth() { this->costBandwidth_ = nullptr;};
                inline string getCostBandwidth() const { DARABONBA_PTR_GET_DEFAULT(costBandwidth_, "") };
                inline NetworkCost& setCostBandwidth(string costBandwidth) { DARABONBA_PTR_SET_VALUE(costBandwidth_, costBandwidth) };


                // preloadTime Field Functions 
                bool hasPreloadTime() const { return this->preloadTime_ != nullptr;};
                void deletePreloadTime() { this->preloadTime_ = nullptr;};
                inline string getPreloadTime() const { DARABONBA_PTR_GET_DEFAULT(preloadTime_, "") };
                inline NetworkCost& setPreloadTime(string preloadTime) { DARABONBA_PTR_SET_VALUE(preloadTime_, preloadTime) };


              protected:
                shared_ptr<string> avgBitrate_ {};
                shared_ptr<string> costBandwidth_ {};
                shared_ptr<string> preloadTime_ {};
              };

              class DolbyVision : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const DolbyVision& obj) { 
                  DARABONBA_PTR_TO_JSON(Level, level_);
                  DARABONBA_PTR_TO_JSON(Profile, profile_);
                };
                friend void from_json(const Darabonba::Json& j, DolbyVision& obj) { 
                  DARABONBA_PTR_FROM_JSON(Level, level_);
                  DARABONBA_PTR_FROM_JSON(Profile, profile_);
                };
                DolbyVision() = default ;
                DolbyVision(const DolbyVision &) = default ;
                DolbyVision(DolbyVision &&) = default ;
                DolbyVision(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~DolbyVision() = default ;
                DolbyVision& operator=(const DolbyVision &) = default ;
                DolbyVision& operator=(DolbyVision &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->level_ == nullptr
        && this->profile_ == nullptr; };
                // level Field Functions 
                bool hasLevel() const { return this->level_ != nullptr;};
                void deleteLevel() { this->level_ = nullptr;};
                inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
                inline DolbyVision& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


                // profile Field Functions 
                bool hasProfile() const { return this->profile_ != nullptr;};
                void deleteProfile() { this->profile_ = nullptr;};
                inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
                inline DolbyVision& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


              protected:
                shared_ptr<string> level_ {};
                shared_ptr<string> profile_ {};
              };

              virtual bool empty() const override { return this->avgFPS_ == nullptr
        && this->bitrate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr
        && this->codecTimeBase_ == nullptr && this->colorPrimaries_ == nullptr && this->colorRange_ == nullptr && this->colorTransfer_ == nullptr && this->dar_ == nullptr
        && this->dolbyVision_ == nullptr && this->duration_ == nullptr && this->durationInaccurate_ == nullptr && this->fps_ == nullptr && this->hasBFrames_ == nullptr
        && this->height_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr && this->networkCost_ == nullptr
        && this->numFrames_ == nullptr && this->pixFmt_ == nullptr && this->profile_ == nullptr && this->rotate_ == nullptr && this->sar_ == nullptr
        && this->startTime_ == nullptr && this->timebase_ == nullptr && this->width_ == nullptr; };
              // avgFPS Field Functions 
              bool hasAvgFPS() const { return this->avgFPS_ != nullptr;};
              void deleteAvgFPS() { this->avgFPS_ = nullptr;};
              inline string getAvgFPS() const { DARABONBA_PTR_GET_DEFAULT(avgFPS_, "") };
              inline VideoStream& setAvgFPS(string avgFPS) { DARABONBA_PTR_SET_VALUE(avgFPS_, avgFPS) };


              // bitrate Field Functions 
              bool hasBitrate() const { return this->bitrate_ != nullptr;};
              void deleteBitrate() { this->bitrate_ = nullptr;};
              inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
              inline VideoStream& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


              // codecLongName Field Functions 
              bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
              void deleteCodecLongName() { this->codecLongName_ = nullptr;};
              inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
              inline VideoStream& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


              // codecName Field Functions 
              bool hasCodecName() const { return this->codecName_ != nullptr;};
              void deleteCodecName() { this->codecName_ = nullptr;};
              inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
              inline VideoStream& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


              // codecTag Field Functions 
              bool hasCodecTag() const { return this->codecTag_ != nullptr;};
              void deleteCodecTag() { this->codecTag_ = nullptr;};
              inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
              inline VideoStream& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


              // codecTagString Field Functions 
              bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
              void deleteCodecTagString() { this->codecTagString_ = nullptr;};
              inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
              inline VideoStream& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


              // codecTimeBase Field Functions 
              bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
              void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
              inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
              inline VideoStream& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


              // colorPrimaries Field Functions 
              bool hasColorPrimaries() const { return this->colorPrimaries_ != nullptr;};
              void deleteColorPrimaries() { this->colorPrimaries_ = nullptr;};
              inline string getColorPrimaries() const { DARABONBA_PTR_GET_DEFAULT(colorPrimaries_, "") };
              inline VideoStream& setColorPrimaries(string colorPrimaries) { DARABONBA_PTR_SET_VALUE(colorPrimaries_, colorPrimaries) };


              // colorRange Field Functions 
              bool hasColorRange() const { return this->colorRange_ != nullptr;};
              void deleteColorRange() { this->colorRange_ = nullptr;};
              inline string getColorRange() const { DARABONBA_PTR_GET_DEFAULT(colorRange_, "") };
              inline VideoStream& setColorRange(string colorRange) { DARABONBA_PTR_SET_VALUE(colorRange_, colorRange) };


              // colorTransfer Field Functions 
              bool hasColorTransfer() const { return this->colorTransfer_ != nullptr;};
              void deleteColorTransfer() { this->colorTransfer_ = nullptr;};
              inline string getColorTransfer() const { DARABONBA_PTR_GET_DEFAULT(colorTransfer_, "") };
              inline VideoStream& setColorTransfer(string colorTransfer) { DARABONBA_PTR_SET_VALUE(colorTransfer_, colorTransfer) };


              // dar Field Functions 
              bool hasDar() const { return this->dar_ != nullptr;};
              void deleteDar() { this->dar_ = nullptr;};
              inline string getDar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
              inline VideoStream& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


              // dolbyVision Field Functions 
              bool hasDolbyVision() const { return this->dolbyVision_ != nullptr;};
              void deleteDolbyVision() { this->dolbyVision_ = nullptr;};
              inline const VideoStream::DolbyVision & getDolbyVision() const { DARABONBA_PTR_GET_CONST(dolbyVision_, VideoStream::DolbyVision) };
              inline VideoStream::DolbyVision getDolbyVision() { DARABONBA_PTR_GET(dolbyVision_, VideoStream::DolbyVision) };
              inline VideoStream& setDolbyVision(const VideoStream::DolbyVision & dolbyVision) { DARABONBA_PTR_SET_VALUE(dolbyVision_, dolbyVision) };
              inline VideoStream& setDolbyVision(VideoStream::DolbyVision && dolbyVision) { DARABONBA_PTR_SET_RVALUE(dolbyVision_, dolbyVision) };


              // duration Field Functions 
              bool hasDuration() const { return this->duration_ != nullptr;};
              void deleteDuration() { this->duration_ = nullptr;};
              inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
              inline VideoStream& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


              // durationInaccurate Field Functions 
              bool hasDurationInaccurate() const { return this->durationInaccurate_ != nullptr;};
              void deleteDurationInaccurate() { this->durationInaccurate_ = nullptr;};
              inline string getDurationInaccurate() const { DARABONBA_PTR_GET_DEFAULT(durationInaccurate_, "") };
              inline VideoStream& setDurationInaccurate(string durationInaccurate) { DARABONBA_PTR_SET_VALUE(durationInaccurate_, durationInaccurate) };


              // fps Field Functions 
              bool hasFps() const { return this->fps_ != nullptr;};
              void deleteFps() { this->fps_ = nullptr;};
              inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
              inline VideoStream& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


              // hasBFrames Field Functions 
              bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
              void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
              inline string getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
              inline VideoStream& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


              // height Field Functions 
              bool hasHeight() const { return this->height_ != nullptr;};
              void deleteHeight() { this->height_ = nullptr;};
              inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
              inline VideoStream& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
              inline VideoStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // lang Field Functions 
              bool hasLang() const { return this->lang_ != nullptr;};
              void deleteLang() { this->lang_ = nullptr;};
              inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
              inline VideoStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


              // level Field Functions 
              bool hasLevel() const { return this->level_ != nullptr;};
              void deleteLevel() { this->level_ = nullptr;};
              inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
              inline VideoStream& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


              // networkCost Field Functions 
              bool hasNetworkCost() const { return this->networkCost_ != nullptr;};
              void deleteNetworkCost() { this->networkCost_ = nullptr;};
              inline const VideoStream::NetworkCost & getNetworkCost() const { DARABONBA_PTR_GET_CONST(networkCost_, VideoStream::NetworkCost) };
              inline VideoStream::NetworkCost getNetworkCost() { DARABONBA_PTR_GET(networkCost_, VideoStream::NetworkCost) };
              inline VideoStream& setNetworkCost(const VideoStream::NetworkCost & networkCost) { DARABONBA_PTR_SET_VALUE(networkCost_, networkCost) };
              inline VideoStream& setNetworkCost(VideoStream::NetworkCost && networkCost) { DARABONBA_PTR_SET_RVALUE(networkCost_, networkCost) };


              // numFrames Field Functions 
              bool hasNumFrames() const { return this->numFrames_ != nullptr;};
              void deleteNumFrames() { this->numFrames_ = nullptr;};
              inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
              inline VideoStream& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


              // pixFmt Field Functions 
              bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
              void deletePixFmt() { this->pixFmt_ = nullptr;};
              inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
              inline VideoStream& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


              // profile Field Functions 
              bool hasProfile() const { return this->profile_ != nullptr;};
              void deleteProfile() { this->profile_ = nullptr;};
              inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
              inline VideoStream& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


              // rotate Field Functions 
              bool hasRotate() const { return this->rotate_ != nullptr;};
              void deleteRotate() { this->rotate_ = nullptr;};
              inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
              inline VideoStream& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


              // sar Field Functions 
              bool hasSar() const { return this->sar_ != nullptr;};
              void deleteSar() { this->sar_ = nullptr;};
              inline string getSar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
              inline VideoStream& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
              inline VideoStream& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


              // timebase Field Functions 
              bool hasTimebase() const { return this->timebase_ != nullptr;};
              void deleteTimebase() { this->timebase_ = nullptr;};
              inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
              inline VideoStream& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


              // width Field Functions 
              bool hasWidth() const { return this->width_ != nullptr;};
              void deleteWidth() { this->width_ = nullptr;};
              inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
              inline VideoStream& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


            protected:
              shared_ptr<string> avgFPS_ {};
              shared_ptr<string> bitrate_ {};
              shared_ptr<string> codecLongName_ {};
              shared_ptr<string> codecName_ {};
              shared_ptr<string> codecTag_ {};
              shared_ptr<string> codecTagString_ {};
              shared_ptr<string> codecTimeBase_ {};
              shared_ptr<string> colorPrimaries_ {};
              shared_ptr<string> colorRange_ {};
              shared_ptr<string> colorTransfer_ {};
              shared_ptr<string> dar_ {};
              shared_ptr<VideoStream::DolbyVision> dolbyVision_ {};
              shared_ptr<string> duration_ {};
              shared_ptr<string> durationInaccurate_ {};
              shared_ptr<string> fps_ {};
              shared_ptr<string> hasBFrames_ {};
              shared_ptr<string> height_ {};
              shared_ptr<string> index_ {};
              shared_ptr<string> lang_ {};
              shared_ptr<string> level_ {};
              shared_ptr<VideoStream::NetworkCost> networkCost_ {};
              shared_ptr<string> numFrames_ {};
              shared_ptr<string> pixFmt_ {};
              shared_ptr<string> profile_ {};
              shared_ptr<string> rotate_ {};
              shared_ptr<string> sar_ {};
              shared_ptr<string> startTime_ {};
              shared_ptr<string> timebase_ {};
              shared_ptr<string> width_ {};
            };

            virtual bool empty() const override { return this->videoStream_ == nullptr; };
            // videoStream Field Functions 
            bool hasVideoStream() const { return this->videoStream_ != nullptr;};
            void deleteVideoStream() { this->videoStream_ = nullptr;};
            inline const vector<VideoStreamList::VideoStream> & getVideoStream() const { DARABONBA_PTR_GET_CONST(videoStream_, vector<VideoStreamList::VideoStream>) };
            inline vector<VideoStreamList::VideoStream> getVideoStream() { DARABONBA_PTR_GET(videoStream_, vector<VideoStreamList::VideoStream>) };
            inline VideoStreamList& setVideoStream(const vector<VideoStreamList::VideoStream> & videoStream) { DARABONBA_PTR_SET_VALUE(videoStream_, videoStream) };
            inline VideoStreamList& setVideoStream(vector<VideoStreamList::VideoStream> && videoStream) { DARABONBA_PTR_SET_RVALUE(videoStream_, videoStream) };


          protected:
            shared_ptr<vector<VideoStreamList::VideoStream>> videoStream_ {};
          };

          class SubtitleStreamList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SubtitleStreamList& obj) { 
              DARABONBA_PTR_TO_JSON(SubtitleStream, subtitleStream_);
            };
            friend void from_json(const Darabonba::Json& j, SubtitleStreamList& obj) { 
              DARABONBA_PTR_FROM_JSON(SubtitleStream, subtitleStream_);
            };
            SubtitleStreamList() = default ;
            SubtitleStreamList(const SubtitleStreamList &) = default ;
            SubtitleStreamList(SubtitleStreamList &&) = default ;
            SubtitleStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SubtitleStreamList() = default ;
            SubtitleStreamList& operator=(const SubtitleStreamList &) = default ;
            SubtitleStreamList& operator=(SubtitleStreamList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SubtitleStream : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SubtitleStream& obj) { 
                DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
                DARABONBA_PTR_TO_JSON(CodecName, codecName_);
                DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
                DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
                DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
                DARABONBA_PTR_TO_JSON(Duration, duration_);
                DARABONBA_PTR_TO_JSON(Index, index_);
                DARABONBA_PTR_TO_JSON(Lang, lang_);
                DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                DARABONBA_PTR_TO_JSON(Timebase, timebase_);
              };
              friend void from_json(const Darabonba::Json& j, SubtitleStream& obj) { 
                DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
                DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
                DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
                DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
                DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
                DARABONBA_PTR_FROM_JSON(Duration, duration_);
                DARABONBA_PTR_FROM_JSON(Index, index_);
                DARABONBA_PTR_FROM_JSON(Lang, lang_);
                DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
              };
              SubtitleStream() = default ;
              SubtitleStream(const SubtitleStream &) = default ;
              SubtitleStream(SubtitleStream &&) = default ;
              SubtitleStream(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SubtitleStream() = default ;
              SubtitleStream& operator=(const SubtitleStream &) = default ;
              SubtitleStream& operator=(SubtitleStream &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->codecLongName_ == nullptr
        && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr
        && this->index_ == nullptr && this->lang_ == nullptr && this->startTime_ == nullptr && this->timebase_ == nullptr; };
              // codecLongName Field Functions 
              bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
              void deleteCodecLongName() { this->codecLongName_ = nullptr;};
              inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
              inline SubtitleStream& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


              // codecName Field Functions 
              bool hasCodecName() const { return this->codecName_ != nullptr;};
              void deleteCodecName() { this->codecName_ = nullptr;};
              inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
              inline SubtitleStream& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


              // codecTag Field Functions 
              bool hasCodecTag() const { return this->codecTag_ != nullptr;};
              void deleteCodecTag() { this->codecTag_ = nullptr;};
              inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
              inline SubtitleStream& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


              // codecTagString Field Functions 
              bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
              void deleteCodecTagString() { this->codecTagString_ = nullptr;};
              inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
              inline SubtitleStream& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


              // codecTimeBase Field Functions 
              bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
              void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
              inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
              inline SubtitleStream& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


              // duration Field Functions 
              bool hasDuration() const { return this->duration_ != nullptr;};
              void deleteDuration() { this->duration_ = nullptr;};
              inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
              inline SubtitleStream& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
              inline SubtitleStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // lang Field Functions 
              bool hasLang() const { return this->lang_ != nullptr;};
              void deleteLang() { this->lang_ = nullptr;};
              inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
              inline SubtitleStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
              inline SubtitleStream& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


              // timebase Field Functions 
              bool hasTimebase() const { return this->timebase_ != nullptr;};
              void deleteTimebase() { this->timebase_ = nullptr;};
              inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
              inline SubtitleStream& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


            protected:
              shared_ptr<string> codecLongName_ {};
              shared_ptr<string> codecName_ {};
              shared_ptr<string> codecTag_ {};
              shared_ptr<string> codecTagString_ {};
              shared_ptr<string> codecTimeBase_ {};
              shared_ptr<string> duration_ {};
              shared_ptr<string> index_ {};
              shared_ptr<string> lang_ {};
              shared_ptr<string> startTime_ {};
              shared_ptr<string> timebase_ {};
            };

            virtual bool empty() const override { return this->subtitleStream_ == nullptr; };
            // subtitleStream Field Functions 
            bool hasSubtitleStream() const { return this->subtitleStream_ != nullptr;};
            void deleteSubtitleStream() { this->subtitleStream_ = nullptr;};
            inline const vector<SubtitleStreamList::SubtitleStream> & getSubtitleStream() const { DARABONBA_PTR_GET_CONST(subtitleStream_, vector<SubtitleStreamList::SubtitleStream>) };
            inline vector<SubtitleStreamList::SubtitleStream> getSubtitleStream() { DARABONBA_PTR_GET(subtitleStream_, vector<SubtitleStreamList::SubtitleStream>) };
            inline SubtitleStreamList& setSubtitleStream(const vector<SubtitleStreamList::SubtitleStream> & subtitleStream) { DARABONBA_PTR_SET_VALUE(subtitleStream_, subtitleStream) };
            inline SubtitleStreamList& setSubtitleStream(vector<SubtitleStreamList::SubtitleStream> && subtitleStream) { DARABONBA_PTR_SET_RVALUE(subtitleStream_, subtitleStream) };


          protected:
            shared_ptr<vector<SubtitleStreamList::SubtitleStream>> subtitleStream_ {};
          };

          class AudioStreamList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioStreamList& obj) { 
              DARABONBA_PTR_TO_JSON(AudioStream, audioStream_);
            };
            friend void from_json(const Darabonba::Json& j, AudioStreamList& obj) { 
              DARABONBA_PTR_FROM_JSON(AudioStream, audioStream_);
            };
            AudioStreamList() = default ;
            AudioStreamList(const AudioStreamList &) = default ;
            AudioStreamList(AudioStreamList &&) = default ;
            AudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioStreamList() = default ;
            AudioStreamList& operator=(const AudioStreamList &) = default ;
            AudioStreamList& operator=(AudioStreamList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AudioStream : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AudioStream& obj) { 
                DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_TO_JSON(ChannelLayout, channelLayout_);
                DARABONBA_PTR_TO_JSON(Channels, channels_);
                DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
                DARABONBA_PTR_TO_JSON(CodecName, codecName_);
                DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
                DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
                DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
                DARABONBA_PTR_TO_JSON(Duration, duration_);
                DARABONBA_PTR_TO_JSON(DurationInaccurate, durationInaccurate_);
                DARABONBA_PTR_TO_JSON(Index, index_);
                DARABONBA_PTR_TO_JSON(Lang, lang_);
                DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
                DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
                DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
                DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                DARABONBA_PTR_TO_JSON(Timebase, timebase_);
              };
              friend void from_json(const Darabonba::Json& j, AudioStream& obj) { 
                DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_FROM_JSON(ChannelLayout, channelLayout_);
                DARABONBA_PTR_FROM_JSON(Channels, channels_);
                DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
                DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
                DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
                DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
                DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
                DARABONBA_PTR_FROM_JSON(Duration, duration_);
                DARABONBA_PTR_FROM_JSON(DurationInaccurate, durationInaccurate_);
                DARABONBA_PTR_FROM_JSON(Index, index_);
                DARABONBA_PTR_FROM_JSON(Lang, lang_);
                DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
                DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
                DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
                DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
              };
              AudioStream() = default ;
              AudioStream(const AudioStream &) = default ;
              AudioStream(AudioStream &&) = default ;
              AudioStream(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AudioStream() = default ;
              AudioStream& operator=(const AudioStream &) = default ;
              AudioStream& operator=(AudioStream &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channelLayout_ == nullptr && this->channels_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->durationInaccurate_ == nullptr && this->index_ == nullptr
        && this->lang_ == nullptr && this->numFrames_ == nullptr && this->sampleFmt_ == nullptr && this->samplerate_ == nullptr && this->startTime_ == nullptr
        && this->timebase_ == nullptr; };
              // bitrate Field Functions 
              bool hasBitrate() const { return this->bitrate_ != nullptr;};
              void deleteBitrate() { this->bitrate_ = nullptr;};
              inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
              inline AudioStream& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


              // channelLayout Field Functions 
              bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
              void deleteChannelLayout() { this->channelLayout_ = nullptr;};
              inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
              inline AudioStream& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


              // channels Field Functions 
              bool hasChannels() const { return this->channels_ != nullptr;};
              void deleteChannels() { this->channels_ = nullptr;};
              inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
              inline AudioStream& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


              // codecLongName Field Functions 
              bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
              void deleteCodecLongName() { this->codecLongName_ = nullptr;};
              inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
              inline AudioStream& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


              // codecName Field Functions 
              bool hasCodecName() const { return this->codecName_ != nullptr;};
              void deleteCodecName() { this->codecName_ = nullptr;};
              inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
              inline AudioStream& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


              // codecTag Field Functions 
              bool hasCodecTag() const { return this->codecTag_ != nullptr;};
              void deleteCodecTag() { this->codecTag_ = nullptr;};
              inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
              inline AudioStream& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


              // codecTagString Field Functions 
              bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
              void deleteCodecTagString() { this->codecTagString_ = nullptr;};
              inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
              inline AudioStream& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


              // codecTimeBase Field Functions 
              bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
              void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
              inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
              inline AudioStream& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


              // duration Field Functions 
              bool hasDuration() const { return this->duration_ != nullptr;};
              void deleteDuration() { this->duration_ = nullptr;};
              inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
              inline AudioStream& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


              // durationInaccurate Field Functions 
              bool hasDurationInaccurate() const { return this->durationInaccurate_ != nullptr;};
              void deleteDurationInaccurate() { this->durationInaccurate_ = nullptr;};
              inline string getDurationInaccurate() const { DARABONBA_PTR_GET_DEFAULT(durationInaccurate_, "") };
              inline AudioStream& setDurationInaccurate(string durationInaccurate) { DARABONBA_PTR_SET_VALUE(durationInaccurate_, durationInaccurate) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
              inline AudioStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // lang Field Functions 
              bool hasLang() const { return this->lang_ != nullptr;};
              void deleteLang() { this->lang_ = nullptr;};
              inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
              inline AudioStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


              // numFrames Field Functions 
              bool hasNumFrames() const { return this->numFrames_ != nullptr;};
              void deleteNumFrames() { this->numFrames_ = nullptr;};
              inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
              inline AudioStream& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


              // sampleFmt Field Functions 
              bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
              void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
              inline string getSampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
              inline AudioStream& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


              // samplerate Field Functions 
              bool hasSamplerate() const { return this->samplerate_ != nullptr;};
              void deleteSamplerate() { this->samplerate_ = nullptr;};
              inline string getSamplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
              inline AudioStream& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
              inline AudioStream& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


              // timebase Field Functions 
              bool hasTimebase() const { return this->timebase_ != nullptr;};
              void deleteTimebase() { this->timebase_ = nullptr;};
              inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
              inline AudioStream& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


            protected:
              shared_ptr<string> bitrate_ {};
              shared_ptr<string> channelLayout_ {};
              shared_ptr<string> channels_ {};
              shared_ptr<string> codecLongName_ {};
              shared_ptr<string> codecName_ {};
              shared_ptr<string> codecTag_ {};
              shared_ptr<string> codecTagString_ {};
              shared_ptr<string> codecTimeBase_ {};
              shared_ptr<string> duration_ {};
              shared_ptr<string> durationInaccurate_ {};
              shared_ptr<string> index_ {};
              shared_ptr<string> lang_ {};
              shared_ptr<string> numFrames_ {};
              shared_ptr<string> sampleFmt_ {};
              shared_ptr<string> samplerate_ {};
              shared_ptr<string> startTime_ {};
              shared_ptr<string> timebase_ {};
            };

            virtual bool empty() const override { return this->audioStream_ == nullptr; };
            // audioStream Field Functions 
            bool hasAudioStream() const { return this->audioStream_ != nullptr;};
            void deleteAudioStream() { this->audioStream_ = nullptr;};
            inline const vector<AudioStreamList::AudioStream> & getAudioStream() const { DARABONBA_PTR_GET_CONST(audioStream_, vector<AudioStreamList::AudioStream>) };
            inline vector<AudioStreamList::AudioStream> getAudioStream() { DARABONBA_PTR_GET(audioStream_, vector<AudioStreamList::AudioStream>) };
            inline AudioStreamList& setAudioStream(const vector<AudioStreamList::AudioStream> & audioStream) { DARABONBA_PTR_SET_VALUE(audioStream_, audioStream) };
            inline AudioStreamList& setAudioStream(vector<AudioStreamList::AudioStream> && audioStream) { DARABONBA_PTR_SET_RVALUE(audioStream_, audioStream) };


          protected:
            shared_ptr<vector<AudioStreamList::AudioStream>> audioStream_ {};
          };

          virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && this->subtitleStreamList_ == nullptr && this->videoStreamList_ == nullptr; };
          // audioStreamList Field Functions 
          bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
          void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
          inline const Streams::AudioStreamList & getAudioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Streams::AudioStreamList) };
          inline Streams::AudioStreamList getAudioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Streams::AudioStreamList) };
          inline Streams& setAudioStreamList(const Streams::AudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
          inline Streams& setAudioStreamList(Streams::AudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


          // subtitleStreamList Field Functions 
          bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
          void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
          inline const Streams::SubtitleStreamList & getSubtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Streams::SubtitleStreamList) };
          inline Streams::SubtitleStreamList getSubtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Streams::SubtitleStreamList) };
          inline Streams& setSubtitleStreamList(const Streams::SubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
          inline Streams& setSubtitleStreamList(Streams::SubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


          // videoStreamList Field Functions 
          bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
          void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
          inline const Streams::VideoStreamList & getVideoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Streams::VideoStreamList) };
          inline Streams::VideoStreamList getVideoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Streams::VideoStreamList) };
          inline Streams& setVideoStreamList(const Streams::VideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
          inline Streams& setVideoStreamList(Streams::VideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


        protected:
          shared_ptr<Streams::AudioStreamList> audioStreamList_ {};
          shared_ptr<Streams::SubtitleStreamList> subtitleStreamList_ {};
          shared_ptr<Streams::VideoStreamList> videoStreamList_ {};
        };

        class Format : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Format& obj) { 
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(FormatLongName, formatLongName_);
            DARABONBA_PTR_TO_JSON(FormatName, formatName_);
            DARABONBA_PTR_TO_JSON(NumPrograms, numPrograms_);
            DARABONBA_PTR_TO_JSON(NumStreams, numStreams_);
            DARABONBA_PTR_TO_JSON(Size, size_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_ANY_TO_JSON(Tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, Format& obj) { 
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(FormatLongName, formatLongName_);
            DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
            DARABONBA_PTR_FROM_JSON(NumPrograms, numPrograms_);
            DARABONBA_PTR_FROM_JSON(NumStreams, numStreams_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_ANY_FROM_JSON(Tags, tags_);
          };
          Format() = default ;
          Format(const Format &) = default ;
          Format(Format &&) = default ;
          Format(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Format() = default ;
          Format& operator=(const Format &) = default ;
          Format& operator=(Format &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->duration_ == nullptr && this->formatLongName_ == nullptr && this->formatName_ == nullptr && this->numPrograms_ == nullptr && this->numStreams_ == nullptr
        && this->size_ == nullptr && this->startTime_ == nullptr && this->tags_ == nullptr; };
          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline Format& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline Format& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // formatLongName Field Functions 
          bool hasFormatLongName() const { return this->formatLongName_ != nullptr;};
          void deleteFormatLongName() { this->formatLongName_ = nullptr;};
          inline string getFormatLongName() const { DARABONBA_PTR_GET_DEFAULT(formatLongName_, "") };
          inline Format& setFormatLongName(string formatLongName) { DARABONBA_PTR_SET_VALUE(formatLongName_, formatLongName) };


          // formatName Field Functions 
          bool hasFormatName() const { return this->formatName_ != nullptr;};
          void deleteFormatName() { this->formatName_ = nullptr;};
          inline string getFormatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
          inline Format& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


          // numPrograms Field Functions 
          bool hasNumPrograms() const { return this->numPrograms_ != nullptr;};
          void deleteNumPrograms() { this->numPrograms_ = nullptr;};
          inline string getNumPrograms() const { DARABONBA_PTR_GET_DEFAULT(numPrograms_, "") };
          inline Format& setNumPrograms(string numPrograms) { DARABONBA_PTR_SET_VALUE(numPrograms_, numPrograms) };


          // numStreams Field Functions 
          bool hasNumStreams() const { return this->numStreams_ != nullptr;};
          void deleteNumStreams() { this->numStreams_ = nullptr;};
          inline string getNumStreams() const { DARABONBA_PTR_GET_DEFAULT(numStreams_, "") };
          inline Format& setNumStreams(string numStreams) { DARABONBA_PTR_SET_VALUE(numStreams_, numStreams) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
          inline Format& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline Format& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline           const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
          Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
          inline Format& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
          inline Format& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


        protected:
          // The total bitrate. Unit: Kbit/s.
          shared_ptr<string> bitrate_ {};
          // The duration of the input media file. Unit: seconds.
          shared_ptr<string> duration_ {};
          // The full name of the container format.
          shared_ptr<string> formatLongName_ {};
          // The short name of the container format. For more information about the parameters, see [Parameter details](https://help.aliyun.com/document_detail/29253.html).
          shared_ptr<string> formatName_ {};
          // The total number of program streams.
          shared_ptr<string> numPrograms_ {};
          // The total number of media streams.
          shared_ptr<string> numStreams_ {};
          // The size of the file. Unit: bytes.
          shared_ptr<string> size_ {};
          // The start time.
          shared_ptr<string> startTime_ {};
          Darabonba::Json tags_ {};
        };

        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->duration_ == nullptr && this->fileFormat_ == nullptr && this->fileSize_ == nullptr && this->format_ == nullptr && this->fps_ == nullptr
        && this->height_ == nullptr && this->MD5_ == nullptr && this->streams_ == nullptr && this->width_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline Properties& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline Properties& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fileFormat Field Functions 
        bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
        void deleteFileFormat() { this->fileFormat_ = nullptr;};
        inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
        inline Properties& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
        inline Properties& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline const Properties::Format & getFormat() const { DARABONBA_PTR_GET_CONST(format_, Properties::Format) };
        inline Properties::Format getFormat() { DARABONBA_PTR_GET(format_, Properties::Format) };
        inline Properties& setFormat(const Properties::Format & format) { DARABONBA_PTR_SET_VALUE(format_, format) };
        inline Properties& setFormat(Properties::Format && format) { DARABONBA_PTR_SET_RVALUE(format_, format) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline Properties& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline Properties& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // MD5 Field Functions 
        bool hasMD5() const { return this->MD5_ != nullptr;};
        void deleteMD5() { this->MD5_ = nullptr;};
        inline string getMD5() const { DARABONBA_PTR_GET_DEFAULT(MD5_, "") };
        inline Properties& setMD5(string MD5) { DARABONBA_PTR_SET_VALUE(MD5_, MD5) };


        // streams Field Functions 
        bool hasStreams() const { return this->streams_ != nullptr;};
        void deleteStreams() { this->streams_ = nullptr;};
        inline const Properties::Streams & getStreams() const { DARABONBA_PTR_GET_CONST(streams_, Properties::Streams) };
        inline Properties::Streams getStreams() { DARABONBA_PTR_GET(streams_, Properties::Streams) };
        inline Properties& setStreams(const Properties::Streams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
        inline Properties& setStreams(Properties::Streams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline Properties& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The bitrate. Unit: Kbit/s.
        shared_ptr<string> bitrate_ {};
        // The duration of the input media file. Unit: seconds.
        shared_ptr<string> duration_ {};
        // The format of the input media file.
        shared_ptr<string> fileFormat_ {};
        // The size of the file. Unit: bytes.
        shared_ptr<string> fileSize_ {};
        // The format information.
        shared_ptr<Properties::Format> format_ {};
        // The frame rate.
        shared_ptr<string> fps_ {};
        // The height of the video. Unit: pixel.
        shared_ptr<string> height_ {};
        shared_ptr<string> MD5_ {};
        // The media streams that are contained in the input media file.
        shared_ptr<Properties::Streams> streams_ {};
        // The width of the video. Unit: pixel.
        shared_ptr<string> width_ {};
      };

      class MNSMessageResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MNSMessageResult& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        };
        friend void from_json(const Darabonba::Json& j, MNSMessageResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        };
        MNSMessageResult() = default ;
        MNSMessageResult(const MNSMessageResult &) = default ;
        MNSMessageResult(MNSMessageResult &&) = default ;
        MNSMessageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MNSMessageResult() = default ;
        MNSMessageResult& operator=(const MNSMessageResult &) = default ;
        MNSMessageResult& operator=(MNSMessageResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->messageId_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline MNSMessageResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline MNSMessageResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline MNSMessageResult& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      protected:
        // The error code that is returned if the job fails. This parameter is not returned if the job is successful.
        shared_ptr<string> errorCode_ {};
        // The error message that is returned if the job fails. This parameter is not returned if the job is successful.
        shared_ptr<string> errorMessage_ {};
        // The ID of the message that is returned if the job is successful. This parameter is not returned if the job fails.
        shared_ptr<string> messageId_ {};
      };

      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(Object, object_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(Object, object_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline Input& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline Input& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // object Field Functions 
        bool hasObject() const { return this->object_ != nullptr;};
        void deleteObject() { this->object_ = nullptr;};
        inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
        inline Input& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      protected:
        // The name of the OSS bucket in which the input media file is stored.
        shared_ptr<string> bucket_ {};
        // The region in which the OSS bucket that stores the input media file resides.
        shared_ptr<string> location_ {};
        // The name of the OSS object that is used as the input media file.
        shared_ptr<string> object_ {};
      };

      virtual bool empty() const override { return this->async_ == nullptr
        && this->code_ == nullptr && this->creationTime_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr && this->MNSMessageResult_ == nullptr
        && this->message_ == nullptr && this->pipelineId_ == nullptr && this->properties_ == nullptr && this->state_ == nullptr && this->userData_ == nullptr; };
      // async Field Functions 
      bool hasAsync() const { return this->async_ != nullptr;};
      void deleteAsync() { this->async_ = nullptr;};
      inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
      inline MediaInfoJob& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline MediaInfoJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MediaInfoJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const MediaInfoJob::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, MediaInfoJob::Input) };
      inline MediaInfoJob::Input getInput() { DARABONBA_PTR_GET(input_, MediaInfoJob::Input) };
      inline MediaInfoJob& setInput(const MediaInfoJob::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline MediaInfoJob& setInput(MediaInfoJob::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline MediaInfoJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // MNSMessageResult Field Functions 
      bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
      void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
      inline const MediaInfoJob::MNSMessageResult & getMNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, MediaInfoJob::MNSMessageResult) };
      inline MediaInfoJob::MNSMessageResult getMNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, MediaInfoJob::MNSMessageResult) };
      inline MediaInfoJob& setMNSMessageResult(const MediaInfoJob::MNSMessageResult & mNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, mNSMessageResult) };
      inline MediaInfoJob& setMNSMessageResult(MediaInfoJob::MNSMessageResult && mNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, mNSMessageResult) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline MediaInfoJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline MediaInfoJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline const MediaInfoJob::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, MediaInfoJob::Properties) };
      inline MediaInfoJob::Properties getProperties() { DARABONBA_PTR_GET(properties_, MediaInfoJob::Properties) };
      inline MediaInfoJob& setProperties(const MediaInfoJob::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
      inline MediaInfoJob& setProperties(MediaInfoJob::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline MediaInfoJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline MediaInfoJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // Indicates whether the job is run in asynchronous mode.
      shared_ptr<bool> async_ {};
      // The error code returned if the job fails.
      shared_ptr<string> code_ {};
      // The time when the job was created.
      shared_ptr<string> creationTime_ {};
      // The information about the input media file.
      shared_ptr<MediaInfoJob::Input> input_ {};
      // The ID of the job.
      shared_ptr<string> jobId_ {};
      // The message sent by Message Service (MNS) to notify users of the job result.
      shared_ptr<MediaInfoJob::MNSMessageResult> MNSMessageResult_ {};
      // The error message returned if the job fails.
      shared_ptr<string> message_ {};
      // The ID of the MPS queue to which the analysis job is submitted.
      shared_ptr<string> pipelineId_ {};
      // The properties of the input media file.
      shared_ptr<MediaInfoJob::Properties> properties_ {};
      // The status of the job. Valid values:
      // 
      // *   **Success**: The job is successful.
      // *   **Fail**: The job fails.
      // *   **Analyzing**: The job is being run.
      shared_ptr<string> state_ {};
      // The custom data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->mediaInfoJob_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaInfoJob Field Functions 
    bool hasMediaInfoJob() const { return this->mediaInfoJob_ != nullptr;};
    void deleteMediaInfoJob() { this->mediaInfoJob_ = nullptr;};
    inline const SubmitMediaInfoJobResponseBody::MediaInfoJob & getMediaInfoJob() const { DARABONBA_PTR_GET_CONST(mediaInfoJob_, SubmitMediaInfoJobResponseBody::MediaInfoJob) };
    inline SubmitMediaInfoJobResponseBody::MediaInfoJob getMediaInfoJob() { DARABONBA_PTR_GET(mediaInfoJob_, SubmitMediaInfoJobResponseBody::MediaInfoJob) };
    inline SubmitMediaInfoJobResponseBody& setMediaInfoJob(const SubmitMediaInfoJobResponseBody::MediaInfoJob & mediaInfoJob) { DARABONBA_PTR_SET_VALUE(mediaInfoJob_, mediaInfoJob) };
    inline SubmitMediaInfoJobResponseBody& setMediaInfoJob(SubmitMediaInfoJobResponseBody::MediaInfoJob && mediaInfoJob) { DARABONBA_PTR_SET_RVALUE(mediaInfoJob_, mediaInfoJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitMediaInfoJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media information analysis job.
    shared_ptr<SubmitMediaInfoJobResponseBody::MediaInfoJob> mediaInfoJob_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
