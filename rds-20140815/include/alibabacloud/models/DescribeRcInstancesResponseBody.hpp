// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RCInstances, RCInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RCInstances, RCInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCInstancesResponseBody() = default ;
    DescribeRCInstancesResponseBody(const DescribeRCInstancesResponseBody &) = default ;
    DescribeRCInstancesResponseBody(DescribeRCInstancesResponseBody &&) = default ;
    DescribeRCInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstancesResponseBody() = default ;
    DescribeRCInstancesResponseBody& operator=(const DescribeRCInstancesResponseBody &) = default ;
    DescribeRCInstancesResponseBody& operator=(DescribeRCInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RCInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RCInstances& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EcsHostName, ecsHostName_);
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
        DARABONBA_PTR_TO_JSON(OSName, OSName_);
        DARABONBA_PTR_TO_JSON(OSType, OSType_);
        DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
        DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcAttributes, vpcAttributes_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, RCInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EcsHostName, ecsHostName_);
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
        DARABONBA_PTR_FROM_JSON(OSName, OSName_);
        DARABONBA_PTR_FROM_JSON(OSType, OSType_);
        DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
        DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcAttributes, vpcAttributes_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      RCInstances() = default ;
      RCInstances(const RCInstances &) = default ;
      RCInstances(RCInstances &&) = default ;
      RCInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RCInstances() = default ;
      RCInstances& operator=(const RCInstances &) = default ;
      RCInstances& operator=(RCInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcAttributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcAttributes& obj) { 
          DARABONBA_PTR_TO_JSON(NatIpAddress, natIpAddress_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, VpcAttributes& obj) { 
          DARABONBA_PTR_FROM_JSON(NatIpAddress, natIpAddress_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        VpcAttributes() = default ;
        VpcAttributes(const VpcAttributes &) = default ;
        VpcAttributes(VpcAttributes &&) = default ;
        VpcAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcAttributes() = default ;
        VpcAttributes& operator=(const VpcAttributes &) = default ;
        VpcAttributes& operator=(VpcAttributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->natIpAddress_ == nullptr
        && this->privateIpAddress_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // natIpAddress Field Functions 
        bool hasNatIpAddress() const { return this->natIpAddress_ != nullptr;};
        void deleteNatIpAddress() { this->natIpAddress_ = nullptr;};
        inline string getNatIpAddress() const { DARABONBA_PTR_GET_DEFAULT(natIpAddress_, "") };
        inline VpcAttributes& setNatIpAddress(string natIpAddress) { DARABONBA_PTR_SET_VALUE(natIpAddress_, natIpAddress) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline const vector<string> & getPrivateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<string>) };
        inline vector<string> getPrivateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<string>) };
        inline VpcAttributes& setPrivateIpAddress(const vector<string> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
        inline VpcAttributes& setPrivateIpAddress(vector<string> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline VpcAttributes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcAttributes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> natIpAddress_ {};
        shared_ptr<vector<string>> privateIpAddress_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Tags& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Tags& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      class TagResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagResources& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagResources& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagResources() = default ;
        TagResources(const TagResources &) = default ;
        TagResources(TagResources &&) = default ;
        TagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagResources() = default ;
        TagResources& operator=(const TagResources &) = default ;
        TagResources& operator=(TagResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline TagResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline TagResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagResources& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagResources& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->clusterName_ == nullptr
        && this->cpu_ == nullptr && this->createMode_ == nullptr && this->dbType_ == nullptr && this->deploymentSetId_ == nullptr && this->description_ == nullptr
        && this->ecsHostName_ == nullptr && this->expiredTime_ == nullptr && this->gmtCreated_ == nullptr && this->hostIp_ == nullptr && this->hostName_ == nullptr
        && this->imageId_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr
        && this->instanceTypeFamily_ == nullptr && this->memory_ == nullptr && this->nodeType_ == nullptr && this->OSName_ == nullptr && this->OSType_ == nullptr
        && this->publicIp_ == nullptr && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->spotStrategy_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->stoppedMode_ == nullptr && this->tagResources_ == nullptr && this->tags_ == nullptr && this->vpcAttributes_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline RCInstances& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline RCInstances& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline RCInstances& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline RCInstances& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // deploymentSetId Field Functions 
      bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
      void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
      inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
      inline RCInstances& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RCInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ecsHostName Field Functions 
      bool hasEcsHostName() const { return this->ecsHostName_ != nullptr;};
      void deleteEcsHostName() { this->ecsHostName_ = nullptr;};
      inline string getEcsHostName() const { DARABONBA_PTR_GET_DEFAULT(ecsHostName_, "") };
      inline RCInstances& setEcsHostName(string ecsHostName) { DARABONBA_PTR_SET_VALUE(ecsHostName_, ecsHostName) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline RCInstances& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline RCInstances& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // hostIp Field Functions 
      bool hasHostIp() const { return this->hostIp_ != nullptr;};
      void deleteHostIp() { this->hostIp_ = nullptr;};
      inline string getHostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
      inline RCInstances& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline RCInstances& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline RCInstances& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceChargeType Field Functions 
      bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
      void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
      inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
      inline RCInstances& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline RCInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline RCInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline RCInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // instanceTypeFamily Field Functions 
      bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
      void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
      inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
      inline RCInstances& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline RCInstances& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline RCInstances& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // OSName Field Functions 
      bool hasOSName() const { return this->OSName_ != nullptr;};
      void deleteOSName() { this->OSName_ = nullptr;};
      inline string getOSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
      inline RCInstances& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


      // OSType Field Functions 
      bool hasOSType() const { return this->OSType_ != nullptr;};
      void deleteOSType() { this->OSType_ = nullptr;};
      inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
      inline RCInstances& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


      // publicIp Field Functions 
      bool hasPublicIp() const { return this->publicIp_ != nullptr;};
      void deletePublicIp() { this->publicIp_ = nullptr;};
      inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
      inline RCInstances& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RCInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline RCInstances& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline RCInstances& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline RCInstances& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RCInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stoppedMode Field Functions 
      bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
      void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
      inline string getStoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
      inline RCInstances& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


      // tagResources Field Functions 
      bool hasTagResources() const { return this->tagResources_ != nullptr;};
      void deleteTagResources() { this->tagResources_ = nullptr;};
      inline const vector<RCInstances::TagResources> & getTagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<RCInstances::TagResources>) };
      inline vector<RCInstances::TagResources> getTagResources() { DARABONBA_PTR_GET(tagResources_, vector<RCInstances::TagResources>) };
      inline RCInstances& setTagResources(const vector<RCInstances::TagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
      inline RCInstances& setTagResources(vector<RCInstances::TagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<RCInstances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RCInstances::Tags>) };
      inline vector<RCInstances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<RCInstances::Tags>) };
      inline RCInstances& setTags(const vector<RCInstances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline RCInstances& setTags(vector<RCInstances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcAttributes Field Functions 
      bool hasVpcAttributes() const { return this->vpcAttributes_ != nullptr;};
      void deleteVpcAttributes() { this->vpcAttributes_ = nullptr;};
      inline const RCInstances::VpcAttributes & getVpcAttributes() const { DARABONBA_PTR_GET_CONST(vpcAttributes_, RCInstances::VpcAttributes) };
      inline RCInstances::VpcAttributes getVpcAttributes() { DARABONBA_PTR_GET(vpcAttributes_, RCInstances::VpcAttributes) };
      inline RCInstances& setVpcAttributes(const RCInstances::VpcAttributes & vpcAttributes) { DARABONBA_PTR_SET_VALUE(vpcAttributes_, vpcAttributes) };
      inline RCInstances& setVpcAttributes(RCInstances::VpcAttributes && vpcAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAttributes_, vpcAttributes) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline RCInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline RCInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The cluster name.
      shared_ptr<string> clusterName_ {};
      shared_ptr<int32_t> cpu_ {};
      shared_ptr<string> createMode_ {};
      // The database type.
      shared_ptr<string> dbType_ {};
      shared_ptr<string> deploymentSetId_ {};
      // The instance description.
      shared_ptr<string> description_ {};
      shared_ptr<string> ecsHostName_ {};
      shared_ptr<string> expiredTime_ {};
      // The time when the task was created. The time is displayed in GMT.
      shared_ptr<string> gmtCreated_ {};
      // The host IP address.
      shared_ptr<string> hostIp_ {};
      // The host name.
      shared_ptr<string> hostName_ {};
      shared_ptr<string> imageId_ {};
      shared_ptr<string> instanceChargeType_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> instanceType_ {};
      shared_ptr<string> instanceTypeFamily_ {};
      shared_ptr<int32_t> memory_ {};
      shared_ptr<string> nodeType_ {};
      shared_ptr<string> OSName_ {};
      shared_ptr<string> OSType_ {};
      shared_ptr<string> publicIp_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<string> spotStrategy_ {};
      shared_ptr<string> startTime_ {};
      // The instance status. Valid values:
      // 
      // *   **Pending**
      // *   **Running**
      // *   **Starting**
      // *   **Stopping**
      // *   **Stopped**
      // 
      // >  If the value returned for the DescribeRCInstances operation is different from the value that is returned for the **DescribeRCInstanceAttribute** operation, the value returned for the **DescribeRCInstanceAttribute** operation shall prevail.
      shared_ptr<string> status_ {};
      shared_ptr<string> stoppedMode_ {};
      shared_ptr<vector<RCInstances::TagResources>> tagResources_ {};
      shared_ptr<vector<RCInstances::Tags>> tags_ {};
      shared_ptr<RCInstances::VpcAttributes> vpcAttributes_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->RCInstances_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRCInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRCInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // RCInstances Field Functions 
    bool hasRCInstances() const { return this->RCInstances_ != nullptr;};
    void deleteRCInstances() { this->RCInstances_ = nullptr;};
    inline const vector<DescribeRCInstancesResponseBody::RCInstances> & getRCInstances() const { DARABONBA_PTR_GET_CONST(RCInstances_, vector<DescribeRCInstancesResponseBody::RCInstances>) };
    inline vector<DescribeRCInstancesResponseBody::RCInstances> getRCInstances() { DARABONBA_PTR_GET(RCInstances_, vector<DescribeRCInstancesResponseBody::RCInstances>) };
    inline DescribeRCInstancesResponseBody& setRCInstances(const vector<DescribeRCInstancesResponseBody::RCInstances> & rCInstances) { DARABONBA_PTR_SET_VALUE(RCInstances_, rCInstances) };
    inline DescribeRCInstancesResponseBody& setRCInstances(vector<DescribeRCInstancesResponseBody::RCInstances> && rCInstances) { DARABONBA_PTR_SET_RVALUE(RCInstances_, rCInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRCInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The details of the instance.
    shared_ptr<vector<DescribeRCInstancesResponseBody::RCInstances>> RCInstances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
