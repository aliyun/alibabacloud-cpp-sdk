// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillHistoryResponseBodyBillHistoryData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillHistoryResponseBodyBillHistoryData& obj) { 
      DARABONBA_PTR_TO_JSON(BillHistoryDataItem, billHistoryDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillHistoryResponseBodyBillHistoryData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillHistoryDataItem, billHistoryDataItem_);
    };
    DescribeCdnUserBillHistoryResponseBodyBillHistoryData() = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryData(const DescribeCdnUserBillHistoryResponseBodyBillHistoryData &) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryData(DescribeCdnUserBillHistoryResponseBodyBillHistoryData &&) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillHistoryResponseBodyBillHistoryData() = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryData& operator=(const DescribeCdnUserBillHistoryResponseBodyBillHistoryData &) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryData& operator=(DescribeCdnUserBillHistoryResponseBodyBillHistoryData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billHistoryDataItem_ != nullptr; };
    // billHistoryDataItem Field Functions 
    bool hasBillHistoryDataItem() const { return this->billHistoryDataItem_ != nullptr;};
    void deleteBillHistoryDataItem() { this->billHistoryDataItem_ = nullptr;};
    inline const vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem> & billHistoryDataItem() const { DARABONBA_PTR_GET_CONST(billHistoryDataItem_, vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem>) };
    inline vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem> billHistoryDataItem() { DARABONBA_PTR_GET(billHistoryDataItem_, vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem>) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryData& setBillHistoryDataItem(const vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem> & billHistoryDataItem) { DARABONBA_PTR_SET_VALUE(billHistoryDataItem_, billHistoryDataItem) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryData& setBillHistoryDataItem(vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem> && billHistoryDataItem) { DARABONBA_PTR_SET_RVALUE(billHistoryDataItem_, billHistoryDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem>> billHistoryDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
