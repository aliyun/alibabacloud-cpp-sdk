// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeParentJob, transcodeParentJob_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeParentJob, transcodeParentJob_);
    };
    GetTranscodeJobResponseBody() = default ;
    GetTranscodeJobResponseBody(const GetTranscodeJobResponseBody &) = default ;
    GetTranscodeJobResponseBody(GetTranscodeJobResponseBody &&) = default ;
    GetTranscodeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBody() = default ;
    GetTranscodeJobResponseBody& operator=(const GetTranscodeJobResponseBody &) = default ;
    GetTranscodeJobResponseBody& operator=(GetTranscodeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeParentJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeParentJob& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(InputGroup, inputGroup_);
        DARABONBA_PTR_TO_JSON(JobCount, jobCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OutputGroup, outputGroup_);
        DARABONBA_PTR_TO_JSON(ParentJobId, parentJobId_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
        DARABONBA_PTR_TO_JSON(TranscodeJobList, transcodeJobList_);
        DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeParentJob& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(InputGroup, inputGroup_);
        DARABONBA_PTR_FROM_JSON(JobCount, jobCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OutputGroup, outputGroup_);
        DARABONBA_PTR_FROM_JSON(ParentJobId, parentJobId_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
        DARABONBA_PTR_FROM_JSON(TranscodeJobList, transcodeJobList_);
        DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      TranscodeParentJob() = default ;
      TranscodeParentJob(const TranscodeParentJob &) = default ;
      TranscodeParentJob(TranscodeParentJob &&) = default ;
      TranscodeParentJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeParentJob() = default ;
      TranscodeParentJob& operator=(const TranscodeParentJob &) = default ;
      TranscodeParentJob& operator=(TranscodeParentJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TranscodeJobList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TranscodeJobList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(InputGroup, inputGroup_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobIndex, jobIndex_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OutFileMeta, outFileMeta_);
          DARABONBA_PTR_TO_JSON(Output, output_);
          DARABONBA_PTR_TO_JSON(ParentJobId, parentJobId_);
          DARABONBA_PTR_TO_JSON(ProcessConfig, processConfig_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_ANY_TO_JSON(SubmitResultJson, submitResultJson_);
          DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, TranscodeJobList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(InputGroup, inputGroup_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobIndex, jobIndex_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OutFileMeta, outFileMeta_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
          DARABONBA_PTR_FROM_JSON(ParentJobId, parentJobId_);
          DARABONBA_PTR_FROM_JSON(ProcessConfig, processConfig_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_ANY_FROM_JSON(SubmitResultJson, submitResultJson_);
          DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        TranscodeJobList() = default ;
        TranscodeJobList(const TranscodeJobList &) = default ;
        TranscodeJobList(TranscodeJobList &&) = default ;
        TranscodeJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TranscodeJobList() = default ;
        TranscodeJobList& operator=(const TranscodeJobList &) = default ;
        TranscodeJobList& operator=(TranscodeJobList &&) = default ;
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
          // The ID of the ApsaraVideo Media Processing (MPS) queue to which the snapshot job was submitted.
          shared_ptr<string> pipelineId_ {};
          // The priority of the job. Valid values: 1 to 10. The greater the value, the higher the priority.
          shared_ptr<int32_t> priority_ {};
        };

        class ProcessConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProcessConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CombineConfigs, combineConfigs_);
            DARABONBA_PTR_TO_JSON(Encryption, encryption_);
            DARABONBA_PTR_TO_JSON(ImageWatermarks, imageWatermarks_);
            DARABONBA_PTR_TO_JSON(IsInheritTags, isInheritTags_);
            DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
            DARABONBA_PTR_TO_JSON(TextWatermarks, textWatermarks_);
            DARABONBA_PTR_TO_JSON(Transcode, transcode_);
          };
          friend void from_json(const Darabonba::Json& j, ProcessConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CombineConfigs, combineConfigs_);
            DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
            DARABONBA_PTR_FROM_JSON(ImageWatermarks, imageWatermarks_);
            DARABONBA_PTR_FROM_JSON(IsInheritTags, isInheritTags_);
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
                DARABONBA_PTR_TO_JSON(Tags, tags_);
                DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
                DARABONBA_PTR_TO_JSON(Video, video_);
              };
              friend void from_json(const Darabonba::Json& j, OverwriteParams& obj) { 
                DARABONBA_PTR_FROM_JSON(Audio, audio_);
                DARABONBA_PTR_FROM_JSON(Container, container_);
                DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
                DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
                // The maximum adaptive bitrate (ABR). This parameter takes effect only for Narrowband HD 1.0.
                // 
                // *   Valid values: [10,50000].
                // *   Unit: Kbit/s.
                shared_ptr<string> abrMax_ {};
                // The average bitrate of the video.
                // 
                // *   Valid values: [10,50000].
                // *   Unit: Kbit/s.
                shared_ptr<string> bitrate_ {};
                // The buffer size.
                // 
                // *   Valid values: [1000,128000].
                // *   Default value: 6000.
                // *   Unit: Kbit/s.
                shared_ptr<string> bufsize_ {};
                // The encoding format.
                shared_ptr<string> codec_ {};
                // The constant rate factor.
                // 
                // *   Valid values: [0,51].
                // *   Default value: 23 if the encoding format is H.264, or 26 if the encoding format is H.265.
                // 
                // If this parameter is specified, the value of Bitrate becomes invalid.
                shared_ptr<string> crf_ {};
                // The method of video cropping. Valid values:
                // 
                // *   border: automatically detects and removes black bars.
                // *   A value in the width:height:left:top format: crops the videos based on the custom settings.
                shared_ptr<string> crop_ {};
                // The frame rate.
                // 
                // *   Valid values: (0,60]. The value is 60 if the frame rate of the input video exceeds 60.
                // *   Default value: the frame rate of the input video.
                shared_ptr<string> fps_ {};
                // The maximum number of frames between two keyframes.
                // 
                // *   Valid values: [1,1080000].
                // *   Default value: 250.
                shared_ptr<string> gop_ {};
                // The height of the output video.
                // 
                // *   Valid values: [128,4096].
                // *   Unit: pixels.
                // 
                // Default value: the height of the input video.
                shared_ptr<string> height_ {};
                // Indicates whether the auto-rotate screen feature is enabled.
                shared_ptr<string> longShortMode_ {};
                // The maximum bitrate of the output video.
                // 
                // *   Valid values: [10,50000].
                // *   Unit: Kbit/s.
                shared_ptr<string> maxrate_ {};
                // The black bars added to the video. Format: width:height:left:top.
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
                // Indicates whether the video was removed.
                shared_ptr<string> remove_ {};
                // The scan mode. Valid values: interlaced and progressive.
                shared_ptr<string> scanMode_ {};
                // The width of the output video.
                // 
                // *   Valid values: [128,4096].
                // *   Unit: pixels.
                // 
                // Default value: the width of the input video.
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
                // 
                // For more information about examples, see How do I set the resolution for an output video?
                shared_ptr<string> adjDarMethod_ {};
                // Indicates whether the audio bitrate was checked. You can specify only one of the IsCheckAudioBitrate and IsCheckAudioBitrateFail parameters. The priority of the IsCheckAudioBitrateFail parameter is higher. Valid values:
                // 
                // *   true If the bitrate of the input audio is less than that of the output audio, the bitrate of the input audio is used for transcoding.
                // *   false
                // 
                // Default value:
                // 
                // *   If this parameter is not specified and the codec of the output audio is different from that of the input audio, the default value is false.
                // *   If this parameter is not specified and the codec of the output audio is the same as that of the input audio, the default value is true.
                shared_ptr<string> isCheckAudioBitrate_ {};
                // Indicates whether the audio bitrate was checked. You can specify only one of the IsCheckAudioBitrate and IsCheckAudioBitrateFail parameters. The priority of the IsCheckAudioBitrateFail parameter is higher. Valid values:
                // 
                // *   true If the bitrate of the input audio is less than that of the output audio, the transcoding job fails.
                // *   false
                // 
                // Default value: false.
                shared_ptr<string> isCheckAudioBitrateFail_ {};
                // Indicates whether the video resolution was checked. You can specify only one of the IsCheckReso and IsCheckResoFail parameters. The priority of the IsCheckResoFail parameter is higher. Valid values:
                // 
                // *   true If the width or height of the input video is less than that of the output video, the resolution of the input video is used for transcoding.
                // *   false
                // 
                // Default value: false.
                shared_ptr<string> isCheckReso_ {};
                // Indicates whether the video resolution was checked. You can specify only one of the IsCheckReso and IsCheckResoFail parameters. The priority of the IsCheckResoFail parameter is higher. Valid values:
                // 
                // *   true If the width or height of the input video is less than that of the output video, the transcoding job fails.
                // *   false
                // 
                // Default value: false.
                shared_ptr<string> isCheckResoFail_ {};
                // Indicates whether the video bitrate was checked. You can specify only one of the IsCheckVideoBitrate and IsCheckVideoBitrateFail parameters. The priority of the IsCheckVideoBitrateFail parameter is higher. Valid values:
                // 
                // *   true If the bitrate of the input video is less than that of the output video, the bitrate of the input video is used for transcoding.
                // *   false
                // 
                // Default value: false.
                shared_ptr<string> isCheckVideoBitrate_ {};
                // Indicates whether the video bitrate was checked. You can specify only one of the IsCheckVideoBitrate and IsCheckVideoBitrateFail parameters. The priority of the IsCheckVideoBitrateFail parameter is higher. Valid values:
                // 
                // *   true If the bitrate of the input video is less than that of the output video, the transcoding job fails.
                // *   false
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
                // The audio bitrate of the output file.
                // 
                // *   Valid values: [8,1000].
                // *   Unit: Kbit/s.
                // *   Default value: 128.
                shared_ptr<string> bitrate_ {};
                // The number of sound channels. Default value: 2.
                shared_ptr<string> channels_ {};
                // The audio codec. Valid values: AAC, MP3, VORBIS, and FLAC. Default value: AAC.
                shared_ptr<string> codec_ {};
                // The audio codec profile. If the Codec parameter is set to AAC, the valid values are aac_low, aac_he, aac_he_v2, aac_ld, and aac_eld.
                shared_ptr<string> profile_ {};
                // Indicates whether the audio stream is deleted.
                shared_ptr<string> remove_ {};
                // The sampling rate.
                // 
                // *   Default value: 44100. Valid values: 22050, 32000, 44100, 48000, and 96000.
                // *   Unit: Hz.
                shared_ptr<string> samplerate_ {};
                // The volume configurations.
                shared_ptr<Audio::Volume> volume_ {};
              };

              virtual bool empty() const override { return this->audio_ == nullptr
        && this->container_ == nullptr && this->muxConfig_ == nullptr && this->tags_ == nullptr && this->transConfig_ == nullptr && this->video_ == nullptr; };
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


              // tags Field Functions 
              bool hasTags() const { return this->tags_ != nullptr;};
              void deleteTags() { this->tags_ = nullptr;};
              inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
              inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
              inline OverwriteParams& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
              inline OverwriteParams& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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
              shared_ptr<map<string, string>> tags_ {};
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
              // Indicates whether the text size was adjusted based on the output video dimensions. Valid values: true and false. Default value: false.
              shared_ptr<string> adaptive_ {};
              // The border color.
              shared_ptr<string> borderColor_ {};
              // The border width.
              shared_ptr<int32_t> borderWidth_ {};
              // The watermark text. Base64 encoding is not required. The string must be encoded in UTF-8.
              shared_ptr<string> content_ {};
              // The transparency of the watermark.
              shared_ptr<string> fontAlpha_ {};
              // The color of the text.
              shared_ptr<string> fontColor_ {};
              // The font of the text.
              shared_ptr<string> fontName_ {};
              // The size of the text.
              shared_ptr<int32_t> fontSize_ {};
              // The distance of the watermark from the left edge.
              shared_ptr<string> left_ {};
              // The distance of the watermark from the top edge.
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
                // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
                // *   If Type is set to Media, the ID of a media asset is returned.
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
                // The duration of the stream. Valid values: the number of seconds or "ToEND".
                shared_ptr<string> duration_ {};
                // The start time of the stream.
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
                // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
                // *   If Type is set to Media, the ID of a media asset is returned.
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
              // The position of the watermark on the x-axis.
              shared_ptr<string> dx_ {};
              // The position of the watermark on the y-axis.
              shared_ptr<string> dy_ {};
              // The watermark image file.
              shared_ptr<OverwriteParams::File> file_ {};
              // The height of the output video.
              shared_ptr<string> height_ {};
              // The reference position of the watermark. Valid values: TopLeft, TopRight, BottomLeft, and BottomRight. Default value: TopLeft.
              shared_ptr<string> referPos_ {};
              // The timeline settings.
              shared_ptr<OverwriteParams::Timeline> timeline_ {};
              // The width of the output video.
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
            // The endpoint of the decryption service for HLS encryption.
            shared_ptr<string> decryptKeyUri_ {};
            // The encryption type.
            shared_ptr<string> encryptType_ {};
            // The type of the key service. Valid values: KMS and Base64.
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
        && this->encryption_ == nullptr && this->imageWatermarks_ == nullptr && this->isInheritTags_ == nullptr && this->subtitles_ == nullptr && this->textWatermarks_ == nullptr
        && this->transcode_ == nullptr; };
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


          // isInheritTags Field Functions 
          bool hasIsInheritTags() const { return this->isInheritTags_ != nullptr;};
          void deleteIsInheritTags() { this->isInheritTags_ = nullptr;};
          inline bool getIsInheritTags() const { DARABONBA_PTR_GET_DEFAULT(isInheritTags_, false) };
          inline ProcessConfig& setIsInheritTags(bool isInheritTags) { DARABONBA_PTR_SET_VALUE(isInheritTags_, isInheritTags) };


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
          // Indicates whether the tags of the input stream are inherited in the output stream. This parameter does not take effect when the input is not a media asset. Default value: false.
          shared_ptr<bool> isInheritTags_ {};
          // The subtitle configuration.
          shared_ptr<vector<ProcessConfig::Subtitles>> subtitles_ {};
          // The configurations of the text watermark.
          shared_ptr<vector<ProcessConfig::TextWatermarks>> textWatermarks_ {};
          // The transcoding configuration.
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
          // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
          // *   If Type is set to Media, the ID of a media asset is returned.
          shared_ptr<string> media_ {};
          // The path of the transcoded output stream. This parameter is required only when the output is a media asset.
          shared_ptr<string> outputUrl_ {};
          // The type of the media object. Valid values:
          // 
          // *   OSS: an OSS object.
          // *   Media: a media asset.
          shared_ptr<string> type_ {};
        };

        class OutFileMeta : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutFileMeta& obj) { 
            DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
            DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
            DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
          };
          friend void from_json(const Darabonba::Json& j, OutFileMeta& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
            DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
            DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
          };
          OutFileMeta() = default ;
          OutFileMeta(const OutFileMeta &) = default ;
          OutFileMeta(OutFileMeta &&) = default ;
          OutFileMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutFileMeta() = default ;
          OutFileMeta& operator=(const OutFileMeta &) = default ;
          OutFileMeta& operator=(OutFileMeta &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoStreamInfoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoStreamInfoList& obj) { 
              DARABONBA_PTR_TO_JSON(Avg_fps, avgFps_);
              DARABONBA_PTR_TO_JSON(Bit_rate, bitRate_);
              DARABONBA_PTR_TO_JSON(Codec_long_name, codecLongName_);
              DARABONBA_PTR_TO_JSON(Codec_name, codecName_);
              DARABONBA_PTR_TO_JSON(Codec_tag, codecTag_);
              DARABONBA_PTR_TO_JSON(Codec_tag_string, codecTagString_);
              DARABONBA_PTR_TO_JSON(Codec_time_base, codecTimeBase_);
              DARABONBA_PTR_TO_JSON(Dar, dar_);
              DARABONBA_PTR_TO_JSON(Duration, duration_);
              DARABONBA_PTR_TO_JSON(Fps, fps_);
              DARABONBA_PTR_TO_JSON(Has_b_frames, hasBFrames_);
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(Index, index_);
              DARABONBA_PTR_TO_JSON(Lang, lang_);
              DARABONBA_PTR_TO_JSON(Level, level_);
              DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
              DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
              DARABONBA_PTR_TO_JSON(Profile, profile_);
              DARABONBA_PTR_TO_JSON(Rotate, rotate_);
              DARABONBA_PTR_TO_JSON(Sar, sar_);
              DARABONBA_PTR_TO_JSON(Start_time, startTime_);
              DARABONBA_PTR_TO_JSON(Time_base, timeBase_);
              DARABONBA_PTR_TO_JSON(Width, width_);
            };
            friend void from_json(const Darabonba::Json& j, VideoStreamInfoList& obj) { 
              DARABONBA_PTR_FROM_JSON(Avg_fps, avgFps_);
              DARABONBA_PTR_FROM_JSON(Bit_rate, bitRate_);
              DARABONBA_PTR_FROM_JSON(Codec_long_name, codecLongName_);
              DARABONBA_PTR_FROM_JSON(Codec_name, codecName_);
              DARABONBA_PTR_FROM_JSON(Codec_tag, codecTag_);
              DARABONBA_PTR_FROM_JSON(Codec_tag_string, codecTagString_);
              DARABONBA_PTR_FROM_JSON(Codec_time_base, codecTimeBase_);
              DARABONBA_PTR_FROM_JSON(Dar, dar_);
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
              DARABONBA_PTR_FROM_JSON(Fps, fps_);
              DARABONBA_PTR_FROM_JSON(Has_b_frames, hasBFrames_);
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(Index, index_);
              DARABONBA_PTR_FROM_JSON(Lang, lang_);
              DARABONBA_PTR_FROM_JSON(Level, level_);
              DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
              DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
              DARABONBA_PTR_FROM_JSON(Profile, profile_);
              DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
              DARABONBA_PTR_FROM_JSON(Sar, sar_);
              DARABONBA_PTR_FROM_JSON(Start_time, startTime_);
              DARABONBA_PTR_FROM_JSON(Time_base, timeBase_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
            };
            VideoStreamInfoList() = default ;
            VideoStreamInfoList(const VideoStreamInfoList &) = default ;
            VideoStreamInfoList(VideoStreamInfoList &&) = default ;
            VideoStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoStreamInfoList() = default ;
            VideoStreamInfoList& operator=(const VideoStreamInfoList &) = default ;
            VideoStreamInfoList& operator=(VideoStreamInfoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->avgFps_ == nullptr
        && this->bitRate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr
        && this->codecTimeBase_ == nullptr && this->dar_ == nullptr && this->duration_ == nullptr && this->fps_ == nullptr && this->hasBFrames_ == nullptr
        && this->height_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr && this->numFrames_ == nullptr
        && this->pixFmt_ == nullptr && this->profile_ == nullptr && this->rotate_ == nullptr && this->sar_ == nullptr && this->startTime_ == nullptr
        && this->timeBase_ == nullptr && this->width_ == nullptr; };
            // avgFps Field Functions 
            bool hasAvgFps() const { return this->avgFps_ != nullptr;};
            void deleteAvgFps() { this->avgFps_ = nullptr;};
            inline string getAvgFps() const { DARABONBA_PTR_GET_DEFAULT(avgFps_, "") };
            inline VideoStreamInfoList& setAvgFps(string avgFps) { DARABONBA_PTR_SET_VALUE(avgFps_, avgFps) };


            // bitRate Field Functions 
            bool hasBitRate() const { return this->bitRate_ != nullptr;};
            void deleteBitRate() { this->bitRate_ = nullptr;};
            inline string getBitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, "") };
            inline VideoStreamInfoList& setBitRate(string bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


            // codecLongName Field Functions 
            bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
            void deleteCodecLongName() { this->codecLongName_ = nullptr;};
            inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
            inline VideoStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


            // codecName Field Functions 
            bool hasCodecName() const { return this->codecName_ != nullptr;};
            void deleteCodecName() { this->codecName_ = nullptr;};
            inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
            inline VideoStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


            // codecTag Field Functions 
            bool hasCodecTag() const { return this->codecTag_ != nullptr;};
            void deleteCodecTag() { this->codecTag_ = nullptr;};
            inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
            inline VideoStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


            // codecTagString Field Functions 
            bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
            void deleteCodecTagString() { this->codecTagString_ = nullptr;};
            inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
            inline VideoStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


            // codecTimeBase Field Functions 
            bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
            void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
            inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
            inline VideoStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


            // dar Field Functions 
            bool hasDar() const { return this->dar_ != nullptr;};
            void deleteDar() { this->dar_ = nullptr;};
            inline string getDar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
            inline VideoStreamInfoList& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
            inline VideoStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // fps Field Functions 
            bool hasFps() const { return this->fps_ != nullptr;};
            void deleteFps() { this->fps_ = nullptr;};
            inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
            inline VideoStreamInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


            // hasBFrames Field Functions 
            bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
            void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
            inline string getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
            inline VideoStreamInfoList& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
            inline VideoStreamInfoList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
            inline VideoStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // lang Field Functions 
            bool hasLang() const { return this->lang_ != nullptr;};
            void deleteLang() { this->lang_ = nullptr;};
            inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
            inline VideoStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


            // level Field Functions 
            bool hasLevel() const { return this->level_ != nullptr;};
            void deleteLevel() { this->level_ = nullptr;};
            inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
            inline VideoStreamInfoList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            // numFrames Field Functions 
            bool hasNumFrames() const { return this->numFrames_ != nullptr;};
            void deleteNumFrames() { this->numFrames_ = nullptr;};
            inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
            inline VideoStreamInfoList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


            // pixFmt Field Functions 
            bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
            void deletePixFmt() { this->pixFmt_ = nullptr;};
            inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
            inline VideoStreamInfoList& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


            // profile Field Functions 
            bool hasProfile() const { return this->profile_ != nullptr;};
            void deleteProfile() { this->profile_ = nullptr;};
            inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
            inline VideoStreamInfoList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


            // rotate Field Functions 
            bool hasRotate() const { return this->rotate_ != nullptr;};
            void deleteRotate() { this->rotate_ = nullptr;};
            inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
            inline VideoStreamInfoList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


            // sar Field Functions 
            bool hasSar() const { return this->sar_ != nullptr;};
            void deleteSar() { this->sar_ = nullptr;};
            inline string getSar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
            inline VideoStreamInfoList& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline VideoStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // timeBase Field Functions 
            bool hasTimeBase() const { return this->timeBase_ != nullptr;};
            void deleteTimeBase() { this->timeBase_ = nullptr;};
            inline string getTimeBase() const { DARABONBA_PTR_GET_DEFAULT(timeBase_, "") };
            inline VideoStreamInfoList& setTimeBase(string timeBase) { DARABONBA_PTR_SET_VALUE(timeBase_, timeBase) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
            inline VideoStreamInfoList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            // The average frame rate.
            shared_ptr<string> avgFps_ {};
            // The bitrate.
            shared_ptr<string> bitRate_ {};
            // The name of the encoding format.
            shared_ptr<string> codecLongName_ {};
            // The encoding format.
            shared_ptr<string> codecName_ {};
            // The tag of the encoding format.
            shared_ptr<string> codecTag_ {};
            // The tag string of the encoding format.
            shared_ptr<string> codecTagString_ {};
            // The time base of the encoder.
            shared_ptr<string> codecTimeBase_ {};
            // The display aspect ratio.
            shared_ptr<string> dar_ {};
            // The duration of the stream. Unit: seconds.
            shared_ptr<string> duration_ {};
            // The frame rate.
            shared_ptr<string> fps_ {};
            // Indicates whether the video stream contains bidirectional frames (B-frames). Valid values:
            // 
            // *   0: The stream contains no B-frames.
            // *   1: The stream contains one B-frame.
            // *   2: The stream contains multiple consecutive B-frames.
            shared_ptr<string> hasBFrames_ {};
            // The height of the output video.
            shared_ptr<string> height_ {};
            // The sequence number of the stream.
            shared_ptr<string> index_ {};
            // The language of the stream.
            shared_ptr<string> lang_ {};
            // The codec level.
            shared_ptr<string> level_ {};
            // The total number of frames.
            shared_ptr<string> numFrames_ {};
            // The pixel format.
            shared_ptr<string> pixFmt_ {};
            // The encoder profile.
            shared_ptr<string> profile_ {};
            // The rotation angle of the video image. Valid values: 0, 90, 180, and 270. Default value: 0.
            shared_ptr<string> rotate_ {};
            // The aspect ratio of the area from which the sampling points are collected.
            shared_ptr<string> sar_ {};
            // The start time of the stream.
            shared_ptr<string> startTime_ {};
            // The time base.
            shared_ptr<string> timeBase_ {};
            // The width of the output video.
            shared_ptr<string> width_ {};
          };

          class FileBasicInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FileBasicInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_TO_JSON(Duration, duration_);
              DARABONBA_PTR_TO_JSON(FileName, fileName_);
              DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
              DARABONBA_PTR_TO_JSON(FileStatus, fileStatus_);
              DARABONBA_PTR_TO_JSON(FileType, fileType_);
              DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
              DARABONBA_PTR_TO_JSON(FormatName, formatName_);
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
              DARABONBA_PTR_TO_JSON(Region, region_);
              DARABONBA_PTR_TO_JSON(Width, width_);
            };
            friend void from_json(const Darabonba::Json& j, FileBasicInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
              DARABONBA_PTR_FROM_JSON(FileName, fileName_);
              DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
              DARABONBA_PTR_FROM_JSON(FileStatus, fileStatus_);
              DARABONBA_PTR_FROM_JSON(FileType, fileType_);
              DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
              DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
              DARABONBA_PTR_FROM_JSON(Region, region_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
            };
            FileBasicInfo() = default ;
            FileBasicInfo(const FileBasicInfo &) = default ;
            FileBasicInfo(FileBasicInfo &&) = default ;
            FileBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FileBasicInfo() = default ;
            FileBasicInfo& operator=(const FileBasicInfo &) = default ;
            FileBasicInfo& operator=(FileBasicInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->duration_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileStatus_ == nullptr && this->fileType_ == nullptr
        && this->fileUrl_ == nullptr && this->formatName_ == nullptr && this->height_ == nullptr && this->mediaId_ == nullptr && this->region_ == nullptr
        && this->width_ == nullptr; };
            // bitrate Field Functions 
            bool hasBitrate() const { return this->bitrate_ != nullptr;};
            void deleteBitrate() { this->bitrate_ = nullptr;};
            inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
            inline FileBasicInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
            inline FileBasicInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // fileName Field Functions 
            bool hasFileName() const { return this->fileName_ != nullptr;};
            void deleteFileName() { this->fileName_ = nullptr;};
            inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
            inline FileBasicInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


            // fileSize Field Functions 
            bool hasFileSize() const { return this->fileSize_ != nullptr;};
            void deleteFileSize() { this->fileSize_ = nullptr;};
            inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
            inline FileBasicInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


            // fileStatus Field Functions 
            bool hasFileStatus() const { return this->fileStatus_ != nullptr;};
            void deleteFileStatus() { this->fileStatus_ = nullptr;};
            inline string getFileStatus() const { DARABONBA_PTR_GET_DEFAULT(fileStatus_, "") };
            inline FileBasicInfo& setFileStatus(string fileStatus) { DARABONBA_PTR_SET_VALUE(fileStatus_, fileStatus) };


            // fileType Field Functions 
            bool hasFileType() const { return this->fileType_ != nullptr;};
            void deleteFileType() { this->fileType_ = nullptr;};
            inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
            inline FileBasicInfo& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


            // fileUrl Field Functions 
            bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
            void deleteFileUrl() { this->fileUrl_ = nullptr;};
            inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
            inline FileBasicInfo& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


            // formatName Field Functions 
            bool hasFormatName() const { return this->formatName_ != nullptr;};
            void deleteFormatName() { this->formatName_ = nullptr;};
            inline string getFormatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
            inline FileBasicInfo& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
            inline FileBasicInfo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // mediaId Field Functions 
            bool hasMediaId() const { return this->mediaId_ != nullptr;};
            void deleteMediaId() { this->mediaId_ = nullptr;};
            inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
            inline FileBasicInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


            // region Field Functions 
            bool hasRegion() const { return this->region_ != nullptr;};
            void deleteRegion() { this->region_ = nullptr;};
            inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
            inline FileBasicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
            inline FileBasicInfo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            // The video bitrate.
            shared_ptr<string> bitrate_ {};
            // The duration of the video. Unit: seconds.
            shared_ptr<string> duration_ {};
            // The file name.
            shared_ptr<string> fileName_ {};
            // The file size. Unit: bytes.
            shared_ptr<string> fileSize_ {};
            // The state of the file.
            shared_ptr<string> fileStatus_ {};
            // The file type. Valid values: source_file and transcode_file.
            shared_ptr<string> fileType_ {};
            // The URL of the file.
            shared_ptr<string> fileUrl_ {};
            // The name of the video format.
            shared_ptr<string> formatName_ {};
            // The height of the output video.
            shared_ptr<string> height_ {};
            // The ID of the media asset.
            shared_ptr<string> mediaId_ {};
            // The region in which the file resides.
            shared_ptr<string> region_ {};
            // The width of the output video.
            shared_ptr<string> width_ {};
          };

          class AudioStreamInfoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioStreamInfoList& obj) { 
              DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_TO_JSON(ChannelLayout, channelLayout_);
              DARABONBA_PTR_TO_JSON(Channels, channels_);
              DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
              DARABONBA_PTR_TO_JSON(CodecName, codecName_);
              DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
              DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
              DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
              DARABONBA_PTR_TO_JSON(Duration, duration_);
              DARABONBA_PTR_TO_JSON(Index, index_);
              DARABONBA_PTR_TO_JSON(Lang, lang_);
              DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
              DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(Timebase, timebase_);
            };
            friend void from_json(const Darabonba::Json& j, AudioStreamInfoList& obj) { 
              DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_FROM_JSON(ChannelLayout, channelLayout_);
              DARABONBA_PTR_FROM_JSON(Channels, channels_);
              DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
              DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
              DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
              DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
              DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
              DARABONBA_PTR_FROM_JSON(Index, index_);
              DARABONBA_PTR_FROM_JSON(Lang, lang_);
              DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
              DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
            };
            AudioStreamInfoList() = default ;
            AudioStreamInfoList(const AudioStreamInfoList &) = default ;
            AudioStreamInfoList(AudioStreamInfoList &&) = default ;
            AudioStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioStreamInfoList() = default ;
            AudioStreamInfoList& operator=(const AudioStreamInfoList &) = default ;
            AudioStreamInfoList& operator=(AudioStreamInfoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channelLayout_ == nullptr && this->channels_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr
        && this->sampleFmt_ == nullptr && this->sampleRate_ == nullptr && this->startTime_ == nullptr && this->timebase_ == nullptr; };
            // bitrate Field Functions 
            bool hasBitrate() const { return this->bitrate_ != nullptr;};
            void deleteBitrate() { this->bitrate_ = nullptr;};
            inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
            inline AudioStreamInfoList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


            // channelLayout Field Functions 
            bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
            void deleteChannelLayout() { this->channelLayout_ = nullptr;};
            inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
            inline AudioStreamInfoList& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


            // channels Field Functions 
            bool hasChannels() const { return this->channels_ != nullptr;};
            void deleteChannels() { this->channels_ = nullptr;};
            inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
            inline AudioStreamInfoList& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


            // codecLongName Field Functions 
            bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
            void deleteCodecLongName() { this->codecLongName_ = nullptr;};
            inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
            inline AudioStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


            // codecName Field Functions 
            bool hasCodecName() const { return this->codecName_ != nullptr;};
            void deleteCodecName() { this->codecName_ = nullptr;};
            inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
            inline AudioStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


            // codecTag Field Functions 
            bool hasCodecTag() const { return this->codecTag_ != nullptr;};
            void deleteCodecTag() { this->codecTag_ = nullptr;};
            inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
            inline AudioStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


            // codecTagString Field Functions 
            bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
            void deleteCodecTagString() { this->codecTagString_ = nullptr;};
            inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
            inline AudioStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


            // codecTimeBase Field Functions 
            bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
            void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
            inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
            inline AudioStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
            inline AudioStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
            inline AudioStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // lang Field Functions 
            bool hasLang() const { return this->lang_ != nullptr;};
            void deleteLang() { this->lang_ = nullptr;};
            inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
            inline AudioStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


            // sampleFmt Field Functions 
            bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
            void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
            inline string getSampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
            inline AudioStreamInfoList& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


            // sampleRate Field Functions 
            bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
            void deleteSampleRate() { this->sampleRate_ = nullptr;};
            inline string getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
            inline AudioStreamInfoList& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline AudioStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // timebase Field Functions 
            bool hasTimebase() const { return this->timebase_ != nullptr;};
            void deleteTimebase() { this->timebase_ = nullptr;};
            inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
            inline AudioStreamInfoList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


          protected:
            // The bitrate.
            shared_ptr<string> bitrate_ {};
            // The sound channel layout.
            shared_ptr<string> channelLayout_ {};
            // The number of sound channels.
            shared_ptr<string> channels_ {};
            // The name of the encoding format.
            shared_ptr<string> codecLongName_ {};
            // The encoding format.
            shared_ptr<string> codecName_ {};
            // The encoder tag.
            shared_ptr<string> codecTag_ {};
            // The name of the encoder tag.
            shared_ptr<string> codecTagString_ {};
            // The time base of the encoder.
            shared_ptr<string> codecTimeBase_ {};
            // The duration of the stream. Unit: seconds.
            shared_ptr<string> duration_ {};
            // The sequence number of the stream.
            shared_ptr<string> index_ {};
            // The language of the stream.
            shared_ptr<string> lang_ {};
            // The sample format.
            shared_ptr<string> sampleFmt_ {};
            // The sampling rate. Unit: Hz.
            shared_ptr<string> sampleRate_ {};
            // The start time of the stream.
            shared_ptr<string> startTime_ {};
            // The time base.
            shared_ptr<string> timebase_ {};
          };

          virtual bool empty() const override { return this->audioStreamInfoList_ == nullptr
        && this->fileBasicInfo_ == nullptr && this->videoStreamInfoList_ == nullptr; };
          // audioStreamInfoList Field Functions 
          bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
          void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
          inline const vector<OutFileMeta::AudioStreamInfoList> & getAudioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<OutFileMeta::AudioStreamInfoList>) };
          inline vector<OutFileMeta::AudioStreamInfoList> getAudioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<OutFileMeta::AudioStreamInfoList>) };
          inline OutFileMeta& setAudioStreamInfoList(const vector<OutFileMeta::AudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
          inline OutFileMeta& setAudioStreamInfoList(vector<OutFileMeta::AudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


          // fileBasicInfo Field Functions 
          bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
          void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
          inline const OutFileMeta::FileBasicInfo & getFileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, OutFileMeta::FileBasicInfo) };
          inline OutFileMeta::FileBasicInfo getFileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, OutFileMeta::FileBasicInfo) };
          inline OutFileMeta& setFileBasicInfo(const OutFileMeta::FileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
          inline OutFileMeta& setFileBasicInfo(OutFileMeta::FileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


          // videoStreamInfoList Field Functions 
          bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
          void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
          inline const vector<OutFileMeta::VideoStreamInfoList> & getVideoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<OutFileMeta::VideoStreamInfoList>) };
          inline vector<OutFileMeta::VideoStreamInfoList> getVideoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<OutFileMeta::VideoStreamInfoList>) };
          inline OutFileMeta& setVideoStreamInfoList(const vector<OutFileMeta::VideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
          inline OutFileMeta& setVideoStreamInfoList(vector<OutFileMeta::VideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


        protected:
          // The information about the audio stream.
          shared_ptr<vector<OutFileMeta::AudioStreamInfoList>> audioStreamInfoList_ {};
          // The basic file information.
          shared_ptr<OutFileMeta::FileBasicInfo> fileBasicInfo_ {};
          // The information about the video stream.
          shared_ptr<vector<OutFileMeta::VideoStreamInfoList>> videoStreamInfoList_ {};
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
          // The URL of the media asset. This parameter is specified only when the media asset is transcoded.
          shared_ptr<string> inputUrl_ {};
          // The media object.
          // 
          // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
          // *   If Type is set to Media, the ID of a media asset is returned.
          shared_ptr<string> media_ {};
          // The type of the media object. Valid values:
          // 
          // *   OSS: an Object Storage Service (OSS) object.
          // *   Media: a media asset.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->inputGroup_ == nullptr && this->jobId_ == nullptr && this->jobIndex_ == nullptr && this->name_ == nullptr
        && this->outFileMeta_ == nullptr && this->output_ == nullptr && this->parentJobId_ == nullptr && this->processConfig_ == nullptr && this->requestId_ == nullptr
        && this->scheduleConfig_ == nullptr && this->status_ == nullptr && this->submitResultJson_ == nullptr && this->submitTime_ == nullptr && this->userData_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TranscodeJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline TranscodeJobList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // inputGroup Field Functions 
        bool hasInputGroup() const { return this->inputGroup_ != nullptr;};
        void deleteInputGroup() { this->inputGroup_ = nullptr;};
        inline const vector<TranscodeJobList::InputGroup> & getInputGroup() const { DARABONBA_PTR_GET_CONST(inputGroup_, vector<TranscodeJobList::InputGroup>) };
        inline vector<TranscodeJobList::InputGroup> getInputGroup() { DARABONBA_PTR_GET(inputGroup_, vector<TranscodeJobList::InputGroup>) };
        inline TranscodeJobList& setInputGroup(const vector<TranscodeJobList::InputGroup> & inputGroup) { DARABONBA_PTR_SET_VALUE(inputGroup_, inputGroup) };
        inline TranscodeJobList& setInputGroup(vector<TranscodeJobList::InputGroup> && inputGroup) { DARABONBA_PTR_SET_RVALUE(inputGroup_, inputGroup) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline TranscodeJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobIndex Field Functions 
        bool hasJobIndex() const { return this->jobIndex_ != nullptr;};
        void deleteJobIndex() { this->jobIndex_ = nullptr;};
        inline int32_t getJobIndex() const { DARABONBA_PTR_GET_DEFAULT(jobIndex_, 0) };
        inline TranscodeJobList& setJobIndex(int32_t jobIndex) { DARABONBA_PTR_SET_VALUE(jobIndex_, jobIndex) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TranscodeJobList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outFileMeta Field Functions 
        bool hasOutFileMeta() const { return this->outFileMeta_ != nullptr;};
        void deleteOutFileMeta() { this->outFileMeta_ = nullptr;};
        inline const TranscodeJobList::OutFileMeta & getOutFileMeta() const { DARABONBA_PTR_GET_CONST(outFileMeta_, TranscodeJobList::OutFileMeta) };
        inline TranscodeJobList::OutFileMeta getOutFileMeta() { DARABONBA_PTR_GET(outFileMeta_, TranscodeJobList::OutFileMeta) };
        inline TranscodeJobList& setOutFileMeta(const TranscodeJobList::OutFileMeta & outFileMeta) { DARABONBA_PTR_SET_VALUE(outFileMeta_, outFileMeta) };
        inline TranscodeJobList& setOutFileMeta(TranscodeJobList::OutFileMeta && outFileMeta) { DARABONBA_PTR_SET_RVALUE(outFileMeta_, outFileMeta) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline const TranscodeJobList::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, TranscodeJobList::Output) };
        inline TranscodeJobList::Output getOutput() { DARABONBA_PTR_GET(output_, TranscodeJobList::Output) };
        inline TranscodeJobList& setOutput(const TranscodeJobList::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
        inline TranscodeJobList& setOutput(TranscodeJobList::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


        // parentJobId Field Functions 
        bool hasParentJobId() const { return this->parentJobId_ != nullptr;};
        void deleteParentJobId() { this->parentJobId_ = nullptr;};
        inline string getParentJobId() const { DARABONBA_PTR_GET_DEFAULT(parentJobId_, "") };
        inline TranscodeJobList& setParentJobId(string parentJobId) { DARABONBA_PTR_SET_VALUE(parentJobId_, parentJobId) };


        // processConfig Field Functions 
        bool hasProcessConfig() const { return this->processConfig_ != nullptr;};
        void deleteProcessConfig() { this->processConfig_ = nullptr;};
        inline const TranscodeJobList::ProcessConfig & getProcessConfig() const { DARABONBA_PTR_GET_CONST(processConfig_, TranscodeJobList::ProcessConfig) };
        inline TranscodeJobList::ProcessConfig getProcessConfig() { DARABONBA_PTR_GET(processConfig_, TranscodeJobList::ProcessConfig) };
        inline TranscodeJobList& setProcessConfig(const TranscodeJobList::ProcessConfig & processConfig) { DARABONBA_PTR_SET_VALUE(processConfig_, processConfig) };
        inline TranscodeJobList& setProcessConfig(TranscodeJobList::ProcessConfig && processConfig) { DARABONBA_PTR_SET_RVALUE(processConfig_, processConfig) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline TranscodeJobList& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // scheduleConfig Field Functions 
        bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
        void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
        inline const TranscodeJobList::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, TranscodeJobList::ScheduleConfig) };
        inline TranscodeJobList::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, TranscodeJobList::ScheduleConfig) };
        inline TranscodeJobList& setScheduleConfig(const TranscodeJobList::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
        inline TranscodeJobList& setScheduleConfig(TranscodeJobList::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TranscodeJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // submitResultJson Field Functions 
        bool hasSubmitResultJson() const { return this->submitResultJson_ != nullptr;};
        void deleteSubmitResultJson() { this->submitResultJson_ = nullptr;};
        inline         const Darabonba::Json & getSubmitResultJson() const { DARABONBA_GET(submitResultJson_) };
        Darabonba::Json & getSubmitResultJson() { DARABONBA_GET(submitResultJson_) };
        inline TranscodeJobList& setSubmitResultJson(const Darabonba::Json & submitResultJson) { DARABONBA_SET_VALUE(submitResultJson_, submitResultJson) };
        inline TranscodeJobList& setSubmitResultJson(Darabonba::Json && submitResultJson) { DARABONBA_SET_RVALUE(submitResultJson_, submitResultJson) };


        // submitTime Field Functions 
        bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
        void deleteSubmitTime() { this->submitTime_ = nullptr;};
        inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
        inline TranscodeJobList& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline TranscodeJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        // The time when the job was created.
        shared_ptr<string> createTime_ {};
        // The time when the job was complete.
        shared_ptr<string> finishTime_ {};
        // The input group of the job. An input of a single file indicates a transcoding job. An input of multiple files indicates an audio and video stream merge job.
        shared_ptr<vector<TranscodeJobList::InputGroup>> inputGroup_ {};
        // The subjob ID.
        shared_ptr<string> jobId_ {};
        // The index number of the subjob in the entire job.
        shared_ptr<int32_t> jobIndex_ {};
        // The job name.
        shared_ptr<string> name_ {};
        // The media information about the video generated by the job.
        shared_ptr<TranscodeJobList::OutFileMeta> outFileMeta_ {};
        // The output file configuration.
        shared_ptr<TranscodeJobList::Output> output_ {};
        // The main job ID.
        shared_ptr<string> parentJobId_ {};
        // The transcoding configuration.
        shared_ptr<TranscodeJobList::ProcessConfig> processConfig_ {};
        // The ID of the request that submitted the job.
        shared_ptr<string> requestId_ {};
        // The scheduling information about the job.
        shared_ptr<TranscodeJobList::ScheduleConfig> scheduleConfig_ {};
        // The state of the transcoding job. Valid values: Init (the job is submitted), Success (the job is successful), Fail (the job failed), and Deleted (the job is deleted).
        shared_ptr<string> status_ {};
        // The job submission result.
        Darabonba::Json submitResultJson_ {};
        // The time when the job was submitted.
        shared_ptr<string> submitTime_ {};
        // The user data.
        shared_ptr<string> userData_ {};
      };

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
        // The ID of the ApsaraVideo Media Processing (MPS) queue to which the snapshot job was submitted.
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
                // The maximum ABR. This parameter takes effect only for Narrowband HD 1.0.
                // 
                // *   Valid values: [10,50000].
                // *   Unit: Kbit/s.
                shared_ptr<string> abrMax_ {};
                // The average bitrate of the video.
                // 
                // *   Valid values: [10,50000].
                // *   Unit: Kbit/s.
                shared_ptr<string> bitrate_ {};
                // The buffer size.
                // 
                // *   Valid values: [1000,128000].
                // *   Default value: 6000.
                // *   Unit: KB.
                shared_ptr<string> bufsize_ {};
                // The encoding format.
                shared_ptr<string> codec_ {};
                // The constant rate factor.
                // 
                // *   Valid values: [0,51].
                // *   Default value: 23 if the encoding format is H.264, or 26 if the encoding format is H.265.
                // *   If this parameter is specified, the value of Bitrate becomes invalid.
                shared_ptr<string> crf_ {};
                // The method of video cropping. Valid values: border: automatically detects and removes black bars. A value in the width:height:left:top format: crops the videos based on the custom settings. Example: 1280:800:0:140.
                shared_ptr<string> crop_ {};
                // The frame rate.
                // 
                // *   Valid values: (0,60].
                // *   The value is 60 if the frame rate of the input video exceeds 60.
                // *   Default value: the frame rate of the input video.
                shared_ptr<string> fps_ {};
                // The maximum number of frames between two keyframes.
                // 
                // *   Valid values: [1,1080000].
                // *   Default value: 250.
                shared_ptr<string> gop_ {};
                // The height of the output video.
                // 
                // *   Valid values: [128,4096].
                // *   Unit: pixels.
                // *   Default value: the height of the input video.
                shared_ptr<string> height_ {};
                // Indicates whether the auto-rotate screen feature is enabled.
                shared_ptr<string> longShortMode_ {};
                // The maximum bitrate of the output video.
                // 
                // *   Valid values: [10,50000].
                // *   Unit: Kbit/s.
                shared_ptr<string> maxrate_ {};
                // The black bars added to the video.
                // 
                // *   Format: width:height:left:top.
                // *   Example: 1280:800:0:140.
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
                // Indicates whether the video was removed.
                shared_ptr<string> remove_ {};
                // The scan mode. Valid values: interlaced and progressive.
                shared_ptr<string> scanMode_ {};
                // The width of the output video.
                // 
                // *   Valid values: [128,4096].
                // *   Unit: pixels.
                // *   Default value: the width of the input video.
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
                // Indicates whether the audio bitrate was checked. You can specify only one of the IsCheckAudioBitrate and IsCheckAudioBitrateFail parameters. The priority of the IsCheckAudioBitrateFail parameter is higher. Valid values:
                // 
                // *   true If the bitrate of the input audio is less than that of the output audio, the bitrate of the input audio is used for transcoding.
                // *   false
                // 
                // Default value:
                // 
                // *   If this parameter is not specified and the codec of the output audio is different from that of the input audio, the default value is false.
                // *   If this parameter is not specified and the codec of the output audio is the same as that of the input audio, the default value is true.
                shared_ptr<string> isCheckAudioBitrate_ {};
                // Indicates whether the audio bitrate was checked. You can specify only one of the IsCheckAudioBitrate and IsCheckAudioBitrateFail parameters. The priority of the IsCheckAudioBitrateFail parameter is higher. Valid values:
                // 
                // *   true If the bitrate of the input audio is less than that of the output audio, the transcoding job fails.
                // *   false
                // 
                // Default value: false.
                shared_ptr<string> isCheckAudioBitrateFail_ {};
                // Indicates whether the video resolution was checked. You can specify only one of the IsCheckReso and IsCheckResoFail parameters. The priority of the IsCheckResoFail parameter is higher. Valid values:
                // 
                // *   true If the width or height of the input video is less than that of the output video, the resolution of the input video is used for transcoding.
                // *   false
                // 
                // Default value: false.
                shared_ptr<string> isCheckReso_ {};
                // Indicates whether the video resolution was checked. You can specify only one of the IsCheckReso and IsCheckResoFail parameters. The priority of the IsCheckResoFail parameter is higher. Valid values:
                // 
                // *   true If the width or height of the input video is less than that of the output video, the transcoding job fails.
                // *   false
                // 
                // Default value: false.
                shared_ptr<string> isCheckResoFail_ {};
                // Indicates whether the video bitrate was checked. You can specify only one of the IsCheckVideoBitrate and IsCheckVideoBitrateFail parameters. The priority of the IsCheckVideoBitrateFail parameter is higher. Valid values:
                // 
                // *   true If the bitrate of the input video is less than that of the output video, the bitrate of the input video is used for transcoding.
                // *   false
                // 
                // Default value: false.
                shared_ptr<string> isCheckVideoBitrate_ {};
                // Indicates whether the video bitrate was checked. You can specify only one of the IsCheckVideoBitrate and IsCheckVideoBitrateFail parameters. The priority of the IsCheckVideoBitrateFail parameter is higher. Valid values:
                // 
                // *   true If the bitrate of the input video is less than that of the output video, the transcoding job fails.
                // *   false
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
                // The audio bitrate of the output file.
                // 
                // *   Valid values: [8,1000].
                // *   Unit: Kbit/s.
                // *   Default value: 128.
                shared_ptr<string> bitrate_ {};
                // The number of sound channels. Default value: 2.
                shared_ptr<string> channels_ {};
                // The audio codec. Valid values: AAC, MP3, VORBIS, and FLAC. Default value: AAC.
                shared_ptr<string> codec_ {};
                // The audio codec profile. If the Codec parameter is set to AAC, the valid values are aac_low, aac_he, aac_he_v2, aac_ld, and aac_eld.
                shared_ptr<string> profile_ {};
                // Indicates whether the audio stream is deleted.
                shared_ptr<string> remove_ {};
                // The sampling rate.
                // 
                // *   Default value: 44100.
                // *   Valid values: 22050, 32000, 44100, 48000, and 96000.
                // *   Unit: Hz.
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
              // Indicates whether the text size was adjusted based on the output video dimensions. Valid values: true and false. Default value: false.
              shared_ptr<string> adaptive_ {};
              // The border color.
              shared_ptr<string> borderColor_ {};
              // The border width.
              shared_ptr<int32_t> borderWidth_ {};
              // The watermark text. Base64 encoding is not required. The string must be encoded in UTF-8.
              shared_ptr<string> content_ {};
              // The transparency of the watermark.
              shared_ptr<string> fontAlpha_ {};
              // The color of the text.
              shared_ptr<string> fontColor_ {};
              // The font of the text.
              shared_ptr<string> fontName_ {};
              // The size of the text.
              shared_ptr<int32_t> fontSize_ {};
              // The distance of the watermark from the left edge.
              shared_ptr<string> left_ {};
              // The distance of the watermark from the top edge.
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
                // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
                // *   If Type is set to Media, the ID of a media asset is returned.
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
                // The duration of the stream. Valid values: the number of seconds or "ToEND".
                shared_ptr<string> duration_ {};
                // The start time of the stream.
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
                // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
                // *   If Type is set to Media, the ID of a media asset is returned.
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
              // The position of the watermark on the x-axis.
              shared_ptr<string> dx_ {};
              // The position of the watermark on the y-axis.
              shared_ptr<string> dy_ {};
              // The watermark image file.
              shared_ptr<OverwriteParams::File> file_ {};
              // The height of the output video.
              shared_ptr<string> height_ {};
              // The reference position of the watermark. Valid values: TopLeft, TopRight, BottomLeft, and BottomRight. Default value: TopLeft.
              shared_ptr<string> referPos_ {};
              // The timeline settings.
              shared_ptr<OverwriteParams::Timeline> timeline_ {};
              // The width of the output video.
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
            // The ciphertext of HLS encryption.
            shared_ptr<string> cipherText_ {};
            // The endpoint of the decryption service for HLS encryption.
            shared_ptr<string> decryptKeyUri_ {};
            // The encryption type.
            shared_ptr<string> encryptType_ {};
            // The type of the key service. Valid values: KMS and Base64.
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
          // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
          // *   If Type is set to Media, the ID of a media asset is returned.
          shared_ptr<string> media_ {};
          // The URL of the output stream.
          shared_ptr<string> outputUrl_ {};
          // The type of the media object. Valid values:
          // 
          // *   OSS: an OSS object.
          // *   Media: a media asset.
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
        shared_ptr<OutputGroup::Output> output_ {};
        // The job processing configuration.
        shared_ptr<OutputGroup::ProcessConfig> processConfig_ {};
      };

      class InputGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputGroup& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, InputGroup& obj) { 
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
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
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
        // The media object.
        // 
        // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
        // *   If Type is set to Media, the ID of a media asset is returned.
        shared_ptr<string> media_ {};
        // The type of the media object. Valid values:
        // 
        // *   OSS: an OSS object.
        // *   Media: a media asset.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->inputGroup_ == nullptr && this->jobCount_ == nullptr && this->name_ == nullptr && this->outputGroup_ == nullptr
        && this->parentJobId_ == nullptr && this->percent_ == nullptr && this->requestId_ == nullptr && this->scheduleConfig_ == nullptr && this->status_ == nullptr
        && this->submitTime_ == nullptr && this->transcodeJobList_ == nullptr && this->triggerSource_ == nullptr && this->userData_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TranscodeParentJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline TranscodeParentJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // inputGroup Field Functions 
      bool hasInputGroup() const { return this->inputGroup_ != nullptr;};
      void deleteInputGroup() { this->inputGroup_ = nullptr;};
      inline const vector<TranscodeParentJob::InputGroup> & getInputGroup() const { DARABONBA_PTR_GET_CONST(inputGroup_, vector<TranscodeParentJob::InputGroup>) };
      inline vector<TranscodeParentJob::InputGroup> getInputGroup() { DARABONBA_PTR_GET(inputGroup_, vector<TranscodeParentJob::InputGroup>) };
      inline TranscodeParentJob& setInputGroup(const vector<TranscodeParentJob::InputGroup> & inputGroup) { DARABONBA_PTR_SET_VALUE(inputGroup_, inputGroup) };
      inline TranscodeParentJob& setInputGroup(vector<TranscodeParentJob::InputGroup> && inputGroup) { DARABONBA_PTR_SET_RVALUE(inputGroup_, inputGroup) };


      // jobCount Field Functions 
      bool hasJobCount() const { return this->jobCount_ != nullptr;};
      void deleteJobCount() { this->jobCount_ = nullptr;};
      inline int32_t getJobCount() const { DARABONBA_PTR_GET_DEFAULT(jobCount_, 0) };
      inline TranscodeParentJob& setJobCount(int32_t jobCount) { DARABONBA_PTR_SET_VALUE(jobCount_, jobCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TranscodeParentJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputGroup Field Functions 
      bool hasOutputGroup() const { return this->outputGroup_ != nullptr;};
      void deleteOutputGroup() { this->outputGroup_ = nullptr;};
      inline const vector<TranscodeParentJob::OutputGroup> & getOutputGroup() const { DARABONBA_PTR_GET_CONST(outputGroup_, vector<TranscodeParentJob::OutputGroup>) };
      inline vector<TranscodeParentJob::OutputGroup> getOutputGroup() { DARABONBA_PTR_GET(outputGroup_, vector<TranscodeParentJob::OutputGroup>) };
      inline TranscodeParentJob& setOutputGroup(const vector<TranscodeParentJob::OutputGroup> & outputGroup) { DARABONBA_PTR_SET_VALUE(outputGroup_, outputGroup) };
      inline TranscodeParentJob& setOutputGroup(vector<TranscodeParentJob::OutputGroup> && outputGroup) { DARABONBA_PTR_SET_RVALUE(outputGroup_, outputGroup) };


      // parentJobId Field Functions 
      bool hasParentJobId() const { return this->parentJobId_ != nullptr;};
      void deleteParentJobId() { this->parentJobId_ = nullptr;};
      inline string getParentJobId() const { DARABONBA_PTR_GET_DEFAULT(parentJobId_, "") };
      inline TranscodeParentJob& setParentJobId(string parentJobId) { DARABONBA_PTR_SET_VALUE(parentJobId_, parentJobId) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
      inline TranscodeParentJob& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline TranscodeParentJob& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // scheduleConfig Field Functions 
      bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
      void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
      inline const TranscodeParentJob::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, TranscodeParentJob::ScheduleConfig) };
      inline TranscodeParentJob::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, TranscodeParentJob::ScheduleConfig) };
      inline TranscodeParentJob& setScheduleConfig(const TranscodeParentJob::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
      inline TranscodeParentJob& setScheduleConfig(TranscodeParentJob::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TranscodeParentJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline TranscodeParentJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // transcodeJobList Field Functions 
      bool hasTranscodeJobList() const { return this->transcodeJobList_ != nullptr;};
      void deleteTranscodeJobList() { this->transcodeJobList_ = nullptr;};
      inline const vector<TranscodeParentJob::TranscodeJobList> & getTranscodeJobList() const { DARABONBA_PTR_GET_CONST(transcodeJobList_, vector<TranscodeParentJob::TranscodeJobList>) };
      inline vector<TranscodeParentJob::TranscodeJobList> getTranscodeJobList() { DARABONBA_PTR_GET(transcodeJobList_, vector<TranscodeParentJob::TranscodeJobList>) };
      inline TranscodeParentJob& setTranscodeJobList(const vector<TranscodeParentJob::TranscodeJobList> & transcodeJobList) { DARABONBA_PTR_SET_VALUE(transcodeJobList_, transcodeJobList) };
      inline TranscodeParentJob& setTranscodeJobList(vector<TranscodeParentJob::TranscodeJobList> && transcodeJobList) { DARABONBA_PTR_SET_RVALUE(transcodeJobList_, transcodeJobList) };


      // triggerSource Field Functions 
      bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
      void deleteTriggerSource() { this->triggerSource_ = nullptr;};
      inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
      inline TranscodeParentJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline TranscodeParentJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the job was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> finishTime_ {};
      // The input group of the job. An input of a single file indicates a transcoding job. An input of multiple files indicates an audio and video stream merge job.
      shared_ptr<vector<TranscodeParentJob::InputGroup>> inputGroup_ {};
      // The number of subjobs.
      shared_ptr<int32_t> jobCount_ {};
      // The job name.
      shared_ptr<string> name_ {};
      // The output group of the job.
      shared_ptr<vector<TranscodeParentJob::OutputGroup>> outputGroup_ {};
      // The main job ID.
      shared_ptr<string> parentJobId_ {};
      // The completion percentage of the job.
      shared_ptr<int32_t> percent_ {};
      // The ID of the request that submitted the job.
      shared_ptr<string> requestId_ {};
      // The scheduling configuration of the job.
      shared_ptr<TranscodeParentJob::ScheduleConfig> scheduleConfig_ {};
      // The state of the job.
      // 
      // *   Success: At least one of the subjobs is successful.
      // *   Fail: All subjobs failed.
      shared_ptr<string> status_ {};
      // The time when the job was submitted. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> submitTime_ {};
      // The list of subjobs.
      shared_ptr<vector<TranscodeParentJob::TranscodeJobList>> transcodeJobList_ {};
      // The source of the job. Valid values:
      // 
      // *   API
      // *   WorkFlow
      // *   Console
      shared_ptr<string> triggerSource_ {};
      // The user data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->transcodeParentJob_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeParentJob Field Functions 
    bool hasTranscodeParentJob() const { return this->transcodeParentJob_ != nullptr;};
    void deleteTranscodeParentJob() { this->transcodeParentJob_ = nullptr;};
    inline const GetTranscodeJobResponseBody::TranscodeParentJob & getTranscodeParentJob() const { DARABONBA_PTR_GET_CONST(transcodeParentJob_, GetTranscodeJobResponseBody::TranscodeParentJob) };
    inline GetTranscodeJobResponseBody::TranscodeParentJob getTranscodeParentJob() { DARABONBA_PTR_GET(transcodeParentJob_, GetTranscodeJobResponseBody::TranscodeParentJob) };
    inline GetTranscodeJobResponseBody& setTranscodeParentJob(const GetTranscodeJobResponseBody::TranscodeParentJob & transcodeParentJob) { DARABONBA_PTR_SET_VALUE(transcodeParentJob_, transcodeParentJob) };
    inline GetTranscodeJobResponseBody& setTranscodeParentJob(GetTranscodeJobResponseBody::TranscodeParentJob && transcodeParentJob) { DARABONBA_PTR_SET_RVALUE(transcodeParentJob_, transcodeParentJob) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // TranscodeParentJobWithSubJobDTO
    shared_ptr<GetTranscodeJobResponseBody::TranscodeParentJob> transcodeParentJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
