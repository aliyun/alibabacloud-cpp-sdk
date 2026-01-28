// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_METRICQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20181015
{
namespace Models
{
  class MetricQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(HackerUserId, hackerUserId_);
      DARABONBA_PTR_TO_JSON(IintervalInSec, iintervalInSec_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Measures, measures_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, MetricQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(HackerUserId, hackerUserId_);
      DARABONBA_PTR_FROM_JSON(IintervalInSec, iintervalInSec_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Measures, measures_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    MetricQueryRequest() = default ;
    MetricQueryRequest(const MetricQueryRequest &) = default ;
    MetricQueryRequest(MetricQueryRequest &&) = default ;
    MetricQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricQueryRequest() = default ;
    MetricQueryRequest& operator=(const MetricQueryRequest &) = default ;
    MetricQueryRequest& operator=(MetricQueryRequest &&) = default ;
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

    virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->endTime_ == nullptr && this->filters_ == nullptr && this->hackerUserId_ == nullptr && this->iintervalInSec_ == nullptr && this->limit_ == nullptr
        && this->measures_ == nullptr && this->metric_ == nullptr && this->order_ == nullptr && this->orderBy_ == nullptr && this->securityToken_ == nullptr
        && this->startTime_ == nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<string> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<string>) };
    inline vector<string> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<string>) };
    inline MetricQueryRequest& setDimensions(const vector<string> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline MetricQueryRequest& setDimensions(vector<string> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline MetricQueryRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<MetricQueryRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<MetricQueryRequest::Filters>) };
    inline vector<MetricQueryRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<MetricQueryRequest::Filters>) };
    inline MetricQueryRequest& setFilters(const vector<MetricQueryRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline MetricQueryRequest& setFilters(vector<MetricQueryRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // hackerUserId Field Functions 
    bool hasHackerUserId() const { return this->hackerUserId_ != nullptr;};
    void deleteHackerUserId() { this->hackerUserId_ = nullptr;};
    inline string getHackerUserId() const { DARABONBA_PTR_GET_DEFAULT(hackerUserId_, "") };
    inline MetricQueryRequest& setHackerUserId(string hackerUserId) { DARABONBA_PTR_SET_VALUE(hackerUserId_, hackerUserId) };


    // iintervalInSec Field Functions 
    bool hasIintervalInSec() const { return this->iintervalInSec_ != nullptr;};
    void deleteIintervalInSec() { this->iintervalInSec_ = nullptr;};
    inline int32_t getIintervalInSec() const { DARABONBA_PTR_GET_DEFAULT(iintervalInSec_, 0) };
    inline MetricQueryRequest& setIintervalInSec(int32_t iintervalInSec) { DARABONBA_PTR_SET_VALUE(iintervalInSec_, iintervalInSec) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline MetricQueryRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // measures Field Functions 
    bool hasMeasures() const { return this->measures_ != nullptr;};
    void deleteMeasures() { this->measures_ = nullptr;};
    inline const vector<string> & getMeasures() const { DARABONBA_PTR_GET_CONST(measures_, vector<string>) };
    inline vector<string> getMeasures() { DARABONBA_PTR_GET(measures_, vector<string>) };
    inline MetricQueryRequest& setMeasures(const vector<string> & measures) { DARABONBA_PTR_SET_VALUE(measures_, measures) };
    inline MetricQueryRequest& setMeasures(vector<string> && measures) { DARABONBA_PTR_SET_RVALUE(measures_, measures) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline MetricQueryRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline MetricQueryRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline MetricQueryRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline MetricQueryRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline MetricQueryRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<string>> dimensions_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<vector<MetricQueryRequest::Filters>> filters_ {};
    shared_ptr<string> hackerUserId_ {};
    shared_ptr<int32_t> iintervalInSec_ {};
    shared_ptr<int32_t> limit_ {};
    // This parameter is required.
    shared_ptr<vector<string>> measures_ {};
    // This parameter is required.
    shared_ptr<string> metric_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> securityToken_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20181015
#endif
