// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterResponseBodyClusterCustomConfiguration.hpp>
#include <alibabacloud/models/GetClusterResponseBodyManager.hpp>
#include <alibabacloud/models/GetClusterResponseBodyMonitorSpec.hpp>
#include <alibabacloud/models/GetClusterResponseBodySchedulerSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_TO_JSON(ClusterCreateTime, clusterCreateTime_);
      DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterModifyTime, clusterModifyTime_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_TO_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_TO_JSON(EhpcVersion, ehpcVersion_);
      DARABONBA_PTR_TO_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_TO_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_TO_JSON(GrowInterval, growInterval_);
      DARABONBA_PTR_TO_JSON(IdleInterval, idleInterval_);
      DARABONBA_PTR_TO_JSON(Manager, manager_);
      DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(MonitorSpec, monitorSpec_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SchedulerSpec, schedulerSpec_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_FROM_JSON(ClusterCreateTime, clusterCreateTime_);
      DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterModifyTime, clusterModifyTime_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_FROM_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_FROM_JSON(EhpcVersion, ehpcVersion_);
      DARABONBA_PTR_FROM_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_FROM_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_FROM_JSON(GrowInterval, growInterval_);
      DARABONBA_PTR_FROM_JSON(IdleInterval, idleInterval_);
      DARABONBA_PTR_FROM_JSON(Manager, manager_);
      DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(MonitorSpec, monitorSpec_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SchedulerSpec, schedulerSpec_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    GetClusterResponseBody() = default ;
    GetClusterResponseBody(const GetClusterResponseBody &) = default ;
    GetClusterResponseBody(GetClusterResponseBody &&) = default ;
    GetClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBody() = default ;
    GetClusterResponseBody& operator=(const GetClusterResponseBody &) = default ;
    GetClusterResponseBody& operator=(GetClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientVersion_ == nullptr
        && return this->clusterCategory_ == nullptr && return this->clusterCreateTime_ == nullptr && return this->clusterCustomConfiguration_ == nullptr && return this->clusterId_ == nullptr && return this->clusterMode_ == nullptr
        && return this->clusterModifyTime_ == nullptr && return this->clusterName_ == nullptr && return this->clusterStatus_ == nullptr && return this->clusterVSwitchId_ == nullptr && return this->clusterVpcId_ == nullptr
        && return this->deleteProtection_ == nullptr && return this->ehpcVersion_ == nullptr && return this->enableScaleIn_ == nullptr && return this->enableScaleOut_ == nullptr && return this->growInterval_ == nullptr
        && return this->idleInterval_ == nullptr && return this->manager_ == nullptr && return this->maxCoreCount_ == nullptr && return this->maxCount_ == nullptr && return this->monitorSpec_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->schedulerSpec_ == nullptr && return this->securityGroupId_ == nullptr; };
    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetClusterResponseBody& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterCategory Field Functions 
    bool hasClusterCategory() const { return this->clusterCategory_ != nullptr;};
    void deleteClusterCategory() { this->clusterCategory_ = nullptr;};
    inline string clusterCategory() const { DARABONBA_PTR_GET_DEFAULT(clusterCategory_, "") };
    inline GetClusterResponseBody& setClusterCategory(string clusterCategory) { DARABONBA_PTR_SET_VALUE(clusterCategory_, clusterCategory) };


    // clusterCreateTime Field Functions 
    bool hasClusterCreateTime() const { return this->clusterCreateTime_ != nullptr;};
    void deleteClusterCreateTime() { this->clusterCreateTime_ = nullptr;};
    inline string clusterCreateTime() const { DARABONBA_PTR_GET_DEFAULT(clusterCreateTime_, "") };
    inline GetClusterResponseBody& setClusterCreateTime(string clusterCreateTime) { DARABONBA_PTR_SET_VALUE(clusterCreateTime_, clusterCreateTime) };


    // clusterCustomConfiguration Field Functions 
    bool hasClusterCustomConfiguration() const { return this->clusterCustomConfiguration_ != nullptr;};
    void deleteClusterCustomConfiguration() { this->clusterCustomConfiguration_ = nullptr;};
    inline const GetClusterResponseBodyClusterCustomConfiguration & clusterCustomConfiguration() const { DARABONBA_PTR_GET_CONST(clusterCustomConfiguration_, GetClusterResponseBodyClusterCustomConfiguration) };
    inline GetClusterResponseBodyClusterCustomConfiguration clusterCustomConfiguration() { DARABONBA_PTR_GET(clusterCustomConfiguration_, GetClusterResponseBodyClusterCustomConfiguration) };
    inline GetClusterResponseBody& setClusterCustomConfiguration(const GetClusterResponseBodyClusterCustomConfiguration & clusterCustomConfiguration) { DARABONBA_PTR_SET_VALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };
    inline GetClusterResponseBody& setClusterCustomConfiguration(GetClusterResponseBodyClusterCustomConfiguration && clusterCustomConfiguration) { DARABONBA_PTR_SET_RVALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline GetClusterResponseBody& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterModifyTime Field Functions 
    bool hasClusterModifyTime() const { return this->clusterModifyTime_ != nullptr;};
    void deleteClusterModifyTime() { this->clusterModifyTime_ = nullptr;};
    inline string clusterModifyTime() const { DARABONBA_PTR_GET_DEFAULT(clusterModifyTime_, "") };
    inline GetClusterResponseBody& setClusterModifyTime(string clusterModifyTime) { DARABONBA_PTR_SET_VALUE(clusterModifyTime_, clusterModifyTime) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetClusterResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline string clusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
    inline GetClusterResponseBody& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // clusterVSwitchId Field Functions 
    bool hasClusterVSwitchId() const { return this->clusterVSwitchId_ != nullptr;};
    void deleteClusterVSwitchId() { this->clusterVSwitchId_ = nullptr;};
    inline string clusterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(clusterVSwitchId_, "") };
    inline GetClusterResponseBody& setClusterVSwitchId(string clusterVSwitchId) { DARABONBA_PTR_SET_VALUE(clusterVSwitchId_, clusterVSwitchId) };


    // clusterVpcId Field Functions 
    bool hasClusterVpcId() const { return this->clusterVpcId_ != nullptr;};
    void deleteClusterVpcId() { this->clusterVpcId_ = nullptr;};
    inline string clusterVpcId() const { DARABONBA_PTR_GET_DEFAULT(clusterVpcId_, "") };
    inline GetClusterResponseBody& setClusterVpcId(string clusterVpcId) { DARABONBA_PTR_SET_VALUE(clusterVpcId_, clusterVpcId) };


    // deleteProtection Field Functions 
    bool hasDeleteProtection() const { return this->deleteProtection_ != nullptr;};
    void deleteDeleteProtection() { this->deleteProtection_ = nullptr;};
    inline string deleteProtection() const { DARABONBA_PTR_GET_DEFAULT(deleteProtection_, "") };
    inline GetClusterResponseBody& setDeleteProtection(string deleteProtection) { DARABONBA_PTR_SET_VALUE(deleteProtection_, deleteProtection) };


    // ehpcVersion Field Functions 
    bool hasEhpcVersion() const { return this->ehpcVersion_ != nullptr;};
    void deleteEhpcVersion() { this->ehpcVersion_ = nullptr;};
    inline string ehpcVersion() const { DARABONBA_PTR_GET_DEFAULT(ehpcVersion_, "") };
    inline GetClusterResponseBody& setEhpcVersion(string ehpcVersion) { DARABONBA_PTR_SET_VALUE(ehpcVersion_, ehpcVersion) };


    // enableScaleIn Field Functions 
    bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
    void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
    inline bool enableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
    inline GetClusterResponseBody& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


    // enableScaleOut Field Functions 
    bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
    void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
    inline bool enableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
    inline GetClusterResponseBody& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


    // growInterval Field Functions 
    bool hasGrowInterval() const { return this->growInterval_ != nullptr;};
    void deleteGrowInterval() { this->growInterval_ = nullptr;};
    inline int32_t growInterval() const { DARABONBA_PTR_GET_DEFAULT(growInterval_, 0) };
    inline GetClusterResponseBody& setGrowInterval(int32_t growInterval) { DARABONBA_PTR_SET_VALUE(growInterval_, growInterval) };


    // idleInterval Field Functions 
    bool hasIdleInterval() const { return this->idleInterval_ != nullptr;};
    void deleteIdleInterval() { this->idleInterval_ = nullptr;};
    inline int32_t idleInterval() const { DARABONBA_PTR_GET_DEFAULT(idleInterval_, 0) };
    inline GetClusterResponseBody& setIdleInterval(int32_t idleInterval) { DARABONBA_PTR_SET_VALUE(idleInterval_, idleInterval) };


    // manager Field Functions 
    bool hasManager() const { return this->manager_ != nullptr;};
    void deleteManager() { this->manager_ = nullptr;};
    inline const GetClusterResponseBodyManager & manager() const { DARABONBA_PTR_GET_CONST(manager_, GetClusterResponseBodyManager) };
    inline GetClusterResponseBodyManager manager() { DARABONBA_PTR_GET(manager_, GetClusterResponseBodyManager) };
    inline GetClusterResponseBody& setManager(const GetClusterResponseBodyManager & manager) { DARABONBA_PTR_SET_VALUE(manager_, manager) };
    inline GetClusterResponseBody& setManager(GetClusterResponseBodyManager && manager) { DARABONBA_PTR_SET_RVALUE(manager_, manager) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline string maxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, "") };
    inline GetClusterResponseBody& setMaxCoreCount(string maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline string maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, "") };
    inline GetClusterResponseBody& setMaxCount(string maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // monitorSpec Field Functions 
    bool hasMonitorSpec() const { return this->monitorSpec_ != nullptr;};
    void deleteMonitorSpec() { this->monitorSpec_ = nullptr;};
    inline const GetClusterResponseBodyMonitorSpec & monitorSpec() const { DARABONBA_PTR_GET_CONST(monitorSpec_, GetClusterResponseBodyMonitorSpec) };
    inline GetClusterResponseBodyMonitorSpec monitorSpec() { DARABONBA_PTR_GET(monitorSpec_, GetClusterResponseBodyMonitorSpec) };
    inline GetClusterResponseBody& setMonitorSpec(const GetClusterResponseBodyMonitorSpec & monitorSpec) { DARABONBA_PTR_SET_VALUE(monitorSpec_, monitorSpec) };
    inline GetClusterResponseBody& setMonitorSpec(GetClusterResponseBodyMonitorSpec && monitorSpec) { DARABONBA_PTR_SET_RVALUE(monitorSpec_, monitorSpec) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetClusterResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // schedulerSpec Field Functions 
    bool hasSchedulerSpec() const { return this->schedulerSpec_ != nullptr;};
    void deleteSchedulerSpec() { this->schedulerSpec_ = nullptr;};
    inline const GetClusterResponseBodySchedulerSpec & schedulerSpec() const { DARABONBA_PTR_GET_CONST(schedulerSpec_, GetClusterResponseBodySchedulerSpec) };
    inline GetClusterResponseBodySchedulerSpec schedulerSpec() { DARABONBA_PTR_GET(schedulerSpec_, GetClusterResponseBodySchedulerSpec) };
    inline GetClusterResponseBody& setSchedulerSpec(const GetClusterResponseBodySchedulerSpec & schedulerSpec) { DARABONBA_PTR_SET_VALUE(schedulerSpec_, schedulerSpec) };
    inline GetClusterResponseBody& setSchedulerSpec(GetClusterResponseBodySchedulerSpec && schedulerSpec) { DARABONBA_PTR_SET_RVALUE(schedulerSpec_, schedulerSpec) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetClusterResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The E-HPC Util version.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The cluster type. Valid values:
    // 
    // *   Standard
    // *   Serverless
    std::shared_ptr<string> clusterCategory_ = nullptr;
    // The time when the cluster was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> clusterCreateTime_ = nullptr;
    // The post-processing script of the cluster.
    std::shared_ptr<GetClusterResponseBodyClusterCustomConfiguration> clusterCustomConfiguration_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The deployment type of the cluster. Valid values:
    // 
    // *   Integrated: The cluster is deployed on a public cloud.
    // *   Hybrid: The cluster is deployed on a hybrid cloud.
    // *   Custom: The cluster is a custom cluster.
    std::shared_ptr<string> clusterMode_ = nullptr;
    // The time when the cluster was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> clusterModifyTime_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The cluster state. Valid values:
    // 
    // *   uninit: The cluster is being installed.
    // *   creating: The cluster is being created.
    // *   initing: The cluster is being initialized.
    // *   running: The cluster is running.
    // *   exception: The cluster has run into an exception.
    // *   raleasing: The cluster is being released.
    // *   stopping: The cluster is being stopped.
    // *   stopped: The cluster is stopped.
    // *   pending: The cluster is waiting to be configured.
    std::shared_ptr<string> clusterStatus_ = nullptr;
    // The ID of the vSwitch used by the cluster.
    std::shared_ptr<string> clusterVSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) used by the cluster.
    std::shared_ptr<string> clusterVpcId_ = nullptr;
    // Indicates whether deletion protection is enabled for the cluster. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> deleteProtection_ = nullptr;
    // The E-HPC version.
    std::shared_ptr<string> ehpcVersion_ = nullptr;
    // Indicates whether automatic scale-in is enabled for the cluster. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableScaleIn_ = nullptr;
    // Indicates whether automatic scale-out is enabled for the cluster. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableScaleOut_ = nullptr;
    // The interval at which the cluster is automatically scaled out.
    std::shared_ptr<int32_t> growInterval_ = nullptr;
    // The idle duration of the compute nodes allowed by the cluster.
    std::shared_ptr<int32_t> idleInterval_ = nullptr;
    // The management node configurations.
    std::shared_ptr<GetClusterResponseBodyManager> manager_ = nullptr;
    // The maximum total number of vCPUs that can be used by all compute nodes managed by the cluster.
    std::shared_ptr<string> maxCoreCount_ = nullptr;
    // The maximum number of compute nodes that the cluster can manage.
    std::shared_ptr<string> maxCount_ = nullptr;
    // The monitoring details of the cluster.
    std::shared_ptr<GetClusterResponseBodyMonitorSpec> monitorSpec_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The scheduler specifications of the cluster.
    std::shared_ptr<GetClusterResponseBodySchedulerSpec> schedulerSpec_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
