// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaLiveChannelResponseBody() = default ;
    GetMediaLiveChannelResponseBody(const GetMediaLiveChannelResponseBody &) = default ;
    GetMediaLiveChannelResponseBody(GetMediaLiveChannelResponseBody &&) = default ;
    GetMediaLiveChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBody() = default ;
    GetMediaLiveChannelResponseBody& operator=(const GetMediaLiveChannelResponseBody &) = default ;
    GetMediaLiveChannelResponseBody& operator=(GetMediaLiveChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Channel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Channel& obj) { 
        DARABONBA_PTR_TO_JSON(AudioSettings, audioSettings_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InputAttachments, inputAttachments_);
        DARABONBA_PTR_TO_JSON(LastStartTime, lastStartTime_);
        DARABONBA_PTR_TO_JSON(LastStopTime, lastStopTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OutputGroups, outputGroups_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(VideoSettings, videoSettings_);
      };
      friend void from_json(const Darabonba::Json& j, Channel& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioSettings, audioSettings_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InputAttachments, inputAttachments_);
        DARABONBA_PTR_FROM_JSON(LastStartTime, lastStartTime_);
        DARABONBA_PTR_FROM_JSON(LastStopTime, lastStopTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroups_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(VideoSettings, videoSettings_);
      };
      Channel() = default ;
      Channel(const Channel &) = default ;
      Channel(Channel &&) = default ;
      Channel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Channel() = default ;
      Channel& operator=(const Channel &) = default ;
      Channel& operator=(Channel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoSettings& obj) { 
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
          DARABONBA_PTR_TO_JSON(VideoCodecSetting, videoCodecSetting_);
          DARABONBA_PTR_TO_JSON(VideoCodecType, videoCodecType_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, VideoSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
          DARABONBA_PTR_FROM_JSON(VideoCodecSetting, videoCodecSetting_);
          DARABONBA_PTR_FROM_JSON(VideoCodecType, videoCodecType_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        VideoSettings() = default ;
        VideoSettings(const VideoSettings &) = default ;
        VideoSettings(VideoSettings &&) = default ;
        VideoSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoSettings() = default ;
        VideoSettings& operator=(const VideoSettings &) = default ;
        VideoSettings& operator=(VideoSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoCodecSetting : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoCodecSetting& obj) { 
            DARABONBA_PTR_TO_JSON(CodecDetail, codecDetail_);
            DARABONBA_PTR_TO_JSON(Framerate, framerate_);
            DARABONBA_PTR_TO_JSON(Gop, gop_);
            DARABONBA_PTR_TO_JSON(Rate, rate_);
          };
          friend void from_json(const Darabonba::Json& j, VideoCodecSetting& obj) { 
            DARABONBA_PTR_FROM_JSON(CodecDetail, codecDetail_);
            DARABONBA_PTR_FROM_JSON(Framerate, framerate_);
            DARABONBA_PTR_FROM_JSON(Gop, gop_);
            DARABONBA_PTR_FROM_JSON(Rate, rate_);
          };
          VideoCodecSetting() = default ;
          VideoCodecSetting(const VideoCodecSetting &) = default ;
          VideoCodecSetting(VideoCodecSetting &&) = default ;
          VideoCodecSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoCodecSetting() = default ;
          VideoCodecSetting& operator=(const VideoCodecSetting &) = default ;
          VideoCodecSetting& operator=(VideoCodecSetting &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Rate : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Rate& obj) { 
              DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_TO_JSON(BufferSize, bufferSize_);
              DARABONBA_PTR_TO_JSON(MaxBitrate, maxBitrate_);
              DARABONBA_PTR_TO_JSON(RateControlMode, rateControlMode_);
            };
            friend void from_json(const Darabonba::Json& j, Rate& obj) { 
              DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_FROM_JSON(BufferSize, bufferSize_);
              DARABONBA_PTR_FROM_JSON(MaxBitrate, maxBitrate_);
              DARABONBA_PTR_FROM_JSON(RateControlMode, rateControlMode_);
            };
            Rate() = default ;
            Rate(const Rate &) = default ;
            Rate(Rate &&) = default ;
            Rate(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Rate() = default ;
            Rate& operator=(const Rate &) = default ;
            Rate& operator=(Rate &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->bufferSize_ == nullptr && this->maxBitrate_ == nullptr && this->rateControlMode_ == nullptr; };
            // bitrate Field Functions 
            bool hasBitrate() const { return this->bitrate_ != nullptr;};
            void deleteBitrate() { this->bitrate_ = nullptr;};
            inline int32_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
            inline Rate& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


            // bufferSize Field Functions 
            bool hasBufferSize() const { return this->bufferSize_ != nullptr;};
            void deleteBufferSize() { this->bufferSize_ = nullptr;};
            inline int32_t getBufferSize() const { DARABONBA_PTR_GET_DEFAULT(bufferSize_, 0) };
            inline Rate& setBufferSize(int32_t bufferSize) { DARABONBA_PTR_SET_VALUE(bufferSize_, bufferSize) };


            // maxBitrate Field Functions 
            bool hasMaxBitrate() const { return this->maxBitrate_ != nullptr;};
            void deleteMaxBitrate() { this->maxBitrate_ = nullptr;};
            inline int32_t getMaxBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxBitrate_, 0) };
            inline Rate& setMaxBitrate(int32_t maxBitrate) { DARABONBA_PTR_SET_VALUE(maxBitrate_, maxBitrate) };


            // rateControlMode Field Functions 
            bool hasRateControlMode() const { return this->rateControlMode_ != nullptr;};
            void deleteRateControlMode() { this->rateControlMode_ = nullptr;};
            inline string getRateControlMode() const { DARABONBA_PTR_GET_DEFAULT(rateControlMode_, "") };
            inline Rate& setRateControlMode(string rateControlMode) { DARABONBA_PTR_SET_VALUE(rateControlMode_, rateControlMode) };


          protected:
            // The video bitrate. Unit: bit/s.
            shared_ptr<int32_t> bitrate_ {};
            // The video buffer size. Unit: bit/s.
            shared_ptr<int32_t> bufferSize_ {};
            // The maximum bitrate. Unit: bit/s.
            shared_ptr<int32_t> maxBitrate_ {};
            // The bitrate control mode.
            shared_ptr<string> rateControlMode_ {};
          };

          class Gop : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Gop& obj) { 
              DARABONBA_PTR_TO_JSON(BframesNum, bframesNum_);
              DARABONBA_PTR_TO_JSON(GopSize, gopSize_);
              DARABONBA_PTR_TO_JSON(GopSizeUnits, gopSizeUnits_);
            };
            friend void from_json(const Darabonba::Json& j, Gop& obj) { 
              DARABONBA_PTR_FROM_JSON(BframesNum, bframesNum_);
              DARABONBA_PTR_FROM_JSON(GopSize, gopSize_);
              DARABONBA_PTR_FROM_JSON(GopSizeUnits, gopSizeUnits_);
            };
            Gop() = default ;
            Gop(const Gop &) = default ;
            Gop(Gop &&) = default ;
            Gop(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Gop() = default ;
            Gop& operator=(const Gop &) = default ;
            Gop& operator=(Gop &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bframesNum_ == nullptr
        && this->gopSize_ == nullptr && this->gopSizeUnits_ == nullptr; };
            // bframesNum Field Functions 
            bool hasBframesNum() const { return this->bframesNum_ != nullptr;};
            void deleteBframesNum() { this->bframesNum_ = nullptr;};
            inline int32_t getBframesNum() const { DARABONBA_PTR_GET_DEFAULT(bframesNum_, 0) };
            inline Gop& setBframesNum(int32_t bframesNum) { DARABONBA_PTR_SET_VALUE(bframesNum_, bframesNum) };


            // gopSize Field Functions 
            bool hasGopSize() const { return this->gopSize_ != nullptr;};
            void deleteGopSize() { this->gopSize_ = nullptr;};
            inline int32_t getGopSize() const { DARABONBA_PTR_GET_DEFAULT(gopSize_, 0) };
            inline Gop& setGopSize(int32_t gopSize) { DARABONBA_PTR_SET_VALUE(gopSize_, gopSize) };


            // gopSizeUnits Field Functions 
            bool hasGopSizeUnits() const { return this->gopSizeUnits_ != nullptr;};
            void deleteGopSizeUnits() { this->gopSizeUnits_ = nullptr;};
            inline string getGopSizeUnits() const { DARABONBA_PTR_GET_DEFAULT(gopSizeUnits_, "") };
            inline Gop& setGopSizeUnits(string gopSizeUnits) { DARABONBA_PTR_SET_VALUE(gopSizeUnits_, gopSizeUnits) };


          protected:
            // The number of B frames.
            shared_ptr<int32_t> bframesNum_ {};
            // The GOP size.
            shared_ptr<int32_t> gopSize_ {};
            // The GOP size unit.
            shared_ptr<string> gopSizeUnits_ {};
          };

          class Framerate : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Framerate& obj) { 
              DARABONBA_PTR_TO_JSON(FramerateControl, framerateControl_);
              DARABONBA_PTR_TO_JSON(FramerateDenominator, framerateDenominator_);
              DARABONBA_PTR_TO_JSON(FramerateNumerator, framerateNumerator_);
            };
            friend void from_json(const Darabonba::Json& j, Framerate& obj) { 
              DARABONBA_PTR_FROM_JSON(FramerateControl, framerateControl_);
              DARABONBA_PTR_FROM_JSON(FramerateDenominator, framerateDenominator_);
              DARABONBA_PTR_FROM_JSON(FramerateNumerator, framerateNumerator_);
            };
            Framerate() = default ;
            Framerate(const Framerate &) = default ;
            Framerate(Framerate &&) = default ;
            Framerate(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Framerate() = default ;
            Framerate& operator=(const Framerate &) = default ;
            Framerate& operator=(Framerate &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->framerateControl_ == nullptr
        && this->framerateDenominator_ == nullptr && this->framerateNumerator_ == nullptr; };
            // framerateControl Field Functions 
            bool hasFramerateControl() const { return this->framerateControl_ != nullptr;};
            void deleteFramerateControl() { this->framerateControl_ = nullptr;};
            inline string getFramerateControl() const { DARABONBA_PTR_GET_DEFAULT(framerateControl_, "") };
            inline Framerate& setFramerateControl(string framerateControl) { DARABONBA_PTR_SET_VALUE(framerateControl_, framerateControl) };


            // framerateDenominator Field Functions 
            bool hasFramerateDenominator() const { return this->framerateDenominator_ != nullptr;};
            void deleteFramerateDenominator() { this->framerateDenominator_ = nullptr;};
            inline int32_t getFramerateDenominator() const { DARABONBA_PTR_GET_DEFAULT(framerateDenominator_, 0) };
            inline Framerate& setFramerateDenominator(int32_t framerateDenominator) { DARABONBA_PTR_SET_VALUE(framerateDenominator_, framerateDenominator) };


            // framerateNumerator Field Functions 
            bool hasFramerateNumerator() const { return this->framerateNumerator_ != nullptr;};
            void deleteFramerateNumerator() { this->framerateNumerator_ = nullptr;};
            inline int32_t getFramerateNumerator() const { DARABONBA_PTR_GET_DEFAULT(framerateNumerator_, 0) };
            inline Framerate& setFramerateNumerator(int32_t framerateNumerator) { DARABONBA_PTR_SET_VALUE(framerateNumerator_, framerateNumerator) };


          protected:
            // The frame rate mode.
            shared_ptr<string> framerateControl_ {};
            // The denominator of the fixed frame rate.
            shared_ptr<int32_t> framerateDenominator_ {};
            // The numerator of the fixed frame rate.
            shared_ptr<int32_t> framerateNumerator_ {};
          };

          class CodecDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CodecDetail& obj) { 
              DARABONBA_PTR_TO_JSON(Level, level_);
              DARABONBA_PTR_TO_JSON(Profile, profile_);
            };
            friend void from_json(const Darabonba::Json& j, CodecDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(Level, level_);
              DARABONBA_PTR_FROM_JSON(Profile, profile_);
            };
            CodecDetail() = default ;
            CodecDetail(const CodecDetail &) = default ;
            CodecDetail(CodecDetail &&) = default ;
            CodecDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CodecDetail() = default ;
            CodecDetail& operator=(const CodecDetail &) = default ;
            CodecDetail& operator=(CodecDetail &&) = default ;
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
            inline CodecDetail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            // profile Field Functions 
            bool hasProfile() const { return this->profile_ != nullptr;};
            void deleteProfile() { this->profile_ = nullptr;};
            inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
            inline CodecDetail& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


          protected:
            // The video encoding level. It is not supported yet.
            shared_ptr<string> level_ {};
            // The H.264 profile.
            shared_ptr<string> profile_ {};
          };

          virtual bool empty() const override { return this->codecDetail_ == nullptr
        && this->framerate_ == nullptr && this->gop_ == nullptr && this->rate_ == nullptr; };
          // codecDetail Field Functions 
          bool hasCodecDetail() const { return this->codecDetail_ != nullptr;};
          void deleteCodecDetail() { this->codecDetail_ = nullptr;};
          inline const VideoCodecSetting::CodecDetail & getCodecDetail() const { DARABONBA_PTR_GET_CONST(codecDetail_, VideoCodecSetting::CodecDetail) };
          inline VideoCodecSetting::CodecDetail getCodecDetail() { DARABONBA_PTR_GET(codecDetail_, VideoCodecSetting::CodecDetail) };
          inline VideoCodecSetting& setCodecDetail(const VideoCodecSetting::CodecDetail & codecDetail) { DARABONBA_PTR_SET_VALUE(codecDetail_, codecDetail) };
          inline VideoCodecSetting& setCodecDetail(VideoCodecSetting::CodecDetail && codecDetail) { DARABONBA_PTR_SET_RVALUE(codecDetail_, codecDetail) };


          // framerate Field Functions 
          bool hasFramerate() const { return this->framerate_ != nullptr;};
          void deleteFramerate() { this->framerate_ = nullptr;};
          inline const VideoCodecSetting::Framerate & getFramerate() const { DARABONBA_PTR_GET_CONST(framerate_, VideoCodecSetting::Framerate) };
          inline VideoCodecSetting::Framerate getFramerate() { DARABONBA_PTR_GET(framerate_, VideoCodecSetting::Framerate) };
          inline VideoCodecSetting& setFramerate(const VideoCodecSetting::Framerate & framerate) { DARABONBA_PTR_SET_VALUE(framerate_, framerate) };
          inline VideoCodecSetting& setFramerate(VideoCodecSetting::Framerate && framerate) { DARABONBA_PTR_SET_RVALUE(framerate_, framerate) };


          // gop Field Functions 
          bool hasGop() const { return this->gop_ != nullptr;};
          void deleteGop() { this->gop_ = nullptr;};
          inline const VideoCodecSetting::Gop & getGop() const { DARABONBA_PTR_GET_CONST(gop_, VideoCodecSetting::Gop) };
          inline VideoCodecSetting::Gop getGop() { DARABONBA_PTR_GET(gop_, VideoCodecSetting::Gop) };
          inline VideoCodecSetting& setGop(const VideoCodecSetting::Gop & gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };
          inline VideoCodecSetting& setGop(VideoCodecSetting::Gop && gop) { DARABONBA_PTR_SET_RVALUE(gop_, gop) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline const VideoCodecSetting::Rate & getRate() const { DARABONBA_PTR_GET_CONST(rate_, VideoCodecSetting::Rate) };
          inline VideoCodecSetting::Rate getRate() { DARABONBA_PTR_GET(rate_, VideoCodecSetting::Rate) };
          inline VideoCodecSetting& setRate(const VideoCodecSetting::Rate & rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };
          inline VideoCodecSetting& setRate(VideoCodecSetting::Rate && rate) { DARABONBA_PTR_SET_RVALUE(rate_, rate) };


        protected:
          // The video encoding settings.
          shared_ptr<VideoCodecSetting::CodecDetail> codecDetail_ {};
          // The frame rate.
          shared_ptr<VideoCodecSetting::Framerate> framerate_ {};
          // The GOP setting.
          shared_ptr<VideoCodecSetting::Gop> gop_ {};
          // The video encoding rate.
          shared_ptr<VideoCodecSetting::Rate> rate_ {};
        };

        virtual bool empty() const override { return this->height_ == nullptr
        && this->name_ == nullptr && this->videoCodec_ == nullptr && this->videoCodecSetting_ == nullptr && this->videoCodecType_ == nullptr && this->width_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline VideoSettings& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VideoSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // videoCodec Field Functions 
        bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
        void deleteVideoCodec() { this->videoCodec_ = nullptr;};
        inline string getVideoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
        inline VideoSettings& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


        // videoCodecSetting Field Functions 
        bool hasVideoCodecSetting() const { return this->videoCodecSetting_ != nullptr;};
        void deleteVideoCodecSetting() { this->videoCodecSetting_ = nullptr;};
        inline const VideoSettings::VideoCodecSetting & getVideoCodecSetting() const { DARABONBA_PTR_GET_CONST(videoCodecSetting_, VideoSettings::VideoCodecSetting) };
        inline VideoSettings::VideoCodecSetting getVideoCodecSetting() { DARABONBA_PTR_GET(videoCodecSetting_, VideoSettings::VideoCodecSetting) };
        inline VideoSettings& setVideoCodecSetting(const VideoSettings::VideoCodecSetting & videoCodecSetting) { DARABONBA_PTR_SET_VALUE(videoCodecSetting_, videoCodecSetting) };
        inline VideoSettings& setVideoCodecSetting(VideoSettings::VideoCodecSetting && videoCodecSetting) { DARABONBA_PTR_SET_RVALUE(videoCodecSetting_, videoCodecSetting) };


        // videoCodecType Field Functions 
        bool hasVideoCodecType() const { return this->videoCodecType_ != nullptr;};
        void deleteVideoCodecType() { this->videoCodecType_ = nullptr;};
        inline string getVideoCodecType() const { DARABONBA_PTR_GET_DEFAULT(videoCodecType_, "") };
        inline VideoSettings& setVideoCodecType(string videoCodecType) { DARABONBA_PTR_SET_VALUE(videoCodecType_, videoCodecType) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline VideoSettings& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The height of the video in pixels.
        shared_ptr<int32_t> height_ {};
        // The name of the video settings.
        shared_ptr<string> name_ {};
        // The video codec.
        shared_ptr<string> videoCodec_ {};
        // The video encoding settings.
        shared_ptr<VideoSettings::VideoCodecSetting> videoCodecSetting_ {};
        // The video transcoding method. Valid values: NORMAL (regular transcoding) and NBHD (Narrowband HD™ transcoding).
        shared_ptr<string> videoCodecType_ {};
        // The width of the video in pixels.
        shared_ptr<int32_t> width_ {};
      };

      class OutputGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputGroups& obj) { 
          DARABONBA_PTR_TO_JSON(MediaPackageGroupSetting, mediaPackageGroupSetting_);
          DARABONBA_PTR_TO_JSON(MonitorUrl, monitorUrl_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Outputs, outputs_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, OutputGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(MediaPackageGroupSetting, mediaPackageGroupSetting_);
          DARABONBA_PTR_FROM_JSON(MonitorUrl, monitorUrl_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        OutputGroups() = default ;
        OutputGroups(const OutputGroups &) = default ;
        OutputGroups(OutputGroups &&) = default ;
        OutputGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputGroups() = default ;
        OutputGroups& operator=(const OutputGroups &) = default ;
        OutputGroups& operator=(OutputGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Outputs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
            DARABONBA_PTR_TO_JSON(AudioSettingNames, audioSettingNames_);
            DARABONBA_PTR_TO_JSON(MediaPackageOutputSetting, mediaPackageOutputSetting_);
            DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(VideoSettingName, videoSettingName_);
          };
          friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioSettingNames, audioSettingNames_);
            DARABONBA_PTR_FROM_JSON(MediaPackageOutputSetting, mediaPackageOutputSetting_);
            DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(VideoSettingName, videoSettingName_);
          };
          Outputs() = default ;
          Outputs(const Outputs &) = default ;
          Outputs(Outputs &&) = default ;
          Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Outputs() = default ;
          Outputs& operator=(const Outputs &) = default ;
          Outputs& operator=(Outputs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MediaPackageOutputSetting : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MediaPackageOutputSetting& obj) { 
              DARABONBA_PTR_TO_JSON(AudioGroupId, audioGroupId_);
              DARABONBA_PTR_TO_JSON(NameModifier, nameModifier_);
            };
            friend void from_json(const Darabonba::Json& j, MediaPackageOutputSetting& obj) { 
              DARABONBA_PTR_FROM_JSON(AudioGroupId, audioGroupId_);
              DARABONBA_PTR_FROM_JSON(NameModifier, nameModifier_);
            };
            MediaPackageOutputSetting() = default ;
            MediaPackageOutputSetting(const MediaPackageOutputSetting &) = default ;
            MediaPackageOutputSetting(MediaPackageOutputSetting &&) = default ;
            MediaPackageOutputSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MediaPackageOutputSetting() = default ;
            MediaPackageOutputSetting& operator=(const MediaPackageOutputSetting &) = default ;
            MediaPackageOutputSetting& operator=(MediaPackageOutputSetting &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->audioGroupId_ == nullptr
        && this->nameModifier_ == nullptr; };
            // audioGroupId Field Functions 
            bool hasAudioGroupId() const { return this->audioGroupId_ != nullptr;};
            void deleteAudioGroupId() { this->audioGroupId_ = nullptr;};
            inline string getAudioGroupId() const { DARABONBA_PTR_GET_DEFAULT(audioGroupId_, "") };
            inline MediaPackageOutputSetting& setAudioGroupId(string audioGroupId) { DARABONBA_PTR_SET_VALUE(audioGroupId_, audioGroupId) };


            // nameModifier Field Functions 
            bool hasNameModifier() const { return this->nameModifier_ != nullptr;};
            void deleteNameModifier() { this->nameModifier_ = nullptr;};
            inline string getNameModifier() const { DARABONBA_PTR_GET_DEFAULT(nameModifier_, "") };
            inline MediaPackageOutputSetting& setNameModifier(string nameModifier) { DARABONBA_PTR_SET_VALUE(nameModifier_, nameModifier) };


          protected:
            // The manifest audio group ID.
            shared_ptr<string> audioGroupId_ {};
            // The manifest name modifier. The child manifests include this modifier in their M3U8 file names.
            shared_ptr<string> nameModifier_ {};
          };

          virtual bool empty() const override { return this->audioSettingNames_ == nullptr
        && this->mediaPackageOutputSetting_ == nullptr && this->mediaType_ == nullptr && this->name_ == nullptr && this->videoSettingName_ == nullptr; };
          // audioSettingNames Field Functions 
          bool hasAudioSettingNames() const { return this->audioSettingNames_ != nullptr;};
          void deleteAudioSettingNames() { this->audioSettingNames_ = nullptr;};
          inline const vector<string> & getAudioSettingNames() const { DARABONBA_PTR_GET_CONST(audioSettingNames_, vector<string>) };
          inline vector<string> getAudioSettingNames() { DARABONBA_PTR_GET(audioSettingNames_, vector<string>) };
          inline Outputs& setAudioSettingNames(const vector<string> & audioSettingNames) { DARABONBA_PTR_SET_VALUE(audioSettingNames_, audioSettingNames) };
          inline Outputs& setAudioSettingNames(vector<string> && audioSettingNames) { DARABONBA_PTR_SET_RVALUE(audioSettingNames_, audioSettingNames) };


          // mediaPackageOutputSetting Field Functions 
          bool hasMediaPackageOutputSetting() const { return this->mediaPackageOutputSetting_ != nullptr;};
          void deleteMediaPackageOutputSetting() { this->mediaPackageOutputSetting_ = nullptr;};
          inline const Outputs::MediaPackageOutputSetting & getMediaPackageOutputSetting() const { DARABONBA_PTR_GET_CONST(mediaPackageOutputSetting_, Outputs::MediaPackageOutputSetting) };
          inline Outputs::MediaPackageOutputSetting getMediaPackageOutputSetting() { DARABONBA_PTR_GET(mediaPackageOutputSetting_, Outputs::MediaPackageOutputSetting) };
          inline Outputs& setMediaPackageOutputSetting(const Outputs::MediaPackageOutputSetting & mediaPackageOutputSetting) { DARABONBA_PTR_SET_VALUE(mediaPackageOutputSetting_, mediaPackageOutputSetting) };
          inline Outputs& setMediaPackageOutputSetting(Outputs::MediaPackageOutputSetting && mediaPackageOutputSetting) { DARABONBA_PTR_SET_RVALUE(mediaPackageOutputSetting_, mediaPackageOutputSetting) };


          // mediaType Field Functions 
          bool hasMediaType() const { return this->mediaType_ != nullptr;};
          void deleteMediaType() { this->mediaType_ = nullptr;};
          inline int32_t getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
          inline Outputs& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Outputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // videoSettingName Field Functions 
          bool hasVideoSettingName() const { return this->videoSettingName_ != nullptr;};
          void deleteVideoSettingName() { this->videoSettingName_ = nullptr;};
          inline string getVideoSettingName() const { DARABONBA_PTR_GET_DEFAULT(videoSettingName_, "") };
          inline Outputs& setVideoSettingName(string videoSettingName) { DARABONBA_PTR_SET_VALUE(videoSettingName_, videoSettingName) };


        protected:
          // The referenced AudioSettings.
          shared_ptr<vector<string>> audioSettingNames_ {};
          // The settings of the output delivered to MediaPackage.
          shared_ptr<Outputs::MediaPackageOutputSetting> mediaPackageOutputSetting_ {};
          // The media type of the output.
          shared_ptr<int32_t> mediaType_ {};
          // The name of the output.
          shared_ptr<string> name_ {};
          // The name of the referenced VideoSettings.
          shared_ptr<string> videoSettingName_ {};
        };

        class MediaPackageGroupSetting : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MediaPackageGroupSetting& obj) { 
            DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          };
          friend void from_json(const Darabonba::Json& j, MediaPackageGroupSetting& obj) { 
            DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          };
          MediaPackageGroupSetting() = default ;
          MediaPackageGroupSetting(const MediaPackageGroupSetting &) = default ;
          MediaPackageGroupSetting(MediaPackageGroupSetting &&) = default ;
          MediaPackageGroupSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MediaPackageGroupSetting() = default ;
          MediaPackageGroupSetting& operator=(const MediaPackageGroupSetting &) = default ;
          MediaPackageGroupSetting& operator=(MediaPackageGroupSetting &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->channelName_ == nullptr
        && this->groupName_ == nullptr; };
          // channelName Field Functions 
          bool hasChannelName() const { return this->channelName_ != nullptr;};
          void deleteChannelName() { this->channelName_ = nullptr;};
          inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
          inline MediaPackageGroupSetting& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline MediaPackageGroupSetting& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        protected:
          // ChannelName in MediaPackage.
          shared_ptr<string> channelName_ {};
          // GroupName in MediaPackage.
          shared_ptr<string> groupName_ {};
        };

        virtual bool empty() const override { return this->mediaPackageGroupSetting_ == nullptr
        && this->monitorUrl_ == nullptr && this->name_ == nullptr && this->outputs_ == nullptr && this->type_ == nullptr; };
        // mediaPackageGroupSetting Field Functions 
        bool hasMediaPackageGroupSetting() const { return this->mediaPackageGroupSetting_ != nullptr;};
        void deleteMediaPackageGroupSetting() { this->mediaPackageGroupSetting_ = nullptr;};
        inline const OutputGroups::MediaPackageGroupSetting & getMediaPackageGroupSetting() const { DARABONBA_PTR_GET_CONST(mediaPackageGroupSetting_, OutputGroups::MediaPackageGroupSetting) };
        inline OutputGroups::MediaPackageGroupSetting getMediaPackageGroupSetting() { DARABONBA_PTR_GET(mediaPackageGroupSetting_, OutputGroups::MediaPackageGroupSetting) };
        inline OutputGroups& setMediaPackageGroupSetting(const OutputGroups::MediaPackageGroupSetting & mediaPackageGroupSetting) { DARABONBA_PTR_SET_VALUE(mediaPackageGroupSetting_, mediaPackageGroupSetting) };
        inline OutputGroups& setMediaPackageGroupSetting(OutputGroups::MediaPackageGroupSetting && mediaPackageGroupSetting) { DARABONBA_PTR_SET_RVALUE(mediaPackageGroupSetting_, mediaPackageGroupSetting) };


        // monitorUrl Field Functions 
        bool hasMonitorUrl() const { return this->monitorUrl_ != nullptr;};
        void deleteMonitorUrl() { this->monitorUrl_ = nullptr;};
        inline string getMonitorUrl() const { DARABONBA_PTR_GET_DEFAULT(monitorUrl_, "") };
        inline OutputGroups& setMonitorUrl(string monitorUrl) { DARABONBA_PTR_SET_VALUE(monitorUrl_, monitorUrl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline OutputGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outputs Field Functions 
        bool hasOutputs() const { return this->outputs_ != nullptr;};
        void deleteOutputs() { this->outputs_ = nullptr;};
        inline const vector<OutputGroups::Outputs> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<OutputGroups::Outputs>) };
        inline vector<OutputGroups::Outputs> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<OutputGroups::Outputs>) };
        inline OutputGroups& setOutputs(const vector<OutputGroups::Outputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
        inline OutputGroups& setOutputs(vector<OutputGroups::Outputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline OutputGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The MediaPackage destination.
        shared_ptr<OutputGroups::MediaPackageGroupSetting> mediaPackageGroupSetting_ {};
        // The URL for monitoring the output group. The parameter is returned only when the output gourp type is MediaPackage.
        shared_ptr<string> monitorUrl_ {};
        // The name of the output group.
        shared_ptr<string> name_ {};
        // The outputs in the output group.
        shared_ptr<vector<OutputGroups::Outputs>> outputs_ {};
        // The output group type.
        shared_ptr<string> type_ {};
      };

      class InputAttachments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputAttachments& obj) { 
          DARABONBA_PTR_TO_JSON(AudioSelectors, audioSelectors_);
          DARABONBA_PTR_TO_JSON(InputId, inputId_);
          DARABONBA_PTR_TO_JSON(InputName, inputName_);
          DARABONBA_PTR_TO_JSON(LanguageName, languageName_);
        };
        friend void from_json(const Darabonba::Json& j, InputAttachments& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioSelectors, audioSelectors_);
          DARABONBA_PTR_FROM_JSON(InputId, inputId_);
          DARABONBA_PTR_FROM_JSON(InputName, inputName_);
          DARABONBA_PTR_FROM_JSON(LanguageName, languageName_);
        };
        InputAttachments() = default ;
        InputAttachments(const InputAttachments &) = default ;
        InputAttachments(InputAttachments &&) = default ;
        InputAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputAttachments() = default ;
        InputAttachments& operator=(const InputAttachments &) = default ;
        InputAttachments& operator=(InputAttachments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AudioSelectors : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioSelectors& obj) { 
            DARABONBA_PTR_TO_JSON(AudioLanguageSelection, audioLanguageSelection_);
            DARABONBA_PTR_TO_JSON(AudioPidSelection, audioPidSelection_);
            DARABONBA_PTR_TO_JSON(AudioTrackSelection, audioTrackSelection_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, AudioSelectors& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioLanguageSelection, audioLanguageSelection_);
            DARABONBA_PTR_FROM_JSON(AudioPidSelection, audioPidSelection_);
            DARABONBA_PTR_FROM_JSON(AudioTrackSelection, audioTrackSelection_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          AudioSelectors() = default ;
          AudioSelectors(const AudioSelectors &) = default ;
          AudioSelectors(AudioSelectors &&) = default ;
          AudioSelectors(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioSelectors() = default ;
          AudioSelectors& operator=(const AudioSelectors &) = default ;
          AudioSelectors& operator=(AudioSelectors &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AudioTrackSelection : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioTrackSelection& obj) { 
              DARABONBA_PTR_TO_JSON(TrackId, trackId_);
            };
            friend void from_json(const Darabonba::Json& j, AudioTrackSelection& obj) { 
              DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
            };
            AudioTrackSelection() = default ;
            AudioTrackSelection(const AudioTrackSelection &) = default ;
            AudioTrackSelection(AudioTrackSelection &&) = default ;
            AudioTrackSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioTrackSelection() = default ;
            AudioTrackSelection& operator=(const AudioTrackSelection &) = default ;
            AudioTrackSelection& operator=(AudioTrackSelection &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->trackId_ == nullptr; };
            // trackId Field Functions 
            bool hasTrackId() const { return this->trackId_ != nullptr;};
            void deleteTrackId() { this->trackId_ = nullptr;};
            inline int64_t getTrackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, 0L) };
            inline AudioTrackSelection& setTrackId(int64_t trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


          protected:
            // The track ID from within a source.
            // 
            // This parameter is required.
            shared_ptr<int64_t> trackId_ {};
          };

          class AudioPidSelection : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioPidSelection& obj) { 
              DARABONBA_PTR_TO_JSON(Pid, pid_);
            };
            friend void from_json(const Darabonba::Json& j, AudioPidSelection& obj) { 
              DARABONBA_PTR_FROM_JSON(Pid, pid_);
            };
            AudioPidSelection() = default ;
            AudioPidSelection(const AudioPidSelection &) = default ;
            AudioPidSelection(AudioPidSelection &&) = default ;
            AudioPidSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioPidSelection() = default ;
            AudioPidSelection& operator=(const AudioPidSelection &) = default ;
            AudioPidSelection& operator=(AudioPidSelection &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->pid_ == nullptr; };
            // pid Field Functions 
            bool hasPid() const { return this->pid_ != nullptr;};
            void deletePid() { this->pid_ = nullptr;};
            inline int64_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0L) };
            inline AudioPidSelection& setPid(int64_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


          protected:
            // A PID from within a source.
            // 
            // This parameter is required.
            shared_ptr<int64_t> pid_ {};
          };

          class AudioLanguageSelection : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioLanguageSelection& obj) { 
              DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
            };
            friend void from_json(const Darabonba::Json& j, AudioLanguageSelection& obj) { 
              DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
            };
            AudioLanguageSelection() = default ;
            AudioLanguageSelection(const AudioLanguageSelection &) = default ;
            AudioLanguageSelection(AudioLanguageSelection &&) = default ;
            AudioLanguageSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioLanguageSelection() = default ;
            AudioLanguageSelection& operator=(const AudioLanguageSelection &) = default ;
            AudioLanguageSelection& operator=(AudioLanguageSelection &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->languageCode_ == nullptr; };
            // languageCode Field Functions 
            bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
            void deleteLanguageCode() { this->languageCode_ = nullptr;};
            inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
            inline AudioLanguageSelection& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


          protected:
            // A three-letter ISO 639-2 language code from within an audio source.
            // 
            // This parameter is required.
            shared_ptr<string> languageCode_ {};
          };

          virtual bool empty() const override { return this->audioLanguageSelection_ == nullptr
        && this->audioPidSelection_ == nullptr && this->audioTrackSelection_ == nullptr && this->name_ == nullptr; };
          // audioLanguageSelection Field Functions 
          bool hasAudioLanguageSelection() const { return this->audioLanguageSelection_ != nullptr;};
          void deleteAudioLanguageSelection() { this->audioLanguageSelection_ = nullptr;};
          inline const AudioSelectors::AudioLanguageSelection & getAudioLanguageSelection() const { DARABONBA_PTR_GET_CONST(audioLanguageSelection_, AudioSelectors::AudioLanguageSelection) };
          inline AudioSelectors::AudioLanguageSelection getAudioLanguageSelection() { DARABONBA_PTR_GET(audioLanguageSelection_, AudioSelectors::AudioLanguageSelection) };
          inline AudioSelectors& setAudioLanguageSelection(const AudioSelectors::AudioLanguageSelection & audioLanguageSelection) { DARABONBA_PTR_SET_VALUE(audioLanguageSelection_, audioLanguageSelection) };
          inline AudioSelectors& setAudioLanguageSelection(AudioSelectors::AudioLanguageSelection && audioLanguageSelection) { DARABONBA_PTR_SET_RVALUE(audioLanguageSelection_, audioLanguageSelection) };


          // audioPidSelection Field Functions 
          bool hasAudioPidSelection() const { return this->audioPidSelection_ != nullptr;};
          void deleteAudioPidSelection() { this->audioPidSelection_ = nullptr;};
          inline const AudioSelectors::AudioPidSelection & getAudioPidSelection() const { DARABONBA_PTR_GET_CONST(audioPidSelection_, AudioSelectors::AudioPidSelection) };
          inline AudioSelectors::AudioPidSelection getAudioPidSelection() { DARABONBA_PTR_GET(audioPidSelection_, AudioSelectors::AudioPidSelection) };
          inline AudioSelectors& setAudioPidSelection(const AudioSelectors::AudioPidSelection & audioPidSelection) { DARABONBA_PTR_SET_VALUE(audioPidSelection_, audioPidSelection) };
          inline AudioSelectors& setAudioPidSelection(AudioSelectors::AudioPidSelection && audioPidSelection) { DARABONBA_PTR_SET_RVALUE(audioPidSelection_, audioPidSelection) };


          // audioTrackSelection Field Functions 
          bool hasAudioTrackSelection() const { return this->audioTrackSelection_ != nullptr;};
          void deleteAudioTrackSelection() { this->audioTrackSelection_ = nullptr;};
          inline const vector<AudioSelectors::AudioTrackSelection> & getAudioTrackSelection() const { DARABONBA_PTR_GET_CONST(audioTrackSelection_, vector<AudioSelectors::AudioTrackSelection>) };
          inline vector<AudioSelectors::AudioTrackSelection> getAudioTrackSelection() { DARABONBA_PTR_GET(audioTrackSelection_, vector<AudioSelectors::AudioTrackSelection>) };
          inline AudioSelectors& setAudioTrackSelection(const vector<AudioSelectors::AudioTrackSelection> & audioTrackSelection) { DARABONBA_PTR_SET_VALUE(audioTrackSelection_, audioTrackSelection) };
          inline AudioSelectors& setAudioTrackSelection(vector<AudioSelectors::AudioTrackSelection> && audioTrackSelection) { DARABONBA_PTR_SET_RVALUE(audioTrackSelection_, audioTrackSelection) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AudioSelectors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The audio language selection.
          shared_ptr<AudioSelectors::AudioLanguageSelection> audioLanguageSelection_ {};
          // The audio PID selection.
          shared_ptr<AudioSelectors::AudioPidSelection> audioPidSelection_ {};
          // The audio track selection.
          shared_ptr<vector<AudioSelectors::AudioTrackSelection>> audioTrackSelection_ {};
          // The name of the audio selector.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->audioSelectors_ == nullptr
        && this->inputId_ == nullptr && this->inputName_ == nullptr && this->languageName_ == nullptr; };
        // audioSelectors Field Functions 
        bool hasAudioSelectors() const { return this->audioSelectors_ != nullptr;};
        void deleteAudioSelectors() { this->audioSelectors_ = nullptr;};
        inline const vector<InputAttachments::AudioSelectors> & getAudioSelectors() const { DARABONBA_PTR_GET_CONST(audioSelectors_, vector<InputAttachments::AudioSelectors>) };
        inline vector<InputAttachments::AudioSelectors> getAudioSelectors() { DARABONBA_PTR_GET(audioSelectors_, vector<InputAttachments::AudioSelectors>) };
        inline InputAttachments& setAudioSelectors(const vector<InputAttachments::AudioSelectors> & audioSelectors) { DARABONBA_PTR_SET_VALUE(audioSelectors_, audioSelectors) };
        inline InputAttachments& setAudioSelectors(vector<InputAttachments::AudioSelectors> && audioSelectors) { DARABONBA_PTR_SET_RVALUE(audioSelectors_, audioSelectors) };


        // inputId Field Functions 
        bool hasInputId() const { return this->inputId_ != nullptr;};
        void deleteInputId() { this->inputId_ = nullptr;};
        inline string getInputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
        inline InputAttachments& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


        // inputName Field Functions 
        bool hasInputName() const { return this->inputName_ != nullptr;};
        void deleteInputName() { this->inputName_ = nullptr;};
        inline string getInputName() const { DARABONBA_PTR_GET_DEFAULT(inputName_, "") };
        inline InputAttachments& setInputName(string inputName) { DARABONBA_PTR_SET_VALUE(inputName_, inputName) };


        // languageName Field Functions 
        bool hasLanguageName() const { return this->languageName_ != nullptr;};
        void deleteLanguageName() { this->languageName_ = nullptr;};
        inline string getLanguageName() const { DARABONBA_PTR_GET_DEFAULT(languageName_, "") };
        inline InputAttachments& setLanguageName(string languageName) { DARABONBA_PTR_SET_VALUE(languageName_, languageName) };


      protected:
        // The audio selectors.
        shared_ptr<vector<InputAttachments::AudioSelectors>> audioSelectors_ {};
        // The ID of the associated input.
        // 
        // This parameter is required.
        shared_ptr<string> inputId_ {};
        // The name of the input.
        shared_ptr<string> inputName_ {};
        // The language name.
        shared_ptr<string> languageName_ {};
      };

      class AudioSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AudioSettings& obj) { 
          DARABONBA_PTR_TO_JSON(AudioCodec, audioCodec_);
          DARABONBA_PTR_TO_JSON(AudioCodecSetting, audioCodecSetting_);
          DARABONBA_PTR_TO_JSON(AudioSelectorName, audioSelectorName_);
          DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
          DARABONBA_PTR_TO_JSON(LanguageName, languageName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, AudioSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioCodec, audioCodec_);
          DARABONBA_PTR_FROM_JSON(AudioCodecSetting, audioCodecSetting_);
          DARABONBA_PTR_FROM_JSON(AudioSelectorName, audioSelectorName_);
          DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
          DARABONBA_PTR_FROM_JSON(LanguageName, languageName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        AudioSettings() = default ;
        AudioSettings(const AudioSettings &) = default ;
        AudioSettings(AudioSettings &&) = default ;
        AudioSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AudioSettings() = default ;
        AudioSettings& operator=(const AudioSettings &) = default ;
        AudioSettings& operator=(AudioSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AudioCodecSetting : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioCodecSetting& obj) { 
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(Profile, profile_);
            DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
          };
          friend void from_json(const Darabonba::Json& j, AudioCodecSetting& obj) { 
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(Profile, profile_);
            DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
          };
          AudioCodecSetting() = default ;
          AudioCodecSetting(const AudioCodecSetting &) = default ;
          AudioCodecSetting(AudioCodecSetting &&) = default ;
          AudioCodecSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioCodecSetting() = default ;
          AudioCodecSetting& operator=(const AudioCodecSetting &) = default ;
          AudioCodecSetting& operator=(AudioCodecSetting &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->profile_ == nullptr && this->sampleRate_ == nullptr; };
          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline int32_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
          inline AudioCodecSetting& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // profile Field Functions 
          bool hasProfile() const { return this->profile_ != nullptr;};
          void deleteProfile() { this->profile_ = nullptr;};
          inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
          inline AudioCodecSetting& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


          // sampleRate Field Functions 
          bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
          void deleteSampleRate() { this->sampleRate_ = nullptr;};
          inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
          inline AudioCodecSetting& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


        protected:
          // The audio bitrate. Unit: bit/s.
          shared_ptr<int32_t> bitrate_ {};
          // The audio codec profile.
          shared_ptr<string> profile_ {};
          // The audio sample rate. Unit: Hz.
          shared_ptr<int32_t> sampleRate_ {};
        };

        virtual bool empty() const override { return this->audioCodec_ == nullptr
        && this->audioCodecSetting_ == nullptr && this->audioSelectorName_ == nullptr && this->languageCode_ == nullptr && this->languageName_ == nullptr && this->name_ == nullptr; };
        // audioCodec Field Functions 
        bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
        void deleteAudioCodec() { this->audioCodec_ = nullptr;};
        inline string getAudioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
        inline AudioSettings& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


        // audioCodecSetting Field Functions 
        bool hasAudioCodecSetting() const { return this->audioCodecSetting_ != nullptr;};
        void deleteAudioCodecSetting() { this->audioCodecSetting_ = nullptr;};
        inline const AudioSettings::AudioCodecSetting & getAudioCodecSetting() const { DARABONBA_PTR_GET_CONST(audioCodecSetting_, AudioSettings::AudioCodecSetting) };
        inline AudioSettings::AudioCodecSetting getAudioCodecSetting() { DARABONBA_PTR_GET(audioCodecSetting_, AudioSettings::AudioCodecSetting) };
        inline AudioSettings& setAudioCodecSetting(const AudioSettings::AudioCodecSetting & audioCodecSetting) { DARABONBA_PTR_SET_VALUE(audioCodecSetting_, audioCodecSetting) };
        inline AudioSettings& setAudioCodecSetting(AudioSettings::AudioCodecSetting && audioCodecSetting) { DARABONBA_PTR_SET_RVALUE(audioCodecSetting_, audioCodecSetting) };


        // audioSelectorName Field Functions 
        bool hasAudioSelectorName() const { return this->audioSelectorName_ != nullptr;};
        void deleteAudioSelectorName() { this->audioSelectorName_ = nullptr;};
        inline string getAudioSelectorName() const { DARABONBA_PTR_GET_DEFAULT(audioSelectorName_, "") };
        inline AudioSettings& setAudioSelectorName(string audioSelectorName) { DARABONBA_PTR_SET_VALUE(audioSelectorName_, audioSelectorName) };


        // languageCode Field Functions 
        bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
        void deleteLanguageCode() { this->languageCode_ = nullptr;};
        inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
        inline AudioSettings& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


        // languageName Field Functions 
        bool hasLanguageName() const { return this->languageName_ != nullptr;};
        void deleteLanguageName() { this->languageName_ = nullptr;};
        inline string getLanguageName() const { DARABONBA_PTR_GET_DEFAULT(languageName_, "") };
        inline AudioSettings& setLanguageName(string languageName) { DARABONBA_PTR_SET_VALUE(languageName_, languageName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AudioSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The audio codec.
        shared_ptr<string> audioCodec_ {};
        // The audio encoding settings.
        shared_ptr<AudioSettings::AudioCodecSetting> audioCodecSetting_ {};
        // The name of the audio selector.
        shared_ptr<string> audioSelectorName_ {};
        // A three-letter ISO 639-2 language code.
        shared_ptr<string> languageCode_ {};
        // The name of the language.
        shared_ptr<string> languageName_ {};
        // The name of the audio settings.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->audioSettings_ == nullptr
        && this->channelId_ == nullptr && this->createTime_ == nullptr && this->inputAttachments_ == nullptr && this->lastStartTime_ == nullptr && this->lastStopTime_ == nullptr
        && this->name_ == nullptr && this->outputGroups_ == nullptr && this->state_ == nullptr && this->videoSettings_ == nullptr; };
      // audioSettings Field Functions 
      bool hasAudioSettings() const { return this->audioSettings_ != nullptr;};
      void deleteAudioSettings() { this->audioSettings_ = nullptr;};
      inline const vector<Channel::AudioSettings> & getAudioSettings() const { DARABONBA_PTR_GET_CONST(audioSettings_, vector<Channel::AudioSettings>) };
      inline vector<Channel::AudioSettings> getAudioSettings() { DARABONBA_PTR_GET(audioSettings_, vector<Channel::AudioSettings>) };
      inline Channel& setAudioSettings(const vector<Channel::AudioSettings> & audioSettings) { DARABONBA_PTR_SET_VALUE(audioSettings_, audioSettings) };
      inline Channel& setAudioSettings(vector<Channel::AudioSettings> && audioSettings) { DARABONBA_PTR_SET_RVALUE(audioSettings_, audioSettings) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline Channel& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Channel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // inputAttachments Field Functions 
      bool hasInputAttachments() const { return this->inputAttachments_ != nullptr;};
      void deleteInputAttachments() { this->inputAttachments_ = nullptr;};
      inline const vector<Channel::InputAttachments> & getInputAttachments() const { DARABONBA_PTR_GET_CONST(inputAttachments_, vector<Channel::InputAttachments>) };
      inline vector<Channel::InputAttachments> getInputAttachments() { DARABONBA_PTR_GET(inputAttachments_, vector<Channel::InputAttachments>) };
      inline Channel& setInputAttachments(const vector<Channel::InputAttachments> & inputAttachments) { DARABONBA_PTR_SET_VALUE(inputAttachments_, inputAttachments) };
      inline Channel& setInputAttachments(vector<Channel::InputAttachments> && inputAttachments) { DARABONBA_PTR_SET_RVALUE(inputAttachments_, inputAttachments) };


      // lastStartTime Field Functions 
      bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
      void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
      inline string getLastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, "") };
      inline Channel& setLastStartTime(string lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


      // lastStopTime Field Functions 
      bool hasLastStopTime() const { return this->lastStopTime_ != nullptr;};
      void deleteLastStopTime() { this->lastStopTime_ = nullptr;};
      inline string getLastStopTime() const { DARABONBA_PTR_GET_DEFAULT(lastStopTime_, "") };
      inline Channel& setLastStopTime(string lastStopTime) { DARABONBA_PTR_SET_VALUE(lastStopTime_, lastStopTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Channel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputGroups Field Functions 
      bool hasOutputGroups() const { return this->outputGroups_ != nullptr;};
      void deleteOutputGroups() { this->outputGroups_ = nullptr;};
      inline const vector<Channel::OutputGroups> & getOutputGroups() const { DARABONBA_PTR_GET_CONST(outputGroups_, vector<Channel::OutputGroups>) };
      inline vector<Channel::OutputGroups> getOutputGroups() { DARABONBA_PTR_GET(outputGroups_, vector<Channel::OutputGroups>) };
      inline Channel& setOutputGroups(const vector<Channel::OutputGroups> & outputGroups) { DARABONBA_PTR_SET_VALUE(outputGroups_, outputGroups) };
      inline Channel& setOutputGroups(vector<Channel::OutputGroups> && outputGroups) { DARABONBA_PTR_SET_RVALUE(outputGroups_, outputGroups) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Channel& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // videoSettings Field Functions 
      bool hasVideoSettings() const { return this->videoSettings_ != nullptr;};
      void deleteVideoSettings() { this->videoSettings_ = nullptr;};
      inline const vector<Channel::VideoSettings> & getVideoSettings() const { DARABONBA_PTR_GET_CONST(videoSettings_, vector<Channel::VideoSettings>) };
      inline vector<Channel::VideoSettings> getVideoSettings() { DARABONBA_PTR_GET(videoSettings_, vector<Channel::VideoSettings>) };
      inline Channel& setVideoSettings(const vector<Channel::VideoSettings> & videoSettings) { DARABONBA_PTR_SET_VALUE(videoSettings_, videoSettings) };
      inline Channel& setVideoSettings(vector<Channel::VideoSettings> && videoSettings) { DARABONBA_PTR_SET_RVALUE(videoSettings_, videoSettings) };


    protected:
      // The audio settings.
      shared_ptr<vector<Channel::AudioSettings>> audioSettings_ {};
      // The ID of the channel.
      shared_ptr<string> channelId_ {};
      // The time when the channel was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The inputs associated with the channel.
      shared_ptr<vector<Channel::InputAttachments>> inputAttachments_ {};
      // The time when the channel was last started. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. If the channel has never been started since it was created, an empty string is returned.
      shared_ptr<string> lastStartTime_ {};
      // The time when the channel was last stopped. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. If the channel has never stopped since it was created, an empty string is returned.
      shared_ptr<string> lastStopTime_ {};
      // The channel name.
      shared_ptr<string> name_ {};
      // The output groups.
      shared_ptr<vector<Channel::OutputGroups>> outputGroups_ {};
      // The state of the channel. Valid values: IDLE, STARTING, RUNNING, RECOVERING, and STOPPING.
      shared_ptr<string> state_ {};
      // The video settings.
      shared_ptr<vector<Channel::VideoSettings>> videoSettings_ {};
    };

    virtual bool empty() const override { return this->channel_ == nullptr
        && this->requestId_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const GetMediaLiveChannelResponseBody::Channel & getChannel() const { DARABONBA_PTR_GET_CONST(channel_, GetMediaLiveChannelResponseBody::Channel) };
    inline GetMediaLiveChannelResponseBody::Channel getChannel() { DARABONBA_PTR_GET(channel_, GetMediaLiveChannelResponseBody::Channel) };
    inline GetMediaLiveChannelResponseBody& setChannel(const GetMediaLiveChannelResponseBody::Channel & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline GetMediaLiveChannelResponseBody& setChannel(GetMediaLiveChannelResponseBody::Channel && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaLiveChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The channel information.
    shared_ptr<GetMediaLiveChannelResponseBody::Channel> channel_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
