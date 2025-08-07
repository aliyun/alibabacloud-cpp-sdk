// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTimeSeriesMetricShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTimeSeriesMetricShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTimeSeriesMetricShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeNetworkFlowTimeSeriesMetricShrinkRequest() = default ;
    DescribeNetworkFlowTimeSeriesMetricShrinkRequest(const DescribeNetworkFlowTimeSeriesMetricShrinkRequest &) = default ;
    DescribeNetworkFlowTimeSeriesMetricShrinkRequest(DescribeNetworkFlowTimeSeriesMetricShrinkRequest &&) = default ;
    DescribeNetworkFlowTimeSeriesMetricShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTimeSeriesMetricShrinkRequest() = default ;
    DescribeNetworkFlowTimeSeriesMetricShrinkRequest& operator=(const DescribeNetworkFlowTimeSeriesMetricShrinkRequest &) = default ;
    DescribeNetworkFlowTimeSeriesMetricShrinkRequest& operator=(DescribeNetworkFlowTimeSeriesMetricShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterShrink_ != nullptr
        && this->instanceId_ != nullptr && this->metric_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string filterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricShrinkRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // Specifies filtering conditions. Multiple filter parameters use AND logic.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterShrink_ = nullptr;
    // The Web Application Firewall (WAF) instance ID.
    // > Call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to retrieve the WAF instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies the data type to be returned. Valid values:
    // 
    // *   qps: Returns the queries per second (QPS) processed by WAF. This value is calculated using a peak detection method: QPS is measured every 10 seconds, and the highest value within the specified time range is returned.
    // *   total_requests: Returns the total number of requests processed by WAF.
    // *   top5_status: Returns the top 5 HTTP status codes returned by the WAF to clients, along with their corresponding time series statistics.
    // *   top 5_upstream_status: Returns the top 5 HTTP status codes returned by the origin server to clients, along with their corresponding time series data.
    // 
    // This parameter is required.
    std::shared_ptr<string> metric_ = nullptr;
    // The region ID of WAF instance. Valid values:
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
