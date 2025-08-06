// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserBillPredictionResponseBodyBillPredictionData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserBillPredictionResponseBodyBillPredictionData& obj) { 
      DARABONBA_PTR_TO_JSON(BillPredictionDataItem, billPredictionDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserBillPredictionResponseBodyBillPredictionData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillPredictionDataItem, billPredictionDataItem_);
    };
    DescribeVodUserBillPredictionResponseBodyBillPredictionData() = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionData(const DescribeVodUserBillPredictionResponseBodyBillPredictionData &) = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionData(DescribeVodUserBillPredictionResponseBodyBillPredictionData &&) = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserBillPredictionResponseBodyBillPredictionData() = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionData& operator=(const DescribeVodUserBillPredictionResponseBodyBillPredictionData &) = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionData& operator=(DescribeVodUserBillPredictionResponseBodyBillPredictionData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billPredictionDataItem_ != nullptr; };
    // billPredictionDataItem Field Functions 
    bool hasBillPredictionDataItem() const { return this->billPredictionDataItem_ != nullptr;};
    void deleteBillPredictionDataItem() { this->billPredictionDataItem_ = nullptr;};
    inline const vector<Models::DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> & billPredictionDataItem() const { DARABONBA_PTR_GET_CONST(billPredictionDataItem_, vector<Models::DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>) };
    inline vector<Models::DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> billPredictionDataItem() { DARABONBA_PTR_GET(billPredictionDataItem_, vector<Models::DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>) };
    inline DescribeVodUserBillPredictionResponseBodyBillPredictionData& setBillPredictionDataItem(const vector<Models::DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> & billPredictionDataItem) { DARABONBA_PTR_SET_VALUE(billPredictionDataItem_, billPredictionDataItem) };
    inline DescribeVodUserBillPredictionResponseBodyBillPredictionData& setBillPredictionDataItem(vector<Models::DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem> && billPredictionDataItem) { DARABONBA_PTR_SET_RVALUE(billPredictionDataItem_, billPredictionDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem>> billPredictionDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
