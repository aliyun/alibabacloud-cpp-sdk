// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODYTRANSCODEDATATRANSCODEDATAITEMDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODYTRANSCODEDATATRANSCODEDATAITEMDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData& obj) { 
      DARABONBA_PTR_TO_JSON(DataItem, dataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataItem, dataItem_);
    };
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData() = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData(const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData &) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData(DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData &&) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData() = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData& operator=(const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData &) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData& operator=(DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataItem_ != nullptr; };
    // dataItem Field Functions 
    bool hasDataItem() const { return this->dataItem_ != nullptr;};
    void deleteDataItem() { this->dataItem_ = nullptr;};
    inline const vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem> & dataItem() const { DARABONBA_PTR_GET_CONST(dataItem_, vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem>) };
    inline vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem> dataItem() { DARABONBA_PTR_GET(dataItem_, vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem>) };
    inline DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData& setDataItem(const vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem> & dataItem) { DARABONBA_PTR_SET_VALUE(dataItem_, dataItem) };
    inline DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData& setDataItem(vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem> && dataItem) { DARABONBA_PTR_SET_RVALUE(dataItem_, dataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem>> dataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
