// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClustersResponseBodyClustersAdditionalPackages.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersAddons.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersClusterCustomConfiguration.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersManager.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersNodes.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_TO_JSON(ClusterCreateTime, clusterCreateTime_);
      DARABONBA_PTR_TO_JSON(ClusterCredentials, clusterCredentials_);
      DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterModifyTime, clusterModifyTime_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(ClusterUsedCoreTime, clusterUsedCoreTime_);
      DARABONBA_PTR_TO_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(EhpcVersion, ehpcVersion_);
      DARABONBA_PTR_TO_JSON(Manager, manager_);
      DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_FROM_JSON(ClusterCreateTime, clusterCreateTime_);
      DARABONBA_PTR_FROM_JSON(ClusterCredentials, clusterCredentials_);
      DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterModifyTime, clusterModifyTime_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterUsedCoreTime, clusterUsedCoreTime_);
      DARABONBA_PTR_FROM_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(EhpcVersion, ehpcVersion_);
      DARABONBA_PTR_FROM_JSON(Manager, manager_);
      DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListClustersResponseBodyClusters() = default ;
    ListClustersResponseBodyClusters(const ListClustersResponseBodyClusters &) = default ;
    ListClustersResponseBodyClusters(ListClustersResponseBodyClusters &&) = default ;
    ListClustersResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClusters() = default ;
    ListClustersResponseBodyClusters& operator=(const ListClustersResponseBodyClusters &) = default ;
    ListClustersResponseBodyClusters& operator=(ListClustersResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPackages_ == nullptr
        && return this->addons_ == nullptr && return this->clusterCategory_ == nullptr && return this->clusterCreateTime_ == nullptr && return this->clusterCredentials_ == nullptr && return this->clusterCustomConfiguration_ == nullptr
        && return this->clusterDescription_ == nullptr && return this->clusterId_ == nullptr && return this->clusterMode_ == nullptr && return this->clusterModifyTime_ == nullptr && return this->clusterName_ == nullptr
        && return this->clusterStatus_ == nullptr && return this->clusterUsedCoreTime_ == nullptr && return this->clusterVSwitchId_ == nullptr && return this->clusterVpcId_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->ehpcVersion_ == nullptr && return this->manager_ == nullptr && return this->maxCoreCount_ == nullptr && return this->maxCount_ == nullptr && return this->nodes_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr && return this->users_ == nullptr; };
    // additionalPackages Field Functions 
    bool hasAdditionalPackages() const { return this->additionalPackages_ != nullptr;};
    void deleteAdditionalPackages() { this->additionalPackages_ = nullptr;};
    inline const vector<Models::ListClustersResponseBodyClustersAdditionalPackages> & additionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, vector<Models::ListClustersResponseBodyClustersAdditionalPackages>) };
    inline vector<Models::ListClustersResponseBodyClustersAdditionalPackages> additionalPackages() { DARABONBA_PTR_GET(additionalPackages_, vector<Models::ListClustersResponseBodyClustersAdditionalPackages>) };
    inline ListClustersResponseBodyClusters& setAdditionalPackages(const vector<Models::ListClustersResponseBodyClustersAdditionalPackages> & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
    inline ListClustersResponseBodyClusters& setAdditionalPackages(vector<Models::ListClustersResponseBodyClustersAdditionalPackages> && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<Models::ListClustersResponseBodyClustersAddons> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<Models::ListClustersResponseBodyClustersAddons>) };
    inline vector<Models::ListClustersResponseBodyClustersAddons> addons() { DARABONBA_PTR_GET(addons_, vector<Models::ListClustersResponseBodyClustersAddons>) };
    inline ListClustersResponseBodyClusters& setAddons(const vector<Models::ListClustersResponseBodyClustersAddons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListClustersResponseBodyClusters& setAddons(vector<Models::ListClustersResponseBodyClustersAddons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // clusterCategory Field Functions 
    bool hasClusterCategory() const { return this->clusterCategory_ != nullptr;};
    void deleteClusterCategory() { this->clusterCategory_ = nullptr;};
    inline string clusterCategory() const { DARABONBA_PTR_GET_DEFAULT(clusterCategory_, "") };
    inline ListClustersResponseBodyClusters& setClusterCategory(string clusterCategory) { DARABONBA_PTR_SET_VALUE(clusterCategory_, clusterCategory) };


    // clusterCreateTime Field Functions 
    bool hasClusterCreateTime() const { return this->clusterCreateTime_ != nullptr;};
    void deleteClusterCreateTime() { this->clusterCreateTime_ = nullptr;};
    inline string clusterCreateTime() const { DARABONBA_PTR_GET_DEFAULT(clusterCreateTime_, "") };
    inline ListClustersResponseBodyClusters& setClusterCreateTime(string clusterCreateTime) { DARABONBA_PTR_SET_VALUE(clusterCreateTime_, clusterCreateTime) };


    // clusterCredentials Field Functions 
    bool hasClusterCredentials() const { return this->clusterCredentials_ != nullptr;};
    void deleteClusterCredentials() { this->clusterCredentials_ = nullptr;};
    inline const vector<string> & clusterCredentials() const { DARABONBA_PTR_GET_CONST(clusterCredentials_, vector<string>) };
    inline vector<string> clusterCredentials() { DARABONBA_PTR_GET(clusterCredentials_, vector<string>) };
    inline ListClustersResponseBodyClusters& setClusterCredentials(const vector<string> & clusterCredentials) { DARABONBA_PTR_SET_VALUE(clusterCredentials_, clusterCredentials) };
    inline ListClustersResponseBodyClusters& setClusterCredentials(vector<string> && clusterCredentials) { DARABONBA_PTR_SET_RVALUE(clusterCredentials_, clusterCredentials) };


    // clusterCustomConfiguration Field Functions 
    bool hasClusterCustomConfiguration() const { return this->clusterCustomConfiguration_ != nullptr;};
    void deleteClusterCustomConfiguration() { this->clusterCustomConfiguration_ = nullptr;};
    inline const Models::ListClustersResponseBodyClustersClusterCustomConfiguration & clusterCustomConfiguration() const { DARABONBA_PTR_GET_CONST(clusterCustomConfiguration_, Models::ListClustersResponseBodyClustersClusterCustomConfiguration) };
    inline Models::ListClustersResponseBodyClustersClusterCustomConfiguration clusterCustomConfiguration() { DARABONBA_PTR_GET(clusterCustomConfiguration_, Models::ListClustersResponseBodyClustersClusterCustomConfiguration) };
    inline ListClustersResponseBodyClusters& setClusterCustomConfiguration(const Models::ListClustersResponseBodyClustersClusterCustomConfiguration & clusterCustomConfiguration) { DARABONBA_PTR_SET_VALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };
    inline ListClustersResponseBodyClusters& setClusterCustomConfiguration(Models::ListClustersResponseBodyClustersClusterCustomConfiguration && clusterCustomConfiguration) { DARABONBA_PTR_SET_RVALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };


    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string clusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline ListClustersResponseBodyClusters& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClustersResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline ListClustersResponseBodyClusters& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterModifyTime Field Functions 
    bool hasClusterModifyTime() const { return this->clusterModifyTime_ != nullptr;};
    void deleteClusterModifyTime() { this->clusterModifyTime_ = nullptr;};
    inline string clusterModifyTime() const { DARABONBA_PTR_GET_DEFAULT(clusterModifyTime_, "") };
    inline ListClustersResponseBodyClusters& setClusterModifyTime(string clusterModifyTime) { DARABONBA_PTR_SET_VALUE(clusterModifyTime_, clusterModifyTime) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClustersResponseBodyClusters& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline string clusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
    inline ListClustersResponseBodyClusters& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // clusterUsedCoreTime Field Functions 
    bool hasClusterUsedCoreTime() const { return this->clusterUsedCoreTime_ != nullptr;};
    void deleteClusterUsedCoreTime() { this->clusterUsedCoreTime_ = nullptr;};
    inline float clusterUsedCoreTime() const { DARABONBA_PTR_GET_DEFAULT(clusterUsedCoreTime_, 0.0) };
    inline ListClustersResponseBodyClusters& setClusterUsedCoreTime(float clusterUsedCoreTime) { DARABONBA_PTR_SET_VALUE(clusterUsedCoreTime_, clusterUsedCoreTime) };


    // clusterVSwitchId Field Functions 
    bool hasClusterVSwitchId() const { return this->clusterVSwitchId_ != nullptr;};
    void deleteClusterVSwitchId() { this->clusterVSwitchId_ = nullptr;};
    inline string clusterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(clusterVSwitchId_, "") };
    inline ListClustersResponseBodyClusters& setClusterVSwitchId(string clusterVSwitchId) { DARABONBA_PTR_SET_VALUE(clusterVSwitchId_, clusterVSwitchId) };


    // clusterVpcId Field Functions 
    bool hasClusterVpcId() const { return this->clusterVpcId_ != nullptr;};
    void deleteClusterVpcId() { this->clusterVpcId_ = nullptr;};
    inline string clusterVpcId() const { DARABONBA_PTR_GET_DEFAULT(clusterVpcId_, "") };
    inline ListClustersResponseBodyClusters& setClusterVpcId(string clusterVpcId) { DARABONBA_PTR_SET_VALUE(clusterVpcId_, clusterVpcId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ListClustersResponseBodyClusters& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // ehpcVersion Field Functions 
    bool hasEhpcVersion() const { return this->ehpcVersion_ != nullptr;};
    void deleteEhpcVersion() { this->ehpcVersion_ = nullptr;};
    inline string ehpcVersion() const { DARABONBA_PTR_GET_DEFAULT(ehpcVersion_, "") };
    inline ListClustersResponseBodyClusters& setEhpcVersion(string ehpcVersion) { DARABONBA_PTR_SET_VALUE(ehpcVersion_, ehpcVersion) };


    // manager Field Functions 
    bool hasManager() const { return this->manager_ != nullptr;};
    void deleteManager() { this->manager_ = nullptr;};
    inline const Models::ListClustersResponseBodyClustersManager & manager() const { DARABONBA_PTR_GET_CONST(manager_, Models::ListClustersResponseBodyClustersManager) };
    inline Models::ListClustersResponseBodyClustersManager manager() { DARABONBA_PTR_GET(manager_, Models::ListClustersResponseBodyClustersManager) };
    inline ListClustersResponseBodyClusters& setManager(const Models::ListClustersResponseBodyClustersManager & manager) { DARABONBA_PTR_SET_VALUE(manager_, manager) };
    inline ListClustersResponseBodyClusters& setManager(Models::ListClustersResponseBodyClustersManager && manager) { DARABONBA_PTR_SET_RVALUE(manager_, manager) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline int64_t maxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0L) };
    inline ListClustersResponseBodyClusters& setMaxCoreCount(int64_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int64_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0L) };
    inline ListClustersResponseBodyClusters& setMaxCount(int64_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const Models::ListClustersResponseBodyClustersNodes & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, Models::ListClustersResponseBodyClustersNodes) };
    inline Models::ListClustersResponseBodyClustersNodes nodes() { DARABONBA_PTR_GET(nodes_, Models::ListClustersResponseBodyClustersNodes) };
    inline ListClustersResponseBodyClusters& setNodes(const Models::ListClustersResponseBodyClustersNodes & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListClustersResponseBodyClusters& setNodes(Models::ListClustersResponseBodyClustersNodes && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListClustersResponseBodyClusters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListClustersResponseBodyClusters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const Models::ListClustersResponseBodyClustersUsers & users() const { DARABONBA_PTR_GET_CONST(users_, Models::ListClustersResponseBodyClustersUsers) };
    inline Models::ListClustersResponseBodyClustersUsers users() { DARABONBA_PTR_GET(users_, Models::ListClustersResponseBodyClustersUsers) };
    inline ListClustersResponseBodyClusters& setUsers(const Models::ListClustersResponseBodyClustersUsers & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListClustersResponseBodyClusters& setUsers(Models::ListClustersResponseBodyClustersUsers && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The information about installed software in the cluster.
    std::shared_ptr<vector<Models::ListClustersResponseBodyClustersAdditionalPackages>> additionalPackages_ = nullptr;
    // The information about the addons in the cluster.
    std::shared_ptr<vector<Models::ListClustersResponseBodyClustersAddons>> addons_ = nullptr;
    // The cluster type. Valid values:
    // 
    // *   Standard
    // *   Serverless
    std::shared_ptr<string> clusterCategory_ = nullptr;
    // The time when the cluster was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> clusterCreateTime_ = nullptr;
    // The logon credential type of the cluster. Valid values:
    // 
    // *   password: requires passwords for logons.
    // *   keypair: requires key pairs for logons.
    std::shared_ptr<vector<string>> clusterCredentials_ = nullptr;
    // The post-processing script used by the cluster.
    std::shared_ptr<Models::ListClustersResponseBodyClustersClusterCustomConfiguration> clusterCustomConfiguration_ = nullptr;
    // The cluster description.
    std::shared_ptr<string> clusterDescription_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The deployment type of the cluster. Valid values:
    // 
    // *   Integrated: public cloud
    // *   Hybrid: hybrid cloud
    // *   Custom: a custom cluster
    std::shared_ptr<string> clusterMode_ = nullptr;
    // The time when the cluster was modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> clusterModifyTime_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The cluster state. Valid values:
    // 
    // *   uninit: The cluster is being installed.
    // *   creating: The cluster is being created.
    // *   initing: The cluster is being initialized.
    // *   running: The cluster is running.
    // *   Releasing: The cluster is being released.
    // *   stopping: The cluster is being stopped.
    // *   stopped: The cluster is stopped.
    // *   exception: The cluster has run into an exception.
    // *   pending: The cluster is waiting to be configured.
    std::shared_ptr<string> clusterStatus_ = nullptr;
    // The vCPU-hour usage of the cluster.
    std::shared_ptr<float> clusterUsedCoreTime_ = nullptr;
    // The ID of the vSwitch used by the cluster.
    std::shared_ptr<string> clusterVSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) used by the cluster.
    std::shared_ptr<string> clusterVpcId_ = nullptr;
    // Indicates whether deletion protection is enabled for the cluster. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The Elastic High Performance Computing (E-HPC) version.
    std::shared_ptr<string> ehpcVersion_ = nullptr;
    // The configurations of the cluster management node.
    std::shared_ptr<Models::ListClustersResponseBodyClustersManager> manager_ = nullptr;
    // The maximum total number of vCPUs used by the compute nodes that can be managed by the cluster.
    std::shared_ptr<int64_t> maxCoreCount_ = nullptr;
    // The maximum number of compute nodes that can be managed by the cluster.
    std::shared_ptr<int64_t> maxCount_ = nullptr;
    // The node statistics of the cluster.
    std::shared_ptr<Models::ListClustersResponseBodyClustersNodes> nodes_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group used by the cluster.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The user attribute information of the cluster.
    std::shared_ptr<Models::ListClustersResponseBodyClustersUsers> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
