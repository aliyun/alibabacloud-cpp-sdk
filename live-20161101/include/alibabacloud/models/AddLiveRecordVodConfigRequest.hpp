// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVERECORDVODCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVERECORDVODCONFIGREQUEST_HPP_
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
  class AddLiveRecordVodConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveRecordVodConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AutoCompose, autoCompose_);
      DARABONBA_PTR_TO_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
      DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecordContent, recordContent_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplates, transcodeTemplates_);
      DARABONBA_PTR_TO_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveRecordVodConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
      DARABONBA_PTR_FROM_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecordContent, recordContent_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplates, transcodeTemplates_);
      DARABONBA_PTR_FROM_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
    };
    AddLiveRecordVodConfigRequest() = default ;
    AddLiveRecordVodConfigRequest(const AddLiveRecordVodConfigRequest &) = default ;
    AddLiveRecordVodConfigRequest(AddLiveRecordVodConfigRequest &&) = default ;
    AddLiveRecordVodConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveRecordVodConfigRequest() = default ;
    AddLiveRecordVodConfigRequest& operator=(const AddLiveRecordVodConfigRequest &) = default ;
    AddLiveRecordVodConfigRequest& operator=(AddLiveRecordVodConfigRequest &&) = default ;
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
      // Specifies whether to automatically merge recording files for this format after the stream ends. Valid values:
      // 
      // - `ON`: Enables automatic merging.
      // 
      // - `OFF`: Disables automatic merging.
      shared_ptr<string> autoCompose_ {};
      // The recording format. Valid values:
      // 
      // - `m3u8`
      // 
      // - `flv`
      // 
      // - `mp4`
      shared_ptr<string> format_ {};
      // The video processing method. Valid values:
      // 
      // - `transcode`: Uses a transcoding template group to process the video.
      // 
      // - `workflow`: Uses a workflow to process the video.
      shared_ptr<string> processMethod_ {};
      // The ID of the transcoding template group or workflow.
      // 
      // > The specified ID must match the `ProcessMethod`. For example, provide a transcoding template group ID if `ProcessMethod` is `transcode`, or a workflow ID if `ProcessMethod` is `workflow`.
      shared_ptr<string> processTemplateId_ {};
      // The slice duration, in seconds.
      // 
      // This parameter applies only to the `m3u8` format.
      // 
      // The value must be between 5 and 30. The default is 30.
      shared_ptr<int32_t> sliceDuration_ {};
      // The tags for video categorization.
      shared_ptr<string> tags_ {};
      // The video source to process. Valid values:
      // 
      // - `origin` (Default): The per-cycle recording files.
      // 
      // - `compose`: The single video file composed from all cycles.
      // 
      // To process both video sources, separate the values with a comma (,), for example, `origin,compose`.
      shared_ptr<string> videoProcess_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->autoCompose_ == nullptr && this->composeVodTranscodeGroupId_ == nullptr && this->cycleDuration_ == nullptr && this->delayTime_ == nullptr && this->domainName_ == nullptr
        && this->onDemand_ == nullptr && this->ownerId_ == nullptr && this->recordContent_ == nullptr && this->recordFormat_ == nullptr && this->regionId_ == nullptr
        && this->spaceId_ == nullptr && this->storageLocation_ == nullptr && this->streamName_ == nullptr && this->transcodeTemplates_ == nullptr && this->vodTranscodeGroupId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddLiveRecordVodConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // autoCompose Field Functions 
    bool hasAutoCompose() const { return this->autoCompose_ != nullptr;};
    void deleteAutoCompose() { this->autoCompose_ = nullptr;};
    inline string getAutoCompose() const { DARABONBA_PTR_GET_DEFAULT(autoCompose_, "") };
    inline AddLiveRecordVodConfigRequest& setAutoCompose(string autoCompose) { DARABONBA_PTR_SET_VALUE(autoCompose_, autoCompose) };


    // composeVodTranscodeGroupId Field Functions 
    bool hasComposeVodTranscodeGroupId() const { return this->composeVodTranscodeGroupId_ != nullptr;};
    void deleteComposeVodTranscodeGroupId() { this->composeVodTranscodeGroupId_ = nullptr;};
    inline string getComposeVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(composeVodTranscodeGroupId_, "") };
    inline AddLiveRecordVodConfigRequest& setComposeVodTranscodeGroupId(string composeVodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(composeVodTranscodeGroupId_, composeVodTranscodeGroupId) };


    // cycleDuration Field Functions 
    bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
    void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
    inline int32_t getCycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
    inline AddLiveRecordVodConfigRequest& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline AddLiveRecordVodConfigRequest& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveRecordVodConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // onDemand Field Functions 
    bool hasOnDemand() const { return this->onDemand_ != nullptr;};
    void deleteOnDemand() { this->onDemand_ = nullptr;};
    inline int32_t getOnDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
    inline AddLiveRecordVodConfigRequest& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveRecordVodConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recordContent Field Functions 
    bool hasRecordContent() const { return this->recordContent_ != nullptr;};
    void deleteRecordContent() { this->recordContent_ = nullptr;};
    inline string getRecordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
    inline AddLiveRecordVodConfigRequest& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<AddLiveRecordVodConfigRequest::RecordFormat> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<AddLiveRecordVodConfigRequest::RecordFormat>) };
    inline vector<AddLiveRecordVodConfigRequest::RecordFormat> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<AddLiveRecordVodConfigRequest::RecordFormat>) };
    inline AddLiveRecordVodConfigRequest& setRecordFormat(const vector<AddLiveRecordVodConfigRequest::RecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline AddLiveRecordVodConfigRequest& setRecordFormat(vector<AddLiveRecordVodConfigRequest::RecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLiveRecordVodConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline AddLiveRecordVodConfigRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline AddLiveRecordVodConfigRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline AddLiveRecordVodConfigRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodeTemplates Field Functions 
    bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
    void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
    inline const vector<string> & getTranscodeTemplates() const { DARABONBA_PTR_GET_CONST(transcodeTemplates_, vector<string>) };
    inline vector<string> getTranscodeTemplates() { DARABONBA_PTR_GET(transcodeTemplates_, vector<string>) };
    inline AddLiveRecordVodConfigRequest& setTranscodeTemplates(const vector<string> & transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };
    inline AddLiveRecordVodConfigRequest& setTranscodeTemplates(vector<string> && transcodeTemplates) { DARABONBA_PTR_SET_RVALUE(transcodeTemplates_, transcodeTemplates) };


    // vodTranscodeGroupId Field Functions 
    bool hasVodTranscodeGroupId() const { return this->vodTranscodeGroupId_ != nullptr;};
    void deleteVodTranscodeGroupId() { this->vodTranscodeGroupId_ = nullptr;};
    inline string getVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTranscodeGroupId_, "") };
    inline AddLiveRecordVodConfigRequest& setVodTranscodeGroupId(string vodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(vodTranscodeGroupId_, vodTranscodeGroupId) };


  protected:
    // The name of the application that the stream belongs to. You can find this value on the [stream management](https://help.aliyun.com/document_detail/197397.html) page.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // >Notice: This parameter is ignored if `RecordFormat` is specified.
    // Specifies whether to automatically merge files from multiple recording cycles into a single file after a live stream ends.
    // 
    // A value of **ON** enables automatic merging. If enabled, you must also specify the `ComposeVodTranscodeGroupId` parameter. By default, automatic merging is disabled.
    shared_ptr<string> autoCompose_ {};
    // >Notice: This parameter is ignored if `RecordFormat` is specified.
    // The ID of the ApsaraVideo VOD transcoding template group for transcoding the merged video. This parameter is required if `AutoCompose` is set to `ON`.
    shared_ptr<string> composeVodTranscodeGroupId_ {};
    // The cycle duration, in seconds. The default value is **3600**. The value must be between **300** and **21600**.
    shared_ptr<int32_t> cycleDuration_ {};
    // The stream interruption timeout, in seconds. If a stream interruption is shorter than this duration, recording continues in the same file. If the interruption is longer, a new file is created. Valid values: 15 to 21600.
    shared_ptr<int32_t> delayTime_ {};
    // The streaming domain.
    // 
    // > Ensure ApsaraVideo VOD is activated in the same region as the streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The recording trigger mode. Valid values:
    // 
    // - **0** (Default): Automatic recording.
    // 
    // - **1**: On-demand recording triggered by an HTTP callback.
    // 
    // - **2**: On-demand recording triggered by ingest parameters.
    // 
    // - **7**: Manual recording. Allows you to start and stop recording by calling the `RealTimeRecordCommand` operation.
    shared_ptr<int32_t> onDemand_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The recorded content. Valid values:
    // 
    // - `raw` (Default): Records the source stream.
    // 
    // - `transcode`: Records transcoded streams.
    // 
    // To record both source and transcoded streams, provide a comma-separated list, for example, `raw,transcode`.
    // 
    // > If this parameter is set to include `transcode`, you must specify at least one template in the `TranscodeTemplates` parameter.
    shared_ptr<string> recordContent_ {};
    // A list of format-specific recording configurations.
    shared_ptr<vector<AddLiveRecordVodConfigRequest::RecordFormat>> recordFormat_ {};
    // The region ID. The example value `cn-shanghai` indicates the China (Shanghai) region.
    shared_ptr<string> regionId_ {};
    // The ID of the VOD application space. You can obtain this ID from the **VOD console** or by calling an [API operation to query application information](https://help.aliyun.com/document_detail/454873.html). This parameter applies only when the VOD application space feature is enabled.
    shared_ptr<string> spaceId_ {};
    // The storage location.
    shared_ptr<string> storageLocation_ {};
    // The stream name. You can find this value on the [stream management](https://help.aliyun.com/document_detail/197397.html) page.
    shared_ptr<string> streamName_ {};
    // A list of transcoding templates for recording transcoded streams.
    shared_ptr<vector<string>> transcodeTemplates_ {};
    // >Notice: This parameter is ignored if `RecordFormat` is specified.
    // The ID of the ApsaraVideo VOD transcoding template group for transcoding recorded videos.
    shared_ptr<string> vodTranscodeGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
