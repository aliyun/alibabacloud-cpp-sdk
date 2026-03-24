// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTopNMetricShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTopNMetricShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTopNMetricShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeNetworkFlowTopNMetricShrinkRequest() = default ;
    DescribeNetworkFlowTopNMetricShrinkRequest(const DescribeNetworkFlowTopNMetricShrinkRequest &) = default ;
    DescribeNetworkFlowTopNMetricShrinkRequest(DescribeNetworkFlowTopNMetricShrinkRequest &&) = default ;
    DescribeNetworkFlowTopNMetricShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTopNMetricShrinkRequest() = default ;
    DescribeNetworkFlowTopNMetricShrinkRequest& operator=(const DescribeNetworkFlowTopNMetricShrinkRequest &) = default ;
    DescribeNetworkFlowTopNMetricShrinkRequest& operator=(DescribeNetworkFlowTopNMetricShrinkRequest &&) = default ;
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
    inline DescribeNetworkFlowTopNMetricShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkFlowTopNMetricShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline DescribeNetworkFlowTopNMetricShrinkRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeNetworkFlowTopNMetricShrinkRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNetworkFlowTopNMetricShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeNetworkFlowTopNMetricShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. If you specify multiple filter conditions, all conditions must be met (logical AND).
    // 
    // This parameter is required.
    shared_ptr<string> filterShrink_ {};
    // The ID of the WAF instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The maximum number of entries to return. Results are sorted in descending order. Maximum value: 10.
    // 
    // This parameter is required.
    shared_ptr<int64_t> limit_ {};
    // The metric by which to query and rank data. Valid values:
    // 
    // - real_client_ip: Returns the top N source IP addresses of requests that are sent to WAF. The data is aggregated by source IP address and sorted in descending order.
    // 
    // - http_user_agent: Returns the top N user agents of requests that are sent to WAF. The data is aggregated by user agent and sorted in descending order.
    // 
    // - request_path: Returns the top N request URLs. The data is aggregated by URL and sorted in descending order.
    // 
    // - matched_host_by_total_requests: Returns the top N protected objects by total number of requests received.
    // 
    // - matched_host_by_qps: Returns the top N protected objects by queries per second (QPS).
    // 
    // - matched_host_by_status: Returns the top N protected objects based on a specific WAF-returned HTTP status code. The data is aggregated by protected object and sorted in descending order. If you set Metric to this value, you must specify the status field in the Conditions parameter of Filter. The format is as follows:<br> {"Key":"status","OpValue":"eq","Values":"200"}<br>
    // 
    // - matched_host_by_upstream_status: Returns the top N protected objects based on a specific origin server-returned HTTP status code. The data is aggregated by protected object and sorted in descending order. If you set Metric to this value, you must specify the upstream_status field in the Conditions parameter of Filter. The format is as follows:<br> {"Key":"upstream_status","OpValue":"eq","Values":"200"}<br>
    // 
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // The region in which the WAF instance resides. Valid values:
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
