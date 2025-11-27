// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCESRESPONSEBODYRCINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCESRESPONSEBODYRCINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstancesResponseBodyRCInstancesTagResources.hpp>
#include <alibabacloud/models/DescribeRCInstancesResponseBodyRCInstancesTags.hpp>
#include <alibabacloud/models/DescribeRCInstancesResponseBodyRCInstancesVpcAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstancesResponseBodyRCInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstancesResponseBodyRCInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(HostIp, hostIp_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstancesResponseBodyRCInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(HostIp, hostIp_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCInstancesResponseBodyRCInstances() = default ;
    DescribeRCInstancesResponseBodyRCInstances(const DescribeRCInstancesResponseBodyRCInstances &) = default ;
    DescribeRCInstancesResponseBodyRCInstances(DescribeRCInstancesResponseBodyRCInstances &&) = default ;
    DescribeRCInstancesResponseBodyRCInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstancesResponseBodyRCInstances() = default ;
    DescribeRCInstancesResponseBodyRCInstances& operator=(const DescribeRCInstancesResponseBodyRCInstances &) = default ;
    DescribeRCInstancesResponseBodyRCInstances& operator=(DescribeRCInstancesResponseBodyRCInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && return this->cpu_ == nullptr && return this->createMode_ == nullptr && return this->dbType_ == nullptr && return this->deploymentSetId_ == nullptr && return this->description_ == nullptr
        && return this->expiredTime_ == nullptr && return this->gmtCreated_ == nullptr && return this->hostIp_ == nullptr && return this->hostName_ == nullptr && return this->imageId_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr && return this->instanceTypeFamily_ == nullptr
        && return this->memory_ == nullptr && return this->nodeType_ == nullptr && return this->publicIp_ == nullptr && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->spotStrategy_ == nullptr && return this->status_ == nullptr && return this->tagResources_ == nullptr && return this->tags_ == nullptr && return this->vpcAttributes_ == nullptr
        && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeRCInstancesResponseBodyRCInstances& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline string createMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // hostIp Field Functions 
    bool hasHostIp() const { return this->hostIp_ != nullptr;};
    void deleteHostIp() { this->hostIp_ = nullptr;};
    inline string hostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeRCInstancesResponseBodyRCInstances& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const vector<Models::DescribeRCInstancesResponseBodyRCInstancesTagResources> & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<Models::DescribeRCInstancesResponseBodyRCInstancesTagResources>) };
    inline vector<Models::DescribeRCInstancesResponseBodyRCInstancesTagResources> tagResources() { DARABONBA_PTR_GET(tagResources_, vector<Models::DescribeRCInstancesResponseBodyRCInstancesTagResources>) };
    inline DescribeRCInstancesResponseBodyRCInstances& setTagResources(const vector<Models::DescribeRCInstancesResponseBodyRCInstancesTagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline DescribeRCInstancesResponseBodyRCInstances& setTagResources(vector<Models::DescribeRCInstancesResponseBodyRCInstancesTagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeRCInstancesResponseBodyRCInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeRCInstancesResponseBodyRCInstancesTags>) };
    inline vector<Models::DescribeRCInstancesResponseBodyRCInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeRCInstancesResponseBodyRCInstancesTags>) };
    inline DescribeRCInstancesResponseBodyRCInstances& setTags(const vector<Models::DescribeRCInstancesResponseBodyRCInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRCInstancesResponseBodyRCInstances& setTags(vector<Models::DescribeRCInstancesResponseBodyRCInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcAttributes Field Functions 
    bool hasVpcAttributes() const { return this->vpcAttributes_ != nullptr;};
    void deleteVpcAttributes() { this->vpcAttributes_ = nullptr;};
    inline const Models::DescribeRCInstancesResponseBodyRCInstancesVpcAttributes & vpcAttributes() const { DARABONBA_PTR_GET_CONST(vpcAttributes_, Models::DescribeRCInstancesResponseBodyRCInstancesVpcAttributes) };
    inline Models::DescribeRCInstancesResponseBodyRCInstancesVpcAttributes vpcAttributes() { DARABONBA_PTR_GET(vpcAttributes_, Models::DescribeRCInstancesResponseBodyRCInstancesVpcAttributes) };
    inline DescribeRCInstancesResponseBodyRCInstances& setVpcAttributes(const Models::DescribeRCInstancesResponseBodyRCInstancesVpcAttributes & vpcAttributes) { DARABONBA_PTR_SET_VALUE(vpcAttributes_, vpcAttributes) };
    inline DescribeRCInstancesResponseBodyRCInstances& setVpcAttributes(Models::DescribeRCInstancesResponseBodyRCInstancesVpcAttributes && vpcAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAttributes_, vpcAttributes) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCInstancesResponseBodyRCInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<string> createMode_ = nullptr;
    // The database type.
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The instance description.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The time when the task was created. The time is displayed in GMT.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The host IP address.
    std::shared_ptr<string> hostIp_ = nullptr;
    // The host name.
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The instance status. Valid values:
    // 
    // *   **Pending**
    // *   **Running**
    // *   **Starting**
    // *   **Stopping**
    // *   **Stopped**
    // 
    // >  If the value returned for the DescribeRCInstances operation is different from the value that is returned for the **DescribeRCInstanceAttribute** operation, the value returned for the **DescribeRCInstanceAttribute** operation shall prevail.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRCInstancesResponseBodyRCInstancesTagResources>> tagResources_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRCInstancesResponseBodyRCInstancesTags>> tags_ = nullptr;
    std::shared_ptr<Models::DescribeRCInstancesResponseBodyRCInstancesVpcAttributes> vpcAttributes_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
