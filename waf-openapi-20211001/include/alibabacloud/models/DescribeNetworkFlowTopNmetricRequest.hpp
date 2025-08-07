// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkFlowTopNMetricRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTopNMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTopNMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTopNMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeNetworkFlowTopNMetricRequest() = default ;
    DescribeNetworkFlowTopNMetricRequest(const DescribeNetworkFlowTopNMetricRequest &) = default ;
    DescribeNetworkFlowTopNMetricRequest(DescribeNetworkFlowTopNMetricRequest &&) = default ;
    DescribeNetworkFlowTopNMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTopNMetricRequest() = default ;
    DescribeNetworkFlowTopNMetricRequest& operator=(const DescribeNetworkFlowTopNMetricRequest &) = default ;
    DescribeNetworkFlowTopNMetricRequest& operator=(DescribeNetworkFlowTopNMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->instanceId_ != nullptr && this->limit_ != nullptr && this->metric_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const DescribeNetworkFlowTopNMetricRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, DescribeNetworkFlowTopNMetricRequestFilter) };
    inline DescribeNetworkFlowTopNMetricRequestFilter filter() { DARABONBA_PTR_GET(filter_, DescribeNetworkFlowTopNMetricRequestFilter) };
    inline DescribeNetworkFlowTopNMetricRequest& setFilter(const DescribeNetworkFlowTopNMetricRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeNetworkFlowTopNMetricRequest& setFilter(DescribeNetworkFlowTopNMetricRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkFlowTopNMetricRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline DescribeNetworkFlowTopNMetricRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeNetworkFlowTopNMetricRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNetworkFlowTopNMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeNetworkFlowTopNMetricRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // An array of filter conditions. Multiple filter parameters use AND logic.
    // 
    // This parameter is required.
    std::shared_ptr<DescribeNetworkFlowTopNMetricRequestFilter> filter_ = nullptr;
    // The Web Application Firewall (WAF) instance ID.
    // 
    // >  Call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to retrieve the WAF instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Returns up to 10 data entries, sorted in descending order.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> limit_ = nullptr;
    // Specifies the data type to be returned. Valid values:
    // 
    // *   real_client_ip: The top N requests, sorted in descending order by source IP address, aggregated from all the current user\\"s WAF requests.
    // *   request_path: The top N requests, sorted in descending order by user-agent, aggregated from all the current user\\"s WAF requests.
    // *   request_path: The top N requests, sorted in descending order by request URL, aggregated from all the current user\\"s WAF requests.
    // *   matched_host_by_total_requests: The top N protected objects and their request counts for the current user.
    // *   matched_host_by_qps: The top N protected objects and their queries per second (QPS) values.
    // *   matched_host_by_status: When using it, you must specify status in the Conditions field of the Filter parameter. If the HTTP response code returned by WAF matches the status specified in the Conditions, then the top N data is returned, sorted in descending order by protected objects. The format for specifying the status is as follows:\\
    //     {"Key":"status","OpValue":"eq","Values":"200"}
    // *   matched_host_by_upstream_status: When using it, you must specify upstream_status in the Conditions field of the Filter parameter. If the HTTP response code returned by the origin server matches the upstream_status specified, the top N data is returned, sorted in descending order by protected objects. The format for specifying the upstream_status is as follows:\\
    //     {"Key":"upstream_status","OpValue":"eq","Values":"200"}
    // 
    // This parameter is required.
    std::shared_ptr<string> metric_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: The Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
