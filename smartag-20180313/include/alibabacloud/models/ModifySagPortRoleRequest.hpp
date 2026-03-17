// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGPORTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGPORTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagPortRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagPortRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PortName, portName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGSn, smartAGSn_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagPortRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PortName, portName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGSn, smartAGSn_);
    };
    ModifySagPortRoleRequest() = default ;
    ModifySagPortRoleRequest(const ModifySagPortRoleRequest &) = default ;
    ModifySagPortRoleRequest(ModifySagPortRoleRequest &&) = default ;
    ModifySagPortRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagPortRoleRequest() = default ;
    ModifySagPortRoleRequest& operator=(const ModifySagPortRoleRequest &) = default ;
    ModifySagPortRoleRequest& operator=(ModifySagPortRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->portName_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->role_ == nullptr && this->smartAGId_ == nullptr && this->smartAGSn_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySagPortRoleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySagPortRoleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline ModifySagPortRoleRequest& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySagPortRoleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySagPortRoleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySagPortRoleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ModifySagPortRoleRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifySagPortRoleRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGSn Field Functions 
    bool hasSmartAGSn() const { return this->smartAGSn_ != nullptr;};
    void deleteSmartAGSn() { this->smartAGSn_ = nullptr;};
    inline string getSmartAGSn() const { DARABONBA_PTR_GET_DEFAULT(smartAGSn_, "") };
    inline ModifySagPortRoleRequest& setSmartAGSn(string smartAGSn) { DARABONBA_PTR_SET_VALUE(smartAGSn_, smartAGSn) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The name of the port.
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
    // The role of the port. Valid values:
    // 
    // *   **NONE**: No role is assigned to the port.
    // *   **WAN**: The port is used as a WAN port. By default, port 5 of an SAG device is used as a WAN port and supports access to the Internet by using a Dynamic Host Configuration Protocol (DHCP) client, PPPoE, or a static IP address.
    // *   **LAN**: The port is used as a LAN port. The LAN port allows a DHCP server or a static IP address to connect to an on-premises terminal or switch.
    // *   **ECC**: The port is used as a port to connect to an Express Connect circuit.
    // *   **MGT**: The port is used as the management port. By default, port 2 of an SAG device is used as the management port.
    // 
    // > 
    // 
    // *   In exclusive mode, the management traffic is separated from the workload traffic. The management port is only used to access the SAG web console and cannot be used to transfer your workload data. You can access the SAG web console only through the management port.
    // *   A WAN port can be used when it is connected. If a port is the first one that obtains an IP address over DHCP and can access the Internet, it is set as a WAN port. In the SAG web console, you can set another port as a WAN port.
    // 
    // This parameter is required.
    shared_ptr<string> role_ {};
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
