// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationResponseBody() = default ;
    GetApplicationResponseBody(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody(GetApplicationResponseBody &&) = default ;
    GetApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBody() = default ;
    GetApplicationResponseBody& operator=(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody& operator=(GetApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Application : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Application& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Application& obj) { 
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
      Application() = default ;
      Application(const Application &) = default ;
      Application(Application &&) = default ;
      Application(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Application() = default ;
      Application& operator=(const Application &) = default ;
      Application& operator=(Application &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appPhase_ == nullptr && this->applicationType_ == nullptr && this->buildPackageId_ == nullptr && this->clusterId_ == nullptr && this->clusterType_ == nullptr
        && this->cpu_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->dockerize_ == nullptr && this->email_ == nullptr
        && this->enablePortCheck_ == nullptr && this->enableUrlCheck_ == nullptr && this->extSlbId_ == nullptr && this->extSlbIp_ == nullptr && this->extSlbName_ == nullptr
        && this->haveManageAccess_ == nullptr && this->healthCheckUrl_ == nullptr && this->instanceCount_ == nullptr && this->memory_ == nullptr && this->name_ == nullptr
        && this->nameSpace_ == nullptr && this->owner_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->runningInstanceCount_ == nullptr && this->slbId_ == nullptr && this->slbInfo_ == nullptr && this->slbIp_ == nullptr && this->slbName_ == nullptr
        && this->slbPort_ == nullptr && this->userId_ == nullptr && this->workloadType_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Application& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appPhase Field Functions 
      bool hasAppPhase() const { return this->appPhase_ != nullptr;};
      void deleteAppPhase() { this->appPhase_ = nullptr;};
      inline string getAppPhase() const { DARABONBA_PTR_GET_DEFAULT(appPhase_, "") };
      inline Application& setAppPhase(string appPhase) { DARABONBA_PTR_SET_VALUE(appPhase_, appPhase) };


      // applicationType Field Functions 
      bool hasApplicationType() const { return this->applicationType_ != nullptr;};
      void deleteApplicationType() { this->applicationType_ = nullptr;};
      inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
      inline Application& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


      // buildPackageId Field Functions 
      bool hasBuildPackageId() const { return this->buildPackageId_ != nullptr;};
      void deleteBuildPackageId() { this->buildPackageId_ = nullptr;};
      inline int64_t getBuildPackageId() const { DARABONBA_PTR_GET_DEFAULT(buildPackageId_, 0L) };
      inline Application& setBuildPackageId(int64_t buildPackageId) { DARABONBA_PTR_SET_VALUE(buildPackageId_, buildPackageId) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Application& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Application& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Application& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Application& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Application& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dockerize Field Functions 
      bool hasDockerize() const { return this->dockerize_ != nullptr;};
      void deleteDockerize() { this->dockerize_ = nullptr;};
      inline bool getDockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
      inline Application& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Application& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // enablePortCheck Field Functions 
      bool hasEnablePortCheck() const { return this->enablePortCheck_ != nullptr;};
      void deleteEnablePortCheck() { this->enablePortCheck_ = nullptr;};
      inline bool getEnablePortCheck() const { DARABONBA_PTR_GET_DEFAULT(enablePortCheck_, false) };
      inline Application& setEnablePortCheck(bool enablePortCheck) { DARABONBA_PTR_SET_VALUE(enablePortCheck_, enablePortCheck) };


      // enableUrlCheck Field Functions 
      bool hasEnableUrlCheck() const { return this->enableUrlCheck_ != nullptr;};
      void deleteEnableUrlCheck() { this->enableUrlCheck_ = nullptr;};
      inline bool getEnableUrlCheck() const { DARABONBA_PTR_GET_DEFAULT(enableUrlCheck_, false) };
      inline Application& setEnableUrlCheck(bool enableUrlCheck) { DARABONBA_PTR_SET_VALUE(enableUrlCheck_, enableUrlCheck) };


      // extSlbId Field Functions 
      bool hasExtSlbId() const { return this->extSlbId_ != nullptr;};
      void deleteExtSlbId() { this->extSlbId_ = nullptr;};
      inline string getExtSlbId() const { DARABONBA_PTR_GET_DEFAULT(extSlbId_, "") };
      inline Application& setExtSlbId(string extSlbId) { DARABONBA_PTR_SET_VALUE(extSlbId_, extSlbId) };


      // extSlbIp Field Functions 
      bool hasExtSlbIp() const { return this->extSlbIp_ != nullptr;};
      void deleteExtSlbIp() { this->extSlbIp_ = nullptr;};
      inline string getExtSlbIp() const { DARABONBA_PTR_GET_DEFAULT(extSlbIp_, "") };
      inline Application& setExtSlbIp(string extSlbIp) { DARABONBA_PTR_SET_VALUE(extSlbIp_, extSlbIp) };


      // extSlbName Field Functions 
      bool hasExtSlbName() const { return this->extSlbName_ != nullptr;};
      void deleteExtSlbName() { this->extSlbName_ = nullptr;};
      inline string getExtSlbName() const { DARABONBA_PTR_GET_DEFAULT(extSlbName_, "") };
      inline Application& setExtSlbName(string extSlbName) { DARABONBA_PTR_SET_VALUE(extSlbName_, extSlbName) };


      // haveManageAccess Field Functions 
      bool hasHaveManageAccess() const { return this->haveManageAccess_ != nullptr;};
      void deleteHaveManageAccess() { this->haveManageAccess_ = nullptr;};
      inline string getHaveManageAccess() const { DARABONBA_PTR_GET_DEFAULT(haveManageAccess_, "") };
      inline Application& setHaveManageAccess(string haveManageAccess) { DARABONBA_PTR_SET_VALUE(haveManageAccess_, haveManageAccess) };


      // healthCheckUrl Field Functions 
      bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
      void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
      inline string getHealthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
      inline Application& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline Application& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline Application& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Application& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameSpace Field Functions 
      bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
      void deleteNameSpace() { this->nameSpace_ = nullptr;};
      inline string getNameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
      inline Application& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Application& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Application& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Application& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Application& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // runningInstanceCount Field Functions 
      bool hasRunningInstanceCount() const { return this->runningInstanceCount_ != nullptr;};
      void deleteRunningInstanceCount() { this->runningInstanceCount_ = nullptr;};
      inline int32_t getRunningInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(runningInstanceCount_, 0) };
      inline Application& setRunningInstanceCount(int32_t runningInstanceCount) { DARABONBA_PTR_SET_VALUE(runningInstanceCount_, runningInstanceCount) };


      // slbId Field Functions 
      bool hasSlbId() const { return this->slbId_ != nullptr;};
      void deleteSlbId() { this->slbId_ = nullptr;};
      inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
      inline Application& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


      // slbInfo Field Functions 
      bool hasSlbInfo() const { return this->slbInfo_ != nullptr;};
      void deleteSlbInfo() { this->slbInfo_ = nullptr;};
      inline string getSlbInfo() const { DARABONBA_PTR_GET_DEFAULT(slbInfo_, "") };
      inline Application& setSlbInfo(string slbInfo) { DARABONBA_PTR_SET_VALUE(slbInfo_, slbInfo) };


      // slbIp Field Functions 
      bool hasSlbIp() const { return this->slbIp_ != nullptr;};
      void deleteSlbIp() { this->slbIp_ = nullptr;};
      inline string getSlbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
      inline Application& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


      // slbName Field Functions 
      bool hasSlbName() const { return this->slbName_ != nullptr;};
      void deleteSlbName() { this->slbName_ = nullptr;};
      inline string getSlbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
      inline Application& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


      // slbPort Field Functions 
      bool hasSlbPort() const { return this->slbPort_ != nullptr;};
      void deleteSlbPort() { this->slbPort_ = nullptr;};
      inline int32_t getSlbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, 0) };
      inline Application& setSlbPort(int32_t slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Application& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workloadType Field Functions 
      bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
      void deleteWorkloadType() { this->workloadType_ = nullptr;};
      inline string getWorkloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
      inline Application& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The current phase of the Kubernetes application. This helps determine if the application is stable. Configuration operations are prohibited when the application is in an unstable state.
      // 
      // - ready: The application is ready and can be changed.
      // 
      // - progressing: The application is being changed.
      // 
      // - pending: The application change is blocked.
      // 
      // - failed: The application change failed.
      // 
      // The ready phase is stable. Other phases are unstable.
      shared_ptr<string> appPhase_ {};
      // The deployment type of the application:
      // 
      // - War: The application is deployed from a WAR package.
      // 
      // - FatJar: The application is deployed from a JAR package.
      // 
      // - Empty: The application is not deployed.
      shared_ptr<string> applicationType_ {};
      // The ID of the container version.
      shared_ptr<int64_t> buildPackageId_ {};
      // The ID of the ECS cluster where the application is deployed.
      shared_ptr<string> clusterId_ {};
      // The type of the application cluster:
      // 
      // - 0: A regular Docker cluster.
      // 
      // - 1: A Swarm cluster.
      // 
      // - 2: An ECS cluster.
      // 
      // - 3: A Kubernetes cluster.
      // 
      // - 4: A Pandora application cluster that supports automatic registration.
      shared_ptr<string> clusterType_ {};
      // The number of CPU cores.
      shared_ptr<int32_t> cpu_ {};
      // The UNIX timestamp when the application was created.
      shared_ptr<int64_t> createTime_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // Indicates whether the application is a Docker application:
      // 
      // - false: The application is not a Docker application.
      // 
      // - true: The application is a Docker application.
      shared_ptr<bool> dockerize_ {};
      // The email address.
      shared_ptr<string> email_ {};
      // Indicates whether the port health check is enabled:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // If enabled, EDAS checks if the port is in use during application startup. If the port is in use, the application is considered started.
      shared_ptr<bool> enablePortCheck_ {};
      // Indicates whether the URL health check is enabled:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // If enabled, EDAS probes the specified URL during application startup. If the URL is accessible, the application is considered started.
      shared_ptr<bool> enableUrlCheck_ {};
      // The ID of the public-facing SLB instance attached to the application.
      shared_ptr<string> extSlbId_ {};
      // The public IP address of the SLB instance attached to the application.
      shared_ptr<string> extSlbIp_ {};
      // The name of the public-facing SLB instance attached to the application.
      shared_ptr<string> extSlbName_ {};
      // Indicates whether the current user has management permissions on the application. This parameter is available only in RAM authentication mode.
      shared_ptr<string> haveManageAccess_ {};
      // The health check URL of the application.
      shared_ptr<string> healthCheckUrl_ {};
      // The number of instances in the application.
      shared_ptr<int32_t> instanceCount_ {};
      // The memory size for the application instance, in MB.
      shared_ptr<int32_t> memory_ {};
      // The name of the application.
      shared_ptr<string> name_ {};
      // The namespace to which the application belongs.
      shared_ptr<string> nameSpace_ {};
      // The creator of the application.
      shared_ptr<string> owner_ {};
      // The service port of the application.
      shared_ptr<int32_t> port_ {};
      // The ID of the region where the application is located.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The number of running application instances.
      shared_ptr<int32_t> runningInstanceCount_ {};
      // The ID of the internal-facing SLB instance attached to the application.
      shared_ptr<string> slbId_ {};
      // Information about the internal-facing SLB instance attached to the application.
      shared_ptr<string> slbInfo_ {};
      // The IP address of the internal-facing SLB instance attached to the application.
      shared_ptr<string> slbIp_ {};
      // The name of the internal-facing SLB instance attached to the application.
      shared_ptr<string> slbName_ {};
      // The port of the internal-facing SLB instance attached to the application.
      shared_ptr<int32_t> slbPort_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> userId_ {};
      // The workload type used to create the application. Supported types are Deployment and StatefulSet. This parameter does not apply to ECS applications.
      shared_ptr<string> workloadType_ {};
    };

    virtual bool empty() const override { return this->application_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const GetApplicationResponseBody::Application & getApplication() const { DARABONBA_PTR_GET_CONST(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody::Application getApplication() { DARABONBA_PTR_GET(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody& setApplication(const GetApplicationResponseBody::Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline GetApplicationResponseBody& setApplication(GetApplicationResponseBody::Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetApplicationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application information.
    shared_ptr<GetApplicationResponseBody::Application> application_ {};
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The additional information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
