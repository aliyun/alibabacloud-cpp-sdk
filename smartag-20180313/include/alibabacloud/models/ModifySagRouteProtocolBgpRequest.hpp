// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGROUTEPROTOCOLBGPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGROUTEPROTOCOLBGPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagRouteProtocolBgpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagRouteProtocolBgpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoldTime, holdTime_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_TO_JSON(LocalAs, localAs_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGSn, smartAGSn_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagRouteProtocolBgpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoldTime, holdTime_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_FROM_JSON(LocalAs, localAs_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGSn, smartAGSn_);
    };
    ModifySagRouteProtocolBgpRequest() = default ;
    ModifySagRouteProtocolBgpRequest(const ModifySagRouteProtocolBgpRequest &) = default ;
    ModifySagRouteProtocolBgpRequest(ModifySagRouteProtocolBgpRequest &&) = default ;
    ModifySagRouteProtocolBgpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagRouteProtocolBgpRequest() = default ;
    ModifySagRouteProtocolBgpRequest& operator=(const ModifySagRouteProtocolBgpRequest &) = default ;
    ModifySagRouteProtocolBgpRequest& operator=(ModifySagRouteProtocolBgpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->holdTime_ == nullptr
        && this->keepAlive_ == nullptr && this->localAs_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->routerId_ == nullptr && this->smartAGId_ == nullptr && this->smartAGSn_ == nullptr; };
    // holdTime Field Functions 
    bool hasHoldTime() const { return this->holdTime_ != nullptr;};
    void deleteHoldTime() { this->holdTime_ = nullptr;};
    inline int32_t getHoldTime() const { DARABONBA_PTR_GET_DEFAULT(holdTime_, 0) };
    inline ModifySagRouteProtocolBgpRequest& setHoldTime(int32_t holdTime) { DARABONBA_PTR_SET_VALUE(holdTime_, holdTime) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline int32_t getKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, 0) };
    inline ModifySagRouteProtocolBgpRequest& setKeepAlive(int32_t keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // localAs Field Functions 
    bool hasLocalAs() const { return this->localAs_ != nullptr;};
    void deleteLocalAs() { this->localAs_ = nullptr;};
    inline int64_t getLocalAs() const { DARABONBA_PTR_GET_DEFAULT(localAs_, 0L) };
    inline ModifySagRouteProtocolBgpRequest& setLocalAs(int64_t localAs) { DARABONBA_PTR_SET_VALUE(localAs_, localAs) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySagRouteProtocolBgpRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySagRouteProtocolBgpRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySagRouteProtocolBgpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySagRouteProtocolBgpRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySagRouteProtocolBgpRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline ModifySagRouteProtocolBgpRequest& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifySagRouteProtocolBgpRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGSn Field Functions 
    bool hasSmartAGSn() const { return this->smartAGSn_ != nullptr;};
    void deleteSmartAGSn() { this->smartAGSn_ = nullptr;};
    inline string getSmartAGSn() const { DARABONBA_PTR_GET_DEFAULT(smartAGSn_, "") };
    inline ModifySagRouteProtocolBgpRequest& setSmartAGSn(string smartAGSn) { DARABONBA_PTR_SET_VALUE(smartAGSn_, smartAGSn) };


  protected:
    // The hold time.
    // 
    // Valid values: **3 to 65535**. Unit: seconds.
    // 
    // >  When the SAG device establishes a peering connection with a peer device, the hold time of both devices must be the same. If the SAG device does not receive a keepalive or update message from the peer device within the hold time, the connection between the BGP peers is closed.
    // 
    // This parameter is required.
    shared_ptr<int32_t> holdTime_ {};
    // The time interval at which keep-alive packets are sent.
    // 
    // Valid values: **0 to 65535**. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> keepAlive_ {};
    // The autonomous system number (ASN) to which the SAG device belongs.
    // 
    // Valid values: **1 to 4294967295**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> localAs_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the BGP router.
    // 
    // Set the value to an IPv4 address.
    // 
    // This parameter is required.
    shared_ptr<string> routerId_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGSn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
