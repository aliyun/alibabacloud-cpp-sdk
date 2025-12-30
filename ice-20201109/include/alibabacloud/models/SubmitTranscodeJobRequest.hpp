// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUEST_HPP_
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
  class SubmitTranscodeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InputGroup, inputGroup_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroup, outputGroup_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InputGroup, inputGroup_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroup, outputGroup_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTranscodeJobRequest() = default ;
    SubmitTranscodeJobRequest(const SubmitTranscodeJobRequest &) = default ;
    SubmitTranscodeJobRequest(SubmitTranscodeJobRequest &&) = default ;
    SubmitTranscodeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequest() = default ;
    SubmitTranscodeJobRequest& operator=(const SubmitTranscodeJobRequest &) = default ;
    SubmitTranscodeJobRequest& operator=(SubmitTranscodeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScheduleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
      };
      ScheduleConfig() = default ;
      ScheduleConfig(const ScheduleConfig &) = default ;
      ScheduleConfig(ScheduleConfig &&) = default ;
      ScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleConfig() = default ;
      ScheduleConfig& operator=(const ScheduleConfig &) = default ;
      ScheduleConfig& operator=(ScheduleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pipelineId_ == nullptr
        && this->priority_ == nullptr; };
      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline ScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline ScheduleConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    protected:
      // The ID of the MPS queue to which the job was submitted.
      shared_ptr<string> pipelineId_ {};
      // The priority of the job. Valid values: 1 to 10. The greater the value, the higher the priority.
      shared_ptr<int32_t> priority_ {};
    };

    class OutputGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutputGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(ProcessConfig, processConfig_);
      };
      friend void from_json(const Darabonba::Json& j, OutputGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(ProcessConfig, processConfig_);
      };
      OutputGroup() = default ;
      OutputGroup(const OutputGroup &) = default ;
      OutputGroup(OutputGroup &&) = default ;
      OutputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutputGroup() = default ;
      OutputGroup& operator=(const OutputGroup &) = default ;
      OutputGroup& operator=(OutputGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProcessConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProcessConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CombineConfigs, combineConfigs_);
          DARABONBA_PTR_TO_JSON(Encryption, encryption_);
          DARABONBA_PTR_TO_JSON(ImageWatermarks, imageWatermarks_);
          DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
          DARABONBA_PTR_TO_JSON(TextWatermarks, textWatermarks_);
          DARABONBA_PTR_TO_JSON(Transcode, transcode_);
        };
        friend void from_json(const Darabonba::Json& j, ProcessConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CombineConfigs, combineConfigs_);
          DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
          DARABONBA_PTR_FROM_JSON(ImageWatermarks, imageWatermarks_);
          DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
          DARABONBA_PTR_FROM_JSON(TextWatermarks, textWatermarks_);
          DARABONBA_PTR_FROM_JSON(Transcode, transcode_);
        };
        ProcessConfig() = default ;
        ProcessConfig(const ProcessConfig &) = default ;
        ProcessConfig(ProcessConfig &&) = default ;
        ProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProcessConfig() = default ;
        ProcessConfig& operator=(const ProcessConfig &) = default ;
        ProcessConfig& operator=(ProcessConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Transcode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Transcode& obj) { 
            DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          };
          friend void from_json(const Darabonba::Json& j, Transcode& obj) { 
            DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          };
          Transcode() = default ;
          Transcode(const Transcode &) = default ;
          Transcode(Transcode &&) = default ;
          Transcode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Transcode() = default ;
          Transcode& operator=(const Transcode &) = default ;
          Transcode& operator=(Transcode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OverwriteParams : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OverwriteParams& obj) { 
              DARABONBA_PTR_TO_JSON(Audio, audio_);
              DARABONBA_PTR_TO_JSON(Container, container_);
              DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
              DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
              DARABONBA_PTR_TO_JSON(Video, video_);
            };
            friend void from_json(const Darabonba::Json& j, OverwriteParams& obj) { 
              DARABONBA_PTR_FROM_JSON(Audio, audio_);
              DARABONBA_PTR_FROM_JSON(Container, container_);
              DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
              DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
              DARABONBA_PTR_FROM_JSON(Video, video_);
            };
            OverwriteParams() = default ;
            OverwriteParams(const OverwriteParams &) = default ;
            OverwriteParams(OverwriteParams &&) = default ;
            OverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OverwriteParams() = default ;
            OverwriteParams& operator=(const OverwriteParams &) = default ;
            OverwriteParams& operator=(OverwriteParams &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Video : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Video& obj) { 
                DARABONBA_PTR_TO_JSON(AbrMax, abrMax_);
                DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_TO_JSON(Bufsize, bufsize_);
                DARABONBA_PTR_TO_JSON(Codec, codec_);
                DARABONBA_PTR_TO_JSON(Crf, crf_);
                DARABONBA_PTR_TO_JSON(Crop, crop_);
                DARABONBA_PTR_TO_JSON(Fps, fps_);
                DARABONBA_PTR_TO_JSON(Gop, gop_);
                DARABONBA_PTR_TO_JSON(Height, height_);
                DARABONBA_PTR_TO_JSON(LongShortMode, longShortMode_);
                DARABONBA_PTR_TO_JSON(Maxrate, maxrate_);
                DARABONBA_PTR_TO_JSON(Pad, pad_);
                DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
                DARABONBA_PTR_TO_JSON(Preset, preset_);
                DARABONBA_PTR_TO_JSON(Profile, profile_);
                DARABONBA_PTR_TO_JSON(Remove, remove_);
                DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
                DARABONBA_PTR_TO_JSON(Width, width_);
              };
              friend void from_json(const Darabonba::Json& j, Video& obj) { 
                DARABONBA_PTR_FROM_JSON(AbrMax, abrMax_);
                DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_FROM_JSON(Bufsize, bufsize_);
                DARABONBA_PTR_FROM_JSON(Codec, codec_);
                DARABONBA_PTR_FROM_JSON(Crf, crf_);
                DARABONBA_PTR_FROM_JSON(Crop, crop_);
                DARABONBA_PTR_FROM_JSON(Fps, fps_);
                DARABONBA_PTR_FROM_JSON(Gop, gop_);
                DARABONBA_PTR_FROM_JSON(Height, height_);
                DARABONBA_PTR_FROM_JSON(LongShortMode, longShortMode_);
                DARABONBA_PTR_FROM_JSON(Maxrate, maxrate_);
                DARABONBA_PTR_FROM_JSON(Pad, pad_);
                DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
                DARABONBA_PTR_FROM_JSON(Preset, preset_);
                DARABONBA_PTR_FROM_JSON(Profile, profile_);
                DARABONBA_PTR_FROM_JSON(Remove, remove_);
                DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
                DARABONBA_PTR_FROM_JSON(Width, width_);
              };
              Video() = default ;
              Video(const Video &) = default ;
              Video(Video &&) = default ;
              Video(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Video() = default ;
              Video& operator=(const Video &) = default ;
              Video& operator=(Video &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->abrMax_ == nullptr
        && this->bitrate_ == nullptr && this->bufsize_ == nullptr && this->codec_ == nullptr && this->crf_ == nullptr && this->crop_ == nullptr
        && this->fps_ == nullptr && this->gop_ == nullptr && this->height_ == nullptr && this->longShortMode_ == nullptr && this->maxrate_ == nullptr
        && this->pad_ == nullptr && this->pixFmt_ == nullptr && this->preset_ == nullptr && this->profile_ == nullptr && this->remove_ == nullptr
        && this->scanMode_ == nullptr && this->width_ == nullptr; };
              // abrMax Field Functions 
              bool hasAbrMax() const { return this->abrMax_ != nullptr;};
              void deleteAbrMax() { this->abrMax_ = nullptr;};
              inline string getAbrMax() const { DARABONBA_PTR_GET_DEFAULT(abrMax_, "") };
              inline Video& setAbrMax(string abrMax) { DARABONBA_PTR_SET_VALUE(abrMax_, abrMax) };


              // bitrate Field Functions 
              bool hasBitrate() const { return this->bitrate_ != nullptr;};
              void deleteBitrate() { this->bitrate_ = nullptr;};
              inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
              inline Video& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


              // bufsize Field Functions 
              bool hasBufsize() const { return this->bufsize_ != nullptr;};
              void deleteBufsize() { this->bufsize_ = nullptr;};
              inline string getBufsize() const { DARABONBA_PTR_GET_DEFAULT(bufsize_, "") };
              inline Video& setBufsize(string bufsize) { DARABONBA_PTR_SET_VALUE(bufsize_, bufsize) };


              // codec Field Functions 
              bool hasCodec() const { return this->codec_ != nullptr;};
              void deleteCodec() { this->codec_ = nullptr;};
              inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
              inline Video& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


              // crf Field Functions 
              bool hasCrf() const { return this->crf_ != nullptr;};
              void deleteCrf() { this->crf_ = nullptr;};
              inline string getCrf() const { DARABONBA_PTR_GET_DEFAULT(crf_, "") };
              inline Video& setCrf(string crf) { DARABONBA_PTR_SET_VALUE(crf_, crf) };


              // crop Field Functions 
              bool hasCrop() const { return this->crop_ != nullptr;};
              void deleteCrop() { this->crop_ = nullptr;};
              inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
              inline Video& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


              // fps Field Functions 
              bool hasFps() const { return this->fps_ != nullptr;};
              void deleteFps() { this->fps_ = nullptr;};
              inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
              inline Video& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


              // gop Field Functions 
              bool hasGop() const { return this->gop_ != nullptr;};
              void deleteGop() { this->gop_ = nullptr;};
              inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
              inline Video& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


              // height Field Functions 
              bool hasHeight() const { return this->height_ != nullptr;};
              void deleteHeight() { this->height_ = nullptr;};
              inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
              inline Video& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


              // longShortMode Field Functions 
              bool hasLongShortMode() const { return this->longShortMode_ != nullptr;};
              void deleteLongShortMode() { this->longShortMode_ = nullptr;};
              inline string getLongShortMode() const { DARABONBA_PTR_GET_DEFAULT(longShortMode_, "") };
              inline Video& setLongShortMode(string longShortMode) { DARABONBA_PTR_SET_VALUE(longShortMode_, longShortMode) };


              // maxrate Field Functions 
              bool hasMaxrate() const { return this->maxrate_ != nullptr;};
              void deleteMaxrate() { this->maxrate_ = nullptr;};
              inline string getMaxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, "") };
              inline Video& setMaxrate(string maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


              // pad Field Functions 
              bool hasPad() const { return this->pad_ != nullptr;};
              void deletePad() { this->pad_ = nullptr;};
              inline string getPad() const { DARABONBA_PTR_GET_DEFAULT(pad_, "") };
              inline Video& setPad(string pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


              // pixFmt Field Functions 
              bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
              void deletePixFmt() { this->pixFmt_ = nullptr;};
              inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
              inline Video& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


              // preset Field Functions 
              bool hasPreset() const { return this->preset_ != nullptr;};
              void deletePreset() { this->preset_ = nullptr;};
              inline string getPreset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
              inline Video& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


              // profile Field Functions 
              bool hasProfile() const { return this->profile_ != nullptr;};
              void deleteProfile() { this->profile_ = nullptr;};
              inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
              inline Video& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


              // remove Field Functions 
              bool hasRemove() const { return this->remove_ != nullptr;};
              void deleteRemove() { this->remove_ = nullptr;};
              inline string getRemove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
              inline Video& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


              // scanMode Field Functions 
              bool hasScanMode() const { return this->scanMode_ != nullptr;};
              void deleteScanMode() { this->scanMode_ = nullptr;};
              inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
              inline Video& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


              // width Field Functions 
              bool hasWidth() const { return this->width_ != nullptr;};
              void deleteWidth() { this->width_ = nullptr;};
              inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
              inline Video& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


            protected:
              // The maximum adaptive bitrate (ABR). This parameter takes effect only for Narrowband HD 1.0. Valid values: [10,50000]. Unit: Kbit/s.
              shared_ptr<string> abrMax_ {};
              // The average video bitrate. Valid values: [10,50000]. Unit: Kbit/s.
              shared_ptr<string> bitrate_ {};
              // The buffer size. Valid values: [1000,128000]. Default value: 6000. Unit: KB.
              shared_ptr<string> bufsize_ {};
              // The encoding format.
              shared_ptr<string> codec_ {};
              // The constant rate factor (CRF). Valid values: [0,51]. Default value: 23 if the encoding format is H.264, or 26 if the encoding format is H.265.
              // 
              // >  If this parameter is specified, the setting of the bitrate becomes invalid.
              shared_ptr<string> crf_ {};
              // The method of video cropping. Valid values:
              // 
              // *   border: automatically detects and removes black bars.
              // *   A value in the width:height:left:top format: crops the videos based on the custom settings. Example: 1280:800:0:140.
              shared_ptr<string> crop_ {};
              // The frame rate. Valid values:(0,60]. Default value: the frame rate of the input file.
              // 
              // >  The value is 60 if the frame rate of the input file exceeds 60.
              shared_ptr<string> fps_ {};
              // The maximum number of frames between keyframes. Valid values: [1,1080000]. Default value: 250.
              shared_ptr<string> gop_ {};
              // The height of the video. Valid values: [128,4096]. Unit: pixels. Default value: the original height of the video.
              shared_ptr<string> height_ {};
              // Specifies whether to enable the auto-rotate screen feature.
              shared_ptr<string> longShortMode_ {};
              // The maximum bitrate of the video. Valid values: [10,50000]. Unit: Kbit/s.
              shared_ptr<string> maxrate_ {};
              // The black bars added to the video. Format: width:height:left:top. Example: 1280:800:0:140.
              shared_ptr<string> pad_ {};
              // The pixel format of the video. Valid values: standard pixel formats such as yuv420p and yuvj420p.
              shared_ptr<string> pixFmt_ {};
              // The preset video algorithm. This parameter takes effect only if the encoding format is H.264. Valid values: veryfast, fast, medium, slow, and slower. Default value: medium.
              shared_ptr<string> preset_ {};
              // The encoding profile. Valid values: baseline, main, and high.
              // 
              // *   baseline: applicable to mobile devices.
              // *   main: applicable to standard-definition devices.
              // *   high: applicable to high-definition devices.
              // 
              // Default value: high.
              shared_ptr<string> profile_ {};
              // Specifies whether to remove the video.
              shared_ptr<string> remove_ {};
              // The scan mode. Valid values: interlaced and progressive.
              shared_ptr<string> scanMode_ {};
              // The width of the video. Valid values: [128,4096]. Unit: pixels. Default value: the original width of the video.
              shared_ptr<string> width_ {};
            };

            class TransConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TransConfig& obj) { 
                DARABONBA_PTR_TO_JSON(AdjDarMethod, adjDarMethod_);
                DARABONBA_PTR_TO_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
                DARABONBA_PTR_TO_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
                DARABONBA_PTR_TO_JSON(IsCheckReso, isCheckReso_);
                DARABONBA_PTR_TO_JSON(IsCheckResoFail, isCheckResoFail_);
                DARABONBA_PTR_TO_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
                DARABONBA_PTR_TO_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
                DARABONBA_PTR_TO_JSON(TransMode, transMode_);
              };
              friend void from_json(const Darabonba::Json& j, TransConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(AdjDarMethod, adjDarMethod_);
                DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
                DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
                DARABONBA_PTR_FROM_JSON(IsCheckReso, isCheckReso_);
                DARABONBA_PTR_FROM_JSON(IsCheckResoFail, isCheckResoFail_);
                DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
                DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
                DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
              };
              TransConfig() = default ;
              TransConfig(const TransConfig &) = default ;
              TransConfig(TransConfig &&) = default ;
              TransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TransConfig() = default ;
              TransConfig& operator=(const TransConfig &) = default ;
              TransConfig& operator=(TransConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->adjDarMethod_ == nullptr
        && this->isCheckAudioBitrate_ == nullptr && this->isCheckAudioBitrateFail_ == nullptr && this->isCheckReso_ == nullptr && this->isCheckResoFail_ == nullptr && this->isCheckVideoBitrate_ == nullptr
        && this->isCheckVideoBitrateFail_ == nullptr && this->transMode_ == nullptr; };
              // adjDarMethod Field Functions 
              bool hasAdjDarMethod() const { return this->adjDarMethod_ != nullptr;};
              void deleteAdjDarMethod() { this->adjDarMethod_ = nullptr;};
              inline string getAdjDarMethod() const { DARABONBA_PTR_GET_DEFAULT(adjDarMethod_, "") };
              inline TransConfig& setAdjDarMethod(string adjDarMethod) { DARABONBA_PTR_SET_VALUE(adjDarMethod_, adjDarMethod) };


              // isCheckAudioBitrate Field Functions 
              bool hasIsCheckAudioBitrate() const { return this->isCheckAudioBitrate_ != nullptr;};
              void deleteIsCheckAudioBitrate() { this->isCheckAudioBitrate_ = nullptr;};
              inline string getIsCheckAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrate_, "") };
              inline TransConfig& setIsCheckAudioBitrate(string isCheckAudioBitrate) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrate_, isCheckAudioBitrate) };


              // isCheckAudioBitrateFail Field Functions 
              bool hasIsCheckAudioBitrateFail() const { return this->isCheckAudioBitrateFail_ != nullptr;};
              void deleteIsCheckAudioBitrateFail() { this->isCheckAudioBitrateFail_ = nullptr;};
              inline string getIsCheckAudioBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrateFail_, "") };
              inline TransConfig& setIsCheckAudioBitrateFail(string isCheckAudioBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrateFail_, isCheckAudioBitrateFail) };


              // isCheckReso Field Functions 
              bool hasIsCheckReso() const { return this->isCheckReso_ != nullptr;};
              void deleteIsCheckReso() { this->isCheckReso_ = nullptr;};
              inline string getIsCheckReso() const { DARABONBA_PTR_GET_DEFAULT(isCheckReso_, "") };
              inline TransConfig& setIsCheckReso(string isCheckReso) { DARABONBA_PTR_SET_VALUE(isCheckReso_, isCheckReso) };


              // isCheckResoFail Field Functions 
              bool hasIsCheckResoFail() const { return this->isCheckResoFail_ != nullptr;};
              void deleteIsCheckResoFail() { this->isCheckResoFail_ = nullptr;};
              inline string getIsCheckResoFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckResoFail_, "") };
              inline TransConfig& setIsCheckResoFail(string isCheckResoFail) { DARABONBA_PTR_SET_VALUE(isCheckResoFail_, isCheckResoFail) };


              // isCheckVideoBitrate Field Functions 
              bool hasIsCheckVideoBitrate() const { return this->isCheckVideoBitrate_ != nullptr;};
              void deleteIsCheckVideoBitrate() { this->isCheckVideoBitrate_ = nullptr;};
              inline string getIsCheckVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrate_, "") };
              inline TransConfig& setIsCheckVideoBitrate(string isCheckVideoBitrate) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrate_, isCheckVideoBitrate) };


              // isCheckVideoBitrateFail Field Functions 
              bool hasIsCheckVideoBitrateFail() const { return this->isCheckVideoBitrateFail_ != nullptr;};
              void deleteIsCheckVideoBitrateFail() { this->isCheckVideoBitrateFail_ = nullptr;};
              inline string getIsCheckVideoBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrateFail_, "") };
              inline TransConfig& setIsCheckVideoBitrateFail(string isCheckVideoBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrateFail_, isCheckVideoBitrateFail) };


              // transMode Field Functions 
              bool hasTransMode() const { return this->transMode_ != nullptr;};
              void deleteTransMode() { this->transMode_ = nullptr;};
              inline string getTransMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
              inline TransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


            protected:
              // The method that is used to adjust the resolution. This parameter takes effect only if both the Width and Height parameters are specified. You can use this parameter together with the LongShortMode parameter.
              // 
              // Valid values: rescale, crop, pad, and none.
              // 
              // Default value: none.
              shared_ptr<string> adjDarMethod_ {};
              // Specifies whether to check the audio bitrate. You can specify only one of the IsCheckAudioBitrate and IsCheckAudioBitrateFail parameters. The priority of the IsCheckAudioBitrateFail parameter is higher. Valid values:
              // 
              // *   true: checks the video resolution. If the bitrate of the input audio is less than that of the output audio, the bitrate of the input audio is used for transcoding.
              // *   false: does not check the video resolution.
              // 
              // Default value:
              // 
              // *   If this parameter is not specified and the codec of the output audio is different from that of the input audio, the default value is false.
              // *   If this parameter is not specified and the codec of the output audio is the same as that of the input audio, the default value is true.
              shared_ptr<string> isCheckAudioBitrate_ {};
              // Specifies whether to check the audio bitrate. You can specify only one of the IsCheckAudioBitrate and IsCheckAudioBitrateFail parameters. The priority of the IsCheckAudioBitrateFail parameter is higher. Valid values:
              // 
              // *   true: checks the video resolution. If the bitrate of the input audio is less than that of the output audio, the transcoding job fails.
              // *   false: does not check the video resolution.
              // 
              // Default value: false.
              shared_ptr<string> isCheckAudioBitrateFail_ {};
              // Specifies whether to check the video resolution. You can specify only one of the IsCheckReso and IsCheckResoFail parameters. The priority of the IsCheckResoFail parameter is higher. Valid values:
              // 
              // *   true: checks the video resolution. If the width or height of the input video is less than that of the output video, the resolution of the input video is used for transcoding.
              // *   false: does not check the video resolution.
              // 
              // Default value: false.
              shared_ptr<string> isCheckReso_ {};
              // Specifies whether to check the video resolution. You can specify only one of the IsCheckReso and IsCheckResoFail parameters. The priority of the IsCheckResoFail parameter is higher. Valid values:
              // 
              // *   true: checks the video resolution. If the width or height of the input video is less than that of the output video, the transcoding job fails.
              // *   false: does not check the video resolution.
              // 
              // Default value: false.
              shared_ptr<string> isCheckResoFail_ {};
              // Specifies whether to check the video bitrate. You can specify only one of the IsCheckVideoBitrate and IsCheckVideoBitrateFail parameters. The priority of the IsCheckVideoBitrateFail parameter is higher. Valid values:
              // 
              // *   true: checks the video resolution. If the bitrate of the input video is less than that of the output video, the bitrate of the input video is used for transcoding.
              // *   false: does not check the video resolution.
              // 
              // Default value: false.
              shared_ptr<string> isCheckVideoBitrate_ {};
              // Specifies whether to check the video bitrate. You can specify only one of the IsCheckVideoBitrate and IsCheckVideoBitrateFail parameters. The priority of the IsCheckVideoBitrateFail parameter is higher. Valid values:
              // 
              // *   true: checks the video resolution. If the bitrate of the input video is less than that of the output video, the transcoding job fails.
              // *   false: does not check the video resolution.
              // 
              // Default value: false.
              shared_ptr<string> isCheckVideoBitrateFail_ {};
              // The video transcoding mode. Valid values:
              // 
              // *   onepass: You can set this parameter to onepass if the Bitrate parameter is set to ABR. The encoding speed of this mode is faster than that of the twopass mode.
              // *   twopass: You can set this parameter to twopass if the Bitrate parameter is set to VBR. The encoding speed of this mode is slower than that of the onepass mode.
              // *   CBR: the constant bitrate mode.
              // 
              // Default value: onepass.
              shared_ptr<string> transMode_ {};
            };

            class MuxConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const MuxConfig& obj) { 
                DARABONBA_PTR_TO_JSON(Segment, segment_);
              };
              friend void from_json(const Darabonba::Json& j, MuxConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(Segment, segment_);
              };
              MuxConfig() = default ;
              MuxConfig(const MuxConfig &) = default ;
              MuxConfig(MuxConfig &&) = default ;
              MuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~MuxConfig() = default ;
              MuxConfig& operator=(const MuxConfig &) = default ;
              MuxConfig& operator=(MuxConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Segment : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Segment& obj) { 
                  DARABONBA_PTR_TO_JSON(Duration, duration_);
                  DARABONBA_PTR_TO_JSON(ForceSegTime, forceSegTime_);
                };
                friend void from_json(const Darabonba::Json& j, Segment& obj) { 
                  DARABONBA_PTR_FROM_JSON(Duration, duration_);
                  DARABONBA_PTR_FROM_JSON(ForceSegTime, forceSegTime_);
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
        && this->forceSegTime_ == nullptr; };
                // duration Field Functions 
                bool hasDuration() const { return this->duration_ != nullptr;};
                void deleteDuration() { this->duration_ = nullptr;};
                inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                inline Segment& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                // forceSegTime Field Functions 
                bool hasForceSegTime() const { return this->forceSegTime_ != nullptr;};
                void deleteForceSegTime() { this->forceSegTime_ = nullptr;};
                inline string getForceSegTime() const { DARABONBA_PTR_GET_DEFAULT(forceSegTime_, "") };
                inline Segment& setForceSegTime(string forceSegTime) { DARABONBA_PTR_SET_VALUE(forceSegTime_, forceSegTime) };


              protected:
                // The segment length.
                shared_ptr<string> duration_ {};
                // The forced segmentation point in time.
                shared_ptr<string> forceSegTime_ {};
              };

              virtual bool empty() const override { return this->segment_ == nullptr; };
              // segment Field Functions 
              bool hasSegment() const { return this->segment_ != nullptr;};
              void deleteSegment() { this->segment_ = nullptr;};
              inline const MuxConfig::Segment & getSegment() const { DARABONBA_PTR_GET_CONST(segment_, MuxConfig::Segment) };
              inline MuxConfig::Segment getSegment() { DARABONBA_PTR_GET(segment_, MuxConfig::Segment) };
              inline MuxConfig& setSegment(const MuxConfig::Segment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
              inline MuxConfig& setSegment(MuxConfig::Segment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


            protected:
              // The segment settings.
              shared_ptr<MuxConfig::Segment> segment_ {};
            };

            class Container : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Container& obj) { 
                DARABONBA_PTR_TO_JSON(Format, format_);
              };
              friend void from_json(const Darabonba::Json& j, Container& obj) { 
                DARABONBA_PTR_FROM_JSON(Format, format_);
              };
              Container() = default ;
              Container(const Container &) = default ;
              Container(Container &&) = default ;
              Container(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Container() = default ;
              Container& operator=(const Container &) = default ;
              Container& operator=(Container &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->format_ == nullptr; };
              // format Field Functions 
              bool hasFormat() const { return this->format_ != nullptr;};
              void deleteFormat() { this->format_ = nullptr;};
              inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
              inline Container& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


            protected:
              // The container format.
              shared_ptr<string> format_ {};
            };

            class Audio : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Audio& obj) { 
                DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_TO_JSON(Channels, channels_);
                DARABONBA_PTR_TO_JSON(Codec, codec_);
                DARABONBA_PTR_TO_JSON(Profile, profile_);
                DARABONBA_PTR_TO_JSON(Remove, remove_);
                DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
                DARABONBA_PTR_TO_JSON(Volume, volume_);
              };
              friend void from_json(const Darabonba::Json& j, Audio& obj) { 
                DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_FROM_JSON(Channels, channels_);
                DARABONBA_PTR_FROM_JSON(Codec, codec_);
                DARABONBA_PTR_FROM_JSON(Profile, profile_);
                DARABONBA_PTR_FROM_JSON(Remove, remove_);
                DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
                DARABONBA_PTR_FROM_JSON(Volume, volume_);
              };
              Audio() = default ;
              Audio(const Audio &) = default ;
              Audio(Audio &&) = default ;
              Audio(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Audio() = default ;
              Audio& operator=(const Audio &) = default ;
              Audio& operator=(Audio &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Volume : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Volume& obj) { 
                  DARABONBA_PTR_TO_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
                  DARABONBA_PTR_TO_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
                  DARABONBA_PTR_TO_JSON(Method, method_);
                  DARABONBA_PTR_TO_JSON(TruePeak, truePeak_);
                };
                friend void from_json(const Darabonba::Json& j, Volume& obj) { 
                  DARABONBA_PTR_FROM_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
                  DARABONBA_PTR_FROM_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
                  DARABONBA_PTR_FROM_JSON(Method, method_);
                  DARABONBA_PTR_FROM_JSON(TruePeak, truePeak_);
                };
                Volume() = default ;
                Volume(const Volume &) = default ;
                Volume(Volume &&) = default ;
                Volume(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Volume() = default ;
                Volume& operator=(const Volume &) = default ;
                Volume& operator=(Volume &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->integratedLoudnessTarget_ == nullptr
        && this->loudnessRangeTarget_ == nullptr && this->method_ == nullptr && this->truePeak_ == nullptr; };
                // integratedLoudnessTarget Field Functions 
                bool hasIntegratedLoudnessTarget() const { return this->integratedLoudnessTarget_ != nullptr;};
                void deleteIntegratedLoudnessTarget() { this->integratedLoudnessTarget_ = nullptr;};
                inline string getIntegratedLoudnessTarget() const { DARABONBA_PTR_GET_DEFAULT(integratedLoudnessTarget_, "") };
                inline Volume& setIntegratedLoudnessTarget(string integratedLoudnessTarget) { DARABONBA_PTR_SET_VALUE(integratedLoudnessTarget_, integratedLoudnessTarget) };


                // loudnessRangeTarget Field Functions 
                bool hasLoudnessRangeTarget() const { return this->loudnessRangeTarget_ != nullptr;};
                void deleteLoudnessRangeTarget() { this->loudnessRangeTarget_ = nullptr;};
                inline string getLoudnessRangeTarget() const { DARABONBA_PTR_GET_DEFAULT(loudnessRangeTarget_, "") };
                inline Volume& setLoudnessRangeTarget(string loudnessRangeTarget) { DARABONBA_PTR_SET_VALUE(loudnessRangeTarget_, loudnessRangeTarget) };


                // method Field Functions 
                bool hasMethod() const { return this->method_ != nullptr;};
                void deleteMethod() { this->method_ = nullptr;};
                inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
                inline Volume& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


                // truePeak Field Functions 
                bool hasTruePeak() const { return this->truePeak_ != nullptr;};
                void deleteTruePeak() { this->truePeak_ = nullptr;};
                inline string getTruePeak() const { DARABONBA_PTR_GET_DEFAULT(truePeak_, "") };
                inline Volume& setTruePeak(string truePeak) { DARABONBA_PTR_SET_VALUE(truePeak_, truePeak) };


              protected:
                // The output volume.
                shared_ptr<string> integratedLoudnessTarget_ {};
                // The volume range.
                shared_ptr<string> loudnessRangeTarget_ {};
                // The volume adjustment method. Valid values:
                shared_ptr<string> method_ {};
                // The peak volume.
                shared_ptr<string> truePeak_ {};
              };

              virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channels_ == nullptr && this->codec_ == nullptr && this->profile_ == nullptr && this->remove_ == nullptr && this->samplerate_ == nullptr
        && this->volume_ == nullptr; };
              // bitrate Field Functions 
              bool hasBitrate() const { return this->bitrate_ != nullptr;};
              void deleteBitrate() { this->bitrate_ = nullptr;};
              inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
              inline Audio& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


              // channels Field Functions 
              bool hasChannels() const { return this->channels_ != nullptr;};
              void deleteChannels() { this->channels_ = nullptr;};
              inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
              inline Audio& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


              // codec Field Functions 
              bool hasCodec() const { return this->codec_ != nullptr;};
              void deleteCodec() { this->codec_ = nullptr;};
              inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
              inline Audio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


              // profile Field Functions 
              bool hasProfile() const { return this->profile_ != nullptr;};
              void deleteProfile() { this->profile_ = nullptr;};
              inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
              inline Audio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


              // remove Field Functions 
              bool hasRemove() const { return this->remove_ != nullptr;};
              void deleteRemove() { this->remove_ = nullptr;};
              inline string getRemove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
              inline Audio& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


              // samplerate Field Functions 
              bool hasSamplerate() const { return this->samplerate_ != nullptr;};
              void deleteSamplerate() { this->samplerate_ = nullptr;};
              inline string getSamplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
              inline Audio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


              // volume Field Functions 
              bool hasVolume() const { return this->volume_ != nullptr;};
              void deleteVolume() { this->volume_ = nullptr;};
              inline const Audio::Volume & getVolume() const { DARABONBA_PTR_GET_CONST(volume_, Audio::Volume) };
              inline Audio::Volume getVolume() { DARABONBA_PTR_GET(volume_, Audio::Volume) };
              inline Audio& setVolume(const Audio::Volume & volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };
              inline Audio& setVolume(Audio::Volume && volume) { DARABONBA_PTR_SET_RVALUE(volume_, volume) };


            protected:
              // The audio bitrate of the output file. Valid values: [8,1000]. Unit: Kbit/s. Default value: 128.
              shared_ptr<string> bitrate_ {};
              // The number of sound channels. Default value: 2.
              shared_ptr<string> channels_ {};
              // The audio codec. Valid values: AAC, MP3, VORBIS, and FLAC. Default value: AAC.
              shared_ptr<string> codec_ {};
              // The audio codec profile. If the Codec parameter is set to AAC, the valid values are aac_low, aac_he, aac_he_v2, aac_ld, and aac_eld.
              shared_ptr<string> profile_ {};
              // Specifies whether to delete the audio stream.
              shared_ptr<string> remove_ {};
              // The sampling rate. Valid values: 22050, 32000, 44100, 48000, and 96000. Default value: 44100. Unit: Hz.
              shared_ptr<string> samplerate_ {};
              // The volume configurations.
              shared_ptr<Audio::Volume> volume_ {};
            };

            virtual bool empty() const override { return this->audio_ == nullptr
        && this->container_ == nullptr && this->muxConfig_ == nullptr && this->transConfig_ == nullptr && this->video_ == nullptr; };
            // audio Field Functions 
            bool hasAudio() const { return this->audio_ != nullptr;};
            void deleteAudio() { this->audio_ = nullptr;};
            inline const OverwriteParams::Audio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, OverwriteParams::Audio) };
            inline OverwriteParams::Audio getAudio() { DARABONBA_PTR_GET(audio_, OverwriteParams::Audio) };
            inline OverwriteParams& setAudio(const OverwriteParams::Audio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
            inline OverwriteParams& setAudio(OverwriteParams::Audio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


            // container Field Functions 
            bool hasContainer() const { return this->container_ != nullptr;};
            void deleteContainer() { this->container_ = nullptr;};
            inline const OverwriteParams::Container & getContainer() const { DARABONBA_PTR_GET_CONST(container_, OverwriteParams::Container) };
            inline OverwriteParams::Container getContainer() { DARABONBA_PTR_GET(container_, OverwriteParams::Container) };
            inline OverwriteParams& setContainer(const OverwriteParams::Container & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
            inline OverwriteParams& setContainer(OverwriteParams::Container && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


            // muxConfig Field Functions 
            bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
            void deleteMuxConfig() { this->muxConfig_ = nullptr;};
            inline const OverwriteParams::MuxConfig & getMuxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, OverwriteParams::MuxConfig) };
            inline OverwriteParams::MuxConfig getMuxConfig() { DARABONBA_PTR_GET(muxConfig_, OverwriteParams::MuxConfig) };
            inline OverwriteParams& setMuxConfig(const OverwriteParams::MuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
            inline OverwriteParams& setMuxConfig(OverwriteParams::MuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


            // transConfig Field Functions 
            bool hasTransConfig() const { return this->transConfig_ != nullptr;};
            void deleteTransConfig() { this->transConfig_ = nullptr;};
            inline const OverwriteParams::TransConfig & getTransConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, OverwriteParams::TransConfig) };
            inline OverwriteParams::TransConfig getTransConfig() { DARABONBA_PTR_GET(transConfig_, OverwriteParams::TransConfig) };
            inline OverwriteParams& setTransConfig(const OverwriteParams::TransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
            inline OverwriteParams& setTransConfig(OverwriteParams::TransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


            // video Field Functions 
            bool hasVideo() const { return this->video_ != nullptr;};
            void deleteVideo() { this->video_ = nullptr;};
            inline const OverwriteParams::Video & getVideo() const { DARABONBA_PTR_GET_CONST(video_, OverwriteParams::Video) };
            inline OverwriteParams::Video getVideo() { DARABONBA_PTR_GET(video_, OverwriteParams::Video) };
            inline OverwriteParams& setVideo(const OverwriteParams::Video & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
            inline OverwriteParams& setVideo(OverwriteParams::Video && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


          protected:
            // The audio settings.
            shared_ptr<OverwriteParams::Audio> audio_ {};
            // The encapsulation format settings.
            shared_ptr<OverwriteParams::Container> container_ {};
            // The encapsulation settings.
            shared_ptr<OverwriteParams::MuxConfig> muxConfig_ {};
            // The conditional transcoding configurations.
            shared_ptr<OverwriteParams::TransConfig> transConfig_ {};
            // The video settings.
            shared_ptr<OverwriteParams::Video> video_ {};
          };

          virtual bool empty() const override { return this->overwriteParams_ == nullptr
        && this->templateId_ == nullptr; };
          // overwriteParams Field Functions 
          bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
          void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
          inline const Transcode::OverwriteParams & getOverwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, Transcode::OverwriteParams) };
          inline Transcode::OverwriteParams getOverwriteParams() { DARABONBA_PTR_GET(overwriteParams_, Transcode::OverwriteParams) };
          inline Transcode& setOverwriteParams(const Transcode::OverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
          inline Transcode& setOverwriteParams(Transcode::OverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline Transcode& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        protected:
          // The parameters that are used to overwrite the corresponding parameters of the template.
          shared_ptr<Transcode::OverwriteParams> overwriteParams_ {};
          // The template ID.
          // 
          // This parameter is required.
          shared_ptr<string> templateId_ {};
        };

        class TextWatermarks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TextWatermarks& obj) { 
            DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          };
          friend void from_json(const Darabonba::Json& j, TextWatermarks& obj) { 
            DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          };
          TextWatermarks() = default ;
          TextWatermarks(const TextWatermarks &) = default ;
          TextWatermarks(TextWatermarks &&) = default ;
          TextWatermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TextWatermarks() = default ;
          TextWatermarks& operator=(const TextWatermarks &) = default ;
          TextWatermarks& operator=(TextWatermarks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OverwriteParams : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OverwriteParams& obj) { 
              DARABONBA_PTR_TO_JSON(Adaptive, adaptive_);
              DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
              DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(FontAlpha, fontAlpha_);
              DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
              DARABONBA_PTR_TO_JSON(FontName, fontName_);
              DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
              DARABONBA_PTR_TO_JSON(Left, left_);
              DARABONBA_PTR_TO_JSON(Top, top_);
            };
            friend void from_json(const Darabonba::Json& j, OverwriteParams& obj) { 
              DARABONBA_PTR_FROM_JSON(Adaptive, adaptive_);
              DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
              DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(FontAlpha, fontAlpha_);
              DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
              DARABONBA_PTR_FROM_JSON(FontName, fontName_);
              DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
              DARABONBA_PTR_FROM_JSON(Left, left_);
              DARABONBA_PTR_FROM_JSON(Top, top_);
            };
            OverwriteParams() = default ;
            OverwriteParams(const OverwriteParams &) = default ;
            OverwriteParams(OverwriteParams &&) = default ;
            OverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OverwriteParams() = default ;
            OverwriteParams& operator=(const OverwriteParams &) = default ;
            OverwriteParams& operator=(OverwriteParams &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->adaptive_ == nullptr
        && this->borderColor_ == nullptr && this->borderWidth_ == nullptr && this->content_ == nullptr && this->fontAlpha_ == nullptr && this->fontColor_ == nullptr
        && this->fontName_ == nullptr && this->fontSize_ == nullptr && this->left_ == nullptr && this->top_ == nullptr; };
            // adaptive Field Functions 
            bool hasAdaptive() const { return this->adaptive_ != nullptr;};
            void deleteAdaptive() { this->adaptive_ = nullptr;};
            inline string getAdaptive() const { DARABONBA_PTR_GET_DEFAULT(adaptive_, "") };
            inline OverwriteParams& setAdaptive(string adaptive) { DARABONBA_PTR_SET_VALUE(adaptive_, adaptive) };


            // borderColor Field Functions 
            bool hasBorderColor() const { return this->borderColor_ != nullptr;};
            void deleteBorderColor() { this->borderColor_ = nullptr;};
            inline string getBorderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
            inline OverwriteParams& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


            // borderWidth Field Functions 
            bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
            void deleteBorderWidth() { this->borderWidth_ = nullptr;};
            inline int32_t getBorderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, 0) };
            inline OverwriteParams& setBorderWidth(int32_t borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline OverwriteParams& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // fontAlpha Field Functions 
            bool hasFontAlpha() const { return this->fontAlpha_ != nullptr;};
            void deleteFontAlpha() { this->fontAlpha_ = nullptr;};
            inline string getFontAlpha() const { DARABONBA_PTR_GET_DEFAULT(fontAlpha_, "") };
            inline OverwriteParams& setFontAlpha(string fontAlpha) { DARABONBA_PTR_SET_VALUE(fontAlpha_, fontAlpha) };


            // fontColor Field Functions 
            bool hasFontColor() const { return this->fontColor_ != nullptr;};
            void deleteFontColor() { this->fontColor_ = nullptr;};
            inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
            inline OverwriteParams& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


            // fontName Field Functions 
            bool hasFontName() const { return this->fontName_ != nullptr;};
            void deleteFontName() { this->fontName_ = nullptr;};
            inline string getFontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
            inline OverwriteParams& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


            // fontSize Field Functions 
            bool hasFontSize() const { return this->fontSize_ != nullptr;};
            void deleteFontSize() { this->fontSize_ = nullptr;};
            inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
            inline OverwriteParams& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


            // left Field Functions 
            bool hasLeft() const { return this->left_ != nullptr;};
            void deleteLeft() { this->left_ = nullptr;};
            inline string getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, "") };
            inline OverwriteParams& setLeft(string left) { DARABONBA_PTR_SET_VALUE(left_, left) };


            // top Field Functions 
            bool hasTop() const { return this->top_ != nullptr;};
            void deleteTop() { this->top_ = nullptr;};
            inline string getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, "") };
            inline OverwriteParams& setTop(string top) { DARABONBA_PTR_SET_VALUE(top_, top) };


          protected:
            // Specifies whether to the font size based on the output video dimensions. true / false, default: false
            shared_ptr<string> adaptive_ {};
            // The outline color of the text watermark. Default value: black. For more information, see BorderColor.
            shared_ptr<string> borderColor_ {};
            // The outline width of the text watermark.
            // 
            // *   Default value: 0.
            // *   Valid values: (0,4096].
            shared_ptr<int32_t> borderWidth_ {};
            // The watermark text. Base64 encoding is not required. The string must be encoded in UTF-8.
            shared_ptr<string> content_ {};
            // The transparency of the text.
            // 
            // *   Valid values: (0,1].
            // *   Default value: 1.
            shared_ptr<string> fontAlpha_ {};
            // The color of the text.
            shared_ptr<string> fontColor_ {};
            // The font of the text. Default value: SimSun.
            shared_ptr<string> fontName_ {};
            // The size of the text.
            // 
            // *   Default value: 16.
            // *   Valid values: (4,120).
            shared_ptr<int32_t> fontSize_ {};
            // The left margin of the text watermark.
            // 
            // *   Default value: 0.
            // *   Valid values: [0,4096].
            shared_ptr<string> left_ {};
            // The top margin of the text.
            // 
            // *   Default value: 0.
            // *   Valid values: [0,4096].
            shared_ptr<string> top_ {};
          };

          virtual bool empty() const override { return this->overwriteParams_ == nullptr
        && this->templateId_ == nullptr; };
          // overwriteParams Field Functions 
          bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
          void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
          inline const TextWatermarks::OverwriteParams & getOverwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, TextWatermarks::OverwriteParams) };
          inline TextWatermarks::OverwriteParams getOverwriteParams() { DARABONBA_PTR_GET(overwriteParams_, TextWatermarks::OverwriteParams) };
          inline TextWatermarks& setOverwriteParams(const TextWatermarks::OverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
          inline TextWatermarks& setOverwriteParams(TextWatermarks::OverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline TextWatermarks& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        protected:
          // The parameters that are used to overwrite the corresponding parameters of the template.
          shared_ptr<TextWatermarks::OverwriteParams> overwriteParams_ {};
          // The template ID.
          // 
          // This parameter is required.
          shared_ptr<string> templateId_ {};
        };

        class Subtitles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Subtitles& obj) { 
            DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          };
          friend void from_json(const Darabonba::Json& j, Subtitles& obj) { 
            DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
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
          class OverwriteParams : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OverwriteParams& obj) { 
              DARABONBA_PTR_TO_JSON(CharEnc, charEnc_);
              DARABONBA_PTR_TO_JSON(File, file_);
              DARABONBA_PTR_TO_JSON(Format, format_);
            };
            friend void from_json(const Darabonba::Json& j, OverwriteParams& obj) { 
              DARABONBA_PTR_FROM_JSON(CharEnc, charEnc_);
              DARABONBA_PTR_FROM_JSON(File, file_);
              DARABONBA_PTR_FROM_JSON(Format, format_);
            };
            OverwriteParams() = default ;
            OverwriteParams(const OverwriteParams &) = default ;
            OverwriteParams(OverwriteParams &&) = default ;
            OverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OverwriteParams() = default ;
            OverwriteParams& operator=(const OverwriteParams &) = default ;
            OverwriteParams& operator=(OverwriteParams &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class File : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const File& obj) { 
                DARABONBA_PTR_TO_JSON(Media, media_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, File& obj) { 
                DARABONBA_PTR_FROM_JSON(Media, media_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              File() = default ;
              File(const File &) = default ;
              File(File &&) = default ;
              File(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~File() = default ;
              File& operator=(const File &) = default ;
              File& operator=(File &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
              // media Field Functions 
              bool hasMedia() const { return this->media_ != nullptr;};
              void deleteMedia() { this->media_ = nullptr;};
              inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
              inline File& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline File& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // The media object.
              // 
              // *   If Type is set to OSS, set this parameter to the URL of an OSS object. Both the OSS and HTTP protocols are supported.
              // *   If Type is set to Media, set this parameter to the ID of a media asset.
              shared_ptr<string> media_ {};
              // The type of the media object. Valid values:
              // 
              // *   OSS: an OSS object.
              // *   Media: a media asset.
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->charEnc_ == nullptr
        && this->file_ == nullptr && this->format_ == nullptr; };
            // charEnc Field Functions 
            bool hasCharEnc() const { return this->charEnc_ != nullptr;};
            void deleteCharEnc() { this->charEnc_ = nullptr;};
            inline string getCharEnc() const { DARABONBA_PTR_GET_DEFAULT(charEnc_, "") };
            inline OverwriteParams& setCharEnc(string charEnc) { DARABONBA_PTR_SET_VALUE(charEnc_, charEnc) };


            // file Field Functions 
            bool hasFile() const { return this->file_ != nullptr;};
            void deleteFile() { this->file_ = nullptr;};
            inline const OverwriteParams::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, OverwriteParams::File) };
            inline OverwriteParams::File getFile() { DARABONBA_PTR_GET(file_, OverwriteParams::File) };
            inline OverwriteParams& setFile(const OverwriteParams::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
            inline OverwriteParams& setFile(OverwriteParams::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
            inline OverwriteParams& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          protected:
            // The file encoding format.
            shared_ptr<string> charEnc_ {};
            // The subtitle file.
            shared_ptr<OverwriteParams::File> file_ {};
            // The format of the subtitle file.
            shared_ptr<string> format_ {};
          };

          virtual bool empty() const override { return this->overwriteParams_ == nullptr
        && this->templateId_ == nullptr; };
          // overwriteParams Field Functions 
          bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
          void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
          inline const Subtitles::OverwriteParams & getOverwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, Subtitles::OverwriteParams) };
          inline Subtitles::OverwriteParams getOverwriteParams() { DARABONBA_PTR_GET(overwriteParams_, Subtitles::OverwriteParams) };
          inline Subtitles& setOverwriteParams(const Subtitles::OverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
          inline Subtitles& setOverwriteParams(Subtitles::OverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline Subtitles& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        protected:
          // The parameters that are used to overwrite the corresponding parameters of the template.
          shared_ptr<Subtitles::OverwriteParams> overwriteParams_ {};
          // The template ID.
          // 
          // This parameter is required.
          shared_ptr<string> templateId_ {};
        };

        class ImageWatermarks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageWatermarks& obj) { 
            DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          };
          friend void from_json(const Darabonba::Json& j, ImageWatermarks& obj) { 
            DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          };
          ImageWatermarks() = default ;
          ImageWatermarks(const ImageWatermarks &) = default ;
          ImageWatermarks(ImageWatermarks &&) = default ;
          ImageWatermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageWatermarks() = default ;
          ImageWatermarks& operator=(const ImageWatermarks &) = default ;
          ImageWatermarks& operator=(ImageWatermarks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OverwriteParams : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OverwriteParams& obj) { 
              DARABONBA_PTR_TO_JSON(Dx, dx_);
              DARABONBA_PTR_TO_JSON(Dy, dy_);
              DARABONBA_PTR_TO_JSON(File, file_);
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
              DARABONBA_PTR_TO_JSON(Timeline, timeline_);
              DARABONBA_PTR_TO_JSON(Width, width_);
            };
            friend void from_json(const Darabonba::Json& j, OverwriteParams& obj) { 
              DARABONBA_PTR_FROM_JSON(Dx, dx_);
              DARABONBA_PTR_FROM_JSON(Dy, dy_);
              DARABONBA_PTR_FROM_JSON(File, file_);
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
              DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
            };
            OverwriteParams() = default ;
            OverwriteParams(const OverwriteParams &) = default ;
            OverwriteParams(OverwriteParams &&) = default ;
            OverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OverwriteParams() = default ;
            OverwriteParams& operator=(const OverwriteParams &) = default ;
            OverwriteParams& operator=(OverwriteParams &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Timeline : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Timeline& obj) { 
                DARABONBA_PTR_TO_JSON(Duration, duration_);
                DARABONBA_PTR_TO_JSON(Start, start_);
              };
              friend void from_json(const Darabonba::Json& j, Timeline& obj) { 
                DARABONBA_PTR_FROM_JSON(Duration, duration_);
                DARABONBA_PTR_FROM_JSON(Start, start_);
              };
              Timeline() = default ;
              Timeline(const Timeline &) = default ;
              Timeline(Timeline &&) = default ;
              Timeline(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Timeline() = default ;
              Timeline& operator=(const Timeline &) = default ;
              Timeline& operator=(Timeline &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
              // duration Field Functions 
              bool hasDuration() const { return this->duration_ != nullptr;};
              void deleteDuration() { this->duration_ = nullptr;};
              inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
              inline Timeline& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


              // start Field Functions 
              bool hasStart() const { return this->start_ != nullptr;};
              void deleteStart() { this->start_ = nullptr;};
              inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
              inline Timeline& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


            protected:
              // The time range in which the watermark is displayed.
              // 
              // *   Valid values: integers and ToEND.
              // *   Default value: ToEND.
              shared_ptr<string> duration_ {};
              // The beginning of the time range in which the watermark is displayed.
              // 
              // *   Unit: seconds.
              // *   Value values: integers.
              // *   Default value: 0.
              shared_ptr<string> start_ {};
            };

            class File : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const File& obj) { 
                DARABONBA_PTR_TO_JSON(Media, media_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, File& obj) { 
                DARABONBA_PTR_FROM_JSON(Media, media_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              File() = default ;
              File(const File &) = default ;
              File(File &&) = default ;
              File(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~File() = default ;
              File& operator=(const File &) = default ;
              File& operator=(File &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
              // media Field Functions 
              bool hasMedia() const { return this->media_ != nullptr;};
              void deleteMedia() { this->media_ = nullptr;};
              inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
              inline File& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline File& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // The media object.
              // 
              // *   If Type is set to OSS, set this parameter to the URL of an OSS object. Both the OSS and HTTP protocols are supported.
              // *   If Type is set to Media, set this parameter to the ID of a media asset.
              shared_ptr<string> media_ {};
              // The type of the media object. Valid values:
              // 
              // *   OSS: an OSS object.
              // *   Media: a media asset.
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->dx_ == nullptr
        && this->dy_ == nullptr && this->file_ == nullptr && this->height_ == nullptr && this->referPos_ == nullptr && this->timeline_ == nullptr
        && this->width_ == nullptr; };
            // dx Field Functions 
            bool hasDx() const { return this->dx_ != nullptr;};
            void deleteDx() { this->dx_ = nullptr;};
            inline string getDx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
            inline OverwriteParams& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


            // dy Field Functions 
            bool hasDy() const { return this->dy_ != nullptr;};
            void deleteDy() { this->dy_ = nullptr;};
            inline string getDy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
            inline OverwriteParams& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


            // file Field Functions 
            bool hasFile() const { return this->file_ != nullptr;};
            void deleteFile() { this->file_ = nullptr;};
            inline const OverwriteParams::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, OverwriteParams::File) };
            inline OverwriteParams::File getFile() { DARABONBA_PTR_GET(file_, OverwriteParams::File) };
            inline OverwriteParams& setFile(const OverwriteParams::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
            inline OverwriteParams& setFile(OverwriteParams::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
            inline OverwriteParams& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // referPos Field Functions 
            bool hasReferPos() const { return this->referPos_ != nullptr;};
            void deleteReferPos() { this->referPos_ = nullptr;};
            inline string getReferPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
            inline OverwriteParams& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


            // timeline Field Functions 
            bool hasTimeline() const { return this->timeline_ != nullptr;};
            void deleteTimeline() { this->timeline_ = nullptr;};
            inline const OverwriteParams::Timeline & getTimeline() const { DARABONBA_PTR_GET_CONST(timeline_, OverwriteParams::Timeline) };
            inline OverwriteParams::Timeline getTimeline() { DARABONBA_PTR_GET(timeline_, OverwriteParams::Timeline) };
            inline OverwriteParams& setTimeline(const OverwriteParams::Timeline & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
            inline OverwriteParams& setTimeline(OverwriteParams::Timeline && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
            inline OverwriteParams& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            // The horizontal offset of the watermark relative to the output video. Default value: 0.
            // 
            // The following value types are supported:
            // 
            // *   Integer: the pixel value of the horizontal offset.
            // 
            //     *   Valid values: [8,4096].
            //     *   Unit: pixels.
            // 
            // *   Decimal: the ratio of the horizontal offset to the width of the output video.
            // 
            //     *   Valid values: (0,1).
            //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
            shared_ptr<string> dx_ {};
            // The vertical offset of the watermark relative to the output video. Default value: 0.
            // 
            // The following value types are supported:
            // 
            // *   Integer: the pixel value of the horizontal offset.
            // 
            //     *   Valid values: [8,4096].
            //     *   Unit: pixels.
            // 
            // *   Decimal: the ratio of the vertical offset to the height of the output video.
            // 
            //     *   Valid values: (0,1).
            //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
            shared_ptr<string> dy_ {};
            // The watermark image file.
            shared_ptr<OverwriteParams::File> file_ {};
            // The height of the watermark image in the output video. The following value types are supported:
            // 
            // *   Integer: the pixel value of the watermark height.
            // 
            //     *   Valid values: [8,4096].
            //     *   Unit: pixels.
            // 
            // *   Decimal: the ratio of the watermark height to the height of the output video.
            // 
            //     *   Valid values: (0,1).
            //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
            shared_ptr<string> height_ {};
            // The position of the watermark.
            // 
            // *   Valid values: TopRight, TopLeft, BottomRight, and BottomLeft.
            // *   Default value: TopRight.
            shared_ptr<string> referPos_ {};
            // The time settings of the dynamic watermark.
            shared_ptr<OverwriteParams::Timeline> timeline_ {};
            // The width of the watermark in the output video. The following value types are supported:
            // 
            // *   Integer: the pixel value of the watermark width.
            // 
            //     *   Valid values: [8,4096].
            //     *   Unit: pixels.
            // 
            // *   Decimal: the ratio of the watermark width to the width of the output video.
            // 
            //     *   Valid values: (0,1).
            //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
            shared_ptr<string> width_ {};
          };

          virtual bool empty() const override { return this->overwriteParams_ == nullptr
        && this->templateId_ == nullptr; };
          // overwriteParams Field Functions 
          bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
          void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
          inline const ImageWatermarks::OverwriteParams & getOverwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, ImageWatermarks::OverwriteParams) };
          inline ImageWatermarks::OverwriteParams getOverwriteParams() { DARABONBA_PTR_GET(overwriteParams_, ImageWatermarks::OverwriteParams) };
          inline ImageWatermarks& setOverwriteParams(const ImageWatermarks::OverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
          inline ImageWatermarks& setOverwriteParams(ImageWatermarks::OverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline ImageWatermarks& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        protected:
          // The parameters that are used to overwrite the corresponding parameters of the template.
          shared_ptr<ImageWatermarks::OverwriteParams> overwriteParams_ {};
          // The template ID.
          // 
          // This parameter is required.
          shared_ptr<string> templateId_ {};
        };

        class Encryption : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Encryption& obj) { 
            DARABONBA_PTR_TO_JSON(CipherText, cipherText_);
            DARABONBA_PTR_TO_JSON(DecryptKeyUri, decryptKeyUri_);
            DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
            DARABONBA_PTR_TO_JSON(KeyServiceType, keyServiceType_);
          };
          friend void from_json(const Darabonba::Json& j, Encryption& obj) { 
            DARABONBA_PTR_FROM_JSON(CipherText, cipherText_);
            DARABONBA_PTR_FROM_JSON(DecryptKeyUri, decryptKeyUri_);
            DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
            DARABONBA_PTR_FROM_JSON(KeyServiceType, keyServiceType_);
          };
          Encryption() = default ;
          Encryption(const Encryption &) = default ;
          Encryption(Encryption &&) = default ;
          Encryption(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Encryption() = default ;
          Encryption& operator=(const Encryption &) = default ;
          Encryption& operator=(Encryption &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cipherText_ == nullptr
        && this->decryptKeyUri_ == nullptr && this->encryptType_ == nullptr && this->keyServiceType_ == nullptr; };
          // cipherText Field Functions 
          bool hasCipherText() const { return this->cipherText_ != nullptr;};
          void deleteCipherText() { this->cipherText_ = nullptr;};
          inline string getCipherText() const { DARABONBA_PTR_GET_DEFAULT(cipherText_, "") };
          inline Encryption& setCipherText(string cipherText) { DARABONBA_PTR_SET_VALUE(cipherText_, cipherText) };


          // decryptKeyUri Field Functions 
          bool hasDecryptKeyUri() const { return this->decryptKeyUri_ != nullptr;};
          void deleteDecryptKeyUri() { this->decryptKeyUri_ = nullptr;};
          inline string getDecryptKeyUri() const { DARABONBA_PTR_GET_DEFAULT(decryptKeyUri_, "") };
          inline Encryption& setDecryptKeyUri(string decryptKeyUri) { DARABONBA_PTR_SET_VALUE(decryptKeyUri_, decryptKeyUri) };


          // encryptType Field Functions 
          bool hasEncryptType() const { return this->encryptType_ != nullptr;};
          void deleteEncryptType() { this->encryptType_ = nullptr;};
          inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
          inline Encryption& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


          // keyServiceType Field Functions 
          bool hasKeyServiceType() const { return this->keyServiceType_ != nullptr;};
          void deleteKeyServiceType() { this->keyServiceType_ = nullptr;};
          inline string getKeyServiceType() const { DARABONBA_PTR_GET_DEFAULT(keyServiceType_, "") };
          inline Encryption& setKeyServiceType(string keyServiceType) { DARABONBA_PTR_SET_VALUE(keyServiceType_, keyServiceType) };


        protected:
          // The ciphertext of HTTP Live Streaming (HLS) encryption.
          shared_ptr<string> cipherText_ {};
          // The address of the decryption service for HLS encryption.
          shared_ptr<string> decryptKeyUri_ {};
          // Specifies the encryption type. Valid values:
          // 
          // *   PrivateEncryption: Alibaba Cloud proprietary cryptography
          // *   HLSEncryption: HTTP Live Streaming (HLS) encryption
          shared_ptr<string> encryptType_ {};
          // The key service type for HLS encryption. Valid values:
          // 
          // *   KMS
          // *   Base64
          shared_ptr<string> keyServiceType_ {};
        };

        class CombineConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CombineConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(AudioIndex, audioIndex_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Start, start_);
            DARABONBA_PTR_TO_JSON(VideoIndex, videoIndex_);
          };
          friend void from_json(const Darabonba::Json& j, CombineConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioIndex, audioIndex_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Start, start_);
            DARABONBA_PTR_FROM_JSON(VideoIndex, videoIndex_);
          };
          CombineConfigs() = default ;
          CombineConfigs(const CombineConfigs &) = default ;
          CombineConfigs(CombineConfigs &&) = default ;
          CombineConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CombineConfigs() = default ;
          CombineConfigs& operator=(const CombineConfigs &) = default ;
          CombineConfigs& operator=(CombineConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->audioIndex_ == nullptr
        && this->duration_ == nullptr && this->start_ == nullptr && this->videoIndex_ == nullptr; };
          // audioIndex Field Functions 
          bool hasAudioIndex() const { return this->audioIndex_ != nullptr;};
          void deleteAudioIndex() { this->audioIndex_ = nullptr;};
          inline string getAudioIndex() const { DARABONBA_PTR_GET_DEFAULT(audioIndex_, "") };
          inline CombineConfigs& setAudioIndex(string audioIndex) { DARABONBA_PTR_SET_VALUE(audioIndex_, audioIndex) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
          inline CombineConfigs& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // start Field Functions 
          bool hasStart() const { return this->start_ != nullptr;};
          void deleteStart() { this->start_ = nullptr;};
          inline double getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0.0) };
          inline CombineConfigs& setStart(double start) { DARABONBA_PTR_SET_VALUE(start_, start) };


          // videoIndex Field Functions 
          bool hasVideoIndex() const { return this->videoIndex_ != nullptr;};
          void deleteVideoIndex() { this->videoIndex_ = nullptr;};
          inline string getVideoIndex() const { DARABONBA_PTR_GET_DEFAULT(videoIndex_, "") };
          inline CombineConfigs& setVideoIndex(string videoIndex) { DARABONBA_PTR_SET_VALUE(videoIndex_, videoIndex) };


        protected:
          // The audio stream index.
          // 
          // This parameter is required.
          shared_ptr<string> audioIndex_ {};
          // The duration of the input stream. The default value is the duration of the video.
          shared_ptr<double> duration_ {};
          // The start time of the input stream. Default value: 0.
          shared_ptr<double> start_ {};
          // The video stream index.
          // 
          // This parameter is required.
          shared_ptr<string> videoIndex_ {};
        };

        virtual bool empty() const override { return this->combineConfigs_ == nullptr
        && this->encryption_ == nullptr && this->imageWatermarks_ == nullptr && this->subtitles_ == nullptr && this->textWatermarks_ == nullptr && this->transcode_ == nullptr; };
        // combineConfigs Field Functions 
        bool hasCombineConfigs() const { return this->combineConfigs_ != nullptr;};
        void deleteCombineConfigs() { this->combineConfigs_ = nullptr;};
        inline const vector<ProcessConfig::CombineConfigs> & getCombineConfigs() const { DARABONBA_PTR_GET_CONST(combineConfigs_, vector<ProcessConfig::CombineConfigs>) };
        inline vector<ProcessConfig::CombineConfigs> getCombineConfigs() { DARABONBA_PTR_GET(combineConfigs_, vector<ProcessConfig::CombineConfigs>) };
        inline ProcessConfig& setCombineConfigs(const vector<ProcessConfig::CombineConfigs> & combineConfigs) { DARABONBA_PTR_SET_VALUE(combineConfigs_, combineConfigs) };
        inline ProcessConfig& setCombineConfigs(vector<ProcessConfig::CombineConfigs> && combineConfigs) { DARABONBA_PTR_SET_RVALUE(combineConfigs_, combineConfigs) };


        // encryption Field Functions 
        bool hasEncryption() const { return this->encryption_ != nullptr;};
        void deleteEncryption() { this->encryption_ = nullptr;};
        inline const ProcessConfig::Encryption & getEncryption() const { DARABONBA_PTR_GET_CONST(encryption_, ProcessConfig::Encryption) };
        inline ProcessConfig::Encryption getEncryption() { DARABONBA_PTR_GET(encryption_, ProcessConfig::Encryption) };
        inline ProcessConfig& setEncryption(const ProcessConfig::Encryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
        inline ProcessConfig& setEncryption(ProcessConfig::Encryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


        // imageWatermarks Field Functions 
        bool hasImageWatermarks() const { return this->imageWatermarks_ != nullptr;};
        void deleteImageWatermarks() { this->imageWatermarks_ = nullptr;};
        inline const vector<ProcessConfig::ImageWatermarks> & getImageWatermarks() const { DARABONBA_PTR_GET_CONST(imageWatermarks_, vector<ProcessConfig::ImageWatermarks>) };
        inline vector<ProcessConfig::ImageWatermarks> getImageWatermarks() { DARABONBA_PTR_GET(imageWatermarks_, vector<ProcessConfig::ImageWatermarks>) };
        inline ProcessConfig& setImageWatermarks(const vector<ProcessConfig::ImageWatermarks> & imageWatermarks) { DARABONBA_PTR_SET_VALUE(imageWatermarks_, imageWatermarks) };
        inline ProcessConfig& setImageWatermarks(vector<ProcessConfig::ImageWatermarks> && imageWatermarks) { DARABONBA_PTR_SET_RVALUE(imageWatermarks_, imageWatermarks) };


        // subtitles Field Functions 
        bool hasSubtitles() const { return this->subtitles_ != nullptr;};
        void deleteSubtitles() { this->subtitles_ = nullptr;};
        inline const vector<ProcessConfig::Subtitles> & getSubtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<ProcessConfig::Subtitles>) };
        inline vector<ProcessConfig::Subtitles> getSubtitles() { DARABONBA_PTR_GET(subtitles_, vector<ProcessConfig::Subtitles>) };
        inline ProcessConfig& setSubtitles(const vector<ProcessConfig::Subtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
        inline ProcessConfig& setSubtitles(vector<ProcessConfig::Subtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


        // textWatermarks Field Functions 
        bool hasTextWatermarks() const { return this->textWatermarks_ != nullptr;};
        void deleteTextWatermarks() { this->textWatermarks_ = nullptr;};
        inline const vector<ProcessConfig::TextWatermarks> & getTextWatermarks() const { DARABONBA_PTR_GET_CONST(textWatermarks_, vector<ProcessConfig::TextWatermarks>) };
        inline vector<ProcessConfig::TextWatermarks> getTextWatermarks() { DARABONBA_PTR_GET(textWatermarks_, vector<ProcessConfig::TextWatermarks>) };
        inline ProcessConfig& setTextWatermarks(const vector<ProcessConfig::TextWatermarks> & textWatermarks) { DARABONBA_PTR_SET_VALUE(textWatermarks_, textWatermarks) };
        inline ProcessConfig& setTextWatermarks(vector<ProcessConfig::TextWatermarks> && textWatermarks) { DARABONBA_PTR_SET_RVALUE(textWatermarks_, textWatermarks) };


        // transcode Field Functions 
        bool hasTranscode() const { return this->transcode_ != nullptr;};
        void deleteTranscode() { this->transcode_ = nullptr;};
        inline const ProcessConfig::Transcode & getTranscode() const { DARABONBA_PTR_GET_CONST(transcode_, ProcessConfig::Transcode) };
        inline ProcessConfig::Transcode getTranscode() { DARABONBA_PTR_GET(transcode_, ProcessConfig::Transcode) };
        inline ProcessConfig& setTranscode(const ProcessConfig::Transcode & transcode) { DARABONBA_PTR_SET_VALUE(transcode_, transcode) };
        inline ProcessConfig& setTranscode(ProcessConfig::Transcode && transcode) { DARABONBA_PTR_SET_RVALUE(transcode_, transcode) };


      protected:
        // The multi-input stream merge configuration.
        shared_ptr<vector<ProcessConfig::CombineConfigs>> combineConfigs_ {};
        // The encryption settings.
        shared_ptr<ProcessConfig::Encryption> encryption_ {};
        // The watermark configuration of an image.
        shared_ptr<vector<ProcessConfig::ImageWatermarks>> imageWatermarks_ {};
        // The subtitle configuration.
        shared_ptr<vector<ProcessConfig::Subtitles>> subtitles_ {};
        // The configurations of the text watermark.
        shared_ptr<vector<ProcessConfig::TextWatermarks>> textWatermarks_ {};
        // The transcoding configuration.
        // 
        // This parameter is required.
        shared_ptr<ProcessConfig::Transcode> transcode_ {};
      };

      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->media_ == nullptr
        && this->outputUrl_ == nullptr && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // outputUrl Field Functions 
        bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
        void deleteOutputUrl() { this->outputUrl_ = nullptr;};
        inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
        inline Output& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The media object.
        // 
        // *   If Type is set to OSS, set this parameter to the URL of an OSS object. Both the OSS and HTTP protocols are supported.
        // 
        // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the IMS console.
        // 
        // *   If Type is set to Media, set this parameter to the ID of a media asset.
        // 
        // This parameter is required.
        shared_ptr<string> media_ {};
        // The URL of the output stream.\\
        // This parameter takes effect only when Type is set to Media. You can select a specific file within the media asset as an output.\\
        // Supported placeholders:
        // 
        // *   {MediaId}: the ID of the media asset.
        // *   {JobId}: the ID of the transcoding subjob.
        // *   {MediaBucket}: the bucket to which the media asset belongs.
        // *   {ExtName}: the file suffix, which uses the output format of the transcoding template.
        // *   {DestMd5}: the MD5 value of the transcoded output file.\\
        //     Notes:
        // 
        // 1.  This parameter must contain the {MediaId} and {JobId} placeholders.
        // 2.  The output bucket is the same as the bucket to which the media asset belongs.
        shared_ptr<string> outputUrl_ {};
        // The type of the media object. Valid values:
        // 
        // *   OSS: an OSS object.
        // *   Media: a media asset.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->output_ == nullptr
        && this->processConfig_ == nullptr; };
      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const OutputGroup::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, OutputGroup::Output) };
      inline OutputGroup::Output getOutput() { DARABONBA_PTR_GET(output_, OutputGroup::Output) };
      inline OutputGroup& setOutput(const OutputGroup::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline OutputGroup& setOutput(OutputGroup::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


      // processConfig Field Functions 
      bool hasProcessConfig() const { return this->processConfig_ != nullptr;};
      void deleteProcessConfig() { this->processConfig_ = nullptr;};
      inline const OutputGroup::ProcessConfig & getProcessConfig() const { DARABONBA_PTR_GET_CONST(processConfig_, OutputGroup::ProcessConfig) };
      inline OutputGroup::ProcessConfig getProcessConfig() { DARABONBA_PTR_GET(processConfig_, OutputGroup::ProcessConfig) };
      inline OutputGroup& setProcessConfig(const OutputGroup::ProcessConfig & processConfig) { DARABONBA_PTR_SET_VALUE(processConfig_, processConfig) };
      inline OutputGroup& setProcessConfig(OutputGroup::ProcessConfig && processConfig) { DARABONBA_PTR_SET_RVALUE(processConfig_, processConfig) };


    protected:
      // The output file configuration.
      // 
      // This parameter is required.
      shared_ptr<OutputGroup::Output> output_ {};
      // The job processing configuration.
      // 
      // This parameter is required.
      shared_ptr<OutputGroup::ProcessConfig> processConfig_ {};
    };

    class InputGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InputGroup& obj) { 
        DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, InputGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      InputGroup() = default ;
      InputGroup(const InputGroup &) = default ;
      InputGroup(InputGroup &&) = default ;
      InputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InputGroup() = default ;
      InputGroup& operator=(const InputGroup &) = default ;
      InputGroup& operator=(InputGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inputUrl_ == nullptr
        && this->media_ == nullptr && this->type_ == nullptr; };
      // inputUrl Field Functions 
      bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
      void deleteInputUrl() { this->inputUrl_ = nullptr;};
      inline string getInputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
      inline InputGroup& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline InputGroup& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline InputGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The URL of the input stream.
      // 
      // *   This parameter takes effect only when Type is set to Media. You can select a specific file within the media asset as an input.
      // *   The system checks whether the input URL exists within the media asset.
      shared_ptr<string> inputUrl_ {};
      // The media object.
      // 
      // *   If Type is set to OSS, set this parameter to the URL of an OSS object. Both the OSS and HTTP protocols are supported.
      // 
      // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the Intelligent Media Services (IMS) console.
      // 
      // *   If Type is set to Media, set this parameter to the ID of a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the media object. Valid values:
      // 
      // *   OSS: an Object Storage Service (OSS) object.
      // *   Media: a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->inputGroup_ == nullptr && this->name_ == nullptr && this->outputGroup_ == nullptr && this->scheduleConfig_ == nullptr && this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitTranscodeJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // inputGroup Field Functions 
    bool hasInputGroup() const { return this->inputGroup_ != nullptr;};
    void deleteInputGroup() { this->inputGroup_ = nullptr;};
    inline const vector<SubmitTranscodeJobRequest::InputGroup> & getInputGroup() const { DARABONBA_PTR_GET_CONST(inputGroup_, vector<SubmitTranscodeJobRequest::InputGroup>) };
    inline vector<SubmitTranscodeJobRequest::InputGroup> getInputGroup() { DARABONBA_PTR_GET(inputGroup_, vector<SubmitTranscodeJobRequest::InputGroup>) };
    inline SubmitTranscodeJobRequest& setInputGroup(const vector<SubmitTranscodeJobRequest::InputGroup> & inputGroup) { DARABONBA_PTR_SET_VALUE(inputGroup_, inputGroup) };
    inline SubmitTranscodeJobRequest& setInputGroup(vector<SubmitTranscodeJobRequest::InputGroup> && inputGroup) { DARABONBA_PTR_SET_RVALUE(inputGroup_, inputGroup) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitTranscodeJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroup Field Functions 
    bool hasOutputGroup() const { return this->outputGroup_ != nullptr;};
    void deleteOutputGroup() { this->outputGroup_ = nullptr;};
    inline const vector<SubmitTranscodeJobRequest::OutputGroup> & getOutputGroup() const { DARABONBA_PTR_GET_CONST(outputGroup_, vector<SubmitTranscodeJobRequest::OutputGroup>) };
    inline vector<SubmitTranscodeJobRequest::OutputGroup> getOutputGroup() { DARABONBA_PTR_GET(outputGroup_, vector<SubmitTranscodeJobRequest::OutputGroup>) };
    inline SubmitTranscodeJobRequest& setOutputGroup(const vector<SubmitTranscodeJobRequest::OutputGroup> & outputGroup) { DARABONBA_PTR_SET_VALUE(outputGroup_, outputGroup) };
    inline SubmitTranscodeJobRequest& setOutputGroup(vector<SubmitTranscodeJobRequest::OutputGroup> && outputGroup) { DARABONBA_PTR_SET_RVALUE(outputGroup_, outputGroup) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitTranscodeJobRequest::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitTranscodeJobRequest::ScheduleConfig) };
    inline SubmitTranscodeJobRequest::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitTranscodeJobRequest::ScheduleConfig) };
    inline SubmitTranscodeJobRequest& setScheduleConfig(const SubmitTranscodeJobRequest::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitTranscodeJobRequest& setScheduleConfig(SubmitTranscodeJobRequest::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTranscodeJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The input group of the job. An input of a single file indicates a transcoding job. An input of multiple files indicates an audio and video stream merge job.
    // 
    // This parameter is required.
    shared_ptr<vector<SubmitTranscodeJobRequest::InputGroup>> inputGroup_ {};
    // The job name.
    shared_ptr<string> name_ {};
    // The output group of the job.
    // 
    // This parameter is required.
    shared_ptr<vector<SubmitTranscodeJobRequest::OutputGroup>> outputGroup_ {};
    // The scheduling information about the job.
    shared_ptr<SubmitTranscodeJobRequest::ScheduleConfig> scheduleConfig_ {};
    // The custom settings. The value must be in the JSON format and can be up to 512 bytes in length. You can specify a [custom callback URL](https://help.aliyun.com/document_detail/451631.html).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
