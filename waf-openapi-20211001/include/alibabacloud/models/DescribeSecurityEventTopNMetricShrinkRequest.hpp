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
        && return this->instanceId_ == nullptr && return this->limit_ == nullptr && return this->metric_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string filterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSecurityEventTopNMetricShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. Multiple conditions are evaluated by using a logical AND.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterShrink_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of data entries that can be returned. Data entries are sorted in descending order before they are returned. Maximum value: 10.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> limit_ = nullptr;
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
    std::shared_ptr<string> metric_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: The Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
