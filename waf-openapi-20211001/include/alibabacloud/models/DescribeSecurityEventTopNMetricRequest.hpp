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
        // The end of the time range to query. The value is a Unix timestamp. Unit: seconds.
        // 
        // This parameter is required.
        shared_ptr<int64_t> endDate_ {};
        // The beginning of the time range to query. The value is a Unix timestamp. Unit: seconds.
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
        // The field name. This operation supports all fields. For more information, see the **Supported field names** section below.
        shared_ptr<string> key_ {};
        // The operator. For more information, see the **Supported operators** section below.
        shared_ptr<string> opValue_ {};
        // The field content.
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
      // The filter conditions. Each object describes a filter condition.
      shared_ptr<vector<Filter::Conditions>> conditions_ {};
      // The time range for the query.
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
    // The filter conditions for the query. Multiple conditions are evaluated by using a logical AND.
    // 
    // This parameter is required.
    shared_ptr<DescribeSecurityEventTopNMetricRequest::Filter> filter_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of data entries that can be returned. Data entries are sorted in descending order before they are returned. Maximum value: 10.
    // 
    // This parameter is required.
    shared_ptr<int64_t> limit_ {};
    // The metric whose top N data entries you want to return. The following metrics are supported:
    // 
    // >  For more information about attack requests, see the "Operation description" section of this topic.
    // 
    // *   real_client_ip: The system aggregates the source IP addresses of attack requests to collect statistics, sorts the statistical results in descending order, and returns top N data entries.
    // *   http_user_agent: The system aggregates the User-Agent header field of attack requests to collect statistics, sorts the statistical results in descending order, and returns top N data entries.
    // *   matched_host: The system aggregates the protected objects that are matched by attack requests to collect statistics, sorts the statistical results in descending order, and returns top N data entries.
    // *   remote_region_id: The system aggregates the countries to which the source IP addresses of attack requests belong to collect statistics, sorts the statistical results in descending order, and returns top N data entries.
    // *   request_path: The system aggregates the URLs of attack requests to collect statistics, sorts the statistical results in descending order, and returns top N data entries. The URLs exclude query strings.
    // *   block_defense_scene: The system aggregates the protection modules that block attack requests to collect statistics, sorts the statistical results in descending order, and returns top N data entries. The requests match protection rules whose actions are not set to Monitor.
    // *   defense_scene: The system aggregates the protection modules that are matched by attack requests to collect statistics, sorts the statistical results in descending order, and returns top N data entries.
    // *   defense_scene_rule_id: The system returns the IDs of top N protection rules that are matched by attack requests and also the related protection modules. Only protection rules whose actions are not set to Monitor are counted. The system returns the value in the following format:\\
    //     `{ "Attribute": "waf_base", "Value": 140, "Name": "111034" }`
    // *   defense_scene_with_rule_id: The system returns the IDs of top N protection rules that are matched by attack requests and also the related protection modules. The IDs and protection modules are connected by using hyphens (-). Protection rules whose actions are set to Monitor and Block are counted. The system returns the value in the following format:\\
    //     `{ "Attribute": "", "Value": 1, "Name": "120075-waf_base" }`
    // *   defense_scene_top_rule_id: The system returns top N matched protection rules of a specific protection module. You can specify Conditions in Filter to configure filter conditions. For example, you can use the following condition to query top N matched protection rules of the custom rule module:\\
    //     `{ "Key": "defense_scene_map", "OpValue": "contain", "Values": "custom_acl" }`
    // *   defense_scene_rule_type: The system returns top N matched protection rules of the core web protection module. This metric is supported only by the core web protection module because only this module supports subtypes of protection rules. You must specify Conditions in Filter to configure filter conditions. Example:\\
    //     `{ "Key": "defense_scene", "OpValue": "eq", "Values": "waf_base" }`
    // 
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: The Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
