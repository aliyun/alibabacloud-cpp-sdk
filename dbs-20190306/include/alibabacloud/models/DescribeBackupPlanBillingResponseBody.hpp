// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANBILLINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANBILLINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupPlanBillingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlanBillingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanBillingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupPlanBillingResponseBody() = default ;
    DescribeBackupPlanBillingResponseBody(const DescribeBackupPlanBillingResponseBody &) = default ;
    DescribeBackupPlanBillingResponseBody(DescribeBackupPlanBillingResponseBody &&) = default ;
    DescribeBackupPlanBillingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlanBillingResponseBody() = default ;
    DescribeBackupPlanBillingResponseBody& operator=(const DescribeBackupPlanBillingResponseBody &) = default ;
    DescribeBackupPlanBillingResponseBody& operator=(DescribeBackupPlanBillingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Item : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Item& obj) { 
        DARABONBA_PTR_TO_JSON(BuyChargeType, buyChargeType_);
        DARABONBA_PTR_TO_JSON(BuyCreateTimestamp, buyCreateTimestamp_);
        DARABONBA_PTR_TO_JSON(BuyExpiredTimestamp, buyExpiredTimestamp_);
        DARABONBA_PTR_TO_JSON(BuySpec, buySpec_);
        DARABONBA_PTR_TO_JSON(ContStorageSize, contStorageSize_);
        DARABONBA_PTR_TO_JSON(FullStorageSize, fullStorageSize_);
        DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
        DARABONBA_PTR_TO_JSON(IsFreeBytesUnlimited, isFreeBytesUnlimited_);
        DARABONBA_PTR_TO_JSON(PaiedBytes, paiedBytes_);
        DARABONBA_PTR_TO_JSON(QuotaEndTimestamp, quotaEndTimestamp_);
        DARABONBA_PTR_TO_JSON(QuotaStartTimestamp, quotaStartTimestamp_);
        DARABONBA_PTR_TO_JSON(TotalFreeBytes, totalFreeBytes_);
        DARABONBA_PTR_TO_JSON(UsedFullBytes, usedFullBytes_);
        DARABONBA_PTR_TO_JSON(UsedIncrementBytes, usedIncrementBytes_);
      };
      friend void from_json(const Darabonba::Json& j, Item& obj) { 
        DARABONBA_PTR_FROM_JSON(BuyChargeType, buyChargeType_);
        DARABONBA_PTR_FROM_JSON(BuyCreateTimestamp, buyCreateTimestamp_);
        DARABONBA_PTR_FROM_JSON(BuyExpiredTimestamp, buyExpiredTimestamp_);
        DARABONBA_PTR_FROM_JSON(BuySpec, buySpec_);
        DARABONBA_PTR_FROM_JSON(ContStorageSize, contStorageSize_);
        DARABONBA_PTR_FROM_JSON(FullStorageSize, fullStorageSize_);
        DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
        DARABONBA_PTR_FROM_JSON(IsFreeBytesUnlimited, isFreeBytesUnlimited_);
        DARABONBA_PTR_FROM_JSON(PaiedBytes, paiedBytes_);
        DARABONBA_PTR_FROM_JSON(QuotaEndTimestamp, quotaEndTimestamp_);
        DARABONBA_PTR_FROM_JSON(QuotaStartTimestamp, quotaStartTimestamp_);
        DARABONBA_PTR_FROM_JSON(TotalFreeBytes, totalFreeBytes_);
        DARABONBA_PTR_FROM_JSON(UsedFullBytes, usedFullBytes_);
        DARABONBA_PTR_FROM_JSON(UsedIncrementBytes, usedIncrementBytes_);
      };
      Item() = default ;
      Item(const Item &) = default ;
      Item(Item &&) = default ;
      Item(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Item() = default ;
      Item& operator=(const Item &) = default ;
      Item& operator=(Item &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buyChargeType_ == nullptr
        && this->buyCreateTimestamp_ == nullptr && this->buyExpiredTimestamp_ == nullptr && this->buySpec_ == nullptr && this->contStorageSize_ == nullptr && this->fullStorageSize_ == nullptr
        && this->isExpired_ == nullptr && this->isFreeBytesUnlimited_ == nullptr && this->paiedBytes_ == nullptr && this->quotaEndTimestamp_ == nullptr && this->quotaStartTimestamp_ == nullptr
        && this->totalFreeBytes_ == nullptr && this->usedFullBytes_ == nullptr && this->usedIncrementBytes_ == nullptr; };
      // buyChargeType Field Functions 
      bool hasBuyChargeType() const { return this->buyChargeType_ != nullptr;};
      void deleteBuyChargeType() { this->buyChargeType_ = nullptr;};
      inline string getBuyChargeType() const { DARABONBA_PTR_GET_DEFAULT(buyChargeType_, "") };
      inline Item& setBuyChargeType(string buyChargeType) { DARABONBA_PTR_SET_VALUE(buyChargeType_, buyChargeType) };


      // buyCreateTimestamp Field Functions 
      bool hasBuyCreateTimestamp() const { return this->buyCreateTimestamp_ != nullptr;};
      void deleteBuyCreateTimestamp() { this->buyCreateTimestamp_ = nullptr;};
      inline int64_t getBuyCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(buyCreateTimestamp_, 0L) };
      inline Item& setBuyCreateTimestamp(int64_t buyCreateTimestamp) { DARABONBA_PTR_SET_VALUE(buyCreateTimestamp_, buyCreateTimestamp) };


      // buyExpiredTimestamp Field Functions 
      bool hasBuyExpiredTimestamp() const { return this->buyExpiredTimestamp_ != nullptr;};
      void deleteBuyExpiredTimestamp() { this->buyExpiredTimestamp_ = nullptr;};
      inline int64_t getBuyExpiredTimestamp() const { DARABONBA_PTR_GET_DEFAULT(buyExpiredTimestamp_, 0L) };
      inline Item& setBuyExpiredTimestamp(int64_t buyExpiredTimestamp) { DARABONBA_PTR_SET_VALUE(buyExpiredTimestamp_, buyExpiredTimestamp) };


      // buySpec Field Functions 
      bool hasBuySpec() const { return this->buySpec_ != nullptr;};
      void deleteBuySpec() { this->buySpec_ = nullptr;};
      inline string getBuySpec() const { DARABONBA_PTR_GET_DEFAULT(buySpec_, "") };
      inline Item& setBuySpec(string buySpec) { DARABONBA_PTR_SET_VALUE(buySpec_, buySpec) };


      // contStorageSize Field Functions 
      bool hasContStorageSize() const { return this->contStorageSize_ != nullptr;};
      void deleteContStorageSize() { this->contStorageSize_ = nullptr;};
      inline int64_t getContStorageSize() const { DARABONBA_PTR_GET_DEFAULT(contStorageSize_, 0L) };
      inline Item& setContStorageSize(int64_t contStorageSize) { DARABONBA_PTR_SET_VALUE(contStorageSize_, contStorageSize) };


      // fullStorageSize Field Functions 
      bool hasFullStorageSize() const { return this->fullStorageSize_ != nullptr;};
      void deleteFullStorageSize() { this->fullStorageSize_ = nullptr;};
      inline int64_t getFullStorageSize() const { DARABONBA_PTR_GET_DEFAULT(fullStorageSize_, 0L) };
      inline Item& setFullStorageSize(int64_t fullStorageSize) { DARABONBA_PTR_SET_VALUE(fullStorageSize_, fullStorageSize) };


      // isExpired Field Functions 
      bool hasIsExpired() const { return this->isExpired_ != nullptr;};
      void deleteIsExpired() { this->isExpired_ = nullptr;};
      inline bool getIsExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
      inline Item& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


      // isFreeBytesUnlimited Field Functions 
      bool hasIsFreeBytesUnlimited() const { return this->isFreeBytesUnlimited_ != nullptr;};
      void deleteIsFreeBytesUnlimited() { this->isFreeBytesUnlimited_ = nullptr;};
      inline bool getIsFreeBytesUnlimited() const { DARABONBA_PTR_GET_DEFAULT(isFreeBytesUnlimited_, false) };
      inline Item& setIsFreeBytesUnlimited(bool isFreeBytesUnlimited) { DARABONBA_PTR_SET_VALUE(isFreeBytesUnlimited_, isFreeBytesUnlimited) };


      // paiedBytes Field Functions 
      bool hasPaiedBytes() const { return this->paiedBytes_ != nullptr;};
      void deletePaiedBytes() { this->paiedBytes_ = nullptr;};
      inline int64_t getPaiedBytes() const { DARABONBA_PTR_GET_DEFAULT(paiedBytes_, 0L) };
      inline Item& setPaiedBytes(int64_t paiedBytes) { DARABONBA_PTR_SET_VALUE(paiedBytes_, paiedBytes) };


      // quotaEndTimestamp Field Functions 
      bool hasQuotaEndTimestamp() const { return this->quotaEndTimestamp_ != nullptr;};
      void deleteQuotaEndTimestamp() { this->quotaEndTimestamp_ = nullptr;};
      inline int64_t getQuotaEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(quotaEndTimestamp_, 0L) };
      inline Item& setQuotaEndTimestamp(int64_t quotaEndTimestamp) { DARABONBA_PTR_SET_VALUE(quotaEndTimestamp_, quotaEndTimestamp) };


      // quotaStartTimestamp Field Functions 
      bool hasQuotaStartTimestamp() const { return this->quotaStartTimestamp_ != nullptr;};
      void deleteQuotaStartTimestamp() { this->quotaStartTimestamp_ = nullptr;};
      inline int64_t getQuotaStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(quotaStartTimestamp_, 0L) };
      inline Item& setQuotaStartTimestamp(int64_t quotaStartTimestamp) { DARABONBA_PTR_SET_VALUE(quotaStartTimestamp_, quotaStartTimestamp) };


      // totalFreeBytes Field Functions 
      bool hasTotalFreeBytes() const { return this->totalFreeBytes_ != nullptr;};
      void deleteTotalFreeBytes() { this->totalFreeBytes_ = nullptr;};
      inline int64_t getTotalFreeBytes() const { DARABONBA_PTR_GET_DEFAULT(totalFreeBytes_, 0L) };
      inline Item& setTotalFreeBytes(int64_t totalFreeBytes) { DARABONBA_PTR_SET_VALUE(totalFreeBytes_, totalFreeBytes) };


      // usedFullBytes Field Functions 
      bool hasUsedFullBytes() const { return this->usedFullBytes_ != nullptr;};
      void deleteUsedFullBytes() { this->usedFullBytes_ = nullptr;};
      inline int64_t getUsedFullBytes() const { DARABONBA_PTR_GET_DEFAULT(usedFullBytes_, 0L) };
      inline Item& setUsedFullBytes(int64_t usedFullBytes) { DARABONBA_PTR_SET_VALUE(usedFullBytes_, usedFullBytes) };


      // usedIncrementBytes Field Functions 
      bool hasUsedIncrementBytes() const { return this->usedIncrementBytes_ != nullptr;};
      void deleteUsedIncrementBytes() { this->usedIncrementBytes_ = nullptr;};
      inline int64_t getUsedIncrementBytes() const { DARABONBA_PTR_GET_DEFAULT(usedIncrementBytes_, 0L) };
      inline Item& setUsedIncrementBytes(int64_t usedIncrementBytes) { DARABONBA_PTR_SET_VALUE(usedIncrementBytes_, usedIncrementBytes) };


    protected:
      // The billing method of the instance. Valid values:
      // 
      // - **PREPAY**: subscription
      // 
      // - **POSTPAY**: pay-as-you-go
      shared_ptr<string> buyChargeType_ {};
      // The timestamp that indicates when the instance was purchased.
      shared_ptr<int64_t> buyCreateTimestamp_ {};
      // The timestamp that indicates when the instance expires.
      // 
      // > This parameter is returned only when BuyChargeType is set to PREPAY.
      shared_ptr<int64_t> buyExpiredTimestamp_ {};
      // The instance type.
      shared_ptr<string> buySpec_ {};
      // The storage space used by incremental backup data. Unit: bytes.
      shared_ptr<int64_t> contStorageSize_ {};
      // The storage space used by full backup data. Unit: bytes.
      shared_ptr<int64_t> fullStorageSize_ {};
      // Indicates whether the instance has expired.
      // 
      // > This parameter is returned only when BuyChargeType is set to PREPAY.
      shared_ptr<bool> isExpired_ {};
      // Indicates whether the instance provides unlimited free backup traffic.
      shared_ptr<bool> isFreeBytesUnlimited_ {};
      // The total paid backup traffic in the current month. Unit: bytes.
      shared_ptr<int64_t> paiedBytes_ {};
      // The timestamp that indicates the end of the billing cycle for the free backup traffic.
      shared_ptr<int64_t> quotaEndTimestamp_ {};
      // The timestamp that indicates the start of the billing cycle for the free backup traffic.
      shared_ptr<int64_t> quotaStartTimestamp_ {};
      // The total free backup traffic in the current month. Unit: bytes.
      // 
      // > This parameter is returned only when BuyChargeType is set to PREPAY and IsFreeBytesUnlimited is false.
      shared_ptr<int64_t> totalFreeBytes_ {};
      // The paid traffic for full backups in the current month. Unit: bytes.
      shared_ptr<int64_t> usedFullBytes_ {};
      // The paid traffic for incremental backups in the current month. Unit: bytes.
      shared_ptr<int64_t> usedIncrementBytes_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->item_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeBackupPlanBillingResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBackupPlanBillingResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeBackupPlanBillingResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const DescribeBackupPlanBillingResponseBody::Item & getItem() const { DARABONBA_PTR_GET_CONST(item_, DescribeBackupPlanBillingResponseBody::Item) };
    inline DescribeBackupPlanBillingResponseBody::Item getItem() { DARABONBA_PTR_GET(item_, DescribeBackupPlanBillingResponseBody::Item) };
    inline DescribeBackupPlanBillingResponseBody& setItem(const DescribeBackupPlanBillingResponseBody::Item & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline DescribeBackupPlanBillingResponseBody& setItem(DescribeBackupPlanBillingResponseBody::Item && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPlanBillingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupPlanBillingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The billing information of the backup plan.
    shared_ptr<DescribeBackupPlanBillingResponseBody::Item> item_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
