// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillPredictionResponseBodyBillPredictionData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillPredictionResponseBodyBillPredictionData& obj) { 
      DARABONBA_PTR_TO_JSON(BillPredictionDataItem, billPredictionDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillPredictionResponseBodyBillPredictionData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillPredictionDataItem, billPredictionDataItem_);
    };
    DescribeCdnUserBillPredictionResponseBodyBillPredictionData() = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionData(const DescribeCdnUserBillPredictionResponseBodyBillPredictionData &) = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionData(DescribeCdnUserBillPredictionResponseBodyBillPredictionData &&) = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillPredictionResponseBodyBillPredictionData() = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionData& operator=(const DescribeCdnUserBillPredictionResponseBodyBillPredictionData &) = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionData& operator=(DescribeCdnUserBillPredictionResponseBodyBillPredictionData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billPredictionDataItem_ == nullptr; };
    // billPredictionDataItem Field Functions 
    bool hasBillPredictionDataItem() const { return this->billPredictionDataItem_ != nullptr;};
    void deleteBillPredictionDataItem() { this->billPredictionDataItem_ = nullptr;};
    inline const vector<Models::DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> & billPredictionDataItem() const { DARABONBA_PTR_GET_CONST(billPredictionDataItem_, vector<Models::DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>) };
    inline vector<Models::DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> billPredictionDataItem() { DARABONBA_PTR_GET(billPredictionDataItem_, vector<Models::DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>) };
    inline DescribeCdnUserBillPredictionResponseBodyBillPredictionData& setBillPredictionDataItem(const vector<Models::DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> & billPredictionDataItem) { DARABONBA_PTR_SET_VALUE(billPredictionDataItem_, billPredictionDataItem) };
    inline DescribeCdnUserBillPredictionResponseBodyBillPredictionData& setBillPredictionDataItem(vector<Models::DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> && billPredictionDataItem) { DARABONBA_PTR_SET_RVALUE(billPredictionDataItem_, billPredictionDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>> billPredictionDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
