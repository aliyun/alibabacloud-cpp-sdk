// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATABILLHISTORYDATAITEMBILLINGDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATABILLHISTORYDATAITEMBILLINGDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& obj) { 
      DARABONBA_PTR_TO_JSON(BillingDataItem, billingDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingDataItem, billingDataItem_);
    };
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData() = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData(const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData &) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData(DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData &&) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData() = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& operator=(const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData &) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& operator=(DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingDataItem_ == nullptr; };
    // billingDataItem Field Functions 
    bool hasBillingDataItem() const { return this->billingDataItem_ != nullptr;};
    void deleteBillingDataItem() { this->billingDataItem_ = nullptr;};
    inline const vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem> & billingDataItem() const { DARABONBA_PTR_GET_CONST(billingDataItem_, vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem>) };
    inline vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem> billingDataItem() { DARABONBA_PTR_GET(billingDataItem_, vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem>) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& setBillingDataItem(const vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem> & billingDataItem) { DARABONBA_PTR_SET_VALUE(billingDataItem_, billingDataItem) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& setBillingDataItem(vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem> && billingDataItem) { DARABONBA_PTR_SET_RVALUE(billingDataItem_, billingDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem>> billingDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
