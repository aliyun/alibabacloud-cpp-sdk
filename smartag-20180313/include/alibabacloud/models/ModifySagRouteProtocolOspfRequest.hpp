// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGROUTEPROTOCOLOSPFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGROUTEPROTOCOLOSPFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagRouteProtocolOspfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagRouteProtocolOspfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(DeadTime, deadTime_);
      DARABONBA_PTR_TO_JSON(HelloTime, helloTime_);
      DARABONBA_PTR_TO_JSON(Md5Key, md5Key_);
      DARABONBA_PTR_TO_JSON(Md5KeyId, md5KeyId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGSn, smartAGSn_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagRouteProtocolOspfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(DeadTime, deadTime_);
      DARABONBA_PTR_FROM_JSON(HelloTime, helloTime_);
      DARABONBA_PTR_FROM_JSON(Md5Key, md5Key_);
      DARABONBA_PTR_FROM_JSON(Md5KeyId, md5KeyId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGSn, smartAGSn_);
    };
    ModifySagRouteProtocolOspfRequest() = default ;
    ModifySagRouteProtocolOspfRequest(const ModifySagRouteProtocolOspfRequest &) = default ;
    ModifySagRouteProtocolOspfRequest(ModifySagRouteProtocolOspfRequest &&) = default ;
    ModifySagRouteProtocolOspfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagRouteProtocolOspfRequest() = default ;
    ModifySagRouteProtocolOspfRequest& operator=(const ModifySagRouteProtocolOspfRequest &) = default ;
    ModifySagRouteProtocolOspfRequest& operator=(ModifySagRouteProtocolOspfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaId_ == nullptr
        && this->authenticationType_ == nullptr && this->deadTime_ == nullptr && this->helloTime_ == nullptr && this->md5Key_ == nullptr && this->md5KeyId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->routerId_ == nullptr && this->smartAGId_ == nullptr && this->smartAGSn_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline int32_t getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, 0) };
    inline ModifySagRouteProtocolOspfRequest& setAreaId(int32_t areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline string getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
    inline ModifySagRouteProtocolOspfRequest& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // deadTime Field Functions 
    bool hasDeadTime() const { return this->deadTime_ != nullptr;};
    void deleteDeadTime() { this->deadTime_ = nullptr;};
    inline int32_t getDeadTime() const { DARABONBA_PTR_GET_DEFAULT(deadTime_, 0) };
    inline ModifySagRouteProtocolOspfRequest& setDeadTime(int32_t deadTime) { DARABONBA_PTR_SET_VALUE(deadTime_, deadTime) };


    // helloTime Field Functions 
    bool hasHelloTime() const { return this->helloTime_ != nullptr;};
    void deleteHelloTime() { this->helloTime_ = nullptr;};
    inline int32_t getHelloTime() const { DARABONBA_PTR_GET_DEFAULT(helloTime_, 0) };
    inline ModifySagRouteProtocolOspfRequest& setHelloTime(int32_t helloTime) { DARABONBA_PTR_SET_VALUE(helloTime_, helloTime) };


    // md5Key Field Functions 
    bool hasMd5Key() const { return this->md5Key_ != nullptr;};
    void deleteMd5Key() { this->md5Key_ = nullptr;};
    inline string getMd5Key() const { DARABONBA_PTR_GET_DEFAULT(md5Key_, "") };
    inline ModifySagRouteProtocolOspfRequest& setMd5Key(string md5Key) { DARABONBA_PTR_SET_VALUE(md5Key_, md5Key) };


    // md5KeyId Field Functions 
    bool hasMd5KeyId() const { return this->md5KeyId_ != nullptr;};
    void deleteMd5KeyId() { this->md5KeyId_ = nullptr;};
    inline int32_t getMd5KeyId() const { DARABONBA_PTR_GET_DEFAULT(md5KeyId_, 0) };
    inline ModifySagRouteProtocolOspfRequest& setMd5KeyId(int32_t md5KeyId) { DARABONBA_PTR_SET_VALUE(md5KeyId_, md5KeyId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySagRouteProtocolOspfRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySagRouteProtocolOspfRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifySagRouteProtocolOspfRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySagRouteProtocolOspfRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySagRouteProtocolOspfRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySagRouteProtocolOspfRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline ModifySagRouteProtocolOspfRequest& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifySagRouteProtocolOspfRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGSn Field Functions 
    bool hasSmartAGSn() const { return this->smartAGSn_ != nullptr;};
    void deleteSmartAGSn() { this->smartAGSn_ = nullptr;};
    inline string getSmartAGSn() const { DARABONBA_PTR_GET_DEFAULT(smartAGSn_, "") };
    inline ModifySagRouteProtocolOspfRequest& setSmartAGSn(string smartAGSn) { DARABONBA_PTR_SET_VALUE(smartAGSn_, smartAGSn) };


  protected:
    // The ID of the OSPF area.
    // 
    // Valid values: **1 to 2147483647**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> areaId_ {};
    // The authentication method. Valid values:
    // 
    // *   **NONE**: does not enable authentication.
    // *   **CLEARTEXT**: uses plaintext authentication. You must enter the plaintext password.
    // *   **MD5**: uses MD5 authentication. You must enter the MD5 key ID and the MD5 key.
    // 
    // This parameter is required.
    shared_ptr<string> authenticationType_ {};
    // The timeout period of OSPF. Unit: seconds.
    // 
    // Valid values: **1 to 65535**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> deadTime_ {};
    // The time interval at which Hello packets are sent. Unit: seconds.
    // 
    // Valid values: **1 to 65535**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> helloTime_ {};
    // The MD5 key value.
    // 
    // Valid values: **1 to 47**.
    // 
    // >  This parameter is required only if **AuthenticationType** is set to **MD5**.
    shared_ptr<string> md5Key_ {};
    // The ID of the MD5 key.
    // 
    // Valid values: **1 to 2147483647**.
    // 
    // >  This parameter is required only if **AuthenticationType** is set to **MD5**.
    shared_ptr<int32_t> md5KeyId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The plaintext password.
    // 
    // The password must be 1 to 8 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // >  This parameter is required only if **AuthenticationType** is set to **CLEARTEXT**.
    shared_ptr<string> password_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the router that has OSPF enabled.
    // 
    // Set the value to an IPv4 address.
    // 
    // This parameter is required.
    shared_ptr<string> routerId_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The serial number of the SAG device associated with the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGSn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
