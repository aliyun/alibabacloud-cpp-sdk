// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserBillPredictionResponseBodyBillPredictionData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserBillPredictionResponseBodyBillPredictionData& obj) { 
      DARABONBA_PTR_TO_JSON(BillPredictionDataItem, billPredictionDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserBillPredictionResponseBodyBillPredictionData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillPredictionDataItem, billPredictionDataItem_);
    };
    DescribeLiveUserBillPredictionResponseBodyBillPredictionData() = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionData(const DescribeLiveUserBillPredictionResponseBodyBillPredictionData &) = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionData(DescribeLiveUserBillPredictionResponseBodyBillPredictionData &&) = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserBillPredictionResponseBodyBillPredictionData() = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionData& operator=(const DescribeLiveUserBillPredictionResponseBodyBillPredictionData &) = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionData& operator=(DescribeLiveUserBillPredictionResponseBodyBillPredictionData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billPredictionDataItem_ == nullptr; };
    // billPredictionDataItem Field Functions 
    bool hasBillPredictionDataItem() const { return this->billPredictionDataItem_ != nullptr;};
    void deleteBillPredictionDataItem() { this->billPredictionDataItem_ = nullptr;};
    inline const vector<Models::DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> & billPredictionDataItem() const { DARABONBA_PTR_GET_CONST(billPredictionDataItem_, vector<Models::DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>) };
    inline vector<Models::DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> billPredictionDataItem() { DARABONBA_PTR_GET(billPredictionDataItem_, vector<Models::DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>) };
    inline DescribeLiveUserBillPredictionResponseBodyBillPredictionData& setBillPredictionDataItem(const vector<Models::DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> & billPredictionDataItem) { DARABONBA_PTR_SET_VALUE(billPredictionDataItem_, billPredictionDataItem) };
    inline DescribeLiveUserBillPredictionResponseBodyBillPredictionData& setBillPredictionDataItem(vector<Models::DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> && billPredictionDataItem) { DARABONBA_PTR_SET_RVALUE(billPredictionDataItem_, billPredictionDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>> billPredictionDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
