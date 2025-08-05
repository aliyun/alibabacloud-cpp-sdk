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
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
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
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
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
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->endTime_ != nullptr && this->length_ != nullptr && this->nextStart_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->tagName_ != nullptr && this->toAddress_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline SenderStatisticsDetailByParamRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline SenderStatisticsDetailByParamRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline SenderStatisticsDetailByParamRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string nextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline SenderStatisticsDetailByParamRequest& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SenderStatisticsDetailByParamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SenderStatisticsDetailByParamRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SenderStatisticsDetailByParamRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline SenderStatisticsDetailByParamRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SenderStatisticsDetailByParamRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline SenderStatisticsDetailByParamRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // toAddress Field Functions 
    bool hasToAddress() const { return this->toAddress_ != nullptr;};
    void deleteToAddress() { this->toAddress_ = nullptr;};
    inline string toAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
    inline SenderStatisticsDetailByParamRequest& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


  protected:
    // Sending address. If not filled, it represents all addresses.
    // 
    // > **AccountName**, **TagName**, and **ToAddress** can all be left unfilled. If any are filled, only one of these parameters can be passed; you cannot pass a combination of two or more.
    std::shared_ptr<string> accountName_ = nullptr;
    // End time. The span between start and end times cannot exceed 30 days, format: yyyy-MM-dd HH:mm.
    std::shared_ptr<string> endTime_ = nullptr;
    // Specifies the number of results to return in this request. Range is 1~100.
    std::shared_ptr<int32_t> length_ = nullptr;
    // Used for pagination. Specifies the offset for this request. If there are more results, set this returned value to the NextStart in the next request.
    std::shared_ptr<string> nextStart_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Start time. The span between start and end times cannot exceed 30 days, format: yyyy-MM-dd HH:mm
    std::shared_ptr<string> startTime_ = nullptr;
    // Delivery result. If not filled, it represents all statuses. Values:
    // 
    // - 0: Success
    // - 2: Invalid Address
    // - 3: Spam
    // - 4: Failure
    std::shared_ptr<int32_t> status_ = nullptr;
    // Email tag. If not filled, it represents all tags.
    std::shared_ptr<string> tagName_ = nullptr;
    // Recipient address. If not filled, it represents all recipient addresses.
    std::shared_ptr<string> toAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
