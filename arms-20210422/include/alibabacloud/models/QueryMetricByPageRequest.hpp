// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMETRICBYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMETRICBYPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class QueryMetricByPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMetricByPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(IntervalInSec, intervalInSec_);
      DARABONBA_PTR_TO_JSON(Measures, measures_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMetricByPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(IntervalInSec, intervalInSec_);
      DARABONBA_PTR_FROM_JSON(Measures, measures_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryMetricByPageRequest() = default ;
    QueryMetricByPageRequest(const QueryMetricByPageRequest &) = default ;
    QueryMetricByPageRequest(QueryMetricByPageRequest &&) = default ;
    QueryMetricByPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMetricByPageRequest() = default ;
    QueryMetricByPageRequest& operator=(const QueryMetricByPageRequest &) = default ;
    QueryMetricByPageRequest& operator=(QueryMetricByPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->customFilters_ == nullptr && this->dimensions_ == nullptr && this->endTime_ == nullptr && this->filters_ == nullptr && this->intervalInSec_ == nullptr
        && this->measures_ == nullptr && this->metric_ == nullptr && this->order_ == nullptr && this->orderBy_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryMetricByPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // customFilters Field Functions 
    bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
    void deleteCustomFilters() { this->customFilters_ = nullptr;};
    inline const vector<string> & getCustomFilters() const { DARABONBA_PTR_GET_CONST(customFilters_, vector<string>) };
    inline vector<string> getCustomFilters() { DARABONBA_PTR_GET(customFilters_, vector<string>) };
    inline QueryMetricByPageRequest& setCustomFilters(const vector<string> & customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };
    inline QueryMetricByPageRequest& setCustomFilters(vector<string> && customFilters) { DARABONBA_PTR_SET_RVALUE(customFilters_, customFilters) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<string> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<string>) };
    inline vector<string> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<string>) };
    inline QueryMetricByPageRequest& setDimensions(const vector<string> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline QueryMetricByPageRequest& setDimensions(vector<string> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryMetricByPageRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<QueryMetricByPageRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<QueryMetricByPageRequest::Filters>) };
    inline vector<QueryMetricByPageRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<QueryMetricByPageRequest::Filters>) };
    inline QueryMetricByPageRequest& setFilters(const vector<QueryMetricByPageRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline QueryMetricByPageRequest& setFilters(vector<QueryMetricByPageRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // intervalInSec Field Functions 
    bool hasIntervalInSec() const { return this->intervalInSec_ != nullptr;};
    void deleteIntervalInSec() { this->intervalInSec_ = nullptr;};
    inline int32_t getIntervalInSec() const { DARABONBA_PTR_GET_DEFAULT(intervalInSec_, 0) };
    inline QueryMetricByPageRequest& setIntervalInSec(int32_t intervalInSec) { DARABONBA_PTR_SET_VALUE(intervalInSec_, intervalInSec) };


    // measures Field Functions 
    bool hasMeasures() const { return this->measures_ != nullptr;};
    void deleteMeasures() { this->measures_ = nullptr;};
    inline const vector<string> & getMeasures() const { DARABONBA_PTR_GET_CONST(measures_, vector<string>) };
    inline vector<string> getMeasures() { DARABONBA_PTR_GET(measures_, vector<string>) };
    inline QueryMetricByPageRequest& setMeasures(const vector<string> & measures) { DARABONBA_PTR_SET_VALUE(measures_, measures) };
    inline QueryMetricByPageRequest& setMeasures(vector<string> && measures) { DARABONBA_PTR_SET_RVALUE(measures_, measures) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline QueryMetricByPageRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline QueryMetricByPageRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryMetricByPageRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMetricByPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryMetricByPageRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<string>> customFilters_ {};
    shared_ptr<vector<string>> dimensions_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<vector<QueryMetricByPageRequest::Filters>> filters_ {};
    shared_ptr<int32_t> intervalInSec_ {};
    // This parameter is required.
    shared_ptr<vector<string>> measures_ {};
    // This parameter is required.
    shared_ptr<string> metric_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
