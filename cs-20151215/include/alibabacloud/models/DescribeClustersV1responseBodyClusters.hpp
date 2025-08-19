// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MaintenanceWindow.hpp>
#include <alibabacloud/models/DescribeClustersV1ResponseBodyClustersOperationPolicy.hpp>
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
  class DescribeClustersV1ResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersV1ResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(current_version, currentVersion_);
      DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(docker_version, dockerVersion_);
      DARABONBA_PTR_TO_JSON(external_loadbalancer_id, externalLoadbalancerId_);
      DARABONBA_PTR_TO_JSON(init_version, initVersion_);
      DARABONBA_PTR_TO_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_TO_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_TO_JSON(master_url, masterUrl_);
      DARABONBA_PTR_TO_JSON(meta_data, metaData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(network_mode, networkMode_);
      DARABONBA_PTR_TO_JSON(next_version, nextVersion_);
      DARABONBA_PTR_TO_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_TO_JSON(private_zone, privateZone_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_TO_JSON(service_cidr, serviceCidr_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(subnet_cidr, subnetCidr_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(vpc_id, vpcId_);
      DARABONBA_PTR_TO_JSON(vswitch_id, vswitchId_);
      DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
      DARABONBA_PTR_TO_JSON(worker_ram_role_name, workerRamRoleName_);
      DARABONBA_PTR_TO_JSON(zone_id, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersV1ResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(current_version, currentVersion_);
      DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(docker_version, dockerVersion_);
      DARABONBA_PTR_FROM_JSON(external_loadbalancer_id, externalLoadbalancerId_);
      DARABONBA_PTR_FROM_JSON(init_version, initVersion_);
      DARABONBA_PTR_FROM_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_FROM_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_FROM_JSON(master_url, masterUrl_);
      DARABONBA_PTR_FROM_JSON(meta_data, metaData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(network_mode, networkMode_);
      DARABONBA_PTR_FROM_JSON(next_version, nextVersion_);
      DARABONBA_PTR_FROM_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_FROM_JSON(private_zone, privateZone_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(service_cidr, serviceCidr_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(subnet_cidr, subnetCidr_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(vpc_id, vpcId_);
      DARABONBA_PTR_FROM_JSON(vswitch_id, vswitchId_);
      DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
      DARABONBA_PTR_FROM_JSON(worker_ram_role_name, workerRamRoleName_);
      DARABONBA_PTR_FROM_JSON(zone_id, zoneId_);
    };
    DescribeClustersV1ResponseBodyClusters() = default ;
    DescribeClustersV1ResponseBodyClusters(const DescribeClustersV1ResponseBodyClusters &) = default ;
    DescribeClustersV1ResponseBodyClusters(DescribeClustersV1ResponseBodyClusters &&) = default ;
    DescribeClustersV1ResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersV1ResponseBodyClusters() = default ;
    DescribeClustersV1ResponseBodyClusters& operator=(const DescribeClustersV1ResponseBodyClusters &) = default ;
    DescribeClustersV1ResponseBodyClusters& operator=(DescribeClustersV1ResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterDomain_ != nullptr
        && this->clusterId_ != nullptr && this->clusterSpec_ != nullptr && this->clusterType_ != nullptr && this->containerCidr_ != nullptr && this->created_ != nullptr
        && this->currentVersion_ != nullptr && this->deletionProtection_ != nullptr && this->dockerVersion_ != nullptr && this->externalLoadbalancerId_ != nullptr && this->initVersion_ != nullptr
        && this->ipStack_ != nullptr && this->maintenanceWindow_ != nullptr && this->masterUrl_ != nullptr && this->metaData_ != nullptr && this->name_ != nullptr
        && this->networkMode_ != nullptr && this->nextVersion_ != nullptr && this->operationPolicy_ != nullptr && this->privateZone_ != nullptr && this->profile_ != nullptr
        && this->proxyMode_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->securityGroupId_ != nullptr && this->serviceCidr_ != nullptr
        && this->size_ != nullptr && this->state_ != nullptr && this->subnetCidr_ != nullptr && this->tags_ != nullptr && this->timezone_ != nullptr
        && this->updated_ != nullptr && this->vpcId_ != nullptr && this->vswitchId_ != nullptr && this->vswitchIds_ != nullptr && this->workerRamRoleName_ != nullptr
        && this->zoneId_ != nullptr; };
    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string clusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string containerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeClustersV1ResponseBodyClusters& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // dockerVersion Field Functions 
    bool hasDockerVersion() const { return this->dockerVersion_ != nullptr;};
    void deleteDockerVersion() { this->dockerVersion_ = nullptr;};
    inline string dockerVersion() const { DARABONBA_PTR_GET_DEFAULT(dockerVersion_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setDockerVersion(string dockerVersion) { DARABONBA_PTR_SET_VALUE(dockerVersion_, dockerVersion) };


    // externalLoadbalancerId Field Functions 
    bool hasExternalLoadbalancerId() const { return this->externalLoadbalancerId_ != nullptr;};
    void deleteExternalLoadbalancerId() { this->externalLoadbalancerId_ = nullptr;};
    inline string externalLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(externalLoadbalancerId_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setExternalLoadbalancerId(string externalLoadbalancerId) { DARABONBA_PTR_SET_VALUE(externalLoadbalancerId_, externalLoadbalancerId) };


    // initVersion Field Functions 
    bool hasInitVersion() const { return this->initVersion_ != nullptr;};
    void deleteInitVersion() { this->initVersion_ = nullptr;};
    inline string initVersion() const { DARABONBA_PTR_GET_DEFAULT(initVersion_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setInitVersion(string initVersion) { DARABONBA_PTR_SET_VALUE(initVersion_, initVersion) };


    // ipStack Field Functions 
    bool hasIpStack() const { return this->ipStack_ != nullptr;};
    void deleteIpStack() { this->ipStack_ = nullptr;};
    inline string ipStack() const { DARABONBA_PTR_GET_DEFAULT(ipStack_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setIpStack(string ipStack) { DARABONBA_PTR_SET_VALUE(ipStack_, ipStack) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const Models::MaintenanceWindow & maintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, Models::MaintenanceWindow) };
    inline Models::MaintenanceWindow maintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, Models::MaintenanceWindow) };
    inline DescribeClustersV1ResponseBodyClusters& setMaintenanceWindow(const Models::MaintenanceWindow & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline DescribeClustersV1ResponseBodyClusters& setMaintenanceWindow(Models::MaintenanceWindow && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // masterUrl Field Functions 
    bool hasMasterUrl() const { return this->masterUrl_ != nullptr;};
    void deleteMasterUrl() { this->masterUrl_ = nullptr;};
    inline string masterUrl() const { DARABONBA_PTR_GET_DEFAULT(masterUrl_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setMasterUrl(string masterUrl) { DARABONBA_PTR_SET_VALUE(masterUrl_, masterUrl) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline string metaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string nextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // operationPolicy Field Functions 
    bool hasOperationPolicy() const { return this->operationPolicy_ != nullptr;};
    void deleteOperationPolicy() { this->operationPolicy_ = nullptr;};
    inline const Models::DescribeClustersV1ResponseBodyClustersOperationPolicy & operationPolicy() const { DARABONBA_PTR_GET_CONST(operationPolicy_, Models::DescribeClustersV1ResponseBodyClustersOperationPolicy) };
    inline Models::DescribeClustersV1ResponseBodyClustersOperationPolicy operationPolicy() { DARABONBA_PTR_GET(operationPolicy_, Models::DescribeClustersV1ResponseBodyClustersOperationPolicy) };
    inline DescribeClustersV1ResponseBodyClusters& setOperationPolicy(const Models::DescribeClustersV1ResponseBodyClustersOperationPolicy & operationPolicy) { DARABONBA_PTR_SET_VALUE(operationPolicy_, operationPolicy) };
    inline DescribeClustersV1ResponseBodyClusters& setOperationPolicy(Models::DescribeClustersV1ResponseBodyClustersOperationPolicy && operationPolicy) { DARABONBA_PTR_SET_RVALUE(operationPolicy_, operationPolicy) };


    // privateZone Field Functions 
    bool hasPrivateZone() const { return this->privateZone_ != nullptr;};
    void deletePrivateZone() { this->privateZone_ = nullptr;};
    inline bool privateZone() const { DARABONBA_PTR_GET_DEFAULT(privateZone_, false) };
    inline DescribeClustersV1ResponseBodyClusters& setPrivateZone(bool privateZone) { DARABONBA_PTR_SET_VALUE(privateZone_, privateZone) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string proxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string serviceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeClustersV1ResponseBodyClusters& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subnetCidr Field Functions 
    bool hasSubnetCidr() const { return this->subnetCidr_ != nullptr;};
    void deleteSubnetCidr() { this->subnetCidr_ = nullptr;};
    inline string subnetCidr() const { DARABONBA_PTR_GET_DEFAULT(subnetCidr_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setSubnetCidr(string subnetCidr) { DARABONBA_PTR_SET_VALUE(subnetCidr_, subnetCidr) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::Tag>) };
    inline vector<Models::Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Models::Tag>) };
    inline DescribeClustersV1ResponseBodyClusters& setTags(const vector<Models::Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeClustersV1ResponseBodyClusters& setTags(vector<Models::Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline DescribeClustersV1ResponseBodyClusters& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline DescribeClustersV1ResponseBodyClusters& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    // workerRamRoleName Field Functions 
    bool hasWorkerRamRoleName() const { return this->workerRamRoleName_ != nullptr;};
    void deleteWorkerRamRoleName() { this->workerRamRoleName_ = nullptr;};
    inline string workerRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(workerRamRoleName_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setWorkerRamRoleName(string workerRamRoleName) { DARABONBA_PTR_SET_VALUE(workerRamRoleName_, workerRamRoleName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeClustersV1ResponseBodyClusters& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The domain name of the cluster.
    std::shared_ptr<string> clusterDomain_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The specification of the cluster.
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The pod CIDR block and the configuration of the Flannel network plug-in.
    std::shared_ptr<string> containerCidr_ = nullptr;
    // The time at which the instance is created.
    std::shared_ptr<string> created_ = nullptr;
    // The Kubernetes version of the cluster.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // Specifies whether to enable cluster deletion protection. If you enable this option, the cluster cannot be deleted in the console or by calling API operations. Valid values:
    // 
    // *   `true`: enables deletion protection for the cluster. This way, the cluster cannot be deleted in the ACK console or by calling API operations.
    // *   `false`: disables deletion protection for the cluster. This way, the cluster can be deleted in the ACK console or by calling API operations.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The Docker version that is used by the cluster.
    std::shared_ptr<string> dockerVersion_ = nullptr;
    // The ID of the Server Load Balancer (SLB) instance that is used by the Ingresses of the cluster.
    // 
    // The default SLB specification is slb.s1.small, which belongs to the high-performance instance type.
    std::shared_ptr<string> externalLoadbalancerId_ = nullptr;
    // The version of the cluster. For more information about the Kubernetes versions supported by ACK, see [Release notes for Kubernetes versions](https://help.aliyun.com/document_detail/185269.html).
    std::shared_ptr<string> initVersion_ = nullptr;
    // The IP stack of the cluster. Valid values:
    // 
    // *   ipv4: creates a cluster that supports only the IPv4 protocol stack.
    // *   dual: creates a cluster that supports IPv4/IPv6 dual-stack.
    std::shared_ptr<string> ipStack_ = nullptr;
    // The maintenance window of the cluster. This feature is available only for ACK managed clusters and ACK Serverless clusters.
    std::shared_ptr<Models::MaintenanceWindow> maintenanceWindow_ = nullptr;
    // The address of the cluster API server. It includes an internal endpoint and a public endpoint.
    std::shared_ptr<string> masterUrl_ = nullptr;
    // The metadata of the cluster.
    std::shared_ptr<string> metaData_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // The network mode of the cluster. Valid values:
    // 
    // *   `classic`: classic network.
    // *   `vpc`: virtual private cloud (VPC).
    // *   `overlay`: overlay network.
    // *   `calico`: network powered by Calico.
    std::shared_ptr<string> networkMode_ = nullptr;
    // The Kubernetes version to which the cluster can be updated.
    std::shared_ptr<string> nextVersion_ = nullptr;
    // The automatic O\\&M policy of the cluster.
    std::shared_ptr<Models::DescribeClustersV1ResponseBodyClustersOperationPolicy> operationPolicy_ = nullptr;
    // Indicates whether Alibaba Cloud DNS PrivateZone is enabled. Valid values:
    // 
    // *   `true`: Alibaba Cloud DNS PrivateZone is enabled.
    // *   `false`: Alibaba Cloud DNS PrivateZone is disabled.
    std::shared_ptr<bool> privateZone_ = nullptr;
    // The subtype of the cluster.
    std::shared_ptr<string> profile_ = nullptr;
    // The kube-proxy mode.
    // 
    // *   `iptables`: a mature and stable mode that uses iptables rules to conduct service discovery and load balancing. The performance of this mode is limited by the size of the cluster. This mode is suitable for clusters that run a small number of Services.
    // *   `ipvs`: provides high performance and uses IP Virtual Server (IPVS). This allows you to configure service discovery and load balancing. This mode is suitable for clusters that are required to run a large number of services. We recommend that you use this mode in scenarios that require high load balancing performance.
    std::shared_ptr<string> proxyMode_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the cluster belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group of the cluster.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The Service CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceCidr_ = nullptr;
    // The number of nodes in the cluster, including control planes and worker nodes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   `initial`: The cluster is being created.
    // *   `failed`: The cluster failed to be created.
    // *   `running`: The cluster is running.
    // *   `upgrading`: The cluster is undergoing an upgrade.
    // *   `updating`: Cluster specification changes are being applied.
    // *   `removing`: Nodes are being removed from the node pool.
    // *   `draining`: Node draining is in progress.
    // *   `scaling`: Auto-scaling operation is in progress for the cluster.
    // *   `stopped`: The cluster has stopped running.
    // *   `deleting`: The cluster is being deleted.
    // *   `deleted`: The cluster has been deleted.
    // *   `delete_failed`: The cluster failed to be deleted.
    std::shared_ptr<string> state_ = nullptr;
    // This parameter is deprecated. Use the container_cidr parameter to obtain the pod CIDR block.
    std::shared_ptr<string> subnetCidr_ = nullptr;
    // The label of the cluster.
    std::shared_ptr<vector<Models::Tag>> tags_ = nullptr;
    // The time zone
    std::shared_ptr<string> timezone_ = nullptr;
    // The time when the cluster was updated.
    std::shared_ptr<string> updated_ = nullptr;
    // The ID of the virtual private cloud (VPC) that is used by the cluster.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch in the cluster.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The vSwitches of the control planes.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
    // The name of the worker Resource Access Management (RAM) role. The RAM role is assigned to the worker nodes of the cluster to allow the worker nodes to manage ECS instances.
    std::shared_ptr<string> workerRamRoleName_ = nullptr;
    // The ID of the zone where the cluster is deployed.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
