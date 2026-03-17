// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEINSTANCEFROMCBNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEINSTANCEFROMCBNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class RevokeInstanceFromCbnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeInstanceFromCbnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnInstanceId, ccnInstanceId_);
      DARABONBA_PTR_TO_JSON(CenInstanceId, cenInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeInstanceFromCbnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnInstanceId, ccnInstanceId_);
      DARABONBA_PTR_FROM_JSON(CenInstanceId, cenInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    RevokeInstanceFromCbnRequest() = default ;
    RevokeInstanceFromCbnRequest(const RevokeInstanceFromCbnRequest &) = default ;
    RevokeInstanceFromCbnRequest(RevokeInstanceFromCbnRequest &&) = default ;
    RevokeInstanceFromCbnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeInstanceFromCbnRequest() = default ;
    RevokeInstanceFromCbnRequest& operator=(const RevokeInstanceFromCbnRequest &) = default ;
    RevokeInstanceFromCbnRequest& operator=(RevokeInstanceFromCbnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccnInstanceId_ == nullptr
        && this->cenInstanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // ccnInstanceId Field Functions 
    bool hasCcnInstanceId() const { return this->ccnInstanceId_ != nullptr;};
    void deleteCcnInstanceId() { this->ccnInstanceId_ = nullptr;};
    inline string getCcnInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ccnInstanceId_, "") };
    inline RevokeInstanceFromCbnRequest& setCcnInstanceId(string ccnInstanceId) { DARABONBA_PTR_SET_VALUE(ccnInstanceId_, ccnInstanceId) };


    // cenInstanceId Field Functions 
    bool hasCenInstanceId() const { return this->cenInstanceId_ != nullptr;};
    void deleteCenInstanceId() { this->cenInstanceId_ = nullptr;};
    inline string getCenInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cenInstanceId_, "") };
    inline RevokeInstanceFromCbnRequest& setCenInstanceId(string cenInstanceId) { DARABONBA_PTR_SET_VALUE(cenInstanceId_, cenInstanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RevokeInstanceFromCbnRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RevokeInstanceFromCbnRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RevokeInstanceFromCbnRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RevokeInstanceFromCbnRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RevokeInstanceFromCbnRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the CCN instance.
    // 
    // This parameter is required.
    shared_ptr<string> ccnInstanceId_ {};
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    shared_ptr<string> cenInstanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the CCN instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
