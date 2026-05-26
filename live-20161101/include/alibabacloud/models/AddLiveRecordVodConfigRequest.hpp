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
      shared_ptr<string> autoCompose_ {};
      shared_ptr<string> format_ {};
      shared_ptr<string> processMethod_ {};
      shared_ptr<string> processTemplateId_ {};
      shared_ptr<int32_t> sliceDuration_ {};
      shared_ptr<string> tags_ {};
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
    // The name of the application to which the live stream belongs. You can view the application name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // Specifies whether to enable automatic merging. If you set the value to **ON**, automatic merging is enabled and the ComposeVodTranscodeGroupId parameter is required. If you do not specify this parameter, automatic merging is disabled.
    // 
    // >  If you enable automatic merging, the VOD files that are created from live streams are automatically merged by using the editing and production feature of ApsaraVideo VOD. For information about the billing of the feature, see [Billing of value-added services](https://help.aliyun.com/document_detail/188310.html).
    shared_ptr<string> autoCompose_ {};
    // The ID of the transcoding template group in ApsaraVideo VOD that is used to transcode the video file. The video file is generated by merging the VOD files created from live streams.
    // 
    // > 
    // 
    // *   This parameter is required if you set the AutoCompose parameter to ON.
    // 
    // *   For more information about automatic merging and transcoding, see [FAQ about Live-to-VOD](https://help.aliyun.com/document_detail/99726.html).
    // 
    // *   For information about the billing of transcoding in ApsaraVideo VOD, see [Billing of basic services](https://help.aliyun.com/document_detail/188308.html).
    shared_ptr<string> composeVodTranscodeGroupId_ {};
    // The recording cycle. Unit: seconds. Valid values: **300 to 21600**. Default value: **3600**.
    shared_ptr<int32_t> cycleDuration_ {};
    shared_ptr<int32_t> delayTime_ {};
    // The main streaming domain.
    // 
    // >  Make sure that ApsaraVideo VOD is activated in the same region as the live center of the streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to enable on-demand recording. Valid values:
    // 
    // *   **0** (default): disables on-demand recording.
    // *   **1**: enables on-demand recording.
    shared_ptr<int32_t> onDemand_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> recordContent_ {};
    shared_ptr<vector<AddLiveRecordVodConfigRequest::RecordFormat>> recordFormat_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> spaceId_ {};
    // The storage location.
    shared_ptr<string> storageLocation_ {};
    // The name of the live stream. You can view the stream name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    shared_ptr<string> streamName_ {};
    shared_ptr<vector<string>> transcodeTemplates_ {};
    // The ID of the transcoding template group in ApsaraVideo VOD.
    shared_ptr<string> vodTranscodeGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
