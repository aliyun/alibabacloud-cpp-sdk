// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYAVGMETRICLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYAVGMETRICLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryAvgMetricListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryAvgMetricListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDate, dataDate_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Range, rangeShrink_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryAvgMetricListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDate, dataDate_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Range, rangeShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    QueryHistoryAvgMetricListShrinkRequest() = default ;
    QueryHistoryAvgMetricListShrinkRequest(const QueryHistoryAvgMetricListShrinkRequest &) = default ;
    QueryHistoryAvgMetricListShrinkRequest(QueryHistoryAvgMetricListShrinkRequest &&) = default ;
    QueryHistoryAvgMetricListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryAvgMetricListShrinkRequest() = default ;
    QueryHistoryAvgMetricListShrinkRequest& operator=(const QueryHistoryAvgMetricListShrinkRequest &) = default ;
    QueryHistoryAvgMetricListShrinkRequest& operator=(QueryHistoryAvgMetricListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDate_ == nullptr
        && this->desktopId_ == nullptr && this->metricName_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->rangeShrink_ == nullptr
        && this->resourceRegionId_ == nullptr && this->sortType_ == nullptr; };
    // dataDate Field Functions 
    bool hasDataDate() const { return this->dataDate_ != nullptr;};
    void deleteDataDate() { this->dataDate_ = nullptr;};
    inline string getDataDate() const { DARABONBA_PTR_GET_DEFAULT(dataDate_, "") };
    inline QueryHistoryAvgMetricListShrinkRequest& setDataDate(string dataDate) { DARABONBA_PTR_SET_VALUE(dataDate_, dataDate) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline QueryHistoryAvgMetricListShrinkRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline QueryHistoryAvgMetricListShrinkRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline QueryHistoryAvgMetricListShrinkRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryHistoryAvgMetricListShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryHistoryAvgMetricListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rangeShrink Field Functions 
    bool hasRangeShrink() const { return this->rangeShrink_ != nullptr;};
    void deleteRangeShrink() { this->rangeShrink_ = nullptr;};
    inline string getRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(rangeShrink_, "") };
    inline QueryHistoryAvgMetricListShrinkRequest& setRangeShrink(string rangeShrink) { DARABONBA_PTR_SET_VALUE(rangeShrink_, rangeShrink) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline QueryHistoryAvgMetricListShrinkRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline QueryHistoryAvgMetricListShrinkRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    shared_ptr<string> dataDate_ {};
    shared_ptr<vector<string>> desktopId_ {};
    shared_ptr<string> metricName_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> rangeShrink_ {};
    shared_ptr<string> resourceRegionId_ {};
    shared_ptr<string> sortType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
