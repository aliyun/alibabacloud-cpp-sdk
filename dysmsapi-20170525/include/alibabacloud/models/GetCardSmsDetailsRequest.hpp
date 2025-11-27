// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetCardSmsDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardSmsDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizCardId, bizCardId_);
      DARABONBA_PTR_TO_JSON(BizDigitId, bizDigitId_);
      DARABONBA_PTR_TO_JSON(BizSmsId, bizSmsId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardSmsDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCardId, bizCardId_);
      DARABONBA_PTR_FROM_JSON(BizDigitId, bizDigitId_);
      DARABONBA_PTR_FROM_JSON(BizSmsId, bizSmsId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
    };
    GetCardSmsDetailsRequest() = default ;
    GetCardSmsDetailsRequest(const GetCardSmsDetailsRequest &) = default ;
    GetCardSmsDetailsRequest(GetCardSmsDetailsRequest &&) = default ;
    GetCardSmsDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardSmsDetailsRequest() = default ;
    GetCardSmsDetailsRequest& operator=(const GetCardSmsDetailsRequest &) = default ;
    GetCardSmsDetailsRequest& operator=(GetCardSmsDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCardId_ == nullptr
        && return this->bizDigitId_ == nullptr && return this->bizSmsId_ == nullptr && return this->currentPage_ == nullptr && return this->ownerId_ == nullptr && return this->pageSize_ == nullptr
        && return this->phoneNumber_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sendDate_ == nullptr; };
    // bizCardId Field Functions 
    bool hasBizCardId() const { return this->bizCardId_ != nullptr;};
    void deleteBizCardId() { this->bizCardId_ = nullptr;};
    inline string bizCardId() const { DARABONBA_PTR_GET_DEFAULT(bizCardId_, "") };
    inline GetCardSmsDetailsRequest& setBizCardId(string bizCardId) { DARABONBA_PTR_SET_VALUE(bizCardId_, bizCardId) };


    // bizDigitId Field Functions 
    bool hasBizDigitId() const { return this->bizDigitId_ != nullptr;};
    void deleteBizDigitId() { this->bizDigitId_ = nullptr;};
    inline string bizDigitId() const { DARABONBA_PTR_GET_DEFAULT(bizDigitId_, "") };
    inline GetCardSmsDetailsRequest& setBizDigitId(string bizDigitId) { DARABONBA_PTR_SET_VALUE(bizDigitId_, bizDigitId) };


    // bizSmsId Field Functions 
    bool hasBizSmsId() const { return this->bizSmsId_ != nullptr;};
    void deleteBizSmsId() { this->bizSmsId_ = nullptr;};
    inline string bizSmsId() const { DARABONBA_PTR_GET_DEFAULT(bizSmsId_, "") };
    inline GetCardSmsDetailsRequest& setBizSmsId(string bizSmsId) { DARABONBA_PTR_SET_VALUE(bizSmsId_, bizSmsId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline GetCardSmsDetailsRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetCardSmsDetailsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetCardSmsDetailsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetCardSmsDetailsRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetCardSmsDetailsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetCardSmsDetailsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sendDate Field Functions 
    bool hasSendDate() const { return this->sendDate_ != nullptr;};
    void deleteSendDate() { this->sendDate_ = nullptr;};
    inline string sendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
    inline GetCardSmsDetailsRequest& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


  protected:
    // Card SMS sending ID, which is the BizCardId field in the response when calling SendCardSms or SendBatchCardSms.
    std::shared_ptr<string> bizCardId_ = nullptr;
    // Digital SMS sending ID, which is the BizDigitalId field in the response when calling SendCardSms or SendBatchCardSms.
    std::shared_ptr<string> bizDigitId_ = nullptr;
    // Text SMS sending ID, which is the BizSmsId field in the response when calling SendCardSms or SendBatchCardSms.
    std::shared_ptr<string> bizSmsId_ = nullptr;
    // For paginated viewing of sending records, specify the current page number of the sending records.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // For paginated viewing of sending records, specify the number of card SMS records to display per page.
    // 
    // The value range is 1~50.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Domestic phone number that received the SMS. Format: 11-digit phone number, for example, 1390000****.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Card SMS sending date, supports querying records from the last 30 days.
    // 
    // Format: yyyyMMdd, for example, 20240112.
    // 
    // This parameter is required.
    std::shared_ptr<string> sendDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
