// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowLogsResponseBodyFlowLogsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeFlowLogsResponseBodyFlowLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogsResponseBodyFlowLogs& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogsResponseBodyFlowLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeFlowLogsResponseBodyFlowLogs() = default ;
    DescribeFlowLogsResponseBodyFlowLogs(const DescribeFlowLogsResponseBodyFlowLogs &) = default ;
    DescribeFlowLogsResponseBodyFlowLogs(DescribeFlowLogsResponseBodyFlowLogs &&) = default ;
    DescribeFlowLogsResponseBodyFlowLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogsResponseBodyFlowLogs() = default ;
    DescribeFlowLogsResponseBodyFlowLogs& operator=(const DescribeFlowLogsResponseBodyFlowLogs &) = default ;
    DescribeFlowLogsResponseBodyFlowLogs& operator=(DescribeFlowLogsResponseBodyFlowLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->ecrId_ == nullptr && return this->flowLogId_ == nullptr && return this->flowLogName_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceType_ == nullptr && return this->interval_ == nullptr && return this->logStoreName_ == nullptr && return this->projectName_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->samplingRate_ == nullptr && return this->slsRegionId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // flowLogId Field Functions 
    bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
    void deleteFlowLogId() { this->flowLogId_ = nullptr;};
    inline string flowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string flowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeFlowLogsResponseBodyFlowLogs& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline string samplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setSamplingRate(string samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string slsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFlowLogsResponseBodyFlowLogs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeFlowLogsResponseBodyFlowLogsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeFlowLogsResponseBodyFlowLogsTags>) };
    inline vector<Models::DescribeFlowLogsResponseBodyFlowLogsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeFlowLogsResponseBodyFlowLogsTags>) };
    inline DescribeFlowLogsResponseBodyFlowLogs& setTags(const vector<Models::DescribeFlowLogsResponseBodyFlowLogsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeFlowLogsResponseBodyFlowLogs& setTags(vector<Models::DescribeFlowLogsResponseBodyFlowLogsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the flow log was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the flow log.
    std::shared_ptr<string> description_ = nullptr;
    // The ECR ID.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The ID of the flow log.
    std::shared_ptr<string> flowLogId_ = nullptr;
    // The name of the flow log.
    std::shared_ptr<string> flowLogName_ = nullptr;
    // The ID of the network instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // - **VBR**: virtual border router (VBR)
    std::shared_ptr<string> instanceType_ = nullptr;
    // The time window for collecting log data. Unit: seconds. Valid values:
    // 
    // - **60**
    // - **600**
    // 
    // Default value: **600**.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The Logstore that stores the captured traffic data.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The name of the project that stores the captured traffic data.
    std::shared_ptr<string> projectName_ = nullptr;
    // The region ID of the flow log.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the ECR belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The sampling proportion. Valid values:
    // 
    // - **1:4096**
    // - **1:2048**
    // - **1:1024**
    // 
    // Default value: **1:4096**.
    std::shared_ptr<string> samplingRate_ = nullptr;
    // The ID of the region where Log Service is deployed.
    std::shared_ptr<string> slsRegionId_ = nullptr;
    // The status of the flow log. Valid values:
    // 
    // *   **Active**
    // 
    // *   **Inactive**
    std::shared_ptr<string> status_ = nullptr;
    // The tag key.
    std::shared_ptr<vector<Models::DescribeFlowLogsResponseBodyFlowLogsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
