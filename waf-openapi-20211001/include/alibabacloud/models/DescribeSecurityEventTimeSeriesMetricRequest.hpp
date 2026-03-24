// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTimeSeriesMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTimeSeriesMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTimeSeriesMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeSecurityEventTimeSeriesMetricRequest() = default ;
    DescribeSecurityEventTimeSeriesMetricRequest(const DescribeSecurityEventTimeSeriesMetricRequest &) = default ;
    DescribeSecurityEventTimeSeriesMetricRequest(DescribeSecurityEventTimeSeriesMetricRequest &&) = default ;
    DescribeSecurityEventTimeSeriesMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTimeSeriesMetricRequest() = default ;
    DescribeSecurityEventTimeSeriesMetricRequest& operator=(const DescribeSecurityEventTimeSeriesMetricRequest &) = default ;
    DescribeSecurityEventTimeSeriesMetricRequest& operator=(DescribeSecurityEventTimeSeriesMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
        DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DateRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DateRange& obj) { 
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        };
        friend void from_json(const Darabonba::Json& j, DateRange& obj) { 
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        };
        DateRange() = default ;
        DateRange(const DateRange &) = default ;
        DateRange(DateRange &&) = default ;
        DateRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DateRange() = default ;
        DateRange& operator=(const DateRange &) = default ;
        DateRange& operator=(DateRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endDate_ == nullptr
        && this->startDate_ == nullptr; };
        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
        inline DateRange& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
        inline DateRange& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      protected:
        // The end time of the query. This is a UNIX timestamp. Unit: seconds.
        // 
        // This parameter is required.
        shared_ptr<int64_t> endDate_ {};
        // You can query data from the last 30 days. The start time of the query. This is a UNIX timestamp. Unit: seconds.
        // 
        // > ## The start time must be within the last 30 days.
        // 
        // This parameter is required.
        shared_ptr<int64_t> startDate_ {};
      };

      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(OpValue, opValue_);
          DARABONBA_ANY_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(OpValue, opValue_);
          DARABONBA_ANY_FROM_JSON(Values, values_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->opValue_ == nullptr && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Conditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // opValue Field Functions 
        bool hasOpValue() const { return this->opValue_ != nullptr;};
        void deleteOpValue() { this->opValue_ = nullptr;};
        inline string getOpValue() const { DARABONBA_PTR_GET_DEFAULT(opValue_, "") };
        inline Conditions& setOpValue(string opValue) { DARABONBA_PTR_SET_VALUE(opValue_, opValue) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline         const Darabonba::Json & getValues() const { DARABONBA_GET(values_) };
        Darabonba::Json & getValues() { DARABONBA_GET(values_) };
        inline Conditions& setValues(const Darabonba::Json & values) { DARABONBA_SET_VALUE(values_, values) };
        inline Conditions& setValues(Darabonba::Json && values) { DARABONBA_SET_RVALUE(values_, values) };


      protected:
        // The name of the field to filter. This operation supports all fields.
        shared_ptr<string> key_ {};
        // The operator.
        shared_ptr<string> opValue_ {};
        // The filter value.
        Darabonba::Json values_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->dateRange_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Filter::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Filter::Conditions>) };
      inline vector<Filter::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Filter::Conditions>) };
      inline Filter& setConditions(const vector<Filter::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Filter& setConditions(vector<Filter::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // dateRange Field Functions 
      bool hasDateRange() const { return this->dateRange_ != nullptr;};
      void deleteDateRange() { this->dateRange_ = nullptr;};
      inline const Filter::DateRange & getDateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Filter::DateRange) };
      inline Filter::DateRange getDateRange() { DARABONBA_PTR_GET(dateRange_, Filter::DateRange) };
      inline Filter& setDateRange(const Filter::DateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
      inline Filter& setDateRange(Filter::DateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


    protected:
      // A list of filter conditions. Each node describes one filter condition.
      shared_ptr<vector<Filter::Conditions>> conditions_ {};
      // The time range to query.
      // 
      // This parameter is required.
      shared_ptr<Filter::DateRange> dateRange_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->instanceId_ == nullptr && this->metric_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const DescribeSecurityEventTimeSeriesMetricRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, DescribeSecurityEventTimeSeriesMetricRequest::Filter) };
    inline DescribeSecurityEventTimeSeriesMetricRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, DescribeSecurityEventTimeSeriesMetricRequest::Filter) };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setFilter(const DescribeSecurityEventTimeSeriesMetricRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setFilter(DescribeSecurityEventTimeSeriesMetricRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. Multiple filter conditions have a logical AND relationship.
    // 
    // This parameter is required.
    shared_ptr<DescribeSecurityEventTimeSeriesMetricRequest::Filter> filter_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // > Call [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies the content of the returned data. Different metrics correspond to different data content. This operation supports the following metrics:
    // 
    // - mitigated_requests: Returns the time series statistics of blocked requests.
    // 
    // - monitored_requests: Returns the time series statistics of requests that hit only observation-type rules.
    // 
    // - mitigated_requests_group_by_defense_scene: Returns data grouped by module. It records a time series graph of the hit count for each module. A single request may hit multiple modules. Therefore, the hit count returned by this metric may not be consistent with the number of requests.
    // 
    // - mitigated_requests_group_by_block_defense_scene: Returns data grouped by module. It records a time series graph of the number of blocked requests for each module. A single request is blocked by only one module. Therefore, the count returned by this metric is consistent with the number of requests.
    // 
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
