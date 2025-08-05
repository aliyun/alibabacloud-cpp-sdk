// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACKLISTBYMAILFROMANDTAGNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACKLISTBYMAILFROMANDTAGNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetTrackListByMailFromAndTagNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrackListByMailFromAndTagNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DedicatedIp, dedicatedIp_);
      DARABONBA_PTR_TO_JSON(DedicatedIpPoolId, dedicatedIpPoolId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Esp, esp_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OffsetCreateTime, offsetCreateTime_);
      DARABONBA_PTR_TO_JSON(OffsetCreateTimeDesc, offsetCreateTimeDesc_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrackListByMailFromAndTagNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DedicatedIp, dedicatedIp_);
      DARABONBA_PTR_FROM_JSON(DedicatedIpPoolId, dedicatedIpPoolId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Esp, esp_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OffsetCreateTime, offsetCreateTime_);
      DARABONBA_PTR_FROM_JSON(OffsetCreateTimeDesc, offsetCreateTimeDesc_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetTrackListByMailFromAndTagNameRequest() = default ;
    GetTrackListByMailFromAndTagNameRequest(const GetTrackListByMailFromAndTagNameRequest &) = default ;
    GetTrackListByMailFromAndTagNameRequest(GetTrackListByMailFromAndTagNameRequest &&) = default ;
    GetTrackListByMailFromAndTagNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrackListByMailFromAndTagNameRequest() = default ;
    GetTrackListByMailFromAndTagNameRequest& operator=(const GetTrackListByMailFromAndTagNameRequest &) = default ;
    GetTrackListByMailFromAndTagNameRequest& operator=(GetTrackListByMailFromAndTagNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->dedicatedIp_ != nullptr && this->dedicatedIpPoolId_ != nullptr && this->endTime_ != nullptr && this->esp_ != nullptr && this->offset_ != nullptr
        && this->offsetCreateTime_ != nullptr && this->offsetCreateTimeDesc_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->startTime_ != nullptr && this->tagName_ != nullptr && this->total_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dedicatedIp Field Functions 
    bool hasDedicatedIp() const { return this->dedicatedIp_ != nullptr;};
    void deleteDedicatedIp() { this->dedicatedIp_ = nullptr;};
    inline string dedicatedIp() const { DARABONBA_PTR_GET_DEFAULT(dedicatedIp_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setDedicatedIp(string dedicatedIp) { DARABONBA_PTR_SET_VALUE(dedicatedIp_, dedicatedIp) };


    // dedicatedIpPoolId Field Functions 
    bool hasDedicatedIpPoolId() const { return this->dedicatedIpPoolId_ != nullptr;};
    void deleteDedicatedIpPoolId() { this->dedicatedIpPoolId_ = nullptr;};
    inline string dedicatedIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedIpPoolId_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setDedicatedIpPoolId(string dedicatedIpPoolId) { DARABONBA_PTR_SET_VALUE(dedicatedIpPoolId_, dedicatedIpPoolId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // esp Field Functions 
    bool hasEsp() const { return this->esp_ != nullptr;};
    void deleteEsp() { this->esp_ = nullptr;};
    inline string esp() const { DARABONBA_PTR_GET_DEFAULT(esp_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setEsp(string esp) { DARABONBA_PTR_SET_VALUE(esp_, esp) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // offsetCreateTime Field Functions 
    bool hasOffsetCreateTime() const { return this->offsetCreateTime_ != nullptr;};
    void deleteOffsetCreateTime() { this->offsetCreateTime_ = nullptr;};
    inline string offsetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTime_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setOffsetCreateTime(string offsetCreateTime) { DARABONBA_PTR_SET_VALUE(offsetCreateTime_, offsetCreateTime) };


    // offsetCreateTimeDesc Field Functions 
    bool hasOffsetCreateTimeDesc() const { return this->offsetCreateTimeDesc_ != nullptr;};
    void deleteOffsetCreateTimeDesc() { this->offsetCreateTimeDesc_ = nullptr;};
    inline string offsetCreateTimeDesc() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTimeDesc_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setOffsetCreateTimeDesc(string offsetCreateTimeDesc) { DARABONBA_PTR_SET_VALUE(offsetCreateTimeDesc_, offsetCreateTimeDesc) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetTrackListByMailFromAndTagNameRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetTrackListByMailFromAndTagNameRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline GetTrackListByMailFromAndTagNameRequest& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Sender address.
    // 
    // > If not filled, it represents all addresses; if there is a TagName, this parameter must not be empty.
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> dedicatedIp_ = nullptr;
    std::shared_ptr<string> dedicatedIpPoolId_ = nullptr;
    // End time, with a span from the start time that cannot exceed 15 days. Format: yyyy-MM-dd.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> esp_ = nullptr;
    // For the first query, set to 0; for subsequent queries, fixed at 1. 1 indicates pagination in ascending order by time. (This field is deprecated)
    std::shared_ptr<string> offset_ = nullptr;
    // Used for pagination. Not set for the first query; for subsequent queries, set to the value of OffsetCreateTime from the previous response. (This field is deprecated)
    std::shared_ptr<string> offsetCreateTime_ = nullptr;
    // (This field is deprecated)
    std::shared_ptr<string> offsetCreateTimeDesc_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Current page number
    std::shared_ptr<string> pageNumber_ = nullptr;
    // Page size
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Start time, which cannot be earlier than 30 days. Format: yyyy-MM-dd.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // Email tag. If not filled, it represents all tags.
    std::shared_ptr<string> tagName_ = nullptr;
    // (This field is deprecated)
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
