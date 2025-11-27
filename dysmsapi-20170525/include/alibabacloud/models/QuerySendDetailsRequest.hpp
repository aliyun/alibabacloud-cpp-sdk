// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
    };
    QuerySendDetailsRequest() = default ;
    QuerySendDetailsRequest(const QuerySendDetailsRequest &) = default ;
    QuerySendDetailsRequest(QuerySendDetailsRequest &&) = default ;
    QuerySendDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendDetailsRequest() = default ;
    QuerySendDetailsRequest& operator=(const QuerySendDetailsRequest &) = default ;
    QuerySendDetailsRequest& operator=(QuerySendDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->currentPage_ == nullptr && return this->ownerId_ == nullptr && return this->pageSize_ == nullptr && return this->phoneNumber_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->sendDate_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QuerySendDetailsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QuerySendDetailsRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySendDetailsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QuerySendDetailsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline QuerySendDetailsRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySendDetailsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySendDetailsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sendDate Field Functions 
    bool hasSendDate() const { return this->sendDate_ != nullptr;};
    void deleteSendDate() { this->sendDate_ = nullptr;};
    inline string sendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
    inline QuerySendDetailsRequest& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


  protected:
    // The ID of the delivery receipt. The delivery receipt ID is the value of the BizId parameter that is returned when you call the SendSms or SendBatchSms operation.
    std::shared_ptr<string> bizId_ = nullptr;
    // The page number of the first page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of items displayed per page.
    // 
    // Valid values: 1 to 50.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The mobile numbers of the recipients. Format:
    // 
    // *   If you send messages in the Chinese mainland, specify an 11-digit mobile number, for example, 1390000\\*\\*\\*\\*.
    // *   If you send messages to countries or regions outside the Chinese mainland, specify this parameter in the \\<Area code>\\<Mobile number> format. Example: 8520000\\*\\*\\*\\*.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The date when the message was sent. You can query messages that were sent within the last 30 days.
    // 
    // Format: yyyyMMdd. Example: 20181225.
    // 
    // This parameter is required.
    std::shared_ptr<string> sendDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
