// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyReservedInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReservedInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceName, reservedInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReservedInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceName, reservedInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyReservedInstanceAttributeRequest() = default ;
    ModifyReservedInstanceAttributeRequest(const ModifyReservedInstanceAttributeRequest &) = default ;
    ModifyReservedInstanceAttributeRequest(ModifyReservedInstanceAttributeRequest &&) = default ;
    ModifyReservedInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReservedInstanceAttributeRequest() = default ;
    ModifyReservedInstanceAttributeRequest& operator=(const ModifyReservedInstanceAttributeRequest &) = default ;
    ModifyReservedInstanceAttributeRequest& operator=(ModifyReservedInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->reservedInstanceId_ == nullptr && this->reservedInstanceName_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyReservedInstanceAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyReservedInstanceAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyReservedInstanceAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyReservedInstanceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedInstanceId Field Functions 
    bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
    void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
    inline string getReservedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceId_, "") };
    inline ModifyReservedInstanceAttributeRequest& setReservedInstanceId(string reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };


    // reservedInstanceName Field Functions 
    bool hasReservedInstanceName() const { return this->reservedInstanceName_ != nullptr;};
    void deleteReservedInstanceName() { this->reservedInstanceName_ = nullptr;};
    inline string getReservedInstanceName() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceName_, "") };
    inline ModifyReservedInstanceAttributeRequest& setReservedInstanceName(string reservedInstanceName) { DARABONBA_PTR_SET_VALUE(reservedInstanceName_, reservedInstanceName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyReservedInstanceAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyReservedInstanceAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The error code.
    shared_ptr<string> description_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the reserved instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The new name of the reserved instance. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> reservedInstanceId_ {};
    // The new description of the reserved instance. The description must be 2 to 256 characters in length. It cannot start with `http://` or `https://`.
    // 
    // This parameter is empty by default.
    shared_ptr<string> reservedInstanceName_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
