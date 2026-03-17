// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGWANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGWANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagWanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagWanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(IPType, IPType_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PortName, portName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGSn, smartAGSn_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagWanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(IPType, IPType_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PortName, portName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGSn, smartAGSn_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ModifySagWanRequest() = default ;
    ModifySagWanRequest(const ModifySagWanRequest &) = default ;
    ModifySagWanRequest(ModifySagWanRequest &&) = default ;
    ModifySagWanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagWanRequest() = default ;
    ModifySagWanRequest& operator=(const ModifySagWanRequest &) = default ;
    ModifySagWanRequest& operator=(ModifySagWanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->gateway_ == nullptr && this->IP_ == nullptr && this->IPType_ == nullptr && this->ISP_ == nullptr && this->mask_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->portName_ == nullptr && this->priority_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->smartAGId_ == nullptr && this->smartAGSn_ == nullptr
        && this->username_ == nullptr && this->weight_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ModifySagWanRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline ModifySagWanRequest& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline ModifySagWanRequest& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // IPType Field Functions 
    bool hasIPType() const { return this->IPType_ != nullptr;};
    void deleteIPType() { this->IPType_ = nullptr;};
    inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
    inline ModifySagWanRequest& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline ModifySagWanRequest& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline ModifySagWanRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySagWanRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySagWanRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifySagWanRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline ModifySagWanRequest& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifySagWanRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySagWanRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySagWanRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySagWanRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifySagWanRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGSn Field Functions 
    bool hasSmartAGSn() const { return this->smartAGSn_ != nullptr;};
    void deleteSmartAGSn() { this->smartAGSn_ = nullptr;};
    inline string getSmartAGSn() const { DARABONBA_PTR_GET_DEFAULT(smartAGSn_, "") };
    inline ModifySagWanRequest& setSmartAGSn(string smartAGSn) { DARABONBA_PTR_SET_VALUE(smartAGSn_, smartAGSn) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ModifySagWanRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ModifySagWanRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The maximum bandwidth of the WAN port. Unit: Mbit/s.
    shared_ptr<int32_t> bandwidth_ {};
    // The IP address of the gateway.
    // 
    // > 
    // *   If the WAN port uses a static IP address, you must set this parameter.
    // *   After this parameter is set, the SAG device generates a default route.
    shared_ptr<string> gateway_ {};
    // The IP address of the WAN port.
    // 
    // >  If the WAN port uses a static IP address, you must set this parameter.
    shared_ptr<string> IP_ {};
    // The connection type of the WAN port: Valid values:
    // 
    // *   **DHCP**: The WAN port connects to the Internet through an IP address that is dynamically assigned by the Dynamic Host Configuration Protocol (DHCP) server.
    // *   **STATIC**: The WAN port connects to the Internet through a static IP address. If you set this value, you must configure a static IP address, a subnet mask, and a gateway IP address for the WAN port.
    // *   **PPPOE**: The WAN port connects to the Internet through dial-up connections. If you set this value, you must enter the username and password of the PPPoE account provided by the Internet service provider (ISP).
    // 
    // This parameter is required.
    shared_ptr<string> IPType_ {};
    // The ISP used by the WAN port. Valid values:
    // 
    // *   **CT**: China Telecom
    // *   **CM**: China Mobile
    // *   **CU**: China Unicom
    // *   **Other**: Other ISPs.
    shared_ptr<string> ISP_ {};
    // The subnet mask of the WAN port IP address.
    // 
    // >  If the WAN port uses a static IP address, you must set this parameter.
    shared_ptr<string> mask_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the PPPoE account.
    // 
    // The username must be 6 to 30 characters in length, and can contain digits and letters.
    // 
    // >  If the connection type of the WAN port is PPPoE, you must set this parameter. If you do not need to modify the password, you can ignore this parameter.
    shared_ptr<string> password_ {};
    // The number of the WAN port.
    // 
    // This parameter is required.
    shared_ptr<string> portName_ {};
    // The priority of the WAN port.
    // 
    // Valid values: **-1** and **1 to 50**.
    // 
    // A smaller value indicates a higher priority. A value of **-1** indicates that traffic forwarding is disabled on the WAN port.
    shared_ptr<int32_t> priority_ {};
    // The ID of the region where the SAG instance is deployed.
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
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGSn_ {};
    // The username of the PPPoE account.
    // 
    // The username must be 6 to 30 characters in length, and can contain digits and letters.
    // 
    // >  If the connection type of the WAN port is PPPoE, you must set this parameter.
    shared_ptr<string> username_ {};
    // The weight of the WAN port.
    // 
    // Valid values: **1 to 100**. Default value: **100**.
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
