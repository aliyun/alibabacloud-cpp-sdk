// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEKUBERNETESCLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEKUBERNETESCLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGovernanceKubernetesClusterResponseBodyDataNamespaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGovernanceKubernetesClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceKubernetesClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(K8sVersion, k8sVersion_);
      DARABONBA_PTR_TO_JSON(NamespaceInfos, namespaceInfos_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(PilotStartTime, pilotStartTime_);
      DARABONBA_PTR_TO_JSON(PilotVersion, pilotVersion_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VersionLifeCycle, versionLifeCycle_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceKubernetesClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(K8sVersion, k8sVersion_);
      DARABONBA_PTR_FROM_JSON(NamespaceInfos, namespaceInfos_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(PilotStartTime, pilotStartTime_);
      DARABONBA_PTR_FROM_JSON(PilotVersion, pilotVersion_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VersionLifeCycle, versionLifeCycle_);
    };
    GetGovernanceKubernetesClusterResponseBodyData() = default ;
    GetGovernanceKubernetesClusterResponseBodyData(const GetGovernanceKubernetesClusterResponseBodyData &) = default ;
    GetGovernanceKubernetesClusterResponseBodyData(GetGovernanceKubernetesClusterResponseBodyData &&) = default ;
    GetGovernanceKubernetesClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceKubernetesClusterResponseBodyData() = default ;
    GetGovernanceKubernetesClusterResponseBodyData& operator=(const GetGovernanceKubernetesClusterResponseBodyData &) = default ;
    GetGovernanceKubernetesClusterResponseBodyData& operator=(GetGovernanceKubernetesClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->k8sVersion_ == nullptr && return this->namespaceInfos_ == nullptr && return this->namespaces_ == nullptr && return this->pilotStartTime_ == nullptr
        && return this->pilotVersion_ == nullptr && return this->region_ == nullptr && return this->updateTime_ == nullptr && return this->versionLifeCycle_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // k8sVersion Field Functions 
    bool hasK8sVersion() const { return this->k8sVersion_ != nullptr;};
    void deleteK8sVersion() { this->k8sVersion_ = nullptr;};
    inline string k8sVersion() const { DARABONBA_PTR_GET_DEFAULT(k8sVersion_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setK8sVersion(string k8sVersion) { DARABONBA_PTR_SET_VALUE(k8sVersion_, k8sVersion) };


    // namespaceInfos Field Functions 
    bool hasNamespaceInfos() const { return this->namespaceInfos_ != nullptr;};
    void deleteNamespaceInfos() { this->namespaceInfos_ = nullptr;};
    inline string namespaceInfos() const { DARABONBA_PTR_GET_DEFAULT(namespaceInfos_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setNamespaceInfos(string namespaceInfos) { DARABONBA_PTR_SET_VALUE(namespaceInfos_, namespaceInfos) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<Models::GetGovernanceKubernetesClusterResponseBodyDataNamespaces> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<Models::GetGovernanceKubernetesClusterResponseBodyDataNamespaces>) };
    inline vector<Models::GetGovernanceKubernetesClusterResponseBodyDataNamespaces> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<Models::GetGovernanceKubernetesClusterResponseBodyDataNamespaces>) };
    inline GetGovernanceKubernetesClusterResponseBodyData& setNamespaces(const vector<Models::GetGovernanceKubernetesClusterResponseBodyDataNamespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline GetGovernanceKubernetesClusterResponseBodyData& setNamespaces(vector<Models::GetGovernanceKubernetesClusterResponseBodyDataNamespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // pilotStartTime Field Functions 
    bool hasPilotStartTime() const { return this->pilotStartTime_ != nullptr;};
    void deletePilotStartTime() { this->pilotStartTime_ = nullptr;};
    inline string pilotStartTime() const { DARABONBA_PTR_GET_DEFAULT(pilotStartTime_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setPilotStartTime(string pilotStartTime) { DARABONBA_PTR_SET_VALUE(pilotStartTime_, pilotStartTime) };


    // pilotVersion Field Functions 
    bool hasPilotVersion() const { return this->pilotVersion_ != nullptr;};
    void deletePilotVersion() { this->pilotVersion_ = nullptr;};
    inline string pilotVersion() const { DARABONBA_PTR_GET_DEFAULT(pilotVersion_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setPilotVersion(string pilotVersion) { DARABONBA_PTR_SET_VALUE(pilotVersion_, pilotVersion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versionLifeCycle Field Functions 
    bool hasVersionLifeCycle() const { return this->versionLifeCycle_ != nullptr;};
    void deleteVersionLifeCycle() { this->versionLifeCycle_ = nullptr;};
    inline string versionLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifeCycle_, "") };
    inline GetGovernanceKubernetesClusterResponseBodyData& setVersionLifeCycle(string versionLifeCycle) { DARABONBA_PTR_SET_VALUE(versionLifeCycle_, versionLifeCycle) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The version of Kubernetes.
    std::shared_ptr<string> k8sVersion_ = nullptr;
    // The information of the namespace.
    std::shared_ptr<string> namespaceInfos_ = nullptr;
    // The queried namespaces.
    std::shared_ptr<vector<Models::GetGovernanceKubernetesClusterResponseBodyDataNamespaces>> namespaces_ = nullptr;
    // The time when the pilot component was started.
    std::shared_ptr<string> pilotStartTime_ = nullptr;
    std::shared_ptr<string> pilotVersion_ = nullptr;
    // The ID of the region in which the instance resides. The region is supported by MSE.
    std::shared_ptr<string> region_ = nullptr;
    // The time of the last modification.
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> versionLifeCycle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
