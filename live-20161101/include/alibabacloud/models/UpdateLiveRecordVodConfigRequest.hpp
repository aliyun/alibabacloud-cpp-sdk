// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVERECORDVODCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVERECORDVODCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveRecordVodConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveRecordVodConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AutoCompose, autoCompose_);
      DARABONBA_PTR_TO_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
      DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplates, transcodeTemplates_);
      DARABONBA_PTR_TO_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveRecordVodConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
      DARABONBA_PTR_FROM_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplates, transcodeTemplates_);
      DARABONBA_PTR_FROM_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
    };
    UpdateLiveRecordVodConfigRequest() = default ;
    UpdateLiveRecordVodConfigRequest(const UpdateLiveRecordVodConfigRequest &) = default ;
    UpdateLiveRecordVodConfigRequest(UpdateLiveRecordVodConfigRequest &&) = default ;
    UpdateLiveRecordVodConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveRecordVodConfigRequest() = default ;
    UpdateLiveRecordVodConfigRequest& operator=(const UpdateLiveRecordVodConfigRequest &) = default ;
    UpdateLiveRecordVodConfigRequest& operator=(UpdateLiveRecordVodConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordFormat& obj) { 
        DARABONBA_PTR_TO_JSON(AutoCompose, autoCompose_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(ProcessMethod, processMethod_);
        DARABONBA_PTR_TO_JSON(ProcessTemplateId, processTemplateId_);
        DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VideoProcess, videoProcess_);
      };
      friend void from_json(const Darabonba::Json& j, RecordFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(ProcessMethod, processMethod_);
        DARABONBA_PTR_FROM_JSON(ProcessTemplateId, processTemplateId_);
        DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VideoProcess, videoProcess_);
      };
      RecordFormat() = default ;
      RecordFormat(const RecordFormat &) = default ;
      RecordFormat(RecordFormat &&) = default ;
      RecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordFormat() = default ;
      RecordFormat& operator=(const RecordFormat &) = default ;
      RecordFormat& operator=(RecordFormat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoCompose_ == nullptr
        && this->format_ == nullptr && this->processMethod_ == nullptr && this->processTemplateId_ == nullptr && this->sliceDuration_ == nullptr && this->tags_ == nullptr
        && this->videoProcess_ == nullptr; };
      // autoCompose Field Functions 
      bool hasAutoCompose() const { return this->autoCompose_ != nullptr;};
      void deleteAutoCompose() { this->autoCompose_ = nullptr;};
      inline string getAutoCompose() const { DARABONBA_PTR_GET_DEFAULT(autoCompose_, "") };
      inline RecordFormat& setAutoCompose(string autoCompose) { DARABONBA_PTR_SET_VALUE(autoCompose_, autoCompose) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline RecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // processMethod Field Functions 
      bool hasProcessMethod() const { return this->processMethod_ != nullptr;};
      void deleteProcessMethod() { this->processMethod_ = nullptr;};
      inline string getProcessMethod() const { DARABONBA_PTR_GET_DEFAULT(processMethod_, "") };
      inline RecordFormat& setProcessMethod(string processMethod) { DARABONBA_PTR_SET_VALUE(processMethod_, processMethod) };


      // processTemplateId Field Functions 
      bool hasProcessTemplateId() const { return this->processTemplateId_ != nullptr;};
      void deleteProcessTemplateId() { this->processTemplateId_ = nullptr;};
      inline string getProcessTemplateId() const { DARABONBA_PTR_GET_DEFAULT(processTemplateId_, "") };
      inline RecordFormat& setProcessTemplateId(string processTemplateId) { DARABONBA_PTR_SET_VALUE(processTemplateId_, processTemplateId) };


      // sliceDuration Field Functions 
      bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
      void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
      inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
      inline RecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline RecordFormat& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // videoProcess Field Functions 
      bool hasVideoProcess() const { return this->videoProcess_ != nullptr;};
      void deleteVideoProcess() { this->videoProcess_ = nullptr;};
      inline string getVideoProcess() const { DARABONBA_PTR_GET_DEFAULT(videoProcess_, "") };
      inline RecordFormat& setVideoProcess(string videoProcess) { DARABONBA_PTR_SET_VALUE(videoProcess_, videoProcess) };


    protected:
      // Specifies whether to enable automatic composition. Valid values:
      // 
      // - `ON`: Enables automatic composition.
      // 
      // - `OFF`: Disables automatic composition.
      shared_ptr<string> autoCompose_ {};
      // The recording storage format.
      shared_ptr<string> format_ {};
      // The video processing method. Valid values:
      // 
      // - `transcode`: Processes the video by using a transcoding template group.
      // 
      // - `workflow`: Processes the video by using a workflow.
      shared_ptr<string> processMethod_ {};
      // The ID of the transcoding template group or workflow.
      // 
      // > ## The ID must match the video processing method specified in ProcessMethod. For example, if ProcessMethod is set to transcode, you must use a transcoding template group ID.
      shared_ptr<string> processTemplateId_ {};
      // The duration of each segment, in seconds.
      // >Notice: This parameter applies only to the `m3u8` format.
      // The default value is 30. Valid values: 5 to 30.
      shared_ptr<int32_t> sliceDuration_ {};
      // A tag for video classification.
      shared_ptr<string> tags_ {};
      // The video source to process. Valid values:
      // 
      // - `origin` (default): Processes the source video.
      // 
      // - `compose`: Processes the composed video.
      // 
      // To process both the source and composed videos, separate the values with a comma. For example, `origin,compose`.
      shared_ptr<string> videoProcess_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->autoCompose_ == nullptr && this->composeVodTranscodeGroupId_ == nullptr && this->cycleDuration_ == nullptr && this->delayTime_ == nullptr && this->domainName_ == nullptr
        && this->onDemand_ == nullptr && this->ownerId_ == nullptr && this->recordFormat_ == nullptr && this->regionId_ == nullptr && this->streamName_ == nullptr
        && this->transcodeTemplates_ == nullptr && this->vodTranscodeGroupId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateLiveRecordVodConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // autoCompose Field Functions 
    bool hasAutoCompose() const { return this->autoCompose_ != nullptr;};
    void deleteAutoCompose() { this->autoCompose_ = nullptr;};
    inline string getAutoCompose() const { DARABONBA_PTR_GET_DEFAULT(autoCompose_, "") };
    inline UpdateLiveRecordVodConfigRequest& setAutoCompose(string autoCompose) { DARABONBA_PTR_SET_VALUE(autoCompose_, autoCompose) };


    // composeVodTranscodeGroupId Field Functions 
    bool hasComposeVodTranscodeGroupId() const { return this->composeVodTranscodeGroupId_ != nullptr;};
    void deleteComposeVodTranscodeGroupId() { this->composeVodTranscodeGroupId_ = nullptr;};
    inline string getComposeVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(composeVodTranscodeGroupId_, "") };
    inline UpdateLiveRecordVodConfigRequest& setComposeVodTranscodeGroupId(string composeVodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(composeVodTranscodeGroupId_, composeVodTranscodeGroupId) };


    // cycleDuration Field Functions 
    bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
    void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
    inline int32_t getCycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
    inline UpdateLiveRecordVodConfigRequest& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline UpdateLiveRecordVodConfigRequest& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveRecordVodConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // onDemand Field Functions 
    bool hasOnDemand() const { return this->onDemand_ != nullptr;};
    void deleteOnDemand() { this->onDemand_ = nullptr;};
    inline int32_t getOnDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
    inline UpdateLiveRecordVodConfigRequest& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveRecordVodConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<UpdateLiveRecordVodConfigRequest::RecordFormat> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<UpdateLiveRecordVodConfigRequest::RecordFormat>) };
    inline vector<UpdateLiveRecordVodConfigRequest::RecordFormat> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<UpdateLiveRecordVodConfigRequest::RecordFormat>) };
    inline UpdateLiveRecordVodConfigRequest& setRecordFormat(const vector<UpdateLiveRecordVodConfigRequest::RecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline UpdateLiveRecordVodConfigRequest& setRecordFormat(vector<UpdateLiveRecordVodConfigRequest::RecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLiveRecordVodConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline UpdateLiveRecordVodConfigRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodeTemplates Field Functions 
    bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
    void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
    inline const vector<string> & getTranscodeTemplates() const { DARABONBA_PTR_GET_CONST(transcodeTemplates_, vector<string>) };
    inline vector<string> getTranscodeTemplates() { DARABONBA_PTR_GET(transcodeTemplates_, vector<string>) };
    inline UpdateLiveRecordVodConfigRequest& setTranscodeTemplates(const vector<string> & transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };
    inline UpdateLiveRecordVodConfigRequest& setTranscodeTemplates(vector<string> && transcodeTemplates) { DARABONBA_PTR_SET_RVALUE(transcodeTemplates_, transcodeTemplates) };


    // vodTranscodeGroupId Field Functions 
    bool hasVodTranscodeGroupId() const { return this->vodTranscodeGroupId_ != nullptr;};
    void deleteVodTranscodeGroupId() { this->vodTranscodeGroupId_ = nullptr;};
    inline string getVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTranscodeGroupId_, "") };
    inline UpdateLiveRecordVodConfigRequest& setVodTranscodeGroupId(string vodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(vodTranscodeGroupId_, vodTranscodeGroupId) };


  protected:
    // The application name. You can view the `AppName` on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // >Notice: This parameter is ignored if the `RecordFormat` parameter is specified.
    // Specifies whether to enable automatic composition. Valid values:
    // 
    // - **ON**: Enables automatic composition. If you set this value to ON, you must also specify the `ComposeVodTranscodeGroupId` parameter.
    shared_ptr<string> autoCompose_ {};
    // >Notice: This parameter is ignored if the `RecordFormat` parameter is specified.
    // The ID of the ApsaraVideo for VOD transcoding template group used to transcode the video after automatic composition.
    // 
    // > You can get the ID by calling the [Query Transcoding Configuration List](https://help.aliyun.com/document_detail/454928.html) operation.
    shared_ptr<string> composeVodTranscodeGroupId_ {};
    // The duration of each cyclical recording file, in seconds. Default value: **3600**. Valid values: **300** to **21600**.
    shared_ptr<int32_t> cycleDuration_ {};
    // The maximum duration of a stream interruption, in seconds. If a stream interruption exceeds this duration, the system generates a new file. Valid values: 15 to 21600.
    shared_ptr<int32_t> delayTime_ {};
    // The streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The on-demand recording mode. Valid values:
    // 
    // - **0** (default): Disables on-demand recording.
    // 
    // - **1**: Enables on-demand recording triggered by an HTTP callback.
    // 
    // - **2**: Triggers recording by parsing push streaming parameters.
    // 
    // - **7**: Manual recording. Call the [RealTimeRecordCommand](https://help.aliyun.com/document_detail/2847882.html) operation to start or stop recording.
    shared_ptr<int32_t> onDemand_ {};
    shared_ptr<int64_t> ownerId_ {};
    // A list of parameters for each recording format.
    shared_ptr<vector<UpdateLiveRecordVodConfigRequest::RecordFormat>> recordFormat_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The stream name. You can view the `StreamName` on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    shared_ptr<string> streamName_ {};
    // A list of transcoding templates.
    shared_ptr<vector<string>> transcodeTemplates_ {};
    // >Notice: This parameter is ignored if the `RecordFormat` parameter is specified. The ID of the ApsaraVideo for VOD transcoding template group.
    shared_ptr<string> vodTranscodeGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
