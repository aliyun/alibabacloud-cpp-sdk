// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTopNMetricShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeSecurityEventTopNMetricShrinkRequest() = default ;
    DescribeSecurityEventTopNMetricShrinkRequest(const DescribeSecurityEventTopNMetricShrinkRequest &) = default ;
    DescribeSecurityEventTopNMetricShrinkRequest(DescribeSecurityEventTopNMetricShrinkRequest &&) = default ;
    DescribeSecurityEventTopNMetricShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricShrinkRequest() = default ;
    DescribeSecurityEventTopNMetricShrinkRequest& operator=(const DescribeSecurityEventTopNMetricShrinkRequest &) = default ;
    DescribeSecurityEventTopNMetricShrinkRequest& operator=(DescribeSecurityEventTopNMetricShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterShrink_ == nullptr
        && this->instanceId_ == nullptr && this->limit_ == nullptr && this->metric_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. A logical AND operator is used between multiple filter conditions.
    // 
    // This parameter is required.
    shared_ptr<string> filterShrink_ {};
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
