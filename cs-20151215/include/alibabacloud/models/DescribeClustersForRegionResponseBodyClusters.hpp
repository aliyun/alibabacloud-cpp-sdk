// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSFORREGIONRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSFORREGIONRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersForRegionResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersForRegionResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(current_version, currentVersion_);
      DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(init_version, initVersion_);
      DARABONBA_PTR_TO_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(next_version, nextVersion_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_TO_JSON(service_cidr, serviceCidr_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(vpc_id, vpcId_);
      DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersForRegionResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(current_version, currentVersion_);
      DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(init_version, initVersion_);
      DARABONBA_PTR_FROM_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(next_version, nextVersion_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(service_cidr, serviceCidr_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(vpc_id, vpcId_);
      DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
    };
    DescribeClustersForRegionResponseBodyClusters() = default ;
    DescribeClustersForRegionResponseBodyClusters(const DescribeClustersForRegionResponseBodyClusters &) = default ;
    DescribeClustersForRegionResponseBodyClusters(DescribeClustersForRegionResponseBodyClusters &&) = default ;
    DescribeClustersForRegionResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersForRegionResponseBodyClusters() = default ;
    DescribeClustersForRegionResponseBodyClusters& operator=(const DescribeClustersForRegionResponseBodyClusters &) = default ;
    DescribeClustersForRegionResponseBodyClusters& operator=(DescribeClustersForRegionResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterDomain_ != nullptr
        && this->clusterId_ != nullptr && this->clusterSpec_ != nullptr && this->clusterType_ != nullptr && this->containerCidr_ != nullptr && this->created_ != nullptr
        && this->currentVersion_ != nullptr && this->deletionProtection_ != nullptr && this->initVersion_ != nullptr && this->ipStack_ != nullptr && this->name_ != nullptr
        && this->nextVersion_ != nullptr && this->profile_ != nullptr && this->proxyMode_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->securityGroupId_ != nullptr && this->serviceCidr_ != nullptr && this->size_ != nullptr && this->state_ != nullptr && this->tags_ != nullptr
        && this->timezone_ != nullptr && this->updated_ != nullptr && this->vpcId_ != nullptr && this->vswitchIds_ != nullptr; };
    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string clusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string containerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeClustersForRegionResponseBodyClusters& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // initVersion Field Functions 
    bool hasInitVersion() const { return this->initVersion_ != nullptr;};
    void deleteInitVersion() { this->initVersion_ = nullptr;};
    inline string initVersion() const { DARABONBA_PTR_GET_DEFAULT(initVersion_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setInitVersion(string initVersion) { DARABONBA_PTR_SET_VALUE(initVersion_, initVersion) };


    // ipStack Field Functions 
    bool hasIpStack() const { return this->ipStack_ != nullptr;};
    void deleteIpStack() { this->ipStack_ = nullptr;};
    inline string ipStack() const { DARABONBA_PTR_GET_DEFAULT(ipStack_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setIpStack(string ipStack) { DARABONBA_PTR_SET_VALUE(ipStack_, ipStack) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string nextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string proxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string serviceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeClustersForRegionResponseBodyClusters& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::Tag>) };
    inline vector<Models::Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Models::Tag>) };
    inline DescribeClustersForRegionResponseBodyClusters& setTags(const vector<Models::Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeClustersForRegionResponseBodyClusters& setTags(vector<Models::Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClustersForRegionResponseBodyClusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline DescribeClustersForRegionResponseBodyClusters& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline DescribeClustersForRegionResponseBodyClusters& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    // The domain name of the cluster.
    std::shared_ptr<string> clusterDomain_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The types of ACK managed clusters:
    // 
    // *   ack.pro.small: ACK Pro cluster
    // *   ack.standard: ACK Basic cluster
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   Kubernetes: ACK dedicated cluster
    // *   ManagedKubernetes: ACK managed clusters. ACK managed clusters include ACK Basic clusters, ACK Pro clusters, ACK Serverless Basic clusters, ACK Serverless Pro clusters, ACK Edge Basic clusters, ACK Edge Pro clusters, and ACK Lingjun Pro clusters.
    // *   ExternalKubernetes: registered cluster
    std::shared_ptr<string> clusterType_ = nullptr;
    // The CIDR block of pods in the cluster.
    std::shared_ptr<string> containerCidr_ = nullptr;
    // The time at which the instance is created.
    std::shared_ptr<string> created_ = nullptr;
    // The current Kubernetes version of the cluster.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // Specifies whether to enable cluster deletion protection. If you enable this option, the cluster cannot be deleted in the console or by calling API operations. You can obtain the terminal ID by calling one of the following operations:
    // 
    // *   true: enables deletion protection for the cluster. This way, the cluster cannot be deleted in the ACK console or by calling API operations.
    // *   false: disables deletion protection for the cluster. This way, the cluster can be deleted in the ACK console or by calling API operations.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The initial Kubernetes version of the cluster.
    std::shared_ptr<string> initVersion_ = nullptr;
    // The IP protocol stack of the cluster.
    std::shared_ptr<string> ipStack_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> name_ = nullptr;
    // The Kubernetes version to which the cluster can be updated.
    std::shared_ptr<string> nextVersion_ = nullptr;
    // The subtype of the clusters. Valid values:
    // 
    // *   Default: ACK managed clusters. ACK managed clusters include ACK Basic clusters and ACK Pro clusters.
    // *   Edge: ACK Edge clusters. ACK Edge clusters include ACK Edge Basic clusters and ACK Edge Pro clusters.
    // *   Serverless: ACK Serverless clusters. ACK Serverless clusters include ACK Serverless Basic clusters and ACK Serverless Pro clusters.
    // *   Lingjun: ACK Lingjun Pro clusters.
    std::shared_ptr<string> profile_ = nullptr;
    // The kube-proxy mode of the cluster.
    // 
    // Valid value:
    // 
    // *   iptables: iptables.
    // *   ipvs: ipvs.
    std::shared_ptr<string> proxyMode_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the cluster resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group of the cluster.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The CIDR block of the service network.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceCidr_ = nullptr;
    // The number of nodes in the ACK cluster.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   initial: The cluster is being created.
    // *   failed: The cluster failed to be created.
    // *   running: The cluster is running.
    // *   Upgrading: The cluster is being updated.
    // *   scaling: The cluster is being scaled.
    // *   waiting: The cluster is waiting for connection requests.
    // *   disconnected: The cluster is disconnected.
    // *   inactive: The cluster is inactive.
    // *   unavailable: The cluster is unavailable.
    // *   deleting: The cluster is being deleted.
    // *   deleted: The ACK cluster is deleted.
    // *   delete_failed: The cluster failed to be deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The list of cluster tags.
    std::shared_ptr<vector<Models::Tag>> tags_ = nullptr;
    // The time zone.
    std::shared_ptr<string> timezone_ = nullptr;
    // The time when the cluster was updated.
    std::shared_ptr<string> updated_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the cluster belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The list of vSwitches on the control plane of the cluster.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
