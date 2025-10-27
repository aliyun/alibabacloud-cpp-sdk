// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELINDORMV2INSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELINDORMV2INSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLindormV2InstanceRequestEngineList.hpp>
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
    virtual bool empty() const override { return this->capacityStorageSize_ == nullptr
        && return this->cloudStorageSize_ == nullptr && return this->cloudStorageType_ == nullptr && return this->enableCapacityStorage_ == nullptr && return this->engineList_ == nullptr && return this->instanceId_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->securityToken_ == nullptr; };
    // capacityStorageSize Field Functions 
    bool hasCapacityStorageSize() const { return this->capacityStorageSize_ != nullptr;};
    void deleteCapacityStorageSize() { this->capacityStorageSize_ = nullptr;};
    inline int32_t capacityStorageSize() const { DARABONBA_PTR_GET_DEFAULT(capacityStorageSize_, 0) };
    inline UpdateLindormV2InstanceRequest& setCapacityStorageSize(int32_t capacityStorageSize) { DARABONBA_PTR_SET_VALUE(capacityStorageSize_, capacityStorageSize) };


    // cloudStorageSize Field Functions 
    bool hasCloudStorageSize() const { return this->cloudStorageSize_ != nullptr;};
    void deleteCloudStorageSize() { this->cloudStorageSize_ = nullptr;};
    inline int32_t cloudStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageSize_, 0) };
    inline UpdateLindormV2InstanceRequest& setCloudStorageSize(int32_t cloudStorageSize) { DARABONBA_PTR_SET_VALUE(cloudStorageSize_, cloudStorageSize) };


    // cloudStorageType Field Functions 
    bool hasCloudStorageType() const { return this->cloudStorageType_ != nullptr;};
    void deleteCloudStorageType() { this->cloudStorageType_ = nullptr;};
    inline string cloudStorageType() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageType_, "") };
    inline UpdateLindormV2InstanceRequest& setCloudStorageType(string cloudStorageType) { DARABONBA_PTR_SET_VALUE(cloudStorageType_, cloudStorageType) };


    // enableCapacityStorage Field Functions 
    bool hasEnableCapacityStorage() const { return this->enableCapacityStorage_ != nullptr;};
    void deleteEnableCapacityStorage() { this->enableCapacityStorage_ = nullptr;};
    inline bool enableCapacityStorage() const { DARABONBA_PTR_GET_DEFAULT(enableCapacityStorage_, false) };
    inline UpdateLindormV2InstanceRequest& setEnableCapacityStorage(bool enableCapacityStorage) { DARABONBA_PTR_SET_VALUE(enableCapacityStorage_, enableCapacityStorage) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<UpdateLindormV2InstanceRequestEngineList> & engineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<UpdateLindormV2InstanceRequestEngineList>) };
    inline vector<UpdateLindormV2InstanceRequestEngineList> engineList() { DARABONBA_PTR_GET(engineList_, vector<UpdateLindormV2InstanceRequestEngineList>) };
    inline UpdateLindormV2InstanceRequest& setEngineList(const vector<UpdateLindormV2InstanceRequestEngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline UpdateLindormV2InstanceRequest& setEngineList(vector<UpdateLindormV2InstanceRequestEngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateLindormV2InstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateLindormV2InstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLindormV2InstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLindormV2InstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateLindormV2InstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateLindormV2InstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateLindormV2InstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<int32_t> capacityStorageSize_ = nullptr;
    std::shared_ptr<int32_t> cloudStorageSize_ = nullptr;
    std::shared_ptr<string> cloudStorageType_ = nullptr;
    std::shared_ptr<bool> enableCapacityStorage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UpdateLindormV2InstanceRequestEngineList>> engineList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
