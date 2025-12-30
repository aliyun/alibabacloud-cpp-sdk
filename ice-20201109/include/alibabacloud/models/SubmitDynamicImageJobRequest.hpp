// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitDynamicImageJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitDynamicImageJobRequest() = default ;
    SubmitDynamicImageJobRequest(const SubmitDynamicImageJobRequest &) = default ;
    SubmitDynamicImageJobRequest(SubmitDynamicImageJobRequest &&) = default ;
    SubmitDynamicImageJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobRequest() = default ;
    SubmitDynamicImageJobRequest& operator=(const SubmitDynamicImageJobRequest &) = default ;
    SubmitDynamicImageJobRequest& operator=(SubmitDynamicImageJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      TemplateConfig() = default ;
      TemplateConfig(const TemplateConfig &) = default ;
      TemplateConfig(TemplateConfig &&) = default ;
      TemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateConfig() = default ;
      TemplateConfig& operator=(const TemplateConfig &) = default ;
      TemplateConfig& operator=(TemplateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OverwriteParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OverwriteParams& obj) { 
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(LongShortMode, longShortMode_);
          DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
          DARABONBA_PTR_TO_JSON(TimeSpan, timeSpan_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, OverwriteParams& obj) { 
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(LongShortMode, longShortMode_);
          DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
          DARABONBA_PTR_FROM_JSON(TimeSpan, timeSpan_);
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
        class TimeSpan : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TimeSpan& obj) { 
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(End, end_);
            DARABONBA_PTR_TO_JSON(Seek, seek_);
          };
          friend void from_json(const Darabonba::Json& j, TimeSpan& obj) { 
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(End, end_);
            DARABONBA_PTR_FROM_JSON(Seek, seek_);
          };
          TimeSpan() = default ;
          TimeSpan(const TimeSpan &) = default ;
          TimeSpan(TimeSpan &&) = default ;
          TimeSpan(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TimeSpan() = default ;
          TimeSpan& operator=(const TimeSpan &) = default ;
          TimeSpan& operator=(TimeSpan &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->duration_ == nullptr
        && this->end_ == nullptr && this->seek_ == nullptr; };
          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline TimeSpan& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
          inline TimeSpan& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


          // seek Field Functions 
          bool hasSeek() const { return this->seek_ != nullptr;};
          void deleteSeek() { this->seek_ = nullptr;};
          inline string getSeek() const { DARABONBA_PTR_GET_DEFAULT(seek_, "") };
          inline TimeSpan& setSeek(string seek) { DARABONBA_PTR_SET_VALUE(seek_, seek) };


        protected:
          // The length of the clip.
          // 
          // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
          // *   Valid values: `[00:00:00.000,23:59:59.999]` or `[0.000,86399.999]`.
          shared_ptr<string> duration_ {};
          // The length of the ending part of the original clip to be cropped out. If you specify this parameter, the Duration parameter becomes invalid.
          // 
          // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
          // *   Valid values: `[00:00:00.000,23:59:59.999]` or `[0.000,86399.999]`.
          shared_ptr<string> end_ {};
          // The start point of the clip.
          // 
          // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
          // *   Valid values: `[00:00:00.000,23:59:59.999]` or `[0.000,86399.999]`.
          shared_ptr<string> seek_ {};
        };

        virtual bool empty() const override { return this->format_ == nullptr
        && this->fps_ == nullptr && this->height_ == nullptr && this->longShortMode_ == nullptr && this->scanMode_ == nullptr && this->timeSpan_ == nullptr
        && this->width_ == nullptr; };
        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline OverwriteParams& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline int32_t getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
        inline OverwriteParams& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline OverwriteParams& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // longShortMode Field Functions 
        bool hasLongShortMode() const { return this->longShortMode_ != nullptr;};
        void deleteLongShortMode() { this->longShortMode_ = nullptr;};
        inline bool getLongShortMode() const { DARABONBA_PTR_GET_DEFAULT(longShortMode_, false) };
        inline OverwriteParams& setLongShortMode(bool longShortMode) { DARABONBA_PTR_SET_VALUE(longShortMode_, longShortMode) };


        // scanMode Field Functions 
        bool hasScanMode() const { return this->scanMode_ != nullptr;};
        void deleteScanMode() { this->scanMode_ = nullptr;};
        inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
        inline OverwriteParams& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


        // timeSpan Field Functions 
        bool hasTimeSpan() const { return this->timeSpan_ != nullptr;};
        void deleteTimeSpan() { this->timeSpan_ = nullptr;};
        inline const OverwriteParams::TimeSpan & getTimeSpan() const { DARABONBA_PTR_GET_CONST(timeSpan_, OverwriteParams::TimeSpan) };
        inline OverwriteParams::TimeSpan getTimeSpan() { DARABONBA_PTR_GET(timeSpan_, OverwriteParams::TimeSpan) };
        inline OverwriteParams& setTimeSpan(const OverwriteParams::TimeSpan & timeSpan) { DARABONBA_PTR_SET_VALUE(timeSpan_, timeSpan) };
        inline OverwriteParams& setTimeSpan(OverwriteParams::TimeSpan && timeSpan) { DARABONBA_PTR_SET_RVALUE(timeSpan_, timeSpan) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline OverwriteParams& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The format of the animated image. Valid values:
        // 
        // *   **gif**
        // *   **webp**
        shared_ptr<string> format_ {};
        // The frame rate. Valid values: [1,60].
        shared_ptr<int32_t> fps_ {};
        // The height of the animated image. Valid values: [128,4096].
        shared_ptr<int32_t> height_ {};
        // Specifies whether to enable the auto-rotate screen feature. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // Default value: **true**.
        // 
        // >  If this feature is enabled, the width of the output video corresponds to the long side of the input video, which is the height of the input video in portrait mode. The height of the output video corresponds to the short side of the input video, which is the width of the input video in portrait mode.
        shared_ptr<bool> longShortMode_ {};
        // The scan mode. Valid values:
        // 
        // *   **interlaced**
        // *   **progressive** This is the default value.
        shared_ptr<string> scanMode_ {};
        // The timeline parameters.
        shared_ptr<OverwriteParams::TimeSpan> timeSpan_ {};
        // The width of the animated image. Valid values: [128,4096].
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->overwriteParams_ == nullptr
        && this->templateId_ == nullptr; };
      // overwriteParams Field Functions 
      bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
      void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
      inline const TemplateConfig::OverwriteParams & getOverwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, TemplateConfig::OverwriteParams) };
      inline TemplateConfig::OverwriteParams getOverwriteParams() { DARABONBA_PTR_GET(overwriteParams_, TemplateConfig::OverwriteParams) };
      inline TemplateConfig& setOverwriteParams(const TemplateConfig::OverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
      inline TemplateConfig& setOverwriteParams(TemplateConfig::OverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline TemplateConfig& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The parameters that are used to overwrite the corresponding parameters.
      shared_ptr<TemplateConfig::OverwriteParams> overwriteParams_ {};
      // The template ID.
      // 
      // This parameter is required.
      shared_ptr<string> templateId_ {};
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
      // The ID of the MPS queue to which the job was submitted.
      shared_ptr<string> pipelineId_ {};
      // The priority. Valid values: 1 to 10. Default value: 6. A greater value specifies a higher priority.
      shared_ptr<int32_t> priority_ {};
    };

    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
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
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The output file. The file can be an OSS object or a media asset. The URL of an OSS object can be in one of the following formats:
      // 
      // *   oss://bucket/object
      // *   http(s)://bucket.oss-[regionId].aliyuncs.com/object
      // 
      // In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS.
      // 
      // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the IMS console.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the output file. Valid values:
      // 
      // 1.  OSS: an OSS object.
      // 2.  Media: a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The input file. If Type is set to OSS, set this parameter to the URL of an OSS object. If Type is set to Media, set this parameter to the ID of a media asset. The URL of an OSS object can be in one of the following formats:
      // 
      // 1.  oss://bucket/object
      // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object
      // 
      // In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS.
      // 
      // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the Intelligent Media Services (IMS) console.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the input file. Valid values:
      // 
      // 1.  OSS: an Object Storage Service (OSS) object.
      // 2.  Media: a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->input_ == nullptr
        && this->name_ == nullptr && this->output_ == nullptr && this->scheduleConfig_ == nullptr && this->templateConfig_ == nullptr && this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitDynamicImageJobRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SubmitDynamicImageJobRequest::Input) };
    inline SubmitDynamicImageJobRequest::Input getInput() { DARABONBA_PTR_GET(input_, SubmitDynamicImageJobRequest::Input) };
    inline SubmitDynamicImageJobRequest& setInput(const SubmitDynamicImageJobRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitDynamicImageJobRequest& setInput(SubmitDynamicImageJobRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitDynamicImageJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitDynamicImageJobRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, SubmitDynamicImageJobRequest::Output) };
    inline SubmitDynamicImageJobRequest::Output getOutput() { DARABONBA_PTR_GET(output_, SubmitDynamicImageJobRequest::Output) };
    inline SubmitDynamicImageJobRequest& setOutput(const SubmitDynamicImageJobRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitDynamicImageJobRequest& setOutput(SubmitDynamicImageJobRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitDynamicImageJobRequest::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitDynamicImageJobRequest::ScheduleConfig) };
    inline SubmitDynamicImageJobRequest::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitDynamicImageJobRequest::ScheduleConfig) };
    inline SubmitDynamicImageJobRequest& setScheduleConfig(const SubmitDynamicImageJobRequest::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitDynamicImageJobRequest& setScheduleConfig(SubmitDynamicImageJobRequest::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const SubmitDynamicImageJobRequest::TemplateConfig & getTemplateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, SubmitDynamicImageJobRequest::TemplateConfig) };
    inline SubmitDynamicImageJobRequest::TemplateConfig getTemplateConfig() { DARABONBA_PTR_GET(templateConfig_, SubmitDynamicImageJobRequest::TemplateConfig) };
    inline SubmitDynamicImageJobRequest& setTemplateConfig(const SubmitDynamicImageJobRequest::TemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline SubmitDynamicImageJobRequest& setTemplateConfig(SubmitDynamicImageJobRequest::TemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitDynamicImageJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    shared_ptr<SubmitDynamicImageJobRequest::Input> input_ {};
    // The name of the job.
    shared_ptr<string> name_ {};
    // The output of the job.
    // 
    // This parameter is required.
    shared_ptr<SubmitDynamicImageJobRequest::Output> output_ {};
    // The scheduling settings.
    shared_ptr<SubmitDynamicImageJobRequest::ScheduleConfig> scheduleConfig_ {};
    // The snapshot template configuration.
    // 
    // This parameter is required.
    shared_ptr<SubmitDynamicImageJobRequest::TemplateConfig> templateConfig_ {};
    // The user-defined data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
