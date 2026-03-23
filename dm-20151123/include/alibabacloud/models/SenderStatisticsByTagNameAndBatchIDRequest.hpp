// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsByTagNameAndBatchIDRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsByTagNameAndBatchIDRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DedicatedIp, dedicatedIp_);
      DARABONBA_PTR_TO_JSON(DedicatedIpPoolId, dedicatedIpPoolId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Esp, esp_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsByTagNameAndBatchIDRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DedicatedIp, dedicatedIp_);
      DARABONBA_PTR_FROM_JSON(DedicatedIpPoolId, dedicatedIpPoolId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Esp, esp_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    SenderStatisticsByTagNameAndBatchIDRequest() = default ;
    SenderStatisticsByTagNameAndBatchIDRequest(const SenderStatisticsByTagNameAndBatchIDRequest &) = default ;
    SenderStatisticsByTagNameAndBatchIDRequest(SenderStatisticsByTagNameAndBatchIDRequest &&) = default ;
    SenderStatisticsByTagNameAndBatchIDRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsByTagNameAndBatchIDRequest() = default ;
    SenderStatisticsByTagNameAndBatchIDRequest& operator=(const SenderStatisticsByTagNameAndBatchIDRequest &) = default ;
    SenderStatisticsByTagNameAndBatchIDRequest& operator=(SenderStatisticsByTagNameAndBatchIDRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->dedicatedIp_ == nullptr && this->dedicatedIpPoolId_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr && this->esp_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr && this->tagName_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dedicatedIp Field Functions 
    bool hasDedicatedIp() const { return this->dedicatedIp_ != nullptr;};
    void deleteDedicatedIp() { this->dedicatedIp_ = nullptr;};
    inline string getDedicatedIp() const { DARABONBA_PTR_GET_DEFAULT(dedicatedIp_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setDedicatedIp(string dedicatedIp) { DARABONBA_PTR_SET_VALUE(dedicatedIp_, dedicatedIp) };


    // dedicatedIpPoolId Field Functions 
    bool hasDedicatedIpPoolId() const { return this->dedicatedIpPoolId_ != nullptr;};
    void deleteDedicatedIpPoolId() { this->dedicatedIpPoolId_ = nullptr;};
    inline string getDedicatedIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedIpPoolId_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setDedicatedIpPoolId(string dedicatedIpPoolId) { DARABONBA_PTR_SET_VALUE(dedicatedIpPoolId_, dedicatedIpPoolId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // esp Field Functions 
    bool hasEsp() const { return this->esp_ != nullptr;};
    void deleteEsp() { this->esp_ = nullptr;};
    inline string getEsp() const { DARABONBA_PTR_GET_DEFAULT(esp_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setEsp(string esp) { DARABONBA_PTR_SET_VALUE(esp_, esp) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline SenderStatisticsByTagNameAndBatchIDRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // The sender address. If you do not specify this parameter, statistics for all sender addresses are returned.
    shared_ptr<string> accountName_ {};
    // If you use Dedicated IPs, use this parameter to filter statistics by a specific Dedicated IP.
    // 
    // If you do not specify this parameter, statistics for all dedicated IPs that match the other criteria are returned.
    shared_ptr<string> dedicatedIp_ {};
    // If you use Dedicated IPs, specify the ID of the dedicated IP pool to query.
    // 
    // If you do not specify this parameter, statistics for all resources are returned.
    shared_ptr<string> dedicatedIpPoolId_ {};
    shared_ptr<string> domain_ {};
    // The end time for the query. The time range between `StartTime` and `EndTime` cannot exceed 7 days. The format must be `YYYY-MM-DD`.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // If you use Dedicated IPs, use this parameter to filter statistics by a specific Email Service Provider (ESP). Valid values are:
    // 
    // - `gmail.com`
    // 
    // - `yahoo.com`
    // 
    // - `outlook.com`
    // 
    // - `icloud.com`
    // 
    // - `others` (matches data for all other ESPs)
    // 
    // If you do not specify this parameter, statistics for all ESPs are returned.
    shared_ptr<string> esp_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The start time for the query. The date cannot be more than 30 days in the past. The format must be `YYYY-MM-DD`.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The email tag. If you do not specify this parameter, statistics for all tags are returned.
    shared_ptr<string> tagName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
