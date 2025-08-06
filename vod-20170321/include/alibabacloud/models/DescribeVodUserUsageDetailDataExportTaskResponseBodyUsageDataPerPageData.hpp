// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& obj) { 
      DARABONBA_PTR_TO_JSON(DataItem, dataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataItem, dataItem_);
    };
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData() = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData(const DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData &) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData(DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData &&) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData() = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& operator=(const DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData &) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& operator=(DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataItem_ != nullptr; };
    // dataItem Field Functions 
    bool hasDataItem() const { return this->dataItem_ != nullptr;};
    void deleteDataItem() { this->dataItem_ = nullptr;};
    inline const vector<Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem> & dataItem() const { DARABONBA_PTR_GET_CONST(dataItem_, vector<Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem>) };
    inline vector<Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem> dataItem() { DARABONBA_PTR_GET(dataItem_, vector<Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem>) };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& setDataItem(const vector<Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem> & dataItem) { DARABONBA_PTR_SET_VALUE(dataItem_, dataItem) };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& setDataItem(vector<Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem> && dataItem) { DARABONBA_PTR_SET_RVALUE(dataItem_, dataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem>> dataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
