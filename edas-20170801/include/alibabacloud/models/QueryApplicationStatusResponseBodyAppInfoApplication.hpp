// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBodyAppInfoApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBodyAppInfoApplication& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(BuildPackageId, buildPackageId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Dockerize, dockerize_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RunningInstanceCount, runningInstanceCount_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBodyAppInfoApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(BuildPackageId, buildPackageId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Dockerize, dockerize_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RunningInstanceCount, runningInstanceCount_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryApplicationStatusResponseBodyAppInfoApplication() = default ;
    QueryApplicationStatusResponseBodyAppInfoApplication(const QueryApplicationStatusResponseBodyAppInfoApplication &) = default ;
    QueryApplicationStatusResponseBodyAppInfoApplication(QueryApplicationStatusResponseBodyAppInfoApplication &&) = default ;
    QueryApplicationStatusResponseBodyAppInfoApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBodyAppInfoApplication() = default ;
    QueryApplicationStatusResponseBodyAppInfoApplication& operator=(const QueryApplicationStatusResponseBodyAppInfoApplication &) = default ;
    QueryApplicationStatusResponseBodyAppInfoApplication& operator=(QueryApplicationStatusResponseBodyAppInfoApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->buildPackageId_ == nullptr && return this->clusterId_ == nullptr && return this->cpu_ == nullptr && return this->createTime_ == nullptr && return this->dockerize_ == nullptr
        && return this->email_ == nullptr && return this->healthCheckUrl_ == nullptr && return this->instanceCount_ == nullptr && return this->launchTime_ == nullptr && return this->memory_ == nullptr
        && return this->name_ == nullptr && return this->owner_ == nullptr && return this->phone_ == nullptr && return this->port_ == nullptr && return this->regionId_ == nullptr
        && return this->runningInstanceCount_ == nullptr && return this->userId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // buildPackageId Field Functions 
    bool hasBuildPackageId() const { return this->buildPackageId_ != nullptr;};
    void deleteBuildPackageId() { this->buildPackageId_ = nullptr;};
    inline int32_t buildPackageId() const { DARABONBA_PTR_GET_DEFAULT(buildPackageId_, 0) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setBuildPackageId(int32_t buildPackageId) { DARABONBA_PTR_SET_VALUE(buildPackageId_, buildPackageId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dockerize Field Functions 
    bool hasDockerize() const { return this->dockerize_ != nullptr;};
    void deleteDockerize() { this->dockerize_ = nullptr;};
    inline bool dockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // healthCheckUrl Field Functions 
    bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
    void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
    inline string healthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline int64_t launchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, 0L) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setLaunchTime(int64_t launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runningInstanceCount Field Functions 
    bool hasRunningInstanceCount() const { return this->runningInstanceCount_ != nullptr;};
    void deleteRunningInstanceCount() { this->runningInstanceCount_ = nullptr;};
    inline int32_t runningInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(runningInstanceCount_, 0) };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setRunningInstanceCount(int32_t runningInstanceCount) { DARABONBA_PTR_SET_VALUE(runningInstanceCount_, runningInstanceCount) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoApplication& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The build package number of Enterprise Distributed Application Service (EDAS) Container.
    std::shared_ptr<int32_t> buildPackageId_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of CPU cores used by the application.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the application was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether the application is a Docker application.
    std::shared_ptr<bool> dockerize_ = nullptr;
    // The email address of the user who created the application.
    std::shared_ptr<string> email_ = nullptr;
    // The health check URL.
    std::shared_ptr<string> healthCheckUrl_ = nullptr;
    // The number of application instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The time when the application was launched. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> launchTime_ = nullptr;
    // The memory size.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the user who created the application.
    std::shared_ptr<string> owner_ = nullptr;
    // The mobile number of the user who created the application.
    std::shared_ptr<string> phone_ = nullptr;
    // The port used by the application.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of application instances that are running.
    std::shared_ptr<int32_t> runningInstanceCount_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
