// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDVBRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDVBRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class BindVbrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindVbrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGUid, smartAGUid_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VbrRegionId, vbrRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, BindVbrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGUid, smartAGUid_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VbrRegionId, vbrRegionId_);
    };
    BindVbrRequest() = default ;
    BindVbrRequest(const BindVbrRequest &) = default ;
    BindVbrRequest(BindVbrRequest &&) = default ;
    BindVbrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindVbrRequest() = default ;
    BindVbrRequest& operator=(const BindVbrRequest &) = default ;
    BindVbrRequest& operator=(BindVbrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->smartAGId_ == nullptr
        && this->smartAGUid_ == nullptr && this->vbrId_ == nullptr && this->vbrRegionId_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline BindVbrRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindVbrRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BindVbrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindVbrRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindVbrRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline BindVbrRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGUid Field Functions 
    bool hasSmartAGUid() const { return this->smartAGUid_ != nullptr;};
    void deleteSmartAGUid() { this->smartAGUid_ = nullptr;};
    inline int64_t getSmartAGUid() const { DARABONBA_PTR_GET_DEFAULT(smartAGUid_, 0L) };
    inline BindVbrRequest& setSmartAGUid(int64_t smartAGUid) { DARABONBA_PTR_SET_VALUE(smartAGUid_, smartAGUid) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline BindVbrRequest& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vbrRegionId Field Functions 
    bool hasVbrRegionId() const { return this->vbrRegionId_ != nullptr;};
    void deleteVbrRegionId() { this->vbrRegionId_ = nullptr;};
    inline string getVbrRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionId_, "") };
    inline BindVbrRequest& setVbrRegionId(string vbrRegionId) { DARABONBA_PTR_SET_VALUE(vbrRegionId_, vbrRegionId) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the Smart Access Gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The instance ID of the Smart Access Gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The Alibaba Cloud account ID that owns the Smart Access Gateway instance.
    shared_ptr<int64_t> smartAGUid_ {};
    // The instance ID of the virtual border routing instance to bind.
    // 
    // This parameter is required.
    shared_ptr<string> vbrId_ {};
    // The region ID of the virtual border router (VBR) to bind.
    // 
    // This parameter is required.
    shared_ptr<string> vbrRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
