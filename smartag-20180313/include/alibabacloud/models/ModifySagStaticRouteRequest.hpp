// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGSTATICROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGSTATICROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagStaticRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagStaticRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PortName, portName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGSn, smartAGSn_);
      DARABONBA_PTR_TO_JSON(Vlan, vlan_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagStaticRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PortName, portName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGSn, smartAGSn_);
      DARABONBA_PTR_FROM_JSON(Vlan, vlan_);
    };
    ModifySagStaticRouteRequest() = default ;
    ModifySagStaticRouteRequest(const ModifySagStaticRouteRequest &) = default ;
    ModifySagStaticRouteRequest(ModifySagStaticRouteRequest &&) = default ;
    ModifySagStaticRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagStaticRouteRequest() = default ;
    ModifySagStaticRouteRequest& operator=(const ModifySagStaticRouteRequest &) = default ;
    ModifySagStaticRouteRequest& operator=(ModifySagStaticRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidr_ == nullptr
        && this->nextHop_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->portName_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->smartAGId_ == nullptr && this->smartAGSn_ == nullptr && this->vlan_ == nullptr; };
    // destinationCidr Field Functions 
    bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
    void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
    inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
    inline ModifySagStaticRouteRequest& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline ModifySagStaticRouteRequest& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySagStaticRouteRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySagStaticRouteRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline ModifySagStaticRouteRequest& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySagStaticRouteRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySagStaticRouteRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySagStaticRouteRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifySagStaticRouteRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGSn Field Functions 
    bool hasSmartAGSn() const { return this->smartAGSn_ != nullptr;};
    void deleteSmartAGSn() { this->smartAGSn_ = nullptr;};
    inline string getSmartAGSn() const { DARABONBA_PTR_GET_DEFAULT(smartAGSn_, "") };
    inline ModifySagStaticRouteRequest& setSmartAGSn(string smartAGSn) { DARABONBA_PTR_SET_VALUE(smartAGSn_, smartAGSn) };


    // vlan Field Functions 
    bool hasVlan() const { return this->vlan_ != nullptr;};
    void deleteVlan() { this->vlan_ = nullptr;};
    inline string getVlan() const { DARABONBA_PTR_GET_DEFAULT(vlan_, "") };
    inline ModifySagStaticRouteRequest& setVlan(string vlan) { DARABONBA_PTR_SET_VALUE(vlan_, vlan) };


  protected:
    // The destination CIDR block.
    // 
    // This parameter is required.
    shared_ptr<string> destinationCidr_ {};
    // The IP address of the next hop.
    // 
    // This parameter is required.
    shared_ptr<string> nextHop_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The name of the port.
    // 
    // This parameter is required.
    shared_ptr<string> portName_ {};
    // The ID of the region where the Smart Access Gateway (SAG) instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The serial number of the SAG device associated with the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGSn_ {};
    // The VLAN ID.
    // 
    // Valid values: **0** indicates a physical port. **1 to 4094** indicates that VLANs are supported.
    shared_ptr<string> vlan_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
