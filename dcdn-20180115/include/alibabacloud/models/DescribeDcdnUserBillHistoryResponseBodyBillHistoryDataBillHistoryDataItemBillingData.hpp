// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATABILLHISTORYDATAITEMBILLINGDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATABILLHISTORYDATAITEMBILLINGDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& obj) { 
      DARABONBA_PTR_TO_JSON(BillingDataItem, billingDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingDataItem, billingDataItem_);
    };
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData() = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData(const DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData &) = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData(DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData &&) = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData() = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& operator=(const DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData &) = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& operator=(DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingDataItem_ != nullptr; };
    // billingDataItem Field Functions 
    bool hasBillingDataItem() const { return this->billingDataItem_ != nullptr;};
    void deleteBillingDataItem() { this->billingDataItem_ = nullptr;};
    inline const vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem> & billingDataItem() const { DARABONBA_PTR_GET_CONST(billingDataItem_, vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem>) };
    inline vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem> billingDataItem() { DARABONBA_PTR_GET(billingDataItem_, vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem>) };
    inline DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& setBillingDataItem(const vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem> & billingDataItem) { DARABONBA_PTR_SET_VALUE(billingDataItem_, billingDataItem) };
    inline DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingData& setBillingDataItem(vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem> && billingDataItem) { DARABONBA_PTR_SET_RVALUE(billingDataItem_, billingDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem>> billingDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
