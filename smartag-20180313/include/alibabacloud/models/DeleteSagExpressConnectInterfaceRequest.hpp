// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESAGEXPRESSCONNECTINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESAGEXPRESSCONNECTINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DeleteSagExpressConnectInterfaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSagExpressConnectInterfaceRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DeleteSagExpressConnectInterfaceRequest& obj) { 
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
    DeleteSagExpressConnectInterfaceRequest() = default ;
    DeleteSagExpressConnectInterfaceRequest(const DeleteSagExpressConnectInterfaceRequest &) = default ;
    DeleteSagExpressConnectInterfaceRequest(DeleteSagExpressConnectInterfaceRequest &&) = default ;
    DeleteSagExpressConnectInterfaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSagExpressConnectInterfaceRequest() = default ;
    DeleteSagExpressConnectInterfaceRequest& operator=(const DeleteSagExpressConnectInterfaceRequest &) = default ;
    DeleteSagExpressConnectInterfaceRequest& operator=(DeleteSagExpressConnectInterfaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->portName_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->smartAGId_ == nullptr && this->smartAGSn_ == nullptr && this->vlan_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteSagExpressConnectInterfaceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteSagExpressConnectInterfaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline DeleteSagExpressConnectInterfaceRequest& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSagExpressConnectInterfaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteSagExpressConnectInterfaceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteSagExpressConnectInterfaceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DeleteSagExpressConnectInterfaceRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGSn Field Functions 
    bool hasSmartAGSn() const { return this->smartAGSn_ != nullptr;};
    void deleteSmartAGSn() { this->smartAGSn_ = nullptr;};
    inline string getSmartAGSn() const { DARABONBA_PTR_GET_DEFAULT(smartAGSn_, "") };
    inline DeleteSagExpressConnectInterfaceRequest& setSmartAGSn(string smartAGSn) { DARABONBA_PTR_SET_VALUE(smartAGSn_, smartAGSn) };


    // vlan Field Functions 
    bool hasVlan() const { return this->vlan_ != nullptr;};
    void deleteVlan() { this->vlan_ = nullptr;};
    inline string getVlan() const { DARABONBA_PTR_GET_DEFAULT(vlan_, "") };
    inline DeleteSagExpressConnectInterfaceRequest& setVlan(string vlan) { DARABONBA_PTR_SET_VALUE(vlan_, vlan) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The name of the leased line port.
    // 
    // This parameter is required.
    shared_ptr<string> portName_ {};
    // The ID of the region where the Smart Access Gateway (SAG) instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
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
    // The VLAN ID of the leased line port.
    // 
    // Valid values: **0 to 4094**.
    // 
    // > 
    // *   If the VLAN ID is 0, the leased line port is a physical port and does not support VLAN interfaces.
    // *   If the VLAN ID is 1 to 4094, the leased line port supports VLAN interfaces based on the Layer-3 protocols.
    shared_ptr<string> vlan_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
