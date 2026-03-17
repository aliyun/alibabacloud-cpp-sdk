// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTSAGINSTANCETOCCNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTSAGINSTANCETOCCNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class GrantSagInstanceToCcnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantSagInstanceToCcnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnInstanceId, ccnInstanceId_);
      DARABONBA_PTR_TO_JSON(CcnUid, ccnUid_);
      DARABONBA_PTR_TO_JSON(GrantTrafficService, grantTrafficService_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantSagInstanceToCcnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnInstanceId, ccnInstanceId_);
      DARABONBA_PTR_FROM_JSON(CcnUid, ccnUid_);
      DARABONBA_PTR_FROM_JSON(GrantTrafficService, grantTrafficService_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
    };
    GrantSagInstanceToCcnRequest() = default ;
    GrantSagInstanceToCcnRequest(const GrantSagInstanceToCcnRequest &) = default ;
    GrantSagInstanceToCcnRequest(GrantSagInstanceToCcnRequest &&) = default ;
    GrantSagInstanceToCcnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantSagInstanceToCcnRequest() = default ;
    GrantSagInstanceToCcnRequest& operator=(const GrantSagInstanceToCcnRequest &) = default ;
    GrantSagInstanceToCcnRequest& operator=(GrantSagInstanceToCcnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccnInstanceId_ == nullptr
        && this->ccnUid_ == nullptr && this->grantTrafficService_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->smartAGId_ == nullptr; };
    // ccnInstanceId Field Functions 
    bool hasCcnInstanceId() const { return this->ccnInstanceId_ != nullptr;};
    void deleteCcnInstanceId() { this->ccnInstanceId_ = nullptr;};
    inline string getCcnInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ccnInstanceId_, "") };
    inline GrantSagInstanceToCcnRequest& setCcnInstanceId(string ccnInstanceId) { DARABONBA_PTR_SET_VALUE(ccnInstanceId_, ccnInstanceId) };


    // ccnUid Field Functions 
    bool hasCcnUid() const { return this->ccnUid_ != nullptr;};
    void deleteCcnUid() { this->ccnUid_ = nullptr;};
    inline int64_t getCcnUid() const { DARABONBA_PTR_GET_DEFAULT(ccnUid_, 0L) };
    inline GrantSagInstanceToCcnRequest& setCcnUid(int64_t ccnUid) { DARABONBA_PTR_SET_VALUE(ccnUid_, ccnUid) };


    // grantTrafficService Field Functions 
    bool hasGrantTrafficService() const { return this->grantTrafficService_ != nullptr;};
    void deleteGrantTrafficService() { this->grantTrafficService_ = nullptr;};
    inline bool getGrantTrafficService() const { DARABONBA_PTR_GET_DEFAULT(grantTrafficService_, false) };
    inline GrantSagInstanceToCcnRequest& setGrantTrafficService(bool grantTrafficService) { DARABONBA_PTR_SET_VALUE(grantTrafficService_, grantTrafficService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GrantSagInstanceToCcnRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GrantSagInstanceToCcnRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrantSagInstanceToCcnRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GrantSagInstanceToCcnRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GrantSagInstanceToCcnRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline GrantSagInstanceToCcnRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


  protected:
    // The ID of the CCN instance.
    // 
    // This parameter is required.
    shared_ptr<string> ccnInstanceId_ {};
    // The ID of the Alibaba Cloud account to which the CCN instance belongs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ccnUid_ {};
    // Specifies whether to grant the CCN instance permissions to manage network traffic from the SAG instance.
    // 
    // After the CCN instance is granted the permissions, the CCN instance can redirect the network traffic sent from the SAG instance to the Internet to Cloud Security Access Service (CSAS) for security audit.
    // 
    // *   **true**: grants permissions.
    // *   **false**: does not grant permissions.
    // 
    // >  If you set the value to true and the SAG instance connected to the CCN instance has the secure rerouting feature enabled, you cannot revoke the permissions.
    shared_ptr<bool> grantTrafficService_ {};
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
