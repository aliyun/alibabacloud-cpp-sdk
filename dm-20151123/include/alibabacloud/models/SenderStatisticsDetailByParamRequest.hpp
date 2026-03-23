// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsDetailByParamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsDetailByParamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ConfigSetId, configSetId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(ToAddress, toAddress_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsDetailByParamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ConfigSetId, configSetId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(ToAddress, toAddress_);
    };
    SenderStatisticsDetailByParamRequest() = default ;
    SenderStatisticsDetailByParamRequest(const SenderStatisticsDetailByParamRequest &) = default ;
    SenderStatisticsDetailByParamRequest(SenderStatisticsDetailByParamRequest &&) = default ;
    SenderStatisticsDetailByParamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsDetailByParamRequest() = default ;
    SenderStatisticsDetailByParamRequest& operator=(const SenderStatisticsDetailByParamRequest &) = default ;
    SenderStatisticsDetailByParamRequest& operator=(SenderStatisticsDetailByParamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->configSetId_ == nullptr && this->endTime_ == nullptr && this->ipPoolId_ == nullptr && this->length_ == nullptr && this->nextStart_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->tagName_ == nullptr && this->toAddress_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline SenderStatisticsDetailByParamRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // configSetId Field Functions 
    bool hasConfigSetId() const { return this->configSetId_ != nullptr;};
    void deleteConfigSetId() { this->configSetId_ = nullptr;};
    inline string getConfigSetId() const { DARABONBA_PTR_GET_DEFAULT(configSetId_, "") };
    inline SenderStatisticsDetailByParamRequest& setConfigSetId(string configSetId) { DARABONBA_PTR_SET_VALUE(configSetId_, configSetId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline SenderStatisticsDetailByParamRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline SenderStatisticsDetailByParamRequest& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline SenderStatisticsDetailByParamRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string getNextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline SenderStatisticsDetailByParamRequest& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SenderStatisticsDetailByParamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SenderStatisticsDetailByParamRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SenderStatisticsDetailByParamRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline SenderStatisticsDetailByParamRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SenderStatisticsDetailByParamRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline SenderStatisticsDetailByParamRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // toAddress Field Functions 
    bool hasToAddress() const { return this->toAddress_ != nullptr;};
    void deleteToAddress() { this->toAddress_ = nullptr;};
    inline string getToAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
    inline SenderStatisticsDetailByParamRequest& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


  protected:
    // The sender address. If you leave this parameter empty, emails from all sender addresses are queried.
    // 
    // > You can leave **AccountName**, **TagName**, and **ToAddress** empty. You can specify a value for only one of these parameters at a time.
    shared_ptr<string> accountName_ {};
    // The ID of the configuration set.
    shared_ptr<string> configSetId_ {};
    // The end time. The time range between the start time and the end time cannot exceed 30 days. The format is yyyy-MM-dd HH:mm.
    shared_ptr<string> endTime_ {};
    // The ID of the independent IP address pool.
    shared_ptr<string> ipPoolId_ {};
    // The number of results to return. The value can range from 1 to 100.
    shared_ptr<int32_t> length_ {};
    // The offset for this request, used for paging. If more results are available, set the \\`NextStart\\` parameter in your next request to this return value.
    shared_ptr<string> nextStart_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The start time. The time range between the start time and the end time cannot exceed 30 days. The format is yyyy-MM-dd HH:mm.
    shared_ptr<string> startTime_ {};
    // The delivery status. If you leave this parameter empty, emails in all delivery statuses are queried. Valid values:
    // 
    // - 0: delivered successfully
    // 
    // - 2: invalid address
    // 
    // - 3: spam
    // 
    // - 4: failed
    shared_ptr<int32_t> status_ {};
    // The email tag. If you leave this parameter empty, emails with all tags are queried.
    // When you send an email using SMTP, specify the \\`TagName\\` and its value for the \\`X-AliDM-Trace\\` field. For more information, see the examples for email tracking.
    shared_ptr<string> tagName_ {};
    // The recipient address. If you leave this parameter empty, emails sent to all recipient addresses are queried.
    shared_ptr<string> toAddress_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
