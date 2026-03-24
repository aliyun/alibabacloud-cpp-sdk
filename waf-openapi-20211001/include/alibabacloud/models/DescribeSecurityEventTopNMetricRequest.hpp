// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICREQUEST_HPP_
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
  class DescribeSecurityEventTopNMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeSecurityEventTopNMetricRequest() = default ;
    DescribeSecurityEventTopNMetricRequest(const DescribeSecurityEventTopNMetricRequest &) = default ;
    DescribeSecurityEventTopNMetricRequest(DescribeSecurityEventTopNMetricRequest &&) = default ;
    DescribeSecurityEventTopNMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricRequest() = default ;
    DescribeSecurityEventTopNMetricRequest& operator=(const DescribeSecurityEventTopNMetricRequest &) = default ;
    DescribeSecurityEventTopNMetricRequest& operator=(DescribeSecurityEventTopNMetricRequest &&) = default ;
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
        // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
        // 
        // This parameter is required.
        shared_ptr<int64_t> endDate_ {};
        // The start of the time range to query. The value is a UNIX timestamp. Unit: seconds. You can query data within the last 30 days.
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
        // The field to filter by. This operation supports all fields.
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
      // A list of filter conditions. Each object in the array represents a filter condition.
      shared_ptr<vector<Filter::Conditions>> conditions_ {};
      // The time range to query.
      // 
      // This parameter is required.
      shared_ptr<Filter::DateRange> dateRange_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->instanceId_ == nullptr && this->limit_ == nullptr && this->metric_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const DescribeSecurityEventTopNMetricRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, DescribeSecurityEventTopNMetricRequest::Filter) };
    inline DescribeSecurityEventTopNMetricRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, DescribeSecurityEventTopNMetricRequest::Filter) };
    inline DescribeSecurityEventTopNMetricRequest& setFilter(const DescribeSecurityEventTopNMetricRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeSecurityEventTopNMetricRequest& setFilter(DescribeSecurityEventTopNMetricRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventTopNMetricRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline DescribeSecurityEventTopNMetricRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeSecurityEventTopNMetricRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityEventTopNMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSecurityEventTopNMetricRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. A logical AND operator is used between multiple filter conditions.
    // 
    // This parameter is required.
    shared_ptr<DescribeSecurityEventTopNMetricRequest::Filter> filter_ {};
    // The ID of the WAF instance.
    // 
    // > Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The maximum number of entries to return. The entries are sorted in descending order. Maximum value: 10.
    // 
    // This parameter is required.
    shared_ptr<int64_t> limit_ {};
    // Specifies the content of the returned data. Different metrics correspond to different data content. This operation supports the following metrics:
    // 
    // > For the definition of an attack request, see the Description section of this topic. The following descriptions use this definition.
    // 
    // - real_client_ip: Aggregates the source IP addresses of attack requests, sorts them in descending order, and returns the top N results.
    // 
    // - http_user_agent: Aggregates the User-Agent headers of attack requests, sorts them in descending order, and returns the top N results.
    // 
    // - matched_host: Aggregates the protected objects that are hit by attack requests, sorts them in descending order, and returns the top N results.
    // 
    // - remote_region_id: Aggregates the countries of origin for the source IP addresses of attack requests, sorts them in descending order, and returns the top N results.
    // 
    // - request_path: Aggregates the URLs of attack requests, excluding query strings, sorts them in descending order, and returns the top N results.
    // 
    // - block_defense_scene: Aggregates the final protection modules that handled blocked requests, sorts them in descending order, and returns the top N results. Blocked requests are requests whose action is not Monitor.
    // 
    // - defense_scene: Aggregates all protection modules that are hit by attack requests, sorts them in descending order, and returns the top N results.
    // 
    // - defense_scene_rule_id: Queries the top rule IDs of hit rules that are not in Monitor mode and their corresponding protection modules. This query returns statistics only for rules that are not in Monitor mode. The data is returned in the following format:<br>
    //   `{ "Attribute": "waf_base", "Value": 140, "Name": "111034" }`<br>
    // 
    // - defense_scene_with_rule_id: Returns the top N rule IDs based on the number of hits and their corresponding protection modules. The rule ID and module are connected by a hyphen (-). This query includes rules in both Monitor and Block modes. The data is returned in the following format:<br>
    //   `{ "Attribute": "", "Value": 1, "Name": "120075-waf_base" }`<br>
    // 
    // - defense_scene_top_rule_id: Queries the top rules that are hit in a specific protection module. Specify a filter condition in the Conditions field of the Filter parameter. For example, to query the top rules that are hit in the custom access control list (ACL) module, set the Conditions field as follows:<br>
    //   `{ "Key": "defense_scene_map", "OpValue": "contain", "Values": "custom_acl" }`<br>
    // 
    // - defense_scene_rule_type: Queries the top rule types that are hit in the core web protection module. Only the core web protection module supports this query because it is the only module that has rule subtypes. Specify a filter condition in the Conditions field of the Filter parameter as follows:<br>
    //   `{ "Key": "defense_scene", "OpValue": "eq", "Values": "waf_base" }`<br>
    // 
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
