// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANBILLINGRESPONSEBODYITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANBILLINGRESPONSEBODYITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupPlanBillingResponseBodyItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlanBillingResponseBodyItem& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanBillingResponseBodyItem& obj) { 
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
    DescribeBackupPlanBillingResponseBodyItem() = default ;
    DescribeBackupPlanBillingResponseBodyItem(const DescribeBackupPlanBillingResponseBodyItem &) = default ;
    DescribeBackupPlanBillingResponseBodyItem(DescribeBackupPlanBillingResponseBodyItem &&) = default ;
    DescribeBackupPlanBillingResponseBodyItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlanBillingResponseBodyItem() = default ;
    DescribeBackupPlanBillingResponseBodyItem& operator=(const DescribeBackupPlanBillingResponseBodyItem &) = default ;
    DescribeBackupPlanBillingResponseBodyItem& operator=(DescribeBackupPlanBillingResponseBodyItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyChargeType_ == nullptr
        && return this->buyCreateTimestamp_ == nullptr && return this->buyExpiredTimestamp_ == nullptr && return this->buySpec_ == nullptr && return this->contStorageSize_ == nullptr && return this->fullStorageSize_ == nullptr
        && return this->isExpired_ == nullptr && return this->isFreeBytesUnlimited_ == nullptr && return this->paiedBytes_ == nullptr && return this->quotaEndTimestamp_ == nullptr && return this->quotaStartTimestamp_ == nullptr
        && return this->totalFreeBytes_ == nullptr && return this->usedFullBytes_ == nullptr && return this->usedIncrementBytes_ == nullptr; };
    // buyChargeType Field Functions 
    bool hasBuyChargeType() const { return this->buyChargeType_ != nullptr;};
    void deleteBuyChargeType() { this->buyChargeType_ = nullptr;};
    inline string buyChargeType() const { DARABONBA_PTR_GET_DEFAULT(buyChargeType_, "") };
    inline DescribeBackupPlanBillingResponseBodyItem& setBuyChargeType(string buyChargeType) { DARABONBA_PTR_SET_VALUE(buyChargeType_, buyChargeType) };


    // buyCreateTimestamp Field Functions 
    bool hasBuyCreateTimestamp() const { return this->buyCreateTimestamp_ != nullptr;};
    void deleteBuyCreateTimestamp() { this->buyCreateTimestamp_ = nullptr;};
    inline int64_t buyCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(buyCreateTimestamp_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setBuyCreateTimestamp(int64_t buyCreateTimestamp) { DARABONBA_PTR_SET_VALUE(buyCreateTimestamp_, buyCreateTimestamp) };


    // buyExpiredTimestamp Field Functions 
    bool hasBuyExpiredTimestamp() const { return this->buyExpiredTimestamp_ != nullptr;};
    void deleteBuyExpiredTimestamp() { this->buyExpiredTimestamp_ = nullptr;};
    inline int64_t buyExpiredTimestamp() const { DARABONBA_PTR_GET_DEFAULT(buyExpiredTimestamp_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setBuyExpiredTimestamp(int64_t buyExpiredTimestamp) { DARABONBA_PTR_SET_VALUE(buyExpiredTimestamp_, buyExpiredTimestamp) };


    // buySpec Field Functions 
    bool hasBuySpec() const { return this->buySpec_ != nullptr;};
    void deleteBuySpec() { this->buySpec_ = nullptr;};
    inline string buySpec() const { DARABONBA_PTR_GET_DEFAULT(buySpec_, "") };
    inline DescribeBackupPlanBillingResponseBodyItem& setBuySpec(string buySpec) { DARABONBA_PTR_SET_VALUE(buySpec_, buySpec) };


    // contStorageSize Field Functions 
    bool hasContStorageSize() const { return this->contStorageSize_ != nullptr;};
    void deleteContStorageSize() { this->contStorageSize_ = nullptr;};
    inline int64_t contStorageSize() const { DARABONBA_PTR_GET_DEFAULT(contStorageSize_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setContStorageSize(int64_t contStorageSize) { DARABONBA_PTR_SET_VALUE(contStorageSize_, contStorageSize) };


    // fullStorageSize Field Functions 
    bool hasFullStorageSize() const { return this->fullStorageSize_ != nullptr;};
    void deleteFullStorageSize() { this->fullStorageSize_ = nullptr;};
    inline int64_t fullStorageSize() const { DARABONBA_PTR_GET_DEFAULT(fullStorageSize_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setFullStorageSize(int64_t fullStorageSize) { DARABONBA_PTR_SET_VALUE(fullStorageSize_, fullStorageSize) };


    // isExpired Field Functions 
    bool hasIsExpired() const { return this->isExpired_ != nullptr;};
    void deleteIsExpired() { this->isExpired_ = nullptr;};
    inline bool isExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
    inline DescribeBackupPlanBillingResponseBodyItem& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


    // isFreeBytesUnlimited Field Functions 
    bool hasIsFreeBytesUnlimited() const { return this->isFreeBytesUnlimited_ != nullptr;};
    void deleteIsFreeBytesUnlimited() { this->isFreeBytesUnlimited_ = nullptr;};
    inline bool isFreeBytesUnlimited() const { DARABONBA_PTR_GET_DEFAULT(isFreeBytesUnlimited_, false) };
    inline DescribeBackupPlanBillingResponseBodyItem& setIsFreeBytesUnlimited(bool isFreeBytesUnlimited) { DARABONBA_PTR_SET_VALUE(isFreeBytesUnlimited_, isFreeBytesUnlimited) };


    // paiedBytes Field Functions 
    bool hasPaiedBytes() const { return this->paiedBytes_ != nullptr;};
    void deletePaiedBytes() { this->paiedBytes_ = nullptr;};
    inline int64_t paiedBytes() const { DARABONBA_PTR_GET_DEFAULT(paiedBytes_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setPaiedBytes(int64_t paiedBytes) { DARABONBA_PTR_SET_VALUE(paiedBytes_, paiedBytes) };


    // quotaEndTimestamp Field Functions 
    bool hasQuotaEndTimestamp() const { return this->quotaEndTimestamp_ != nullptr;};
    void deleteQuotaEndTimestamp() { this->quotaEndTimestamp_ = nullptr;};
    inline int64_t quotaEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(quotaEndTimestamp_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setQuotaEndTimestamp(int64_t quotaEndTimestamp) { DARABONBA_PTR_SET_VALUE(quotaEndTimestamp_, quotaEndTimestamp) };


    // quotaStartTimestamp Field Functions 
    bool hasQuotaStartTimestamp() const { return this->quotaStartTimestamp_ != nullptr;};
    void deleteQuotaStartTimestamp() { this->quotaStartTimestamp_ = nullptr;};
    inline int64_t quotaStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(quotaStartTimestamp_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setQuotaStartTimestamp(int64_t quotaStartTimestamp) { DARABONBA_PTR_SET_VALUE(quotaStartTimestamp_, quotaStartTimestamp) };


    // totalFreeBytes Field Functions 
    bool hasTotalFreeBytes() const { return this->totalFreeBytes_ != nullptr;};
    void deleteTotalFreeBytes() { this->totalFreeBytes_ = nullptr;};
    inline int64_t totalFreeBytes() const { DARABONBA_PTR_GET_DEFAULT(totalFreeBytes_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setTotalFreeBytes(int64_t totalFreeBytes) { DARABONBA_PTR_SET_VALUE(totalFreeBytes_, totalFreeBytes) };


    // usedFullBytes Field Functions 
    bool hasUsedFullBytes() const { return this->usedFullBytes_ != nullptr;};
    void deleteUsedFullBytes() { this->usedFullBytes_ = nullptr;};
    inline int64_t usedFullBytes() const { DARABONBA_PTR_GET_DEFAULT(usedFullBytes_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setUsedFullBytes(int64_t usedFullBytes) { DARABONBA_PTR_SET_VALUE(usedFullBytes_, usedFullBytes) };


    // usedIncrementBytes Field Functions 
    bool hasUsedIncrementBytes() const { return this->usedIncrementBytes_ != nullptr;};
    void deleteUsedIncrementBytes() { this->usedIncrementBytes_ = nullptr;};
    inline int64_t usedIncrementBytes() const { DARABONBA_PTR_GET_DEFAULT(usedIncrementBytes_, 0L) };
    inline DescribeBackupPlanBillingResponseBodyItem& setUsedIncrementBytes(int64_t usedIncrementBytes) { DARABONBA_PTR_SET_VALUE(usedIncrementBytes_, usedIncrementBytes) };


  protected:
    // The billing method. Valid values:
    // 
    // *   PREPAY
    // *   POSTPAY
    std::shared_ptr<string> buyChargeType_ = nullptr;
    // The timestamp that indicates when the instance was purchased.
    std::shared_ptr<int64_t> buyCreateTimestamp_ = nullptr;
    // The timestamp that indicates when the instance expires.
    // 
    // > This parameter is available only if the value of the BuyChargeType parameter is PREPAY.
    std::shared_ptr<int64_t> buyExpiredTimestamp_ = nullptr;
    // The specifications of the instance.
    std::shared_ptr<string> buySpec_ = nullptr;
    // The size of the built-in storage for storing incremental backup data.
    std::shared_ptr<int64_t> contStorageSize_ = nullptr;
    // The size of the built-in storage for storing full backup data.
    std::shared_ptr<int64_t> fullStorageSize_ = nullptr;
    // Indicates whether the instance expired.
    // 
    // > This parameter is available only if the value of the BuyChargeType parameter is PREPAY.
    std::shared_ptr<bool> isExpired_ = nullptr;
    // Indicates whether the instance has no backup traffic limit.
    std::shared_ptr<bool> isFreeBytesUnlimited_ = nullptr;
    // The total paid backup traffic in the current month.
    std::shared_ptr<int64_t> paiedBytes_ = nullptr;
    // The timestamp that indicates when the billing cycle of free backup traffic ends.
    std::shared_ptr<int64_t> quotaEndTimestamp_ = nullptr;
    // The timestamp that indicates when the billing cycle of free backup traffic starts.
    std::shared_ptr<int64_t> quotaStartTimestamp_ = nullptr;
    // The total free backup traffic in the current month.
    // 
    // > This parameter is available only if the value of the BuyChargeType parameter is PREPAY and the value of the IsFreeBytesUnlimited parameter is false.
    std::shared_ptr<int64_t> totalFreeBytes_ = nullptr;
    // The paid full backup traffic in the current month.
    std::shared_ptr<int64_t> usedFullBytes_ = nullptr;
    // The paid incremental backup traffic in the current month.
    std::shared_ptr<int64_t> usedIncrementBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
