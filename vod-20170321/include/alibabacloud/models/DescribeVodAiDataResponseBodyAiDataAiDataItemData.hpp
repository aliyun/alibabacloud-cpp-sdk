// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODYAIDATAAIDATAITEMDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODYAIDATAAIDATAITEMDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodAIDataResponseBodyAIDataAIDataItemData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodAIDataResponseBodyAIDataAIDataItemData& obj) { 
      DARABONBA_PTR_TO_JSON(DataItem, dataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodAIDataResponseBodyAIDataAIDataItemData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataItem, dataItem_);
    };
    DescribeVodAIDataResponseBodyAIDataAIDataItemData() = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemData(const DescribeVodAIDataResponseBodyAIDataAIDataItemData &) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemData(DescribeVodAIDataResponseBodyAIDataAIDataItemData &&) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodAIDataResponseBodyAIDataAIDataItemData() = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemData& operator=(const DescribeVodAIDataResponseBodyAIDataAIDataItemData &) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemData& operator=(DescribeVodAIDataResponseBodyAIDataAIDataItemData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataItem_ == nullptr; };
    // dataItem Field Functions 
    bool hasDataItem() const { return this->dataItem_ != nullptr;};
    void deleteDataItem() { this->dataItem_ = nullptr;};
    inline const vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem> & dataItem() const { DARABONBA_PTR_GET_CONST(dataItem_, vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem>) };
    inline vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem> dataItem() { DARABONBA_PTR_GET(dataItem_, vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem>) };
    inline DescribeVodAIDataResponseBodyAIDataAIDataItemData& setDataItem(const vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem> & dataItem) { DARABONBA_PTR_SET_VALUE(dataItem_, dataItem) };
    inline DescribeVodAIDataResponseBodyAIDataAIDataItemData& setDataItem(vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem> && dataItem) { DARABONBA_PTR_SET_RVALUE(dataItem_, dataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem>> dataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
