// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVERECORDVODCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVERECORDVODCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveRecordVodConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
      DARABONBA_PTR_FROM_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
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
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->autoCompose_ == nullptr && this->composeVodTranscodeGroupId_ == nullptr && this->cycleDuration_ == nullptr && this->domainName_ == nullptr && this->onDemand_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->streamName_ == nullptr && this->vodTranscodeGroupId_ == nullptr; };
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


    // vodTranscodeGroupId Field Functions 
    bool hasVodTranscodeGroupId() const { return this->vodTranscodeGroupId_ != nullptr;};
    void deleteVodTranscodeGroupId() { this->vodTranscodeGroupId_ = nullptr;};
    inline string getVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTranscodeGroupId_, "") };
    inline UpdateLiveRecordVodConfigRequest& setVodTranscodeGroupId(string vodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(vodTranscodeGroupId_, vodTranscodeGroupId) };


  protected:
    // The name of the application to which the live stream belongs. You can view the application name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // Specifies whether to enable automatic merging. Valid values:
    // 
    // *   **ON**: enables automatic merging. If you set this parameter to ON, you must also specify the ComposeVodTranscodeGroupId parameter.
    // *   **OFF**: disables automatic merging.
    shared_ptr<string> autoCompose_ {};
    // The ID of the transcoding template group in ApsaraVideo VOD that is used to transcode the video file. The video file is generated by merging the VOD files created from live streams.
    // 
    // >  To query transcoding template groups, call the [ListTranscodeTemplateGroup](https://help.aliyun.com/document_detail/454928.html) operation.
    shared_ptr<string> composeVodTranscodeGroupId_ {};
    // The recording cycle. Unit: seconds. Valid values: **300 to 21600**. Default value: **3600**.
    shared_ptr<int32_t> cycleDuration_ {};
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to enable on-demand recording. Valid values:
    // 
    // *   **0** (default): disables on-demand recording.
    // *   **1**: enables on-demand recording by using the HTTP callback method.
    shared_ptr<int32_t> onDemand_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The name of the live stream. You can view the stream name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    shared_ptr<string> streamName_ {};
    // The ID of the transcoding template group in ApsaraVideo VOD.
    // 
    // This parameter is required.
    shared_ptr<string> vodTranscodeGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
