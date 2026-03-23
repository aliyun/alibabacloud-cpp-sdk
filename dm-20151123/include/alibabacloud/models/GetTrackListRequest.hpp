// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetTrackListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrackListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ConfigSetId, configSetId_);
      DARABONBA_PTR_TO_JSON(DedicatedIp, dedicatedIp_);
      DARABONBA_PTR_TO_JSON(DedicatedIpPoolId, dedicatedIpPoolId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
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
    friend void from_json(const Darabonba::Json& j, GetTrackListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ConfigSetId, configSetId_);
      DARABONBA_PTR_FROM_JSON(DedicatedIp, dedicatedIp_);
      DARABONBA_PTR_FROM_JSON(DedicatedIpPoolId, dedicatedIpPoolId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
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
    GetTrackListRequest() = default ;
    GetTrackListRequest(const GetTrackListRequest &) = default ;
    GetTrackListRequest(GetTrackListRequest &&) = default ;
    GetTrackListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrackListRequest() = default ;
    GetTrackListRequest& operator=(const GetTrackListRequest &) = default ;
    GetTrackListRequest& operator=(GetTrackListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->configSetId_ == nullptr && this->dedicatedIp_ == nullptr && this->dedicatedIpPoolId_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr
        && this->esp_ == nullptr && this->offset_ == nullptr && this->offsetCreateTime_ == nullptr && this->offsetCreateTimeDesc_ == nullptr && this->ownerId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr
        && this->tagName_ == nullptr && this->total_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetTrackListRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // configSetId Field Functions 
    bool hasConfigSetId() const { return this->configSetId_ != nullptr;};
    void deleteConfigSetId() { this->configSetId_ = nullptr;};
    inline string getConfigSetId() const { DARABONBA_PTR_GET_DEFAULT(configSetId_, "") };
    inline GetTrackListRequest& setConfigSetId(string configSetId) { DARABONBA_PTR_SET_VALUE(configSetId_, configSetId) };


    // dedicatedIp Field Functions 
    bool hasDedicatedIp() const { return this->dedicatedIp_ != nullptr;};
    void deleteDedicatedIp() { this->dedicatedIp_ = nullptr;};
    inline string getDedicatedIp() const { DARABONBA_PTR_GET_DEFAULT(dedicatedIp_, "") };
    inline GetTrackListRequest& setDedicatedIp(string dedicatedIp) { DARABONBA_PTR_SET_VALUE(dedicatedIp_, dedicatedIp) };


    // dedicatedIpPoolId Field Functions 
    bool hasDedicatedIpPoolId() const { return this->dedicatedIpPoolId_ != nullptr;};
    void deleteDedicatedIpPoolId() { this->dedicatedIpPoolId_ = nullptr;};
    inline string getDedicatedIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedIpPoolId_, "") };
    inline GetTrackListRequest& setDedicatedIpPoolId(string dedicatedIpPoolId) { DARABONBA_PTR_SET_VALUE(dedicatedIpPoolId_, dedicatedIpPoolId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetTrackListRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetTrackListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // esp Field Functions 
    bool hasEsp() const { return this->esp_ != nullptr;};
    void deleteEsp() { this->esp_ = nullptr;};
    inline string getEsp() const { DARABONBA_PTR_GET_DEFAULT(esp_, "") };
    inline GetTrackListRequest& setEsp(string esp) { DARABONBA_PTR_SET_VALUE(esp_, esp) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline GetTrackListRequest& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // offsetCreateTime Field Functions 
    bool hasOffsetCreateTime() const { return this->offsetCreateTime_ != nullptr;};
    void deleteOffsetCreateTime() { this->offsetCreateTime_ = nullptr;};
    inline string getOffsetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTime_, "") };
    inline GetTrackListRequest& setOffsetCreateTime(string offsetCreateTime) { DARABONBA_PTR_SET_VALUE(offsetCreateTime_, offsetCreateTime) };


    // offsetCreateTimeDesc Field Functions 
    bool hasOffsetCreateTimeDesc() const { return this->offsetCreateTimeDesc_ != nullptr;};
    void deleteOffsetCreateTimeDesc() { this->offsetCreateTimeDesc_ = nullptr;};
    inline string getOffsetCreateTimeDesc() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTimeDesc_, "") };
    inline GetTrackListRequest& setOffsetCreateTimeDesc(string offsetCreateTimeDesc) { DARABONBA_PTR_SET_VALUE(offsetCreateTimeDesc_, offsetCreateTimeDesc) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetTrackListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline GetTrackListRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetTrackListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetTrackListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetTrackListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetTrackListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline GetTrackListRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline GetTrackListRequest& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The sender address.
    // 
    // > If you omit this parameter, the query returns data for all sender addresses. This parameter is required if you specify the `TagName` parameter.
    shared_ptr<string> accountName_ {};
    // The ID of the configuration set.
    shared_ptr<string> configSetId_ {};
    // The dedicated IP address to query.
    // 
    // If this parameter is omitted, data for all dedicated IPs is returned.
    shared_ptr<string> dedicatedIp_ {};
    // The ID of the dedicated IP pool to query.
    // 
    // If this parameter is omitted, data for all IP pools is returned.
    shared_ptr<string> dedicatedIpPoolId_ {};
    shared_ptr<string> domain_ {};
    // The end date of the query. The duration between the StartTime and EndTime cannot exceed 7 days. The format is `yyyy-MM-dd`.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The Email Service Provider (ESP) to query. Valid values are:
    // 
    // - gmail.com
    // 
    // - yahoo.com
    // 
    // - outlook.com
    // 
    // - icloud.com
    // 
    // - Others: Any ESP not listed above.
    // 
    // If you omit this parameter, the query returns data for all ESPs.
    shared_ptr<string> esp_ {};
    // Set this to 0 for the first query. For subsequent queries, set it to 1 to perform a paged query in chronological order. (This field is deprecated)
    shared_ptr<string> offset_ {};
    // Used for pagination. Do not set this parameter for the first query. For subsequent queries, set this parameter to the `OffsetCreateTime` value returned in the previous response. (This field is deprecated)
    shared_ptr<string> offsetCreateTime_ {};
    // (This field is deprecated)
    shared_ptr<string> offsetCreateTimeDesc_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number to return.
    shared_ptr<string> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The start date of the query. The date must be within the last 30 days. The format is `yyyy-MM-dd`.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The tag name.
    shared_ptr<string> tagName_ {};
    // (This field is deprecated)
    shared_ptr<string> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
