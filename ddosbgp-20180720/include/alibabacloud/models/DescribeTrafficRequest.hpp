// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeTrafficRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FlowType, flowType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Ipnet, ipnet_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Ipnet, ipnet_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeTrafficRequest() = default ;
    DescribeTrafficRequest(const DescribeTrafficRequest &) = default ;
    DescribeTrafficRequest(DescribeTrafficRequest &&) = default ;
    DescribeTrafficRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficRequest() = default ;
    DescribeTrafficRequest& operator=(const DescribeTrafficRequest &) = default ;
    DescribeTrafficRequest& operator=(DescribeTrafficRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->flowType_ == nullptr && this->instanceId_ == nullptr && this->interval_ == nullptr && this->ip_ == nullptr && this->ipnet_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline DescribeTrafficRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline DescribeTrafficRequest& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTrafficRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeTrafficRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeTrafficRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipnet Field Functions 
    bool hasIpnet() const { return this->ipnet_ != nullptr;};
    void deleteIpnet() { this->ipnet_ = nullptr;};
    inline string getIpnet() const { DARABONBA_PTR_GET_DEFAULT(ipnet_, "") };
    inline DescribeTrafficRequest& setIpnet(string ipnet) { DARABONBA_PTR_SET_VALUE(ipnet_, ipnet) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTrafficRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeTrafficRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline DescribeTrafficRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the query. Specify a UNIX timestamp. Unit: seconds.
    // 
    // If you do not set this parameter, the current time is used as the end time.
    shared_ptr<int32_t> endTime_ {};
    // The type of traffic statistics to query. Valid values:
    // 
    // - **max**: the peak traffic within the statistical interval.
    // - **avg**: the average traffic within the statistical interval.
    shared_ptr<string> flowType_ {};
    // The ID of the Anti-DDoS Origin instance to query.
    // 
    // > You can call [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) to query the IDs of all Anti-DDoS Origin instances.
    // 
    // 
    // If the instance specified here is used for traffic diversion, you must set the **Interval** request parameter.
    shared_ptr<string> instanceId_ {};
    // The time interval for traffic statistics. Unit: seconds. This parameter specifies the length of each interval for which traffic data is aggregated. Default value: **5**.
    shared_ptr<int32_t> interval_ {};
    // The assets that are assigned public IP addresses to query. If you do not specify this parameter in Settings, the traffic statistics of all assets that are assigned public IP addresses protected by the Anti-DDoS Origin instance are queried.
    // 
    // > The assets that are assigned public IP addresses must have been added as protected objects of the Anti-DDoS Origin instance. You can invoke [DescribePackIpList](https://help.aliyun.com/document_detail/118701.html) to query all protected objects of the Anti-DDoS Origin instance.
    shared_ptr<string> ip_ {};
    // The CIDR block used for traffic diversion to query.
    shared_ptr<string> ipnet_ {};
    // The region ID of the Anti-DDoS Origin instance.
    // 
    // > You can call [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) to query all region IDs supported by Anti-DDoS Origin.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the Anti-DDoS Origin instance belongs in Resource Management.
    // 
    // If you do not set this parameter, the default resource group is used.
    shared_ptr<string> resourceGroupId_ {};
    // The start time of the query. Specify a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
