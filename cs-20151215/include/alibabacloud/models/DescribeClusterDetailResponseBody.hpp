// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterDetailResponseBodyAutoMode.hpp>
#include <alibabacloud/models/DescribeClusterDetailResponseBodyControlPlaneConfig.hpp>
#include <vector>
#include <alibabacloud/models/MaintenanceWindow.hpp>
#include <alibabacloud/models/DescribeClusterDetailResponseBodyOperationPolicy.hpp>
#include <map>
#include <alibabacloud/models/DescribeClusterDetailResponseBodyRrsaConfig.hpp>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_TO_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(current_version, currentVersion_);
      DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(docker_version, dockerVersion_);
      DARABONBA_PTR_TO_JSON(external_loadbalancer_id, externalLoadbalancerId_);
      DARABONBA_PTR_TO_JSON(extra_sans, extraSans_);
      DARABONBA_PTR_TO_JSON(init_version, initVersion_);
      DARABONBA_PTR_TO_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_TO_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_TO_JSON(master_url, masterUrl_);
      DARABONBA_PTR_TO_JSON(meta_data, metaData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(network_mode, networkMode_);
      DARABONBA_PTR_TO_JSON(next_version, nextVersion_);
      DARABONBA_PTR_TO_JSON(node_cidr_mask, nodeCidrMask_);
      DARABONBA_PTR_TO_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(private_zone, privateZone_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(rrsa_config, rrsaConfig_);
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
    friend void from_json(const Darabonba::Json& j, DescribeClusterDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_FROM_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(current_version, currentVersion_);
      DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(docker_version, dockerVersion_);
      DARABONBA_PTR_FROM_JSON(external_loadbalancer_id, externalLoadbalancerId_);
      DARABONBA_PTR_FROM_JSON(extra_sans, extraSans_);
      DARABONBA_PTR_FROM_JSON(init_version, initVersion_);
      DARABONBA_PTR_FROM_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_FROM_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_FROM_JSON(master_url, masterUrl_);
      DARABONBA_PTR_FROM_JSON(meta_data, metaData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(network_mode, networkMode_);
      DARABONBA_PTR_FROM_JSON(next_version, nextVersion_);
      DARABONBA_PTR_FROM_JSON(node_cidr_mask, nodeCidrMask_);
      DARABONBA_PTR_FROM_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(private_zone, privateZone_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(rrsa_config, rrsaConfig_);
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
    DescribeClusterDetailResponseBody() = default ;
    DescribeClusterDetailResponseBody(const DescribeClusterDetailResponseBody &) = default ;
    DescribeClusterDetailResponseBody(DescribeClusterDetailResponseBody &&) = default ;
    DescribeClusterDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterDetailResponseBody() = default ;
    DescribeClusterDetailResponseBody& operator=(const DescribeClusterDetailResponseBody &) = default ;
    DescribeClusterDetailResponseBody& operator=(DescribeClusterDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoMode_ == nullptr
        && return this->clusterDomain_ == nullptr && return this->clusterId_ == nullptr && return this->clusterSpec_ == nullptr && return this->clusterType_ == nullptr && return this->containerCidr_ == nullptr
        && return this->controlPlaneConfig_ == nullptr && return this->created_ == nullptr && return this->currentVersion_ == nullptr && return this->deletionProtection_ == nullptr && return this->dockerVersion_ == nullptr
        && return this->externalLoadbalancerId_ == nullptr && return this->extraSans_ == nullptr && return this->initVersion_ == nullptr && return this->ipStack_ == nullptr && return this->maintenanceWindow_ == nullptr
        && return this->masterUrl_ == nullptr && return this->metaData_ == nullptr && return this->name_ == nullptr && return this->networkMode_ == nullptr && return this->nextVersion_ == nullptr
        && return this->nodeCidrMask_ == nullptr && return this->operationPolicy_ == nullptr && return this->parameters_ == nullptr && return this->privateZone_ == nullptr && return this->profile_ == nullptr
        && return this->proxyMode_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->rrsaConfig_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->serviceCidr_ == nullptr && return this->size_ == nullptr && return this->state_ == nullptr && return this->subnetCidr_ == nullptr && return this->tags_ == nullptr
        && return this->timezone_ == nullptr && return this->updated_ == nullptr && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr && return this->vswitchIds_ == nullptr
        && return this->workerRamRoleName_ == nullptr && return this->zoneId_ == nullptr; };
    // autoMode Field Functions 
    bool hasAutoMode() const { return this->autoMode_ != nullptr;};
    void deleteAutoMode() { this->autoMode_ = nullptr;};
    inline const DescribeClusterDetailResponseBodyAutoMode & autoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, DescribeClusterDetailResponseBodyAutoMode) };
    inline DescribeClusterDetailResponseBodyAutoMode autoMode() { DARABONBA_PTR_GET(autoMode_, DescribeClusterDetailResponseBodyAutoMode) };
    inline DescribeClusterDetailResponseBody& setAutoMode(const DescribeClusterDetailResponseBodyAutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
    inline DescribeClusterDetailResponseBody& setAutoMode(DescribeClusterDetailResponseBodyAutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string clusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline DescribeClusterDetailResponseBody& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterDetailResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeClusterDetailResponseBody& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClusterDetailResponseBody& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string containerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline DescribeClusterDetailResponseBody& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const DescribeClusterDetailResponseBodyControlPlaneConfig & controlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, DescribeClusterDetailResponseBodyControlPlaneConfig) };
    inline DescribeClusterDetailResponseBodyControlPlaneConfig controlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, DescribeClusterDetailResponseBodyControlPlaneConfig) };
    inline DescribeClusterDetailResponseBody& setControlPlaneConfig(const DescribeClusterDetailResponseBodyControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline DescribeClusterDetailResponseBody& setControlPlaneConfig(DescribeClusterDetailResponseBodyControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClusterDetailResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeClusterDetailResponseBody& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeClusterDetailResponseBody& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // dockerVersion Field Functions 
    bool hasDockerVersion() const { return this->dockerVersion_ != nullptr;};
    void deleteDockerVersion() { this->dockerVersion_ = nullptr;};
    inline string dockerVersion() const { DARABONBA_PTR_GET_DEFAULT(dockerVersion_, "") };
    inline DescribeClusterDetailResponseBody& setDockerVersion(string dockerVersion) { DARABONBA_PTR_SET_VALUE(dockerVersion_, dockerVersion) };


    // externalLoadbalancerId Field Functions 
    bool hasExternalLoadbalancerId() const { return this->externalLoadbalancerId_ != nullptr;};
    void deleteExternalLoadbalancerId() { this->externalLoadbalancerId_ = nullptr;};
    inline string externalLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(externalLoadbalancerId_, "") };
    inline DescribeClusterDetailResponseBody& setExternalLoadbalancerId(string externalLoadbalancerId) { DARABONBA_PTR_SET_VALUE(externalLoadbalancerId_, externalLoadbalancerId) };


    // extraSans Field Functions 
    bool hasExtraSans() const { return this->extraSans_ != nullptr;};
    void deleteExtraSans() { this->extraSans_ = nullptr;};
    inline const vector<string> & extraSans() const { DARABONBA_PTR_GET_CONST(extraSans_, vector<string>) };
    inline vector<string> extraSans() { DARABONBA_PTR_GET(extraSans_, vector<string>) };
    inline DescribeClusterDetailResponseBody& setExtraSans(const vector<string> & extraSans) { DARABONBA_PTR_SET_VALUE(extraSans_, extraSans) };
    inline DescribeClusterDetailResponseBody& setExtraSans(vector<string> && extraSans) { DARABONBA_PTR_SET_RVALUE(extraSans_, extraSans) };


    // initVersion Field Functions 
    bool hasInitVersion() const { return this->initVersion_ != nullptr;};
    void deleteInitVersion() { this->initVersion_ = nullptr;};
    inline string initVersion() const { DARABONBA_PTR_GET_DEFAULT(initVersion_, "") };
    inline DescribeClusterDetailResponseBody& setInitVersion(string initVersion) { DARABONBA_PTR_SET_VALUE(initVersion_, initVersion) };


    // ipStack Field Functions 
    bool hasIpStack() const { return this->ipStack_ != nullptr;};
    void deleteIpStack() { this->ipStack_ = nullptr;};
    inline string ipStack() const { DARABONBA_PTR_GET_DEFAULT(ipStack_, "") };
    inline DescribeClusterDetailResponseBody& setIpStack(string ipStack) { DARABONBA_PTR_SET_VALUE(ipStack_, ipStack) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const MaintenanceWindow & maintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, MaintenanceWindow) };
    inline MaintenanceWindow maintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, MaintenanceWindow) };
    inline DescribeClusterDetailResponseBody& setMaintenanceWindow(const MaintenanceWindow & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline DescribeClusterDetailResponseBody& setMaintenanceWindow(MaintenanceWindow && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // masterUrl Field Functions 
    bool hasMasterUrl() const { return this->masterUrl_ != nullptr;};
    void deleteMasterUrl() { this->masterUrl_ = nullptr;};
    inline string masterUrl() const { DARABONBA_PTR_GET_DEFAULT(masterUrl_, "") };
    inline DescribeClusterDetailResponseBody& setMasterUrl(string masterUrl) { DARABONBA_PTR_SET_VALUE(masterUrl_, masterUrl) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline string metaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
    inline DescribeClusterDetailResponseBody& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterDetailResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline DescribeClusterDetailResponseBody& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string nextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline DescribeClusterDetailResponseBody& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // nodeCidrMask Field Functions 
    bool hasNodeCidrMask() const { return this->nodeCidrMask_ != nullptr;};
    void deleteNodeCidrMask() { this->nodeCidrMask_ = nullptr;};
    inline string nodeCidrMask() const { DARABONBA_PTR_GET_DEFAULT(nodeCidrMask_, "") };
    inline DescribeClusterDetailResponseBody& setNodeCidrMask(string nodeCidrMask) { DARABONBA_PTR_SET_VALUE(nodeCidrMask_, nodeCidrMask) };


    // operationPolicy Field Functions 
    bool hasOperationPolicy() const { return this->operationPolicy_ != nullptr;};
    void deleteOperationPolicy() { this->operationPolicy_ = nullptr;};
    inline const DescribeClusterDetailResponseBodyOperationPolicy & operationPolicy() const { DARABONBA_PTR_GET_CONST(operationPolicy_, DescribeClusterDetailResponseBodyOperationPolicy) };
    inline DescribeClusterDetailResponseBodyOperationPolicy operationPolicy() { DARABONBA_PTR_GET(operationPolicy_, DescribeClusterDetailResponseBodyOperationPolicy) };
    inline DescribeClusterDetailResponseBody& setOperationPolicy(const DescribeClusterDetailResponseBodyOperationPolicy & operationPolicy) { DARABONBA_PTR_SET_VALUE(operationPolicy_, operationPolicy) };
    inline DescribeClusterDetailResponseBody& setOperationPolicy(DescribeClusterDetailResponseBodyOperationPolicy && operationPolicy) { DARABONBA_PTR_SET_RVALUE(operationPolicy_, operationPolicy) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline DescribeClusterDetailResponseBody& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeClusterDetailResponseBody& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // privateZone Field Functions 
    bool hasPrivateZone() const { return this->privateZone_ != nullptr;};
    void deletePrivateZone() { this->privateZone_ = nullptr;};
    inline bool privateZone() const { DARABONBA_PTR_GET_DEFAULT(privateZone_, false) };
    inline DescribeClusterDetailResponseBody& setPrivateZone(bool privateZone) { DARABONBA_PTR_SET_VALUE(privateZone_, privateZone) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeClusterDetailResponseBody& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string proxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline DescribeClusterDetailResponseBody& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClusterDetailResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClusterDetailResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rrsaConfig Field Functions 
    bool hasRrsaConfig() const { return this->rrsaConfig_ != nullptr;};
    void deleteRrsaConfig() { this->rrsaConfig_ = nullptr;};
    inline const DescribeClusterDetailResponseBodyRrsaConfig & rrsaConfig() const { DARABONBA_PTR_GET_CONST(rrsaConfig_, DescribeClusterDetailResponseBodyRrsaConfig) };
    inline DescribeClusterDetailResponseBodyRrsaConfig rrsaConfig() { DARABONBA_PTR_GET(rrsaConfig_, DescribeClusterDetailResponseBodyRrsaConfig) };
    inline DescribeClusterDetailResponseBody& setRrsaConfig(const DescribeClusterDetailResponseBodyRrsaConfig & rrsaConfig) { DARABONBA_PTR_SET_VALUE(rrsaConfig_, rrsaConfig) };
    inline DescribeClusterDetailResponseBody& setRrsaConfig(DescribeClusterDetailResponseBodyRrsaConfig && rrsaConfig) { DARABONBA_PTR_SET_RVALUE(rrsaConfig_, rrsaConfig) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClusterDetailResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string serviceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline DescribeClusterDetailResponseBody& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeClusterDetailResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterDetailResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subnetCidr Field Functions 
    bool hasSubnetCidr() const { return this->subnetCidr_ != nullptr;};
    void deleteSubnetCidr() { this->subnetCidr_ = nullptr;};
    inline string subnetCidr() const { DARABONBA_PTR_GET_DEFAULT(subnetCidr_, "") };
    inline DescribeClusterDetailResponseBody& setSubnetCidr(string subnetCidr) { DARABONBA_PTR_SET_VALUE(subnetCidr_, subnetCidr) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline DescribeClusterDetailResponseBody& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeClusterDetailResponseBody& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline DescribeClusterDetailResponseBody& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeClusterDetailResponseBody& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClusterDetailResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeClusterDetailResponseBody& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline DescribeClusterDetailResponseBody& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline DescribeClusterDetailResponseBody& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    // workerRamRoleName Field Functions 
    bool hasWorkerRamRoleName() const { return this->workerRamRoleName_ != nullptr;};
    void deleteWorkerRamRoleName() { this->workerRamRoleName_ = nullptr;};
    inline string workerRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(workerRamRoleName_, "") };
    inline DescribeClusterDetailResponseBody& setWorkerRamRoleName(string workerRamRoleName) { DARABONBA_PTR_SET_VALUE(workerRamRoleName_, workerRamRoleName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeClusterDetailResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<DescribeClusterDetailResponseBodyAutoMode> autoMode_ = nullptr;
    // The domain name of the cluster.
    std::shared_ptr<string> clusterDomain_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The edition of the cluster
    // 
    // *   `ack.pro.small`: the Pro edition.
    // *   `ack.standard`: the Basic edition.
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // The type of the instance.
    // 
    // *   `Kubernetes`: ACK dedicated cluster.
    // *   `ManagedKubernetes`: ACK managed cluster. ACK managed clusters include ACK managed Basic clusters, ACK managed Pro clusters, ACK Serverless Pro clusters, ACK Serverless Basic clusters, ACK Edge Pro clusters, ACK Edge Basic clusters, and ACK Lingjun Pro clusters.
    // *   `ExternalKubernetes`: registered cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The pod CIDR block. The configuration of the Flannel network plug-in.
    std::shared_ptr<string> containerCidr_ = nullptr;
    // The control plane configurations in an ACK dedicated cluster.
    std::shared_ptr<DescribeClusterDetailResponseBodyControlPlaneConfig> controlPlaneConfig_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> created_ = nullptr;
    // The Kubernetes version of the cluster. For more information about the Kubernetes versions supported by ACK, see [Release notes for Kubernetes versions](https://help.aliyun.com/document_detail/185269.html).
    std::shared_ptr<string> currentVersion_ = nullptr;
    // Indicates whether deletion protection is enabled for the cluster. If deletion protection is enabled, the cluster cannot be deleted in the Container Service console or by calling API operations. Valid values:
    // 
    // *   `true`: deletion protection is enabled for the cluster. This way, the cluster cannot be deleted in the Container Service console or by calling API operations.
    // *   `false`: deletion protection is disabled for the cluster. This way, the cluster can be deleted in the Container Service console or by calling API operations.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The Docker version that is used by the cluster.
    std::shared_ptr<string> dockerVersion_ = nullptr;
    // The ID of the Server Load Balancer (SLB) instance that is created for the Ingress of the cluster.
    std::shared_ptr<string> externalLoadbalancerId_ = nullptr;
    std::shared_ptr<vector<string>> extraSans_ = nullptr;
    // The initial Kubernetes version of the cluster.
    std::shared_ptr<string> initVersion_ = nullptr;
    // The IP stack of the cluster. Valid values:
    // 
    // *   ipv4: The cluster is an IPv4 cluster.
    // *   dual: The cluster is an IPv4/IPv6 dual-stack cluster.
    std::shared_ptr<string> ipStack_ = nullptr;
    // The maintenance window of the cluster. This feature is available only in ACK Pro clusters.
    std::shared_ptr<MaintenanceWindow> maintenanceWindow_ = nullptr;
    // The endpoints of the cluster, including an internal endpoint and a public endpoint.
    std::shared_ptr<string> masterUrl_ = nullptr;
    // The metadata of the cluster.
    std::shared_ptr<string> metaData_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the cluster. Example: Virtual Private Cloud (VPC).
    std::shared_ptr<string> networkMode_ = nullptr;
    // The Kubernetes version to which the cluster can be upgraded.
    std::shared_ptr<string> nextVersion_ = nullptr;
    // This parameter is available only for Flannel.
    // 
    // The subnet mask length of the node CIDR block. This parameter indicates the maximum number of IP addresses that can be assigned to nodes.
    std::shared_ptr<string> nodeCidrMask_ = nullptr;
    // The automatic O\\&M policy of the cluster.
    std::shared_ptr<DescribeClusterDetailResponseBodyOperationPolicy> operationPolicy_ = nullptr;
    // The Resource Orchestration Service (ROS) parameters of the cluster.
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    // Indicates whether Alibaba Cloud DNS PrivateZone (PrivateZone) is enabled for the cluster. Valid values:
    // 
    // *   `true`: PrivateZone is enabled.
    // *   `false`: PrivateZone is dislabled.
    // 
    // Default value: false
    std::shared_ptr<bool> privateZone_ = nullptr;
    // The subtype of the cluster.
    // 
    // *   `Default`. ACK managed cluster. ACK managed clusters include ACK Basic clusters and ACK Pro clusters.
    // *   `Edge`: ACK Edge cluster. ACK Edge clusters include ACK Edge Basic clusters and ACK Edge Pro clusters.
    // *   `Serverless`: ACK Serverless cluster. ACK Serverless clusters include ACK Serverless Basic clusters and ACK Serverless Pro clusters.
    // *   `Lingjun`: ACK Lingjun Pro cluster.
    std::shared_ptr<string> profile_ = nullptr;
    // The kube-proxy mode. Valid values:
    // 
    // *   `iptables`: a mature and stable kube-proxy mode that uses iptables rules to conduct Service discovery and load balancing. The performance of this mode is limited by the size of the cluster. This mode is suitable for clusters that run a small number of Services.
    // *   `ipvs`: provides high performance and uses IP Virtual Server (IPVS). This allows you to configure service discovery and load balancing. This mode is suitable for clusters that are required to run a large number of services. We recommend that you use this mode in scenarios that require high load balancing performance.
    std::shared_ptr<string> proxyMode_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the cluster belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<DescribeClusterDetailResponseBodyRrsaConfig> rrsaConfig_ = nullptr;
    // The ID of the security group to which the cluster belongs.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The Service CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceCidr_ = nullptr;
    // The number of nodes in the cluster. Master nodes and worker nodes are included.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   `initial`: The cluster is being created.
    // *   `failed`: The cluster failed to be created.
    // *   `running`: The cluster is running.
    // *   `updating`: The cluster is being updated.
    // *   `updating_failed`: The cluster failed to be updated.
    // *   `scaling`: The cluster is being scaled.
    // *   `waiting`: The cluster is waiting for connection requests.
    // *   `disconnected`: The cluster is disconnected.
    // *   `stopped`: The cluster is stopped.
    // *   `deleting`: The cluster is being deleted.
    // *   `deleted`: The cluster is deleted.
    // *   `delete_failed`: The cluster failed to be deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The pod CIDR block.
    std::shared_ptr<string> subnetCidr_ = nullptr;
    // The resource labels of the cluster.
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
    // The time zone
    std::shared_ptr<string> timezone_ = nullptr;
    // The time when the cluster was updated.
    std::shared_ptr<string> updated_ = nullptr;
    // The ID of the VPC where the cluster is deployed. This parameter is required when you create a cluster.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitche. This field is deprecated. Use vswitch_ids to query the vSwitches on the control plane and vswitch_ids to query the vSwitches on the data plane.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The vSwitch for the control plane of the cluster.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
    // The name of the worker Resource Access Management (RAM) role. The RAM role is assigned to the worker nodes of the cluster to allow the worker nodes to manage Elastic Compute Service (ECS) instances.
    std::shared_ptr<string> workerRamRoleName_ = nullptr;
    // The ID of the zone within the region where the cluster is located.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
