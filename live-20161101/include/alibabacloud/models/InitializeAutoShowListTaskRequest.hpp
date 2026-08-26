// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZEAUTOSHOWLISTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZEAUTOSHOWLISTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class InitializeAutoShowListTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeAutoShowListTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallBackUrl, callBackUrl_);
      DARABONBA_PTR_TO_JSON(CasterConfig, casterConfig_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeAutoShowListTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallBackUrl, callBackUrl_);
      DARABONBA_PTR_FROM_JSON(CasterConfig, casterConfig_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    InitializeAutoShowListTaskRequest() = default ;
    InitializeAutoShowListTaskRequest(const InitializeAutoShowListTaskRequest &) = default ;
    InitializeAutoShowListTaskRequest(InitializeAutoShowListTaskRequest &&) = default ;
    InitializeAutoShowListTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeAutoShowListTaskRequest() = default ;
    InitializeAutoShowListTaskRequest& operator=(const InitializeAutoShowListTaskRequest &) = default ;
    InitializeAutoShowListTaskRequest& operator=(InitializeAutoShowListTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callBackUrl_ == nullptr
        && this->casterConfig_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceIds_ == nullptr && this->startTime_ == nullptr; };
    // callBackUrl Field Functions 
    bool hasCallBackUrl() const { return this->callBackUrl_ != nullptr;};
    void deleteCallBackUrl() { this->callBackUrl_ = nullptr;};
    inline string getCallBackUrl() const { DARABONBA_PTR_GET_DEFAULT(callBackUrl_, "") };
    inline InitializeAutoShowListTaskRequest& setCallBackUrl(string callBackUrl) { DARABONBA_PTR_SET_VALUE(callBackUrl_, callBackUrl) };


    // casterConfig Field Functions 
    bool hasCasterConfig() const { return this->casterConfig_ != nullptr;};
    void deleteCasterConfig() { this->casterConfig_ = nullptr;};
    inline string getCasterConfig() const { DARABONBA_PTR_GET_DEFAULT(casterConfig_, "") };
    inline InitializeAutoShowListTaskRequest& setCasterConfig(string casterConfig) { DARABONBA_PTR_SET_VALUE(casterConfig_, casterConfig) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline InitializeAutoShowListTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline InitializeAutoShowListTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline InitializeAutoShowListTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InitializeAutoShowListTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string getResourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline InitializeAutoShowListTaskRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline InitializeAutoShowListTaskRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The callback URL.
    shared_ptr<string> callBackUrl_ {};
    // The production studio configuration. This includes:
    // 
    // - (Required) CasterTemplate: the output resolution of the production studio.
    // 
    // - (Optional) LiveTemplate: the list of output transcoding tasks.
    // 
    // >A JSON-formatted string. Use upper camel case (PascalCase) for the field names within the struct.
    // 
    // This parameter is required.
    shared_ptr<string> casterConfig_ {};
    // The output streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The end timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The list of video-on-demand media asset file IDs in the playlist. Currently, only MP4 video files from the video-on-demand platform are supported.
    // 
    // A maximum of three programs are supported. Each program is played in the order of the list until EndTime, at which point playback automatically ends. This parameter is required. If it is missing, a MissingParameter error is returned.
    // >- You can obtain the video file ID from the console or from the response parameters of an API operation. For more information, see [Media asset management](https://help.aliyun.com/document_detail/86057.html) or [Obtain the upload URL and credential for audio and video files](https://help.aliyun.com/document_detail/55407.html).- If all programs finish playing before EndTime, the last frame of the last program is displayed until the scheduled end time.
    shared_ptr<string> resourceIds_ {};
    // The start timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
