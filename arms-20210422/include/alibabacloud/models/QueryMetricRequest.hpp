// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMETRICREQUEST_HPP_
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
  class QueryMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsistencyDataKey, consistencyDataKey_);
      DARABONBA_PTR_TO_JSON(ConsistencyQueryStrategy, consistencyQueryStrategy_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(IntervalInSec, intervalInSec_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Measures, measures_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsistencyDataKey, consistencyDataKey_);
      DARABONBA_PTR_FROM_JSON(ConsistencyQueryStrategy, consistencyQueryStrategy_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(IntervalInSec, intervalInSec_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Measures, measures_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryMetricRequest() = default ;
    QueryMetricRequest(const QueryMetricRequest &) = default ;
    QueryMetricRequest(QueryMetricRequest &&) = default ;
    QueryMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMetricRequest() = default ;
    QueryMetricRequest& operator=(const QueryMetricRequest &) = default ;
    QueryMetricRequest& operator=(QueryMetricRequest &&) = default ;
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

    virtual bool empty() const override { return this->consistencyDataKey_ == nullptr
        && this->consistencyQueryStrategy_ == nullptr && this->dimensions_ == nullptr && this->endTime_ == nullptr && this->filters_ == nullptr && this->intervalInSec_ == nullptr
        && this->limit_ == nullptr && this->measures_ == nullptr && this->metric_ == nullptr && this->order_ == nullptr && this->orderBy_ == nullptr
        && this->proxyUserId_ == nullptr && this->startTime_ == nullptr; };
    // consistencyDataKey Field Functions 
    bool hasConsistencyDataKey() const { return this->consistencyDataKey_ != nullptr;};
    void deleteConsistencyDataKey() { this->consistencyDataKey_ = nullptr;};
    inline string getConsistencyDataKey() const { DARABONBA_PTR_GET_DEFAULT(consistencyDataKey_, "") };
    inline QueryMetricRequest& setConsistencyDataKey(string consistencyDataKey) { DARABONBA_PTR_SET_VALUE(consistencyDataKey_, consistencyDataKey) };


    // consistencyQueryStrategy Field Functions 
    bool hasConsistencyQueryStrategy() const { return this->consistencyQueryStrategy_ != nullptr;};
    void deleteConsistencyQueryStrategy() { this->consistencyQueryStrategy_ = nullptr;};
    inline string getConsistencyQueryStrategy() const { DARABONBA_PTR_GET_DEFAULT(consistencyQueryStrategy_, "") };
    inline QueryMetricRequest& setConsistencyQueryStrategy(string consistencyQueryStrategy) { DARABONBA_PTR_SET_VALUE(consistencyQueryStrategy_, consistencyQueryStrategy) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<string> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<string>) };
    inline vector<string> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<string>) };
    inline QueryMetricRequest& setDimensions(const vector<string> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline QueryMetricRequest& setDimensions(vector<string> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryMetricRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<QueryMetricRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<QueryMetricRequest::Filters>) };
    inline vector<QueryMetricRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<QueryMetricRequest::Filters>) };
    inline QueryMetricRequest& setFilters(const vector<QueryMetricRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline QueryMetricRequest& setFilters(vector<QueryMetricRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // intervalInSec Field Functions 
    bool hasIntervalInSec() const { return this->intervalInSec_ != nullptr;};
    void deleteIntervalInSec() { this->intervalInSec_ = nullptr;};
    inline int32_t getIntervalInSec() const { DARABONBA_PTR_GET_DEFAULT(intervalInSec_, 0) };
    inline QueryMetricRequest& setIntervalInSec(int32_t intervalInSec) { DARABONBA_PTR_SET_VALUE(intervalInSec_, intervalInSec) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline QueryMetricRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // measures Field Functions 
    bool hasMeasures() const { return this->measures_ != nullptr;};
    void deleteMeasures() { this->measures_ = nullptr;};
    inline const vector<string> & getMeasures() const { DARABONBA_PTR_GET_CONST(measures_, vector<string>) };
    inline vector<string> getMeasures() { DARABONBA_PTR_GET(measures_, vector<string>) };
    inline QueryMetricRequest& setMeasures(const vector<string> & measures) { DARABONBA_PTR_SET_VALUE(measures_, measures) };
    inline QueryMetricRequest& setMeasures(vector<string> && measures) { DARABONBA_PTR_SET_RVALUE(measures_, measures) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline QueryMetricRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline QueryMetricRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryMetricRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline string getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, "") };
    inline QueryMetricRequest& setProxyUserId(string proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryMetricRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> consistencyDataKey_ {};
    shared_ptr<string> consistencyQueryStrategy_ {};
    shared_ptr<vector<string>> dimensions_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<vector<QueryMetricRequest::Filters>> filters_ {};
    shared_ptr<int32_t> intervalInSec_ {};
    shared_ptr<int32_t> limit_ {};
    // This parameter is required.
    shared_ptr<vector<string>> measures_ {};
    // This parameter is required.
    shared_ptr<string> metric_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> proxyUserId_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
