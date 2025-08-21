// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATABILLHISTORYDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATABILLHISTORYDATAITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(BillTime, billTime_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(BillingData, billingData_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BillTime, billTime_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(BillingData, billingData_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
    };
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem() = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem(const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem &) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem(DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem &&) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem() = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& operator=(const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem &) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& operator=(DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billTime_ != nullptr
        && this->billType_ != nullptr && this->billingData_ != nullptr && this->dimension_ != nullptr; };
    // billTime Field Functions 
    bool hasBillTime() const { return this->billTime_ != nullptr;};
    void deleteBillTime() { this->billTime_ = nullptr;};
    inline string billTime() const { DARABONBA_PTR_GET_DEFAULT(billTime_, "") };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& setBillTime(string billTime) { DARABONBA_PTR_SET_VALUE(billTime_, billTime) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // billingData Field Functions 
    bool hasBillingData() const { return this->billingData_ != nullptr;};
    void deleteBillingData() { this->billingData_ = nullptr;};
    inline const Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData & billingData() const { DARABONBA_PTR_GET_CONST(billingData_, Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData) };
    inline Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData billingData() { DARABONBA_PTR_GET(billingData_, Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& setBillingData(const Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData & billingData) { DARABONBA_PTR_SET_VALUE(billingData_, billingData) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& setBillingData(Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData && billingData) { DARABONBA_PTR_SET_RVALUE(billingData_, billingData) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


  protected:
    // The beginning of the time range that was queried.
    std::shared_ptr<string> billTime_ = nullptr;
    // The metering method.
    std::shared_ptr<string> billType_ = nullptr;
    // The billable items.
    std::shared_ptr<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData> billingData_ = nullptr;
    // The dimension.
    std::shared_ptr<string> dimension_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
