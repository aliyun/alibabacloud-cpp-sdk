// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYAVGMETRICLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYAVGMETRICLISTREQUEST_HPP_
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
  class QueryHistoryAvgMetricListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryAvgMetricListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDate, dataDate_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryAvgMetricListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDate, dataDate_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    QueryHistoryAvgMetricListRequest() = default ;
    QueryHistoryAvgMetricListRequest(const QueryHistoryAvgMetricListRequest &) = default ;
    QueryHistoryAvgMetricListRequest(QueryHistoryAvgMetricListRequest &&) = default ;
    QueryHistoryAvgMetricListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryAvgMetricListRequest() = default ;
    QueryHistoryAvgMetricListRequest& operator=(const QueryHistoryAvgMetricListRequest &) = default ;
    QueryHistoryAvgMetricListRequest& operator=(QueryHistoryAvgMetricListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Range : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Range& obj) { 
        DARABONBA_PTR_TO_JSON(IncludeMax, includeMax_);
        DARABONBA_PTR_TO_JSON(IncludeMin, includeMin_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Max, max_);
        DARABONBA_PTR_TO_JSON(Min, min_);
      };
      friend void from_json(const Darabonba::Json& j, Range& obj) { 
        DARABONBA_PTR_FROM_JSON(IncludeMax, includeMax_);
        DARABONBA_PTR_FROM_JSON(IncludeMin, includeMin_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Max, max_);
        DARABONBA_PTR_FROM_JSON(Min, min_);
      };
      Range() = default ;
      Range(const Range &) = default ;
      Range(Range &&) = default ;
      Range(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Range() = default ;
      Range& operator=(const Range &) = default ;
      Range& operator=(Range &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->includeMax_ == nullptr
        && this->includeMin_ == nullptr && this->label_ == nullptr && this->max_ == nullptr && this->min_ == nullptr; };
      // includeMax Field Functions 
      bool hasIncludeMax() const { return this->includeMax_ != nullptr;};
      void deleteIncludeMax() { this->includeMax_ = nullptr;};
      inline bool getIncludeMax() const { DARABONBA_PTR_GET_DEFAULT(includeMax_, false) };
      inline Range& setIncludeMax(bool includeMax) { DARABONBA_PTR_SET_VALUE(includeMax_, includeMax) };


      // includeMin Field Functions 
      bool hasIncludeMin() const { return this->includeMin_ != nullptr;};
      void deleteIncludeMin() { this->includeMin_ = nullptr;};
      inline bool getIncludeMin() const { DARABONBA_PTR_GET_DEFAULT(includeMin_, false) };
      inline Range& setIncludeMin(bool includeMin) { DARABONBA_PTR_SET_VALUE(includeMin_, includeMin) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Range& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // max Field Functions 
      bool hasMax() const { return this->max_ != nullptr;};
      void deleteMax() { this->max_ = nullptr;};
      inline float getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
      inline Range& setMax(float max) { DARABONBA_PTR_SET_VALUE(max_, max) };


      // min Field Functions 
      bool hasMin() const { return this->min_ != nullptr;};
      void deleteMin() { this->min_ = nullptr;};
      inline float getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
      inline Range& setMin(float min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    protected:
      shared_ptr<bool> includeMax_ {};
      shared_ptr<bool> includeMin_ {};
      shared_ptr<string> label_ {};
      shared_ptr<float> max_ {};
      shared_ptr<float> min_ {};
    };

    virtual bool empty() const override { return this->dataDate_ == nullptr
        && this->desktopId_ == nullptr && this->metricName_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->range_ == nullptr
        && this->resourceRegionId_ == nullptr && this->sortType_ == nullptr; };
    // dataDate Field Functions 
    bool hasDataDate() const { return this->dataDate_ != nullptr;};
    void deleteDataDate() { this->dataDate_ = nullptr;};
    inline string getDataDate() const { DARABONBA_PTR_GET_DEFAULT(dataDate_, "") };
    inline QueryHistoryAvgMetricListRequest& setDataDate(string dataDate) { DARABONBA_PTR_SET_VALUE(dataDate_, dataDate) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline QueryHistoryAvgMetricListRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline QueryHistoryAvgMetricListRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline QueryHistoryAvgMetricListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryHistoryAvgMetricListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryHistoryAvgMetricListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const QueryHistoryAvgMetricListRequest::Range & getRange() const { DARABONBA_PTR_GET_CONST(range_, QueryHistoryAvgMetricListRequest::Range) };
    inline QueryHistoryAvgMetricListRequest::Range getRange() { DARABONBA_PTR_GET(range_, QueryHistoryAvgMetricListRequest::Range) };
    inline QueryHistoryAvgMetricListRequest& setRange(const QueryHistoryAvgMetricListRequest::Range & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline QueryHistoryAvgMetricListRequest& setRange(QueryHistoryAvgMetricListRequest::Range && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline QueryHistoryAvgMetricListRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline QueryHistoryAvgMetricListRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    shared_ptr<string> dataDate_ {};
    shared_ptr<vector<string>> desktopId_ {};
    shared_ptr<string> metricName_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<QueryHistoryAvgMetricListRequest::Range> range_ {};
    shared_ptr<string> resourceRegionId_ {};
    shared_ptr<string> sortType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
