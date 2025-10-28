// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetApplicationResponseBodyApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppPhase, appPhase_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(BuildPackageId, buildPackageId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Dockerize, dockerize_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EnablePortCheck, enablePortCheck_);
      DARABONBA_PTR_TO_JSON(EnableUrlCheck, enableUrlCheck_);
      DARABONBA_PTR_TO_JSON(ExtSlbId, extSlbId_);
      DARABONBA_PTR_TO_JSON(ExtSlbIp, extSlbIp_);
      DARABONBA_PTR_TO_JSON(ExtSlbName, extSlbName_);
      DARABONBA_PTR_TO_JSON(HaveManageAccess, haveManageAccess_);
      DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RunningInstanceCount, runningInstanceCount_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbInfo, slbInfo_);
      DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_TO_JSON(SlbName, slbName_);
      DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppPhase, appPhase_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(BuildPackageId, buildPackageId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Dockerize, dockerize_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EnablePortCheck, enablePortCheck_);
      DARABONBA_PTR_FROM_JSON(EnableUrlCheck, enableUrlCheck_);
      DARABONBA_PTR_FROM_JSON(ExtSlbId, extSlbId_);
      DARABONBA_PTR_FROM_JSON(ExtSlbIp, extSlbIp_);
      DARABONBA_PTR_FROM_JSON(ExtSlbName, extSlbName_);
      DARABONBA_PTR_FROM_JSON(HaveManageAccess, haveManageAccess_);
      DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RunningInstanceCount, runningInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbInfo, slbInfo_);
      DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
      DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
    };
    GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication(GetApplicationResponseBodyApplication &&) = default ;
    GetApplicationResponseBodyApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication& operator=(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication& operator=(GetApplicationResponseBodyApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appPhase_ == nullptr && return this->applicationType_ == nullptr && return this->buildPackageId_ == nullptr && return this->clusterId_ == nullptr && return this->clusterType_ == nullptr
        && return this->cpu_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->dockerize_ == nullptr && return this->email_ == nullptr
        && return this->enablePortCheck_ == nullptr && return this->enableUrlCheck_ == nullptr && return this->extSlbId_ == nullptr && return this->extSlbIp_ == nullptr && return this->extSlbName_ == nullptr
        && return this->haveManageAccess_ == nullptr && return this->healthCheckUrl_ == nullptr && return this->instanceCount_ == nullptr && return this->memory_ == nullptr && return this->name_ == nullptr
        && return this->nameSpace_ == nullptr && return this->owner_ == nullptr && return this->port_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->runningInstanceCount_ == nullptr && return this->slbId_ == nullptr && return this->slbInfo_ == nullptr && return this->slbIp_ == nullptr && return this->slbName_ == nullptr
        && return this->slbPort_ == nullptr && return this->userId_ == nullptr && return this->workloadType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetApplicationResponseBodyApplication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appPhase Field Functions 
    bool hasAppPhase() const { return this->appPhase_ != nullptr;};
    void deleteAppPhase() { this->appPhase_ = nullptr;};
    inline string appPhase() const { DARABONBA_PTR_GET_DEFAULT(appPhase_, "") };
    inline GetApplicationResponseBodyApplication& setAppPhase(string appPhase) { DARABONBA_PTR_SET_VALUE(appPhase_, appPhase) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // buildPackageId Field Functions 
    bool hasBuildPackageId() const { return this->buildPackageId_ != nullptr;};
    void deleteBuildPackageId() { this->buildPackageId_ = nullptr;};
    inline int64_t buildPackageId() const { DARABONBA_PTR_GET_DEFAULT(buildPackageId_, 0L) };
    inline GetApplicationResponseBodyApplication& setBuildPackageId(int64_t buildPackageId) { DARABONBA_PTR_SET_VALUE(buildPackageId_, buildPackageId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetApplicationResponseBodyApplication& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline GetApplicationResponseBodyApplication& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline GetApplicationResponseBodyApplication& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetApplicationResponseBodyApplication& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationResponseBodyApplication& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dockerize Field Functions 
    bool hasDockerize() const { return this->dockerize_ != nullptr;};
    void deleteDockerize() { this->dockerize_ = nullptr;};
    inline bool dockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
    inline GetApplicationResponseBodyApplication& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetApplicationResponseBodyApplication& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // enablePortCheck Field Functions 
    bool hasEnablePortCheck() const { return this->enablePortCheck_ != nullptr;};
    void deleteEnablePortCheck() { this->enablePortCheck_ = nullptr;};
    inline bool enablePortCheck() const { DARABONBA_PTR_GET_DEFAULT(enablePortCheck_, false) };
    inline GetApplicationResponseBodyApplication& setEnablePortCheck(bool enablePortCheck) { DARABONBA_PTR_SET_VALUE(enablePortCheck_, enablePortCheck) };


    // enableUrlCheck Field Functions 
    bool hasEnableUrlCheck() const { return this->enableUrlCheck_ != nullptr;};
    void deleteEnableUrlCheck() { this->enableUrlCheck_ = nullptr;};
    inline bool enableUrlCheck() const { DARABONBA_PTR_GET_DEFAULT(enableUrlCheck_, false) };
    inline GetApplicationResponseBodyApplication& setEnableUrlCheck(bool enableUrlCheck) { DARABONBA_PTR_SET_VALUE(enableUrlCheck_, enableUrlCheck) };


    // extSlbId Field Functions 
    bool hasExtSlbId() const { return this->extSlbId_ != nullptr;};
    void deleteExtSlbId() { this->extSlbId_ = nullptr;};
    inline string extSlbId() const { DARABONBA_PTR_GET_DEFAULT(extSlbId_, "") };
    inline GetApplicationResponseBodyApplication& setExtSlbId(string extSlbId) { DARABONBA_PTR_SET_VALUE(extSlbId_, extSlbId) };


    // extSlbIp Field Functions 
    bool hasExtSlbIp() const { return this->extSlbIp_ != nullptr;};
    void deleteExtSlbIp() { this->extSlbIp_ = nullptr;};
    inline string extSlbIp() const { DARABONBA_PTR_GET_DEFAULT(extSlbIp_, "") };
    inline GetApplicationResponseBodyApplication& setExtSlbIp(string extSlbIp) { DARABONBA_PTR_SET_VALUE(extSlbIp_, extSlbIp) };


    // extSlbName Field Functions 
    bool hasExtSlbName() const { return this->extSlbName_ != nullptr;};
    void deleteExtSlbName() { this->extSlbName_ = nullptr;};
    inline string extSlbName() const { DARABONBA_PTR_GET_DEFAULT(extSlbName_, "") };
    inline GetApplicationResponseBodyApplication& setExtSlbName(string extSlbName) { DARABONBA_PTR_SET_VALUE(extSlbName_, extSlbName) };


    // haveManageAccess Field Functions 
    bool hasHaveManageAccess() const { return this->haveManageAccess_ != nullptr;};
    void deleteHaveManageAccess() { this->haveManageAccess_ = nullptr;};
    inline string haveManageAccess() const { DARABONBA_PTR_GET_DEFAULT(haveManageAccess_, "") };
    inline GetApplicationResponseBodyApplication& setHaveManageAccess(string haveManageAccess) { DARABONBA_PTR_SET_VALUE(haveManageAccess_, haveManageAccess) };


    // healthCheckUrl Field Functions 
    bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
    void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
    inline string healthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
    inline GetApplicationResponseBodyApplication& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline GetApplicationResponseBodyApplication& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline GetApplicationResponseBodyApplication& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetApplicationResponseBodyApplication& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameSpace Field Functions 
    bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
    void deleteNameSpace() { this->nameSpace_ = nullptr;};
    inline string nameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
    inline GetApplicationResponseBodyApplication& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetApplicationResponseBodyApplication& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetApplicationResponseBodyApplication& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetApplicationResponseBodyApplication& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetApplicationResponseBodyApplication& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runningInstanceCount Field Functions 
    bool hasRunningInstanceCount() const { return this->runningInstanceCount_ != nullptr;};
    void deleteRunningInstanceCount() { this->runningInstanceCount_ = nullptr;};
    inline int32_t runningInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(runningInstanceCount_, 0) };
    inline GetApplicationResponseBodyApplication& setRunningInstanceCount(int32_t runningInstanceCount) { DARABONBA_PTR_SET_VALUE(runningInstanceCount_, runningInstanceCount) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline GetApplicationResponseBodyApplication& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbInfo Field Functions 
    bool hasSlbInfo() const { return this->slbInfo_ != nullptr;};
    void deleteSlbInfo() { this->slbInfo_ = nullptr;};
    inline string slbInfo() const { DARABONBA_PTR_GET_DEFAULT(slbInfo_, "") };
    inline GetApplicationResponseBodyApplication& setSlbInfo(string slbInfo) { DARABONBA_PTR_SET_VALUE(slbInfo_, slbInfo) };


    // slbIp Field Functions 
    bool hasSlbIp() const { return this->slbIp_ != nullptr;};
    void deleteSlbIp() { this->slbIp_ = nullptr;};
    inline string slbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
    inline GetApplicationResponseBodyApplication& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


    // slbName Field Functions 
    bool hasSlbName() const { return this->slbName_ != nullptr;};
    void deleteSlbName() { this->slbName_ = nullptr;};
    inline string slbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
    inline GetApplicationResponseBodyApplication& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


    // slbPort Field Functions 
    bool hasSlbPort() const { return this->slbPort_ != nullptr;};
    void deleteSlbPort() { this->slbPort_ = nullptr;};
    inline int32_t slbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, 0) };
    inline GetApplicationResponseBodyApplication& setSlbPort(int32_t slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetApplicationResponseBodyApplication& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string workloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline GetApplicationResponseBodyApplication& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The current status of the Kubernetes application, which is used to determine whether the application is in a stable state. If the application is in an unstable state, related configuration operations are prohibited. Valid values:
    // 
    // *   ready: The application is in the ready state and can be changed.
    // *   progressive: The application is being changed.
    // *   pending: The application change is blocked.
    // *   failed: The application fails to be changed.
    // 
    // In these states, ready is a stable state and other states are unstable.
    std::shared_ptr<string> appPhase_ = nullptr;
    // The deployment type of the application. Valid values:
    // 
    // *   War: The application is deployed by using a WAR package.
    // *   FatJar: The application is deployed by using a JAR package.
    // *   Empty: The application is not deployed.
    std::shared_ptr<string> applicationType_ = nullptr;
    // The build package number of Enterprise Distributed Application Service (EDAS) Container.
    std::shared_ptr<int64_t> buildPackageId_ = nullptr;
    // The ID of the ECS cluster in which the application is deployed.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   0: regular Docker cluster
    // *   1: Swarm cluster
    // *   2: ECS cluster
    // *   3: Kubernetes cluster
    // *   4: cluster in which Pandora automatically registers applications
    std::shared_ptr<string> clusterType_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the application was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the application is a Docker application. Valid values:
    // 
    // *   false: The application is not a Docker application.
    // *   true: The application is a Docker application.
    std::shared_ptr<bool> dockerize_ = nullptr;
    // The email address of the account.
    std::shared_ptr<string> email_ = nullptr;
    // Indicates whether the port health check is enabled. Valid values:
    // 
    // *   true: The port health check is enabled.
    // *   false: The port health check is disabled.
    // 
    // If the port health check is enabled, EDAS checks whether a port exists during application startup. If the port exists, the application is considered to have started.
    std::shared_ptr<bool> enablePortCheck_ = nullptr;
    // Indicates whether the URL health check is enabled. Valid values:
    // 
    // *   true: The URL health check is enabled.
    // *   false: The URL health check is disabled.
    // 
    // If the URL health check is enabled, EDAS attempts to detect the specified URL during application startup. If EDAS detects the specified URL, the application is considered to have started.
    std::shared_ptr<bool> enableUrlCheck_ = nullptr;
    // The ID of the Internet-facing SLB instance that is bound to the application.
    std::shared_ptr<string> extSlbId_ = nullptr;
    // The IP address of the Internet-facing Server Load Balancer (SLB) instance that is bound to the application.
    std::shared_ptr<string> extSlbIp_ = nullptr;
    // The name of the Internet-facing SLB instance that is bound to the application.
    std::shared_ptr<string> extSlbName_ = nullptr;
    std::shared_ptr<string> haveManageAccess_ = nullptr;
    // The health check URL of the application.
    std::shared_ptr<string> healthCheckUrl_ = nullptr;
    // The number of instances deployed with the application.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The memory size of the application instance. Unit: MB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace to which the application belongs.
    std::shared_ptr<string> nameSpace_ = nullptr;
    // The ID of the user who created the application.
    std::shared_ptr<string> owner_ = nullptr;
    // The service port of the application.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the region in which the application is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The number of running instances for the application.
    std::shared_ptr<int32_t> runningInstanceCount_ = nullptr;
    // The ID of the internal-facing SLB instance that is bound to the application.
    std::shared_ptr<string> slbId_ = nullptr;
    // The information about the internal-facing SLB instance that is bound to the application.
    std::shared_ptr<string> slbInfo_ = nullptr;
    // The IP address of the internal-facing SLB instance that is bound to the application.
    std::shared_ptr<string> slbIp_ = nullptr;
    // The name of the internal-facing SLB instance that is bound to the application.
    std::shared_ptr<string> slbName_ = nullptr;
    // The port of the internal-facing SLB instance that is bound to the application.
    std::shared_ptr<int32_t> slbPort_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workloadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
