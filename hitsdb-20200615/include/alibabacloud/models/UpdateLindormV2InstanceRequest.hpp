// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELINDORMV2INSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELINDORMV2INSTANCEREQUEST_HPP_
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
  class UpdateLindormV2InstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLindormV2InstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityStorageSize, capacityStorageSize_);
      DARABONBA_PTR_TO_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_TO_JSON(CloudStorageType, cloudStorageType_);
      DARABONBA_PTR_TO_JSON(EnableCapacityStorage, enableCapacityStorage_);
      DARABONBA_PTR_TO_JSON(EngineList, engineList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLindormV2InstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityStorageSize, capacityStorageSize_);
      DARABONBA_PTR_FROM_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_FROM_JSON(CloudStorageType, cloudStorageType_);
      DARABONBA_PTR_FROM_JSON(EnableCapacityStorage, enableCapacityStorage_);
      DARABONBA_PTR_FROM_JSON(EngineList, engineList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    UpdateLindormV2InstanceRequest() = default ;
    UpdateLindormV2InstanceRequest(const UpdateLindormV2InstanceRequest &) = default ;
    UpdateLindormV2InstanceRequest(UpdateLindormV2InstanceRequest &&) = default ;
    UpdateLindormV2InstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLindormV2InstanceRequest() = default ;
    UpdateLindormV2InstanceRequest& operator=(const UpdateLindormV2InstanceRequest &) = default ;
    UpdateLindormV2InstanceRequest& operator=(UpdateLindormV2InstanceRequest &&) = default ;
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
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_TO_JSON(NodeDiskSize, nodeDiskSize_);
          DARABONBA_PTR_TO_JSON(NodeDiskType, nodeDiskType_);
          DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, NodeGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
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
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->nodeCount_ == nullptr && this->nodeDiskSize_ == nullptr && this->nodeDiskType_ == nullptr && this->nodeSpec_ == nullptr && this->resourceGroupName_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline NodeGroupList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


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
        shared_ptr<string> groupId_ {};
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

    virtual bool empty() const override { return this->capacityStorageSize_ == nullptr
        && this->cloudStorageSize_ == nullptr && this->cloudStorageType_ == nullptr && this->enableCapacityStorage_ == nullptr && this->engineList_ == nullptr && this->instanceId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityToken_ == nullptr; };
    // capacityStorageSize Field Functions 
    bool hasCapacityStorageSize() const { return this->capacityStorageSize_ != nullptr;};
    void deleteCapacityStorageSize() { this->capacityStorageSize_ = nullptr;};
    inline int32_t getCapacityStorageSize() const { DARABONBA_PTR_GET_DEFAULT(capacityStorageSize_, 0) };
    inline UpdateLindormV2InstanceRequest& setCapacityStorageSize(int32_t capacityStorageSize) { DARABONBA_PTR_SET_VALUE(capacityStorageSize_, capacityStorageSize) };


    // cloudStorageSize Field Functions 
    bool hasCloudStorageSize() const { return this->cloudStorageSize_ != nullptr;};
    void deleteCloudStorageSize() { this->cloudStorageSize_ = nullptr;};
    inline int32_t getCloudStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageSize_, 0) };
    inline UpdateLindormV2InstanceRequest& setCloudStorageSize(int32_t cloudStorageSize) { DARABONBA_PTR_SET_VALUE(cloudStorageSize_, cloudStorageSize) };


    // cloudStorageType Field Functions 
    bool hasCloudStorageType() const { return this->cloudStorageType_ != nullptr;};
    void deleteCloudStorageType() { this->cloudStorageType_ = nullptr;};
    inline string getCloudStorageType() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageType_, "") };
    inline UpdateLindormV2InstanceRequest& setCloudStorageType(string cloudStorageType) { DARABONBA_PTR_SET_VALUE(cloudStorageType_, cloudStorageType) };


    // enableCapacityStorage Field Functions 
    bool hasEnableCapacityStorage() const { return this->enableCapacityStorage_ != nullptr;};
    void deleteEnableCapacityStorage() { this->enableCapacityStorage_ = nullptr;};
    inline bool getEnableCapacityStorage() const { DARABONBA_PTR_GET_DEFAULT(enableCapacityStorage_, false) };
    inline UpdateLindormV2InstanceRequest& setEnableCapacityStorage(bool enableCapacityStorage) { DARABONBA_PTR_SET_VALUE(enableCapacityStorage_, enableCapacityStorage) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<UpdateLindormV2InstanceRequest::EngineList> & getEngineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<UpdateLindormV2InstanceRequest::EngineList>) };
    inline vector<UpdateLindormV2InstanceRequest::EngineList> getEngineList() { DARABONBA_PTR_GET(engineList_, vector<UpdateLindormV2InstanceRequest::EngineList>) };
    inline UpdateLindormV2InstanceRequest& setEngineList(const vector<UpdateLindormV2InstanceRequest::EngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline UpdateLindormV2InstanceRequest& setEngineList(vector<UpdateLindormV2InstanceRequest::EngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateLindormV2InstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateLindormV2InstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLindormV2InstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLindormV2InstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateLindormV2InstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateLindormV2InstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateLindormV2InstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    shared_ptr<int32_t> capacityStorageSize_ {};
    shared_ptr<int32_t> cloudStorageSize_ {};
    shared_ptr<string> cloudStorageType_ {};
    shared_ptr<bool> enableCapacityStorage_ {};
    // This parameter is required.
    shared_ptr<vector<UpdateLindormV2InstanceRequest::EngineList>> engineList_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
