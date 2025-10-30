// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClustersResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(current_version, currentVersion_);
      DARABONBA_PTR_TO_JSON(data_disk_category, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(data_disk_size, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(docker_version, dockerVersion_);
      DARABONBA_PTR_TO_JSON(external_loadbalancer_id, externalLoadbalancerId_);
      DARABONBA_PTR_TO_JSON(init_version, initVersion_);
      DARABONBA_PTR_TO_JSON(master_url, masterUrl_);
      DARABONBA_PTR_TO_JSON(meta_data, metaData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(network_mode, networkMode_);
      DARABONBA_PTR_TO_JSON(private_zone, privateZone_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(subnet_cidr, subnetCidr_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(vpc_id, vpcId_);
      DARABONBA_PTR_TO_JSON(vswitch_cidr, vswitchCidr_);
      DARABONBA_PTR_TO_JSON(vswitch_id, vswitchId_);
      DARABONBA_PTR_TO_JSON(worker_ram_role_name, workerRamRoleName_);
      DARABONBA_PTR_TO_JSON(zone_id, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(current_version, currentVersion_);
      DARABONBA_PTR_FROM_JSON(data_disk_category, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(data_disk_size, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(docker_version, dockerVersion_);
      DARABONBA_PTR_FROM_JSON(external_loadbalancer_id, externalLoadbalancerId_);
      DARABONBA_PTR_FROM_JSON(init_version, initVersion_);
      DARABONBA_PTR_FROM_JSON(master_url, masterUrl_);
      DARABONBA_PTR_FROM_JSON(meta_data, metaData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(network_mode, networkMode_);
      DARABONBA_PTR_FROM_JSON(private_zone, privateZone_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(subnet_cidr, subnetCidr_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(vpc_id, vpcId_);
      DARABONBA_PTR_FROM_JSON(vswitch_cidr, vswitchCidr_);
      DARABONBA_PTR_FROM_JSON(vswitch_id, vswitchId_);
      DARABONBA_PTR_FROM_JSON(worker_ram_role_name, workerRamRoleName_);
      DARABONBA_PTR_FROM_JSON(zone_id, zoneId_);
    };
    DescribeClustersResponseBody() = default ;
    DescribeClustersResponseBody(const DescribeClustersResponseBody &) = default ;
    DescribeClustersResponseBody(DescribeClustersResponseBody &&) = default ;
    DescribeClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersResponseBody() = default ;
    DescribeClustersResponseBody& operator=(const DescribeClustersResponseBody &) = default ;
    DescribeClustersResponseBody& operator=(DescribeClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterType_ == nullptr && return this->created_ == nullptr && return this->currentVersion_ == nullptr && return this->dataDiskCategory_ == nullptr && return this->dataDiskSize_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->dockerVersion_ == nullptr && return this->externalLoadbalancerId_ == nullptr && return this->initVersion_ == nullptr && return this->masterUrl_ == nullptr
        && return this->metaData_ == nullptr && return this->name_ == nullptr && return this->networkMode_ == nullptr && return this->privateZone_ == nullptr && return this->profile_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr && return this->size_ == nullptr && return this->state_ == nullptr
        && return this->subnetCidr_ == nullptr && return this->tags_ == nullptr && return this->updated_ == nullptr && return this->vpcId_ == nullptr && return this->vswitchCidr_ == nullptr
        && return this->vswitchId_ == nullptr && return this->workerRamRoleName_ == nullptr && return this->zoneId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClustersResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClustersResponseBody& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClustersResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeClustersResponseBody& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string dataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline DescribeClustersResponseBody& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int64_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0L) };
    inline DescribeClustersResponseBody& setDataDiskSize(int64_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeClustersResponseBody& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // dockerVersion Field Functions 
    bool hasDockerVersion() const { return this->dockerVersion_ != nullptr;};
    void deleteDockerVersion() { this->dockerVersion_ = nullptr;};
    inline string dockerVersion() const { DARABONBA_PTR_GET_DEFAULT(dockerVersion_, "") };
    inline DescribeClustersResponseBody& setDockerVersion(string dockerVersion) { DARABONBA_PTR_SET_VALUE(dockerVersion_, dockerVersion) };


    // externalLoadbalancerId Field Functions 
    bool hasExternalLoadbalancerId() const { return this->externalLoadbalancerId_ != nullptr;};
    void deleteExternalLoadbalancerId() { this->externalLoadbalancerId_ = nullptr;};
    inline string externalLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(externalLoadbalancerId_, "") };
    inline DescribeClustersResponseBody& setExternalLoadbalancerId(string externalLoadbalancerId) { DARABONBA_PTR_SET_VALUE(externalLoadbalancerId_, externalLoadbalancerId) };


    // initVersion Field Functions 
    bool hasInitVersion() const { return this->initVersion_ != nullptr;};
    void deleteInitVersion() { this->initVersion_ = nullptr;};
    inline string initVersion() const { DARABONBA_PTR_GET_DEFAULT(initVersion_, "") };
    inline DescribeClustersResponseBody& setInitVersion(string initVersion) { DARABONBA_PTR_SET_VALUE(initVersion_, initVersion) };


    // masterUrl Field Functions 
    bool hasMasterUrl() const { return this->masterUrl_ != nullptr;};
    void deleteMasterUrl() { this->masterUrl_ = nullptr;};
    inline string masterUrl() const { DARABONBA_PTR_GET_DEFAULT(masterUrl_, "") };
    inline DescribeClustersResponseBody& setMasterUrl(string masterUrl) { DARABONBA_PTR_SET_VALUE(masterUrl_, masterUrl) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline string metaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
    inline DescribeClustersResponseBody& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClustersResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline DescribeClustersResponseBody& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // privateZone Field Functions 
    bool hasPrivateZone() const { return this->privateZone_ != nullptr;};
    void deletePrivateZone() { this->privateZone_ = nullptr;};
    inline bool privateZone() const { DARABONBA_PTR_GET_DEFAULT(privateZone_, false) };
    inline DescribeClustersResponseBody& setPrivateZone(bool privateZone) { DARABONBA_PTR_SET_VALUE(privateZone_, privateZone) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeClustersResponseBody& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClustersResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClustersResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClustersResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeClustersResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClustersResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subnetCidr Field Functions 
    bool hasSubnetCidr() const { return this->subnetCidr_ != nullptr;};
    void deleteSubnetCidr() { this->subnetCidr_ = nullptr;};
    inline string subnetCidr() const { DARABONBA_PTR_GET_DEFAULT(subnetCidr_, "") };
    inline DescribeClustersResponseBody& setSubnetCidr(string subnetCidr) { DARABONBA_PTR_SET_VALUE(subnetCidr_, subnetCidr) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeClustersResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeClustersResponseBodyTags>) };
    inline vector<Models::DescribeClustersResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeClustersResponseBodyTags>) };
    inline DescribeClustersResponseBody& setTags(const vector<Models::DescribeClustersResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeClustersResponseBody& setTags(vector<Models::DescribeClustersResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeClustersResponseBody& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClustersResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchCidr Field Functions 
    bool hasVswitchCidr() const { return this->vswitchCidr_ != nullptr;};
    void deleteVswitchCidr() { this->vswitchCidr_ = nullptr;};
    inline string vswitchCidr() const { DARABONBA_PTR_GET_DEFAULT(vswitchCidr_, "") };
    inline DescribeClustersResponseBody& setVswitchCidr(string vswitchCidr) { DARABONBA_PTR_SET_VALUE(vswitchCidr_, vswitchCidr) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeClustersResponseBody& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // workerRamRoleName Field Functions 
    bool hasWorkerRamRoleName() const { return this->workerRamRoleName_ != nullptr;};
    void deleteWorkerRamRoleName() { this->workerRamRoleName_ = nullptr;};
    inline string workerRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(workerRamRoleName_, "") };
    inline DescribeClustersResponseBody& setWorkerRamRoleName(string workerRamRoleName) { DARABONBA_PTR_SET_VALUE(workerRamRoleName_, workerRamRoleName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeClustersResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<string> created_ = nullptr;
    std::shared_ptr<string> currentVersion_ = nullptr;
    std::shared_ptr<string> dataDiskCategory_ = nullptr;
    std::shared_ptr<int64_t> dataDiskSize_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    std::shared_ptr<string> dockerVersion_ = nullptr;
    std::shared_ptr<string> externalLoadbalancerId_ = nullptr;
    std::shared_ptr<string> initVersion_ = nullptr;
    std::shared_ptr<string> masterUrl_ = nullptr;
    std::shared_ptr<string> metaData_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> networkMode_ = nullptr;
    std::shared_ptr<bool> privateZone_ = nullptr;
    std::shared_ptr<string> profile_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> subnetCidr_ = nullptr;
    std::shared_ptr<vector<Models::DescribeClustersResponseBodyTags>> tags_ = nullptr;
    std::shared_ptr<string> updated_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vswitchCidr_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
    std::shared_ptr<string> workerRamRoleName_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
