// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELINDORMV2INSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELINDORMV2INSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class CreateLindormV2InstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLindormV2InstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_TO_JSON(ArchVersion, archVersion_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(CapacityStorageSize, capacityStorageSize_);
      DARABONBA_PTR_TO_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_TO_JSON(CloudStorageType, cloudStorageType_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterPattern, clusterPattern_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EnableCapacityStorage, enableCapacityStorage_);
      DARABONBA_PTR_TO_JSON(EngineList, engineList_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLindormV2InstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_FROM_JSON(ArchVersion, archVersion_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(CapacityStorageSize, capacityStorageSize_);
      DARABONBA_PTR_FROM_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_FROM_JSON(CloudStorageType, cloudStorageType_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterPattern, clusterPattern_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EnableCapacityStorage, enableCapacityStorage_);
      DARABONBA_PTR_FROM_JSON(EngineList, engineList_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateLindormV2InstanceRequest() = default ;
    CreateLindormV2InstanceRequest(const CreateLindormV2InstanceRequest &) = default ;
    CreateLindormV2InstanceRequest(CreateLindormV2InstanceRequest &&) = default ;
    CreateLindormV2InstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLindormV2InstanceRequest() = default ;
    CreateLindormV2InstanceRequest& operator=(const CreateLindormV2InstanceRequest &) = default ;
    CreateLindormV2InstanceRequest& operator=(CreateLindormV2InstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EngineList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EngineList& obj) { 
        DARABONBA_PTR_TO_JSON(EngineType, engineType_);
        DARABONBA_PTR_TO_JSON(NodeGroupList, nodeGroupList_);
      };
      friend void from_json(const Darabonba::Json& j, EngineList& obj) { 
        DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
        DARABONBA_PTR_FROM_JSON(NodeGroupList, nodeGroupList_);
      };
      EngineList() = default ;
      EngineList(const EngineList &) = default ;
      EngineList(EngineList &&) = default ;
      EngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EngineList() = default ;
      EngineList& operator=(const EngineList &) = default ;
      EngineList& operator=(EngineList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_TO_JSON(NodeDiskSize, nodeDiskSize_);
          DARABONBA_PTR_TO_JSON(NodeDiskType, nodeDiskType_);
          DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, NodeGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_FROM_JSON(NodeDiskSize, nodeDiskSize_);
          DARABONBA_PTR_FROM_JSON(NodeDiskType, nodeDiskType_);
          DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        };
        NodeGroupList() = default ;
        NodeGroupList(const NodeGroupList &) = default ;
        NodeGroupList(NodeGroupList &&) = default ;
        NodeGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeGroupList() = default ;
        NodeGroupList& operator=(const NodeGroupList &) = default ;
        NodeGroupList& operator=(NodeGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeCount_ == nullptr
        && this->nodeDiskSize_ == nullptr && this->nodeDiskType_ == nullptr && this->nodeSpec_ == nullptr && this->resourceGroupName_ == nullptr; };
        // nodeCount Field Functions 
        bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
        void deleteNodeCount() { this->nodeCount_ = nullptr;};
        inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
        inline NodeGroupList& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


        // nodeDiskSize Field Functions 
        bool hasNodeDiskSize() const { return this->nodeDiskSize_ != nullptr;};
        void deleteNodeDiskSize() { this->nodeDiskSize_ = nullptr;};
        inline int32_t getNodeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskSize_, 0) };
        inline NodeGroupList& setNodeDiskSize(int32_t nodeDiskSize) { DARABONBA_PTR_SET_VALUE(nodeDiskSize_, nodeDiskSize) };


        // nodeDiskType Field Functions 
        bool hasNodeDiskType() const { return this->nodeDiskType_ != nullptr;};
        void deleteNodeDiskType() { this->nodeDiskType_ = nullptr;};
        inline string getNodeDiskType() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskType_, "") };
        inline NodeGroupList& setNodeDiskType(string nodeDiskType) { DARABONBA_PTR_SET_VALUE(nodeDiskType_, nodeDiskType) };


        // nodeSpec Field Functions 
        bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
        void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
        inline string getNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
        inline NodeGroupList& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline NodeGroupList& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      protected:
        // This parameter is required.
        shared_ptr<int32_t> nodeCount_ {};
        shared_ptr<int32_t> nodeDiskSize_ {};
        shared_ptr<string> nodeDiskType_ {};
        // This parameter is required.
        shared_ptr<string> nodeSpec_ {};
        shared_ptr<string> resourceGroupName_ {};
      };

      virtual bool empty() const override { return this->engineType_ == nullptr
        && this->nodeGroupList_ == nullptr; };
      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline EngineList& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // nodeGroupList Field Functions 
      bool hasNodeGroupList() const { return this->nodeGroupList_ != nullptr;};
      void deleteNodeGroupList() { this->nodeGroupList_ = nullptr;};
      inline const vector<EngineList::NodeGroupList> & getNodeGroupList() const { DARABONBA_PTR_GET_CONST(nodeGroupList_, vector<EngineList::NodeGroupList>) };
      inline vector<EngineList::NodeGroupList> getNodeGroupList() { DARABONBA_PTR_GET(nodeGroupList_, vector<EngineList::NodeGroupList>) };
      inline EngineList& setNodeGroupList(const vector<EngineList::NodeGroupList> & nodeGroupList) { DARABONBA_PTR_SET_VALUE(nodeGroupList_, nodeGroupList) };
      inline EngineList& setNodeGroupList(vector<EngineList::NodeGroupList> && nodeGroupList) { DARABONBA_PTR_SET_RVALUE(nodeGroupList_, nodeGroupList) };


    protected:
      // This parameter is required.
      shared_ptr<string> engineType_ {};
      shared_ptr<vector<EngineList::NodeGroupList>> nodeGroupList_ {};
    };

    virtual bool empty() const override { return this->arbiterVSwitchId_ == nullptr
        && this->arbiterZoneId_ == nullptr && this->archVersion_ == nullptr && this->autoRenewDuration_ == nullptr && this->autoRenewal_ == nullptr && this->capacityStorageSize_ == nullptr
        && this->cloudStorageSize_ == nullptr && this->cloudStorageType_ == nullptr && this->clusterMode_ == nullptr && this->clusterPattern_ == nullptr && this->duration_ == nullptr
        && this->enableCapacityStorage_ == nullptr && this->engineList_ == nullptr && this->instanceAlias_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->payType_ == nullptr && this->pricingCycle_ == nullptr && this->primaryVSwitchId_ == nullptr && this->primaryZoneId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr && this->standbyVSwitchId_ == nullptr
        && this->standbyZoneId_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // arbiterVSwitchId Field Functions 
    bool hasArbiterVSwitchId() const { return this->arbiterVSwitchId_ != nullptr;};
    void deleteArbiterVSwitchId() { this->arbiterVSwitchId_ = nullptr;};
    inline string getArbiterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchId_, "") };
    inline CreateLindormV2InstanceRequest& setArbiterVSwitchId(string arbiterVSwitchId) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchId_, arbiterVSwitchId) };


    // arbiterZoneId Field Functions 
    bool hasArbiterZoneId() const { return this->arbiterZoneId_ != nullptr;};
    void deleteArbiterZoneId() { this->arbiterZoneId_ = nullptr;};
    inline string getArbiterZoneId() const { DARABONBA_PTR_GET_DEFAULT(arbiterZoneId_, "") };
    inline CreateLindormV2InstanceRequest& setArbiterZoneId(string arbiterZoneId) { DARABONBA_PTR_SET_VALUE(arbiterZoneId_, arbiterZoneId) };


    // archVersion Field Functions 
    bool hasArchVersion() const { return this->archVersion_ != nullptr;};
    void deleteArchVersion() { this->archVersion_ = nullptr;};
    inline string getArchVersion() const { DARABONBA_PTR_GET_DEFAULT(archVersion_, "") };
    inline CreateLindormV2InstanceRequest& setArchVersion(string archVersion) { DARABONBA_PTR_SET_VALUE(archVersion_, archVersion) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline string getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, "") };
    inline CreateLindormV2InstanceRequest& setAutoRenewDuration(string autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline CreateLindormV2InstanceRequest& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // capacityStorageSize Field Functions 
    bool hasCapacityStorageSize() const { return this->capacityStorageSize_ != nullptr;};
    void deleteCapacityStorageSize() { this->capacityStorageSize_ = nullptr;};
    inline int32_t getCapacityStorageSize() const { DARABONBA_PTR_GET_DEFAULT(capacityStorageSize_, 0) };
    inline CreateLindormV2InstanceRequest& setCapacityStorageSize(int32_t capacityStorageSize) { DARABONBA_PTR_SET_VALUE(capacityStorageSize_, capacityStorageSize) };


    // cloudStorageSize Field Functions 
    bool hasCloudStorageSize() const { return this->cloudStorageSize_ != nullptr;};
    void deleteCloudStorageSize() { this->cloudStorageSize_ = nullptr;};
    inline int32_t getCloudStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageSize_, 0) };
    inline CreateLindormV2InstanceRequest& setCloudStorageSize(int32_t cloudStorageSize) { DARABONBA_PTR_SET_VALUE(cloudStorageSize_, cloudStorageSize) };


    // cloudStorageType Field Functions 
    bool hasCloudStorageType() const { return this->cloudStorageType_ != nullptr;};
    void deleteCloudStorageType() { this->cloudStorageType_ = nullptr;};
    inline string getCloudStorageType() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageType_, "") };
    inline CreateLindormV2InstanceRequest& setCloudStorageType(string cloudStorageType) { DARABONBA_PTR_SET_VALUE(cloudStorageType_, cloudStorageType) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline CreateLindormV2InstanceRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterPattern Field Functions 
    bool hasClusterPattern() const { return this->clusterPattern_ != nullptr;};
    void deleteClusterPattern() { this->clusterPattern_ = nullptr;};
    inline string getClusterPattern() const { DARABONBA_PTR_GET_DEFAULT(clusterPattern_, "") };
    inline CreateLindormV2InstanceRequest& setClusterPattern(string clusterPattern) { DARABONBA_PTR_SET_VALUE(clusterPattern_, clusterPattern) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateLindormV2InstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enableCapacityStorage Field Functions 
    bool hasEnableCapacityStorage() const { return this->enableCapacityStorage_ != nullptr;};
    void deleteEnableCapacityStorage() { this->enableCapacityStorage_ = nullptr;};
    inline bool getEnableCapacityStorage() const { DARABONBA_PTR_GET_DEFAULT(enableCapacityStorage_, false) };
    inline CreateLindormV2InstanceRequest& setEnableCapacityStorage(bool enableCapacityStorage) { DARABONBA_PTR_SET_VALUE(enableCapacityStorage_, enableCapacityStorage) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<CreateLindormV2InstanceRequest::EngineList> & getEngineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<CreateLindormV2InstanceRequest::EngineList>) };
    inline vector<CreateLindormV2InstanceRequest::EngineList> getEngineList() { DARABONBA_PTR_GET(engineList_, vector<CreateLindormV2InstanceRequest::EngineList>) };
    inline CreateLindormV2InstanceRequest& setEngineList(const vector<CreateLindormV2InstanceRequest::EngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline CreateLindormV2InstanceRequest& setEngineList(vector<CreateLindormV2InstanceRequest::EngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline CreateLindormV2InstanceRequest& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateLindormV2InstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLindormV2InstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateLindormV2InstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateLindormV2InstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string getPrimaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline CreateLindormV2InstanceRequest& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string getPrimaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline CreateLindormV2InstanceRequest& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLindormV2InstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLindormV2InstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateLindormV2InstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateLindormV2InstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateLindormV2InstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string getStandbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline CreateLindormV2InstanceRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline CreateLindormV2InstanceRequest& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateLindormV2InstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateLindormV2InstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateLindormV2InstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> arbiterVSwitchId_ {};
    shared_ptr<string> arbiterZoneId_ {};
    shared_ptr<string> archVersion_ {};
    shared_ptr<string> autoRenewDuration_ {};
    shared_ptr<bool> autoRenewal_ {};
    shared_ptr<int32_t> capacityStorageSize_ {};
    shared_ptr<int32_t> cloudStorageSize_ {};
    shared_ptr<string> cloudStorageType_ {};
    shared_ptr<string> clusterMode_ {};
    shared_ptr<string> clusterPattern_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<bool> enableCapacityStorage_ {};
    // This parameter is required.
    shared_ptr<vector<CreateLindormV2InstanceRequest::EngineList>> engineList_ {};
    shared_ptr<string> instanceAlias_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> payType_ {};
    shared_ptr<string> pricingCycle_ {};
    shared_ptr<string> primaryVSwitchId_ {};
    shared_ptr<string> primaryZoneId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
    shared_ptr<string> standbyVSwitchId_ {};
    shared_ptr<string> standbyZoneId_ {};
    // This parameter is required.
    shared_ptr<string> VPCId_ {};
    shared_ptr<string> vSwitchId_ {};
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
