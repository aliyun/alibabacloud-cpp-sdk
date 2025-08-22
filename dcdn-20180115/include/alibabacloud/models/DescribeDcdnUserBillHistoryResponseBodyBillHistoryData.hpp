// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserBillHistoryResponseBodyBillHistoryData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserBillHistoryResponseBodyBillHistoryData& obj) { 
      DARABONBA_PTR_TO_JSON(BillHistoryDataItem, billHistoryDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserBillHistoryResponseBodyBillHistoryData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillHistoryDataItem, billHistoryDataItem_);
    };
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryData() = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryData(const DescribeDcdnUserBillHistoryResponseBodyBillHistoryData &) = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryData(DescribeDcdnUserBillHistoryResponseBodyBillHistoryData &&) = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserBillHistoryResponseBodyBillHistoryData() = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryData& operator=(const DescribeDcdnUserBillHistoryResponseBodyBillHistoryData &) = default ;
    DescribeDcdnUserBillHistoryResponseBodyBillHistoryData& operator=(DescribeDcdnUserBillHistoryResponseBodyBillHistoryData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billHistoryDataItem_ != nullptr; };
    // billHistoryDataItem Field Functions 
    bool hasBillHistoryDataItem() const { return this->billHistoryDataItem_ != nullptr;};
    void deleteBillHistoryDataItem() { this->billHistoryDataItem_ = nullptr;};
    inline const vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem> & billHistoryDataItem() const { DARABONBA_PTR_GET_CONST(billHistoryDataItem_, vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem>) };
    inline vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem> billHistoryDataItem() { DARABONBA_PTR_GET(billHistoryDataItem_, vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem>) };
    inline DescribeDcdnUserBillHistoryResponseBodyBillHistoryData& setBillHistoryDataItem(const vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem> & billHistoryDataItem) { DARABONBA_PTR_SET_VALUE(billHistoryDataItem_, billHistoryDataItem) };
    inline DescribeDcdnUserBillHistoryResponseBodyBillHistoryData& setBillHistoryDataItem(vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem> && billHistoryDataItem) { DARABONBA_PTR_SET_RVALUE(billHistoryDataItem_, billHistoryDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItem>> billHistoryDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
