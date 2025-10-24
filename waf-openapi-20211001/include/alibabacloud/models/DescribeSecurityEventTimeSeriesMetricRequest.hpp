// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityEventTimeSeriesMetricRequestFilter.hpp>
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
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->instanceId_ == nullptr && return this->metric_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const DescribeSecurityEventTimeSeriesMetricRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, DescribeSecurityEventTimeSeriesMetricRequestFilter) };
    inline DescribeSecurityEventTimeSeriesMetricRequestFilter filter() { DARABONBA_PTR_GET(filter_, DescribeSecurityEventTimeSeriesMetricRequestFilter) };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setFilter(const DescribeSecurityEventTimeSeriesMetricRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setFilter(DescribeSecurityEventTimeSeriesMetricRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSecurityEventTimeSeriesMetricRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. Multiple conditions are evaluated by using a logical AND.
    // 
    // This parameter is required.
    std::shared_ptr<DescribeSecurityEventTimeSeriesMetricRequestFilter> filter_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The metric whose time series data you want to return. The following metrics are supported:
    // 
    // *   mitigated_requests: The system returns the time series data of requests that are blocked.
    // *   monitored_requests: The system returns the time series data of requests that match Monitor protection rules.
    // *   mitigated_requests_group_by_defense_scene: The system returns the number of requests that match each protection module. The returned results are grouped by protection module and can be used to generate time series charts. A request can match multiple protection modules. Therefore, the total number of matched requests is inconsistent with the total number of requests.
    // *   mitigated_requests_group_by_block_defense_scene: The system returns the number of requests that are blocked by each protection module. The returned results are grouped by protection module and can be used to generate time series charts. A request can be blocked by only one protection module. Therefore, the total number of blocked requests is consistent with the total number of requests.
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
