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
        && this->dedicatedIp_ == nullptr && this->dedicatedIpPoolId_ == nullptr && this->endTime_ == nullptr && this->esp_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr && this->tagName_ == nullptr; };
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
    // Sending address. If not filled, it represents all addresses.
    shared_ptr<string> accountName_ {};
    shared_ptr<string> dedicatedIp_ {};
    shared_ptr<string> dedicatedIpPoolId_ {};
    // End time, which cannot exceed 7 days from the start time, in the format yyyy-MM-dd.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> esp_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Start time, in the format yyyy-MM-dd.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // Email tag. If not filled, it represents all tags.
    shared_ptr<string> tagName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
