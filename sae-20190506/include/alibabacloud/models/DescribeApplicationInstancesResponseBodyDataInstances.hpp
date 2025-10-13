// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONINSTANCESRESPONSEBODYDATAINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONINSTANCESRESPONSEBODYDATAINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationInstancesResponseBodyDataInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationInstancesResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_TO_JSON(Eip, eip_);
      DARABONBA_PTR_TO_JSON(FinishTimeStamp, finishTimeStamp_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceContainerIp, instanceContainerIp_);
      DARABONBA_PTR_TO_JSON(InstanceContainerRestarts, instanceContainerRestarts_);
      DARABONBA_PTR_TO_JSON(InstanceContainerStatus, instanceContainerStatus_);
      DARABONBA_PTR_TO_JSON(InstanceHealthStatus, instanceHealthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MainContainerStatus, mainContainerStatus_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(SidecarContainersStatus, sidecarContainersStatus_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(UnhealthyMessage, unhealthyMessage_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationInstancesResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_FROM_JSON(Eip, eip_);
      DARABONBA_PTR_FROM_JSON(FinishTimeStamp, finishTimeStamp_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceContainerIp, instanceContainerIp_);
      DARABONBA_PTR_FROM_JSON(InstanceContainerRestarts, instanceContainerRestarts_);
      DARABONBA_PTR_FROM_JSON(InstanceContainerStatus, instanceContainerStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceHealthStatus, instanceHealthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MainContainerStatus, mainContainerStatus_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(SidecarContainersStatus, sidecarContainersStatus_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(UnhealthyMessage, unhealthyMessage_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeApplicationInstancesResponseBodyDataInstances() = default ;
    DescribeApplicationInstancesResponseBodyDataInstances(const DescribeApplicationInstancesResponseBodyDataInstances &) = default ;
    DescribeApplicationInstancesResponseBodyDataInstances(DescribeApplicationInstancesResponseBodyDataInstances &&) = default ;
    DescribeApplicationInstancesResponseBodyDataInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationInstancesResponseBodyDataInstances() = default ;
    DescribeApplicationInstancesResponseBodyDataInstances& operator=(const DescribeApplicationInstancesResponseBodyDataInstances &) = default ;
    DescribeApplicationInstancesResponseBodyDataInstances& operator=(DescribeApplicationInstancesResponseBodyDataInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimeStamp_ == nullptr
        && return this->debugStatus_ == nullptr && return this->eip_ == nullptr && return this->finishTimeStamp_ == nullptr && return this->groupId_ == nullptr && return this->imageUrl_ == nullptr
        && return this->instanceContainerIp_ == nullptr && return this->instanceContainerRestarts_ == nullptr && return this->instanceContainerStatus_ == nullptr && return this->instanceHealthStatus_ == nullptr && return this->instanceId_ == nullptr
        && return this->mainContainerStatus_ == nullptr && return this->packageVersion_ == nullptr && return this->sidecarContainersStatus_ == nullptr && return this->timestamp_ == nullptr && return this->unhealthyMessage_ == nullptr
        && return this->vSwitchId_ == nullptr; };
    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // debugStatus Field Functions 
    bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
    void deleteDebugStatus() { this->debugStatus_ = nullptr;};
    inline bool debugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, false) };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setDebugStatus(bool debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


    // eip Field Functions 
    bool hasEip() const { return this->eip_ != nullptr;};
    void deleteEip() { this->eip_ = nullptr;};
    inline string eip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


    // finishTimeStamp Field Functions 
    bool hasFinishTimeStamp() const { return this->finishTimeStamp_ != nullptr;};
    void deleteFinishTimeStamp() { this->finishTimeStamp_ = nullptr;};
    inline int64_t finishTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(finishTimeStamp_, 0L) };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setFinishTimeStamp(int64_t finishTimeStamp) { DARABONBA_PTR_SET_VALUE(finishTimeStamp_, finishTimeStamp) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceContainerIp Field Functions 
    bool hasInstanceContainerIp() const { return this->instanceContainerIp_ != nullptr;};
    void deleteInstanceContainerIp() { this->instanceContainerIp_ = nullptr;};
    inline string instanceContainerIp() const { DARABONBA_PTR_GET_DEFAULT(instanceContainerIp_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setInstanceContainerIp(string instanceContainerIp) { DARABONBA_PTR_SET_VALUE(instanceContainerIp_, instanceContainerIp) };


    // instanceContainerRestarts Field Functions 
    bool hasInstanceContainerRestarts() const { return this->instanceContainerRestarts_ != nullptr;};
    void deleteInstanceContainerRestarts() { this->instanceContainerRestarts_ = nullptr;};
    inline int64_t instanceContainerRestarts() const { DARABONBA_PTR_GET_DEFAULT(instanceContainerRestarts_, 0L) };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setInstanceContainerRestarts(int64_t instanceContainerRestarts) { DARABONBA_PTR_SET_VALUE(instanceContainerRestarts_, instanceContainerRestarts) };


    // instanceContainerStatus Field Functions 
    bool hasInstanceContainerStatus() const { return this->instanceContainerStatus_ != nullptr;};
    void deleteInstanceContainerStatus() { this->instanceContainerStatus_ = nullptr;};
    inline string instanceContainerStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceContainerStatus_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setInstanceContainerStatus(string instanceContainerStatus) { DARABONBA_PTR_SET_VALUE(instanceContainerStatus_, instanceContainerStatus) };


    // instanceHealthStatus Field Functions 
    bool hasInstanceHealthStatus() const { return this->instanceHealthStatus_ != nullptr;};
    void deleteInstanceHealthStatus() { this->instanceHealthStatus_ = nullptr;};
    inline string instanceHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceHealthStatus_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setInstanceHealthStatus(string instanceHealthStatus) { DARABONBA_PTR_SET_VALUE(instanceHealthStatus_, instanceHealthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mainContainerStatus Field Functions 
    bool hasMainContainerStatus() const { return this->mainContainerStatus_ != nullptr;};
    void deleteMainContainerStatus() { this->mainContainerStatus_ = nullptr;};
    inline string mainContainerStatus() const { DARABONBA_PTR_GET_DEFAULT(mainContainerStatus_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setMainContainerStatus(string mainContainerStatus) { DARABONBA_PTR_SET_VALUE(mainContainerStatus_, mainContainerStatus) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // sidecarContainersStatus Field Functions 
    bool hasSidecarContainersStatus() const { return this->sidecarContainersStatus_ != nullptr;};
    void deleteSidecarContainersStatus() { this->sidecarContainersStatus_ = nullptr;};
    inline const vector<Models::DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus> & sidecarContainersStatus() const { DARABONBA_PTR_GET_CONST(sidecarContainersStatus_, vector<Models::DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus>) };
    inline vector<Models::DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus> sidecarContainersStatus() { DARABONBA_PTR_GET(sidecarContainersStatus_, vector<Models::DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus>) };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setSidecarContainersStatus(const vector<Models::DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus> & sidecarContainersStatus) { DARABONBA_PTR_SET_VALUE(sidecarContainersStatus_, sidecarContainersStatus) };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setSidecarContainersStatus(vector<Models::DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus> && sidecarContainersStatus) { DARABONBA_PTR_SET_RVALUE(sidecarContainersStatus_, sidecarContainersStatus) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // unhealthyMessage Field Functions 
    bool hasUnhealthyMessage() const { return this->unhealthyMessage_ != nullptr;};
    void deleteUnhealthyMessage() { this->unhealthyMessage_ = nullptr;};
    inline string unhealthyMessage() const { DARABONBA_PTR_GET_DEFAULT(unhealthyMessage_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setUnhealthyMessage(string unhealthyMessage) { DARABONBA_PTR_SET_VALUE(unhealthyMessage_, unhealthyMessage) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeApplicationInstancesResponseBodyDataInstances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The start time of the instance creation process. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    std::shared_ptr<bool> debugStatus_ = nullptr;
    // The elastic IP address (EIP).
    std::shared_ptr<string> eip_ = nullptr;
    // The end time of the instance creation process. Unit: milliseconds.
    std::shared_ptr<int64_t> finishTimeStamp_ = nullptr;
    // The ID of the group to which the instance belongs.
    std::shared_ptr<string> groupId_ = nullptr;
    // The address of the repository.
    // 
    // >  If you deploy the application by using a JAR or WAR package, the image generated by SAE is not available for download.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The internal IP address of the instance.
    std::shared_ptr<string> instanceContainerIp_ = nullptr;
    // The number of times that the instance restarted.
    std::shared_ptr<int64_t> instanceContainerRestarts_ = nullptr;
    // The state of the instance. Valid values:
    // 
    // *   **Error**: An error occurred during the instance startup.
    // *   **CrashLoopBackOff**: The container failed to start. An error occurred during the startup process and persisted after the restart.
    // *   **ErrImagePull**: An error occurred while the container image was being pulled from the instance.
    // *   **ImagePullBackOff**: The container image could not be obtained.
    // *   **Pending**: The instance is waiting to be scheduled.
    // *   **Unknown**: An unknown exception occurred.
    // *   **Terminating**: The instance creation process is being terminated.
    // *   **NotFound**: The instance cannot be found.
    // *   **PodInitializing**: The instance is being initialized.
    // *   **Init:0/1**: The instance is initialized.
    // *   **Running**: The instance is running.
    std::shared_ptr<string> instanceContainerStatus_ = nullptr;
    // The configurations of health checks. Valid values:
    // 
    // *   **WithoutHealthCheckConfig**: Liveness and readiness checks are not configured.
    // *   **WithoutLivenessConfig**: The liveness check is not configured.
    // *   **WithoutReadinessConfig**: The readiness check is not configured.
    // *   **NotCheckedYet**: The health checks are not performed or are in progress.
    // *   **LivenessUnhealthy**: The instance failed the liveness check.
    // *   **ReadinessUnhealthy**: The instance failed the readiness check.
    // *   **Unhealthy**: The instance failed both liveness and readiness checks.
    // *   **Healthy**: The instance passed both liveness and readiness checks.
    std::shared_ptr<string> instanceHealthStatus_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the main container.
    std::shared_ptr<string> mainContainerStatus_ = nullptr;
    // The version of the package.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The status of the sidecar container.
    std::shared_ptr<vector<Models::DescribeApplicationInstancesResponseBodyDataInstancesSidecarContainersStatus>> sidecarContainersStatus_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // If the health check of an application instance fails, the detailed failure cause or error message is returned. If the health check of an application instance passes, no response is returned.
    std::shared_ptr<string> unhealthyMessage_ = nullptr;
    // The ID of the zone where the instance is deployed.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
