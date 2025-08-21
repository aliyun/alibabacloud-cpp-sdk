// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& obj) { 
      DARABONBA_PTR_TO_JSON(DataItem, dataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataItem, dataItem_);
    };
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData() = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData(const DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData &) = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData(DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData &&) = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData() = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& operator=(const DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData &) = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& operator=(DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataItem_ != nullptr; };
    // dataItem Field Functions 
    bool hasDataItem() const { return this->dataItem_ != nullptr;};
    void deleteDataItem() { this->dataItem_ = nullptr;};
    inline const vector<Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem> & dataItem() const { DARABONBA_PTR_GET_CONST(dataItem_, vector<Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem>) };
    inline vector<Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem> dataItem() { DARABONBA_PTR_GET(dataItem_, vector<Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem>) };
    inline DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& setDataItem(const vector<Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem> & dataItem) { DARABONBA_PTR_SET_VALUE(dataItem_, dataItem) };
    inline DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData& setDataItem(vector<Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem> && dataItem) { DARABONBA_PTR_SET_RVALUE(dataItem_, dataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem>> dataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
