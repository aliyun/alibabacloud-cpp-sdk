// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGSFLOWLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGSFLOWLOG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFlowLogsResponseBodyFlowLogsFlowLogTags.hpp>
#include <alibabacloud/models/DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeFlowLogsResponseBodyFlowLogsFlowLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogsResponseBodyFlowLogsFlowLog& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationInterval, aggregationInterval_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowLogDeliverErrorMessage, flowLogDeliverErrorMessage_);
      DARABONBA_PTR_TO_JSON(FlowLogDeliverStatus, flowLogDeliverStatus_);
      DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TrafficPath, trafficPath_);
      DARABONBA_PTR_TO_JSON(TrafficType, trafficType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogsResponseBodyFlowLogsFlowLog& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationInterval, aggregationInterval_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowLogDeliverErrorMessage, flowLogDeliverErrorMessage_);
      DARABONBA_PTR_FROM_JSON(FlowLogDeliverStatus, flowLogDeliverStatus_);
      DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TrafficPath, trafficPath_);
      DARABONBA_PTR_FROM_JSON(TrafficType, trafficType_);
    };
    DescribeFlowLogsResponseBodyFlowLogsFlowLog() = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLog(const DescribeFlowLogsResponseBodyFlowLogsFlowLog &) = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLog(DescribeFlowLogsResponseBodyFlowLogsFlowLog &&) = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogsResponseBodyFlowLogsFlowLog() = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLog& operator=(const DescribeFlowLogsResponseBodyFlowLogsFlowLog &) = default ;
    DescribeFlowLogsResponseBodyFlowLogsFlowLog& operator=(DescribeFlowLogsResponseBodyFlowLogsFlowLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregationInterval_ != nullptr
        && this->businessStatus_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->flowLogDeliverErrorMessage_ != nullptr && this->flowLogDeliverStatus_ != nullptr
        && this->flowLogId_ != nullptr && this->flowLogName_ != nullptr && this->ipVersion_ != nullptr && this->logStoreName_ != nullptr && this->projectName_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->serviceType_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->trafficPath_ != nullptr && this->trafficType_ != nullptr; };
    // aggregationInterval Field Functions 
    bool hasAggregationInterval() const { return this->aggregationInterval_ != nullptr;};
    void deleteAggregationInterval() { this->aggregationInterval_ = nullptr;};
    inline int32_t aggregationInterval() const { DARABONBA_PTR_GET_DEFAULT(aggregationInterval_, 0) };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setAggregationInterval(int32_t aggregationInterval) { DARABONBA_PTR_SET_VALUE(aggregationInterval_, aggregationInterval) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowLogDeliverErrorMessage Field Functions 
    bool hasFlowLogDeliverErrorMessage() const { return this->flowLogDeliverErrorMessage_ != nullptr;};
    void deleteFlowLogDeliverErrorMessage() { this->flowLogDeliverErrorMessage_ = nullptr;};
    inline string flowLogDeliverErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(flowLogDeliverErrorMessage_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setFlowLogDeliverErrorMessage(string flowLogDeliverErrorMessage) { DARABONBA_PTR_SET_VALUE(flowLogDeliverErrorMessage_, flowLogDeliverErrorMessage) };


    // flowLogDeliverStatus Field Functions 
    bool hasFlowLogDeliverStatus() const { return this->flowLogDeliverStatus_ != nullptr;};
    void deleteFlowLogDeliverStatus() { this->flowLogDeliverStatus_ = nullptr;};
    inline string flowLogDeliverStatus() const { DARABONBA_PTR_GET_DEFAULT(flowLogDeliverStatus_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setFlowLogDeliverStatus(string flowLogDeliverStatus) { DARABONBA_PTR_SET_VALUE(flowLogDeliverStatus_, flowLogDeliverStatus) };


    // flowLogId Field Functions 
    bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
    void deleteFlowLogId() { this->flowLogId_ = nullptr;};
    inline string flowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string flowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTags) };
    inline Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTags) };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setTags(const Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setTags(Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trafficPath Field Functions 
    bool hasTrafficPath() const { return this->trafficPath_ != nullptr;};
    void deleteTrafficPath() { this->trafficPath_ = nullptr;};
    inline const Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath & trafficPath() const { DARABONBA_PTR_GET_CONST(trafficPath_, Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath) };
    inline Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath trafficPath() { DARABONBA_PTR_GET(trafficPath_, Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath) };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setTrafficPath(const Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath & trafficPath) { DARABONBA_PTR_SET_VALUE(trafficPath_, trafficPath) };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setTrafficPath(Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath && trafficPath) { DARABONBA_PTR_SET_RVALUE(trafficPath_, trafficPath) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline string trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogsFlowLog& setTrafficType(string trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    // The sampling interval of the flow log. Unit: minutes.
    std::shared_ptr<int32_t> aggregationInterval_ = nullptr;
    // The business status. Values:
    // 
    // - **Normal**: Normal status.
    // - **FinancialLocked**: Locked due to unpaid bills.
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The creation time of the flow log.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the flow log.
    std::shared_ptr<string> description_ = nullptr;
    // When log delivery fails, you can troubleshoot based on the error messages. Possible error messages include:
    // - **UnavaliableTarget**: The Logstore of the Log Service SLS is unavailable and cannot receive logs. It is recommended to check if the corresponding Logstore actually exists and is accessible. 
    // - **ProjectNotExist**: The Project of the Log Service SLS does not exist. It is suggested to delete the original flow log and create a new one pointing to an existing Project. 
    // - **UnknownError**: An internal error has occurred. Please try again later.
    std::shared_ptr<string> flowLogDeliverErrorMessage_ = nullptr;
    // The delivery status of the flow log, with values:
    // - **SUCCESS**: Delivery succeeded. 
    // - **FAILED**: Delivery failed.
    std::shared_ptr<string> flowLogDeliverStatus_ = nullptr;
    // The ID of the flow log.
    std::shared_ptr<string> flowLogId_ = nullptr;
    // The name of the flow log.
    std::shared_ptr<string> flowLogName_ = nullptr;
    // The type of IP address for collecting flow log traffic.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The Logstore where the captured traffic is stored.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The Project that manages the captured traffic.
    std::shared_ptr<string> projectName_ = nullptr;
    // The region ID to which the flow log belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the flow log belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource ID of the traffic captured by the flow log.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type of the traffic captured by the flow log:
    // 
    // - **NetworkInterface**: Elastic network interface.
    // - **VSwitch**: All elastic network interfaces within a VSwitch.
    // - **VPC**: All elastic network interfaces within a VPC.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The hosting type of the cloud service.
    // - It can be empty, indicating that the flow log was created by the user. 
    // - When not empty, the only supported value is: **sls**, indicating that the flow log was created through the Log Service console.
    // > Flow log instances created through the Log Service console can be displayed in the VPC list, but they cannot be modified, started, stopped, or deleted within the VPC. If you need to perform these operations on the flow log, you can log in to the [Log Service console](https://sls.console.aliyun.com) to modify, start, stop, or delete it.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The status of the flow log. Values:
    // - **Active**: The flow log is in an active state.
    // 
    // - **Activating**: The flow log is being created.
    // 
    // - **Inactive**: The flow log is in an inactive state.
    std::shared_ptr<string> status_ = nullptr;
    // List of tags
    std::shared_ptr<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTags> tags_ = nullptr;
    // The path of the captured traffic. Values:
    // 
    // - **all**: Indicates full collection.
    // - **internetGateway**: Indicates public network traffic collection.
    std::shared_ptr<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLogTrafficPath> trafficPath_ = nullptr;
    // The type of traffic captured by the flow log. Values:
    // 
    // - **All**: All traffic.
    // - **Allow**: Traffic allowed by access control.
    // - **Drop**: Traffic denied by access control.
    std::shared_ptr<string> trafficType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
