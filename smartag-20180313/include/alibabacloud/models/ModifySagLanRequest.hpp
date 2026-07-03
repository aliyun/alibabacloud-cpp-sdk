// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagLanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagLanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndIp, endIp_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(IPType, IPType_);
      DARABONBA_PTR_TO_JSON(Lease, lease_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PortName, portName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGSn, smartAGSn_);
      DARABONBA_PTR_TO_JSON(StartIp, startIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagLanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndIp, endIp_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(IPType, IPType_);
      DARABONBA_PTR_FROM_JSON(Lease, lease_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PortName, portName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGSn, smartAGSn_);
      DARABONBA_PTR_FROM_JSON(StartIp, startIp_);
    };
    ModifySagLanRequest() = default ;
    ModifySagLanRequest(const ModifySagLanRequest &) = default ;
    ModifySagLanRequest(ModifySagLanRequest &&) = default ;
    ModifySagLanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagLanRequest() = default ;
    ModifySagLanRequest& operator=(const ModifySagLanRequest &) = default ;
    ModifySagLanRequest& operator=(ModifySagLanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endIp_ == nullptr
        && this->IP_ == nullptr && this->IPType_ == nullptr && this->lease_ == nullptr && this->mask_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->portName_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->smartAGId_ == nullptr && this->smartAGSn_ == nullptr && this->startIp_ == nullptr; };
    // endIp Field Functions 
    bool hasEndIp() const { return this->endIp_ != nullptr;};
    void deleteEndIp() { this->endIp_ = nullptr;};
    inline string getEndIp() const { DARABONBA_PTR_GET_DEFAULT(endIp_, "") };
    inline ModifySagLanRequest& setEndIp(string endIp) { DARABONBA_PTR_SET_VALUE(endIp_, endIp) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline ModifySagLanRequest& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // IPType Field Functions 
    bool hasIPType() const { return this->IPType_ != nullptr;};
    void deleteIPType() { this->IPType_ = nullptr;};
    inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
    inline ModifySagLanRequest& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


    // lease Field Functions 
    bool hasLease() const { return this->lease_ != nullptr;};
    void deleteLease() { this->lease_ = nullptr;};
    inline string getLease() const { DARABONBA_PTR_GET_DEFAULT(lease_, "") };
    inline ModifySagLanRequest& setLease(string lease) { DARABONBA_PTR_SET_VALUE(lease_, lease) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline ModifySagLanRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySagLanRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySagLanRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline ModifySagLanRequest& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySagLanRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySagLanRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySagLanRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifySagLanRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGSn Field Functions 
    bool hasSmartAGSn() const { return this->smartAGSn_ != nullptr;};
    void deleteSmartAGSn() { this->smartAGSn_ = nullptr;};
    inline string getSmartAGSn() const { DARABONBA_PTR_GET_DEFAULT(smartAGSn_, "") };
    inline ModifySagLanRequest& setSmartAGSn(string smartAGSn) { DARABONBA_PTR_SET_VALUE(smartAGSn_, smartAGSn) };


    // startIp Field Functions 
    bool hasStartIp() const { return this->startIp_ != nullptr;};
    void deleteStartIp() { this->startIp_ = nullptr;};
    inline string getStartIp() const { DARABONBA_PTR_GET_DEFAULT(startIp_, "") };
    inline ModifySagLanRequest& setStartIp(string startIp) { DARABONBA_PTR_SET_VALUE(startIp_, startIp) };


  protected:
    // The last IP address of the DHCP pool.
    shared_ptr<string> endIp_ {};
    // The IP address of the LAN port.
    // 
    // This parameter is required.
    shared_ptr<string> IP_ {};
    // The connection type of the LAN port. Valid values:
    // 
    // - **DHCP**: a dynamic IP address. Uses the Dynamic Host Configuration Protocol (DHCP) to dynamically assign an IP address to a connected device.
    // 
    // - **STATIC**: a static IP address. Specifies a static IP address for the LAN port.
    // 
    // This parameter is required.
    shared_ptr<string> IPType_ {};
    // The time duration that the IP address is retained after it is assigned through DHCP. Unit: minute.
    // 
    // Valid values: **1 to 43200**.
    shared_ptr<string> lease_ {};
    // The subnet mask of the LAN port IP address.
    // 
    // This parameter is required.
    shared_ptr<string> mask_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The name of the LAN port.
    // 
    // This parameter is required.
    shared_ptr<string> portName_ {};
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
    // The serial number of the SAG device that is associated with the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGSn_ {};
    // The first IP address of the DHCP pool.
    shared_ptr<string> startIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
