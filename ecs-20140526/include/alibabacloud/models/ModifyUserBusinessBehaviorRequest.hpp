// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERBUSINESSBEHAVIORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERBUSINESSBEHAVIORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyUserBusinessBehaviorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserBusinessBehaviorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(statusKey, statusKey_);
      DARABONBA_PTR_TO_JSON(statusValue, statusValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserBusinessBehaviorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(statusKey, statusKey_);
      DARABONBA_PTR_FROM_JSON(statusValue, statusValue_);
    };
    ModifyUserBusinessBehaviorRequest() = default ;
    ModifyUserBusinessBehaviorRequest(const ModifyUserBusinessBehaviorRequest &) = default ;
    ModifyUserBusinessBehaviorRequest(ModifyUserBusinessBehaviorRequest &&) = default ;
    ModifyUserBusinessBehaviorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserBusinessBehaviorRequest() = default ;
    ModifyUserBusinessBehaviorRequest& operator=(const ModifyUserBusinessBehaviorRequest &) = default ;
    ModifyUserBusinessBehaviorRequest& operator=(ModifyUserBusinessBehaviorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->statusKey_ == nullptr
        && this->statusValue_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyUserBusinessBehaviorRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyUserBusinessBehaviorRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserBusinessBehaviorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyUserBusinessBehaviorRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyUserBusinessBehaviorRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // statusKey Field Functions 
    bool hasStatusKey() const { return this->statusKey_ != nullptr;};
    void deleteStatusKey() { this->statusKey_ = nullptr;};
    inline string getStatusKey() const { DARABONBA_PTR_GET_DEFAULT(statusKey_, "") };
    inline ModifyUserBusinessBehaviorRequest& setStatusKey(string statusKey) { DARABONBA_PTR_SET_VALUE(statusKey_, statusKey) };


    // statusValue Field Functions 
    bool hasStatusValue() const { return this->statusValue_ != nullptr;};
    void deleteStatusValue() { this->statusValue_ = nullptr;};
    inline string getStatusValue() const { DARABONBA_PTR_GET_DEFAULT(statusValue_, "") };
    inline ModifyUserBusinessBehaviorRequest& setStatusValue(string statusValue) { DARABONBA_PTR_SET_VALUE(statusValue_, statusValue) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> statusKey_ {};
    // This parameter is required.
    shared_ptr<string> statusValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
