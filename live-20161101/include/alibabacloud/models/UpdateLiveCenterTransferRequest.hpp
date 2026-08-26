// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVECENTERTRANSFERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVECENTERTRANSFERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveCenterTransferRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveCenterTransferRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TransferArgs, transferArgs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveCenterTransferRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TransferArgs, transferArgs_);
    };
    UpdateLiveCenterTransferRequest() = default ;
    UpdateLiveCenterTransferRequest(const UpdateLiveCenterTransferRequest &) = default ;
    UpdateLiveCenterTransferRequest(UpdateLiveCenterTransferRequest &&) = default ;
    UpdateLiveCenterTransferRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveCenterTransferRequest() = default ;
    UpdateLiveCenterTransferRequest& operator=(const UpdateLiveCenterTransferRequest &) = default ;
    UpdateLiveCenterTransferRequest& operator=(UpdateLiveCenterTransferRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->dstUrl_ == nullptr && this->endTime_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->startTime_ == nullptr && this->streamName_ == nullptr && this->transferArgs_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateLiveCenterTransferRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveCenterTransferRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // dstUrl Field Functions 
    bool hasDstUrl() const { return this->dstUrl_ != nullptr;};
    void deleteDstUrl() { this->dstUrl_ = nullptr;};
    inline string getDstUrl() const { DARABONBA_PTR_GET_DEFAULT(dstUrl_, "") };
    inline UpdateLiveCenterTransferRequest& setDstUrl(string dstUrl) { DARABONBA_PTR_SET_VALUE(dstUrl_, dstUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateLiveCenterTransferRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveCenterTransferRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLiveCenterTransferRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateLiveCenterTransferRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline UpdateLiveCenterTransferRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transferArgs Field Functions 
    bool hasTransferArgs() const { return this->transferArgs_ != nullptr;};
    void deleteTransferArgs() { this->transferArgs_ = nullptr;};
    inline string getTransferArgs() const { DARABONBA_PTR_GET_DEFAULT(transferArgs_, "") };
    inline UpdateLiveCenterTransferRequest& setTransferArgs(string transferArgs) { DARABONBA_PTR_SET_VALUE(transferArgs_, transferArgs) };


  protected:
    // The name of the live stream application. The AppName you enter must match the AppName of the live stream to be transferred for the configuration to take effect. You can view the AppName on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The third-party live streaming address to transfer to. A maximum of one address is supported.
    // 
    // >The protocol of the destination address must match the protocol of the live stream being transferred. Only RTMP and SRT protocols are supported.
    // 
    // This parameter is required.
    shared_ptr<string> dstUrl_ {};
    // The end time of the transfer. The date format follows ISO 8601 and uses UTC+0 time in the format yyyy-MM-ddTHH:mm:ssZ.
    // 
    // >The end time must be later than the start time.
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The start time of the transfer. The date format follows ISO 8601 and uses UTC+0 time in the format yyyy-MM-ddTHH:mm:ssZ.
    shared_ptr<string> startTime_ {};
    // The name of the live stream. You can view the StreamName on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    // 
    // This parameter is required.
    shared_ptr<string> streamName_ {};
    // The transfer validity period. Valid values:
    // 
    // - **always**: Permanently effective.
    // 
    // - **time**: Effective within a specified time range.
    // 
    // >If you set this parameter to **time**, **StartTime** and **EndTime** are required.
    // 
    // This parameter is required.
    shared_ptr<string> transferArgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
