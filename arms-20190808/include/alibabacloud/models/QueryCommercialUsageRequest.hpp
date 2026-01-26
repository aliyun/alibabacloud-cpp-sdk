// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMMERCIALUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMMERCIALUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryCommercialUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCommercialUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedFilters, advancedFilters_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IntervalInSec, intervalInSec_);
      DARABONBA_PTR_TO_JSON(Measures, measures_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCommercialUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedFilters, advancedFilters_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IntervalInSec, intervalInSec_);
      DARABONBA_PTR_FROM_JSON(Measures, measures_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryCommercialUsageRequest() = default ;
    QueryCommercialUsageRequest(const QueryCommercialUsageRequest &) = default ;
    QueryCommercialUsageRequest(QueryCommercialUsageRequest &&) = default ;
    QueryCommercialUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCommercialUsageRequest() = default ;
    QueryCommercialUsageRequest& operator=(const QueryCommercialUsageRequest &) = default ;
    QueryCommercialUsageRequest& operator=(QueryCommercialUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdvancedFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedFilters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(OpType, opType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(OpType, opType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AdvancedFilters() = default ;
      AdvancedFilters(const AdvancedFilters &) = default ;
      AdvancedFilters(AdvancedFilters &&) = default ;
      AdvancedFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedFilters() = default ;
      AdvancedFilters& operator=(const AdvancedFilters &) = default ;
      AdvancedFilters& operator=(AdvancedFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->opType_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline AdvancedFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // opType Field Functions 
      bool hasOpType() const { return this->opType_ != nullptr;};
      void deleteOpType() { this->opType_ = nullptr;};
      inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
      inline AdvancedFilters& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AdvancedFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the filter condition.
      shared_ptr<string> key_ {};
      // The operator. Valid values: eq and in.
      shared_ptr<string> opType_ {};
      // The value of the filter condition.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->advancedFilters_ == nullptr
        && this->dimensions_ == nullptr && this->endTime_ == nullptr && this->intervalInSec_ == nullptr && this->measures_ == nullptr && this->metric_ == nullptr
        && this->order_ == nullptr && this->orderBy_ == nullptr && this->queryType_ == nullptr && this->startTime_ == nullptr; };
    // advancedFilters Field Functions 
    bool hasAdvancedFilters() const { return this->advancedFilters_ != nullptr;};
    void deleteAdvancedFilters() { this->advancedFilters_ = nullptr;};
    inline const vector<QueryCommercialUsageRequest::AdvancedFilters> & getAdvancedFilters() const { DARABONBA_PTR_GET_CONST(advancedFilters_, vector<QueryCommercialUsageRequest::AdvancedFilters>) };
    inline vector<QueryCommercialUsageRequest::AdvancedFilters> getAdvancedFilters() { DARABONBA_PTR_GET(advancedFilters_, vector<QueryCommercialUsageRequest::AdvancedFilters>) };
    inline QueryCommercialUsageRequest& setAdvancedFilters(const vector<QueryCommercialUsageRequest::AdvancedFilters> & advancedFilters) { DARABONBA_PTR_SET_VALUE(advancedFilters_, advancedFilters) };
    inline QueryCommercialUsageRequest& setAdvancedFilters(vector<QueryCommercialUsageRequest::AdvancedFilters> && advancedFilters) { DARABONBA_PTR_SET_RVALUE(advancedFilters_, advancedFilters) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<string> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<string>) };
    inline vector<string> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<string>) };
    inline QueryCommercialUsageRequest& setDimensions(const vector<string> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline QueryCommercialUsageRequest& setDimensions(vector<string> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryCommercialUsageRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // intervalInSec Field Functions 
    bool hasIntervalInSec() const { return this->intervalInSec_ != nullptr;};
    void deleteIntervalInSec() { this->intervalInSec_ = nullptr;};
    inline int32_t getIntervalInSec() const { DARABONBA_PTR_GET_DEFAULT(intervalInSec_, 0) };
    inline QueryCommercialUsageRequest& setIntervalInSec(int32_t intervalInSec) { DARABONBA_PTR_SET_VALUE(intervalInSec_, intervalInSec) };


    // measures Field Functions 
    bool hasMeasures() const { return this->measures_ != nullptr;};
    void deleteMeasures() { this->measures_ = nullptr;};
    inline const vector<string> & getMeasures() const { DARABONBA_PTR_GET_CONST(measures_, vector<string>) };
    inline vector<string> getMeasures() { DARABONBA_PTR_GET(measures_, vector<string>) };
    inline QueryCommercialUsageRequest& setMeasures(const vector<string> & measures) { DARABONBA_PTR_SET_VALUE(measures_, measures) };
    inline QueryCommercialUsageRequest& setMeasures(vector<string> && measures) { DARABONBA_PTR_SET_RVALUE(measures_, measures) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline QueryCommercialUsageRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline QueryCommercialUsageRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryCommercialUsageRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline QueryCommercialUsageRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryCommercialUsageRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The filter conditions.
    shared_ptr<vector<QueryCommercialUsageRequest::AdvancedFilters>> advancedFilters_ {};
    // The dimensions of the metric that you want to query. Valid values:
    // 
    // *   dataType: data type
    // *   productType: product type
    // *   instanceId: instance ID
    // *   instanceName: instance name
    // *   instanceType: instance type
    shared_ptr<vector<string>> dimensions_ {};
    // The end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The time interval between data slices. Unit: seconds. Minimum value: 3600.
    // 
    // Valid values:
    // 
    // *   3600: 1 hour
    // *   86400: 1 day
    shared_ptr<int32_t> intervalInSec_ {};
    // The measures of the metric that you want to query.
    shared_ptr<vector<string>> measures_ {};
    // The name of the metric. Valid value: USAGEFEE.STAT.
    // 
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // The order in which data is sorted. Valid value:
    // 
    // *   `ASC`: ascending order
    // *   `DESC`: descending order
    shared_ptr<string> order_ {};
    // The dimension by which data is sorted.
    // 
    // Valid value:
    // 
    // *   dataType
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> orderBy_ {};
    // The data type. Valid values:
    // 
    // *   instantQuery: non-time series
    // *   timeSeriesQuery: time series
    // 
    // This parameter is required.
    shared_ptr<string> queryType_ {};
    // The start of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
