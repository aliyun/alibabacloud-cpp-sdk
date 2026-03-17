// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTSAGINSTANCETOVBRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTSAGINSTANCETOVBRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class GrantSagInstanceToVbrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantSagInstanceToVbrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_TO_JSON(VbrRegionId, vbrRegionId_);
      DARABONBA_PTR_TO_JSON(VbrUid, vbrUid_);
    };
    friend void from_json(const Darabonba::Json& j, GrantSagInstanceToVbrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_FROM_JSON(VbrRegionId, vbrRegionId_);
      DARABONBA_PTR_FROM_JSON(VbrUid, vbrUid_);
    };
    GrantSagInstanceToVbrRequest() = default ;
    GrantSagInstanceToVbrRequest(const GrantSagInstanceToVbrRequest &) = default ;
    GrantSagInstanceToVbrRequest(GrantSagInstanceToVbrRequest &&) = default ;
    GrantSagInstanceToVbrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantSagInstanceToVbrRequest() = default ;
    GrantSagInstanceToVbrRequest& operator=(const GrantSagInstanceToVbrRequest &) = default ;
    GrantSagInstanceToVbrRequest& operator=(GrantSagInstanceToVbrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->smartAGId_ == nullptr
        && this->vbrInstanceId_ == nullptr && this->vbrRegionId_ == nullptr && this->vbrUid_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GrantSagInstanceToVbrRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GrantSagInstanceToVbrRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrantSagInstanceToVbrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GrantSagInstanceToVbrRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GrantSagInstanceToVbrRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline GrantSagInstanceToVbrRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // vbrInstanceId Field Functions 
    bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
    void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
    inline string getVbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
    inline GrantSagInstanceToVbrRequest& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


    // vbrRegionId Field Functions 
    bool hasVbrRegionId() const { return this->vbrRegionId_ != nullptr;};
    void deleteVbrRegionId() { this->vbrRegionId_ = nullptr;};
    inline string getVbrRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionId_, "") };
    inline GrantSagInstanceToVbrRequest& setVbrRegionId(string vbrRegionId) { DARABONBA_PTR_SET_VALUE(vbrRegionId_, vbrRegionId) };


    // vbrUid Field Functions 
    bool hasVbrUid() const { return this->vbrUid_ != nullptr;};
    void deleteVbrUid() { this->vbrUid_ = nullptr;};
    inline int64_t getVbrUid() const { DARABONBA_PTR_GET_DEFAULT(vbrUid_, 0L) };
    inline GrantSagInstanceToVbrRequest& setVbrUid(int64_t vbrUid) { DARABONBA_PTR_SET_VALUE(vbrUid_, vbrUid) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The ID of the VBR.
    // 
    // This parameter is required.
    shared_ptr<string> vbrInstanceId_ {};
    // The ID of the region where the VBR is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> vbrRegionId_ {};
    // The user ID (UID) of the account to which the VBR belongs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> vbrUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
