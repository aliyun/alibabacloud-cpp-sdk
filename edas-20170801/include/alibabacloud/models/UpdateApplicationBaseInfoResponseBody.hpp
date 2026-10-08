// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONBASEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONBASEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationBaseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applcation, applcation_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applcation, applcation_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationBaseInfoResponseBody() = default ;
    UpdateApplicationBaseInfoResponseBody(const UpdateApplicationBaseInfoResponseBody &) = default ;
    UpdateApplicationBaseInfoResponseBody(UpdateApplicationBaseInfoResponseBody &&) = default ;
    UpdateApplicationBaseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationBaseInfoResponseBody() = default ;
    UpdateApplicationBaseInfoResponseBody& operator=(const UpdateApplicationBaseInfoResponseBody &) = default ;
    UpdateApplicationBaseInfoResponseBody& operator=(UpdateApplicationBaseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applcation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applcation& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
        DARABONBA_PTR_TO_JSON(BuildPackageId, buildPackageId_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Dockerize, dockerize_);
        DARABONBA_PTR_TO_JSON(ExtSlbId, extSlbId_);
        DARABONBA_PTR_TO_JSON(ExtSlbIp, extSlbIp_);
        DARABONBA_PTR_TO_JSON(ExtSlbName, extSlbName_);
        DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RunningInstanceCount, runningInstanceCount_);
        DARABONBA_PTR_TO_JSON(SlbId, slbId_);
        DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
        DARABONBA_PTR_TO_JSON(SlbName, slbName_);
        DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Applcation& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
        DARABONBA_PTR_FROM_JSON(BuildPackageId, buildPackageId_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Dockerize, dockerize_);
        DARABONBA_PTR_FROM_JSON(ExtSlbId, extSlbId_);
        DARABONBA_PTR_FROM_JSON(ExtSlbIp, extSlbIp_);
        DARABONBA_PTR_FROM_JSON(ExtSlbName, extSlbName_);
        DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RunningInstanceCount, runningInstanceCount_);
        DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
        DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
        DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
        DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Applcation() = default ;
      Applcation(const Applcation &) = default ;
      Applcation(Applcation &&) = default ;
      Applcation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applcation() = default ;
      Applcation& operator=(const Applcation &) = default ;
      Applcation& operator=(Applcation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->applicationType_ == nullptr && this->buildPackageId_ == nullptr && this->clusterId_ == nullptr && this->clusterType_ == nullptr && this->cpu_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->dockerize_ == nullptr && this->extSlbId_ == nullptr && this->extSlbIp_ == nullptr
        && this->extSlbName_ == nullptr && this->healthCheckUrl_ == nullptr && this->instanceCount_ == nullptr && this->memory_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->runningInstanceCount_ == nullptr && this->slbId_ == nullptr
        && this->slbIp_ == nullptr && this->slbName_ == nullptr && this->slbPort_ == nullptr && this->userId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Applcation& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // applicationType Field Functions 
      bool hasApplicationType() const { return this->applicationType_ != nullptr;};
      void deleteApplicationType() { this->applicationType_ = nullptr;};
      inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
      inline Applcation& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


      // buildPackageId Field Functions 
      bool hasBuildPackageId() const { return this->buildPackageId_ != nullptr;};
      void deleteBuildPackageId() { this->buildPackageId_ = nullptr;};
      inline int64_t getBuildPackageId() const { DARABONBA_PTR_GET_DEFAULT(buildPackageId_, 0L) };
      inline Applcation& setBuildPackageId(int64_t buildPackageId) { DARABONBA_PTR_SET_VALUE(buildPackageId_, buildPackageId) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Applcation& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline int32_t getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
      inline Applcation& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Applcation& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Applcation& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Applcation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dockerize Field Functions 
      bool hasDockerize() const { return this->dockerize_ != nullptr;};
      void deleteDockerize() { this->dockerize_ = nullptr;};
      inline bool getDockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
      inline Applcation& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


      // extSlbId Field Functions 
      bool hasExtSlbId() const { return this->extSlbId_ != nullptr;};
      void deleteExtSlbId() { this->extSlbId_ = nullptr;};
      inline string getExtSlbId() const { DARABONBA_PTR_GET_DEFAULT(extSlbId_, "") };
      inline Applcation& setExtSlbId(string extSlbId) { DARABONBA_PTR_SET_VALUE(extSlbId_, extSlbId) };


      // extSlbIp Field Functions 
      bool hasExtSlbIp() const { return this->extSlbIp_ != nullptr;};
      void deleteExtSlbIp() { this->extSlbIp_ = nullptr;};
      inline string getExtSlbIp() const { DARABONBA_PTR_GET_DEFAULT(extSlbIp_, "") };
      inline Applcation& setExtSlbIp(string extSlbIp) { DARABONBA_PTR_SET_VALUE(extSlbIp_, extSlbIp) };


      // extSlbName Field Functions 
      bool hasExtSlbName() const { return this->extSlbName_ != nullptr;};
      void deleteExtSlbName() { this->extSlbName_ = nullptr;};
      inline string getExtSlbName() const { DARABONBA_PTR_GET_DEFAULT(extSlbName_, "") };
      inline Applcation& setExtSlbName(string extSlbName) { DARABONBA_PTR_SET_VALUE(extSlbName_, extSlbName) };


      // healthCheckUrl Field Functions 
      bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
      void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
      inline string getHealthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
      inline Applcation& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline Applcation& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline Applcation& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Applcation& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Applcation& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Applcation& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Applcation& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // runningInstanceCount Field Functions 
      bool hasRunningInstanceCount() const { return this->runningInstanceCount_ != nullptr;};
      void deleteRunningInstanceCount() { this->runningInstanceCount_ = nullptr;};
      inline int32_t getRunningInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(runningInstanceCount_, 0) };
      inline Applcation& setRunningInstanceCount(int32_t runningInstanceCount) { DARABONBA_PTR_SET_VALUE(runningInstanceCount_, runningInstanceCount) };


      // slbId Field Functions 
      bool hasSlbId() const { return this->slbId_ != nullptr;};
      void deleteSlbId() { this->slbId_ = nullptr;};
      inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
      inline Applcation& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


      // slbIp Field Functions 
      bool hasSlbIp() const { return this->slbIp_ != nullptr;};
      void deleteSlbIp() { this->slbIp_ = nullptr;};
      inline string getSlbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
      inline Applcation& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


      // slbName Field Functions 
      bool hasSlbName() const { return this->slbName_ != nullptr;};
      void deleteSlbName() { this->slbName_ = nullptr;};
      inline string getSlbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
      inline Applcation& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


      // slbPort Field Functions 
      bool hasSlbPort() const { return this->slbPort_ != nullptr;};
      void deleteSlbPort() { this->slbPort_ = nullptr;};
      inline int32_t getSlbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, 0) };
      inline Applcation& setSlbPort(int32_t slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Applcation& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The deployment type of the application. Valid values:
      // 
      // - War: The application is deployed by using a WAR package.
      // 
      // - FatJar: The application is deployed by using a JAR package.
      // 
      // - Image: The application is deployed by using an image.
      // 
      // - If this parameter is empty, the application is not deployed.
      shared_ptr<string> applicationType_ {};
      // The build package number of Enterprise Distributed Application Service (EDAS) Container.
      shared_ptr<int64_t> buildPackageId_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The type of the cluster. Valid values:
      // 
      // - 0: normal Docker cluster
      // 
      // - 1: Swarm cluster
      // 
      // - 2: ECS cluster
      // 
      // - 3: self-managed Kubernetes cluster in EDAS
      // 
      // - 4: cluster in which Pandora automatically registers applications
      // 
      // - 5: Container Service for Kubernetes (ACK) clusters
      shared_ptr<int32_t> clusterType_ {};
      // The number of CPU cores.
      shared_ptr<int32_t> cpu_ {};
      // The time when the application was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // Indicates whether the application is a Docker application.
      shared_ptr<bool> dockerize_ {};
      // The ID of the Internet-facing SLB instance.
      shared_ptr<string> extSlbId_ {};
      // The IP address of the Internet-facing Server Load Balancer (SLB) instance.
      shared_ptr<string> extSlbIp_ {};
      // The name of the Internet-facing SLB instance.
      shared_ptr<string> extSlbName_ {};
      // The health check URL.
      shared_ptr<string> healthCheckUrl_ {};
      // The number of application instances.
      shared_ptr<int32_t> instanceCount_ {};
      // The size of memory configured for an application instance. Unit: MB.
      shared_ptr<int32_t> memory_ {};
      // The name of the application.
      shared_ptr<string> name_ {};
      // The owner of the application.
      shared_ptr<string> owner_ {};
      // The port used by the application.
      shared_ptr<int32_t> port_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The number of running application instances.
      shared_ptr<int32_t> runningInstanceCount_ {};
      // The ID of the internal-facing SLB instance.
      shared_ptr<string> slbId_ {};
      // The IP address of the internal-facing SLB instance.
      shared_ptr<string> slbIp_ {};
      // The name of the internal-facing SLB instance.
      shared_ptr<string> slbName_ {};
      // The port used by the internal-facing SLB instance.
      shared_ptr<int32_t> slbPort_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->applcation_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // applcation Field Functions 
    bool hasApplcation() const { return this->applcation_ != nullptr;};
    void deleteApplcation() { this->applcation_ = nullptr;};
    inline const UpdateApplicationBaseInfoResponseBody::Applcation & getApplcation() const { DARABONBA_PTR_GET_CONST(applcation_, UpdateApplicationBaseInfoResponseBody::Applcation) };
    inline UpdateApplicationBaseInfoResponseBody::Applcation getApplcation() { DARABONBA_PTR_GET(applcation_, UpdateApplicationBaseInfoResponseBody::Applcation) };
    inline UpdateApplicationBaseInfoResponseBody& setApplcation(const UpdateApplicationBaseInfoResponseBody::Applcation & applcation) { DARABONBA_PTR_SET_VALUE(applcation_, applcation) };
    inline UpdateApplicationBaseInfoResponseBody& setApplcation(UpdateApplicationBaseInfoResponseBody::Applcation && applcation) { DARABONBA_PTR_SET_RVALUE(applcation_, applcation) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateApplicationBaseInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateApplicationBaseInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationBaseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The applications that you want to modify.
    shared_ptr<UpdateApplicationBaseInfoResponseBody::Applcation> applcation_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
