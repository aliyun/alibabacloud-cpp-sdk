// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONRESPONSEBODYAPPLICATIONLISTAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONRESPONSEBODYAPPLICATIONLISTAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListApplicationResponseBodyApplicationListApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationResponseBodyApplicationListApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(BuildPackageId, buildPackageId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExtSlbIp, extSlbIp_);
      DARABONBA_PTR_TO_JSON(ExtSlbListenerPort, extSlbListenerPort_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RunningInstanceCount, runningInstanceCount_);
      DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_TO_JSON(SlbListenerPort, slbListenerPort_);
      DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationResponseBodyApplicationListApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(BuildPackageId, buildPackageId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExtSlbIp, extSlbIp_);
      DARABONBA_PTR_FROM_JSON(ExtSlbListenerPort, extSlbListenerPort_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RunningInstanceCount, runningInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_FROM_JSON(SlbListenerPort, slbListenerPort_);
      DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListApplicationResponseBodyApplicationListApplication() = default ;
    ListApplicationResponseBodyApplicationListApplication(const ListApplicationResponseBodyApplicationListApplication &) = default ;
    ListApplicationResponseBodyApplicationListApplication(ListApplicationResponseBodyApplicationListApplication &&) = default ;
    ListApplicationResponseBodyApplicationListApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationResponseBodyApplicationListApplication() = default ;
    ListApplicationResponseBodyApplicationListApplication& operator=(const ListApplicationResponseBodyApplicationListApplication &) = default ;
    ListApplicationResponseBodyApplicationListApplication& operator=(ListApplicationResponseBodyApplicationListApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->applicationType_ == nullptr && return this->buildPackageId_ == nullptr && return this->clusterId_ == nullptr && return this->clusterType_ == nullptr && return this->createTime_ == nullptr
        && return this->extSlbIp_ == nullptr && return this->extSlbListenerPort_ == nullptr && return this->instances_ == nullptr && return this->k8sNamespace_ == nullptr && return this->name_ == nullptr
        && return this->namespaceId_ == nullptr && return this->port_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->runningInstanceCount_ == nullptr
        && return this->slbIp_ == nullptr && return this->slbListenerPort_ == nullptr && return this->slbPort_ == nullptr && return this->state_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // buildPackageId Field Functions 
    bool hasBuildPackageId() const { return this->buildPackageId_ != nullptr;};
    void deleteBuildPackageId() { this->buildPackageId_ = nullptr;};
    inline int64_t buildPackageId() const { DARABONBA_PTR_GET_DEFAULT(buildPackageId_, 0L) };
    inline ListApplicationResponseBodyApplicationListApplication& setBuildPackageId(int64_t buildPackageId) { DARABONBA_PTR_SET_VALUE(buildPackageId_, buildPackageId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline int32_t clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
    inline ListApplicationResponseBodyApplicationListApplication& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListApplicationResponseBodyApplicationListApplication& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extSlbIp Field Functions 
    bool hasExtSlbIp() const { return this->extSlbIp_ != nullptr;};
    void deleteExtSlbIp() { this->extSlbIp_ = nullptr;};
    inline string extSlbIp() const { DARABONBA_PTR_GET_DEFAULT(extSlbIp_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setExtSlbIp(string extSlbIp) { DARABONBA_PTR_SET_VALUE(extSlbIp_, extSlbIp) };


    // extSlbListenerPort Field Functions 
    bool hasExtSlbListenerPort() const { return this->extSlbListenerPort_ != nullptr;};
    void deleteExtSlbListenerPort() { this->extSlbListenerPort_ = nullptr;};
    inline int32_t extSlbListenerPort() const { DARABONBA_PTR_GET_DEFAULT(extSlbListenerPort_, 0) };
    inline ListApplicationResponseBodyApplicationListApplication& setExtSlbListenerPort(int32_t extSlbListenerPort) { DARABONBA_PTR_SET_VALUE(extSlbListenerPort_, extSlbListenerPort) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline int32_t instances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
    inline ListApplicationResponseBodyApplicationListApplication& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // k8sNamespace Field Functions 
    bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
    void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
    inline string k8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListApplicationResponseBodyApplicationListApplication& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runningInstanceCount Field Functions 
    bool hasRunningInstanceCount() const { return this->runningInstanceCount_ != nullptr;};
    void deleteRunningInstanceCount() { this->runningInstanceCount_ = nullptr;};
    inline int32_t runningInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(runningInstanceCount_, 0) };
    inline ListApplicationResponseBodyApplicationListApplication& setRunningInstanceCount(int32_t runningInstanceCount) { DARABONBA_PTR_SET_VALUE(runningInstanceCount_, runningInstanceCount) };


    // slbIp Field Functions 
    bool hasSlbIp() const { return this->slbIp_ != nullptr;};
    void deleteSlbIp() { this->slbIp_ = nullptr;};
    inline string slbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


    // slbListenerPort Field Functions 
    bool hasSlbListenerPort() const { return this->slbListenerPort_ != nullptr;};
    void deleteSlbListenerPort() { this->slbListenerPort_ = nullptr;};
    inline int32_t slbListenerPort() const { DARABONBA_PTR_GET_DEFAULT(slbListenerPort_, 0) };
    inline ListApplicationResponseBodyApplicationListApplication& setSlbListenerPort(int32_t slbListenerPort) { DARABONBA_PTR_SET_VALUE(slbListenerPort_, slbListenerPort) };


    // slbPort Field Functions 
    bool hasSlbPort() const { return this->slbPort_ != nullptr;};
    void deleteSlbPort() { this->slbPort_ = nullptr;};
    inline int32_t slbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, 0) };
    inline ListApplicationResponseBodyApplicationListApplication& setSlbPort(int32_t slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListApplicationResponseBodyApplicationListApplication& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The deployment type of the application. Valid values:
    // 
    // *   War: The application is deployed by using a WAR package.
    // *   FatJar: The application is deployed by using a JAR package.
    // *   Image: The application is deployed by using an image.
    // *   If this parameter is empty, the application is not deployed.
    std::shared_ptr<string> applicationType_ = nullptr;
    // The build package number of Enterprise Distributed Application Service (EDAS) Container.
    std::shared_ptr<int64_t> buildPackageId_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the cluster in which the application is deployed. Valid values:
    // 
    // *   **2**: Elastic Compute Service (ECS) cluster
    // *   **3**: self-managed Kubernetes cluster in EDAS
    // *   **5**: Container Service for Kubernetes (ACK) cluster
    std::shared_ptr<int32_t> clusterType_ = nullptr;
    // The time when the application was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The IP address of the Internet-facing SLB instance.
    std::shared_ptr<string> extSlbIp_ = nullptr;
    // The listener port of the Internet-facing SLB instance.
    std::shared_ptr<int32_t> extSlbListenerPort_ = nullptr;
    // The number of application instances.
    std::shared_ptr<int32_t> instances_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> k8sNamespace_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the microservices namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The service port of the application.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The region ID of the application.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The number of running application instances.
    std::shared_ptr<int32_t> runningInstanceCount_ = nullptr;
    // The IP address of the internal-facing Server Load Balancer (SLB) instance.
    std::shared_ptr<string> slbIp_ = nullptr;
    // The listener port of the internal-facing SLB instance.
    std::shared_ptr<int32_t> slbListenerPort_ = nullptr;
    // The port of the internal-facing SLB instance.
    std::shared_ptr<int32_t> slbPort_ = nullptr;
    // The state of the application. Valid values:
    // 
    // *   RUNNING: The application is running.
    // *   STOPPED: The application is stopped.
    // *   DEPLOYING: The application is being deployed.
    // *   DELETING: The application is being deleted.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
