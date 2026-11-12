// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSMARTACCESSGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSMARTACCESSGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySmartAccessGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySmartAccessGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableSoftwareConnectionAudit, enableSoftwareConnectionAudit_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RoutingStrategy, routingStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityLockThreshold, securityLockThreshold_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySmartAccessGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableSoftwareConnectionAudit, enableSoftwareConnectionAudit_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RoutingStrategy, routingStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityLockThreshold, securityLockThreshold_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
    };
    ModifySmartAccessGatewayRequest() = default ;
    ModifySmartAccessGatewayRequest(const ModifySmartAccessGatewayRequest &) = default ;
    ModifySmartAccessGatewayRequest(ModifySmartAccessGatewayRequest &&) = default ;
    ModifySmartAccessGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySmartAccessGatewayRequest() = default ;
    ModifySmartAccessGatewayRequest& operator=(const ModifySmartAccessGatewayRequest &) = default ;
    ModifySmartAccessGatewayRequest& operator=(ModifySmartAccessGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->description_ == nullptr && this->enableSoftwareConnectionAudit_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->position_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->routingStrategy_ == nullptr
        && this->securityLockThreshold_ == nullptr && this->smartAGId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline ModifySmartAccessGatewayRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifySmartAccessGatewayRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableSoftwareConnectionAudit Field Functions 
    bool hasEnableSoftwareConnectionAudit() const { return this->enableSoftwareConnectionAudit_ != nullptr;};
    void deleteEnableSoftwareConnectionAudit() { this->enableSoftwareConnectionAudit_ = nullptr;};
    inline bool getEnableSoftwareConnectionAudit() const { DARABONBA_PTR_GET_DEFAULT(enableSoftwareConnectionAudit_, false) };
    inline ModifySmartAccessGatewayRequest& setEnableSoftwareConnectionAudit(bool enableSoftwareConnectionAudit) { DARABONBA_PTR_SET_VALUE(enableSoftwareConnectionAudit_, enableSoftwareConnectionAudit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifySmartAccessGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySmartAccessGatewayRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySmartAccessGatewayRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline ModifySmartAccessGatewayRequest& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySmartAccessGatewayRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySmartAccessGatewayRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySmartAccessGatewayRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routingStrategy Field Functions 
    bool hasRoutingStrategy() const { return this->routingStrategy_ != nullptr;};
    void deleteRoutingStrategy() { this->routingStrategy_ = nullptr;};
    inline string getRoutingStrategy() const { DARABONBA_PTR_GET_DEFAULT(routingStrategy_, "") };
    inline ModifySmartAccessGatewayRequest& setRoutingStrategy(string routingStrategy) { DARABONBA_PTR_SET_VALUE(routingStrategy_, routingStrategy) };


    // securityLockThreshold Field Functions 
    bool hasSecurityLockThreshold() const { return this->securityLockThreshold_ != nullptr;};
    void deleteSecurityLockThreshold() { this->securityLockThreshold_ = nullptr;};
    inline int32_t getSecurityLockThreshold() const { DARABONBA_PTR_GET_DEFAULT(securityLockThreshold_, 0) };
    inline ModifySmartAccessGatewayRequest& setSecurityLockThreshold(int32_t securityLockThreshold) { DARABONBA_PTR_SET_VALUE(securityLockThreshold_, securityLockThreshold) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifySmartAccessGatewayRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


  protected:
    // The private CIDR block used by clients at the on-premises site for communication. Make sure that private CIDR blocks do not conflict with each other. 
    // 
    // If the LAN port of the Smart Access Gateway device is configured in dynamic mode, the IP addresses used by on-premises clients with DHCP enabled are allocated from the first private CIDR block that you specify.
    shared_ptr<string> cidrBlock_ {};
    // The description of the Smart Access Gateway instance. 
    // 
    // The description must be 2 to 256 characters in length, and must start with a letter or a Chinese character. It cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to enable connection log auditing for the SAG app. Valid values:
    // 
    // - **true**: enables connection log auditing for the SAG app.
    // 
    // - **false**: disables connection log auditing for the SAG app.
    shared_ptr<bool> enableSoftwareConnectionAudit_ {};
    // The name of the Smart Access Gateway instance. 
    // 
    // The name must be 2 to 128 characters in length, and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The location where the Smart Access Gateway instance is deployed.
    shared_ptr<string> position_ {};
    // The region ID of the Smart Access Gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The route synchronization mode for the on-premises network. Valid values:
    // 
    // - **static**: static routing.
    // 
    // - **dynamic**: dynamic routing.
    shared_ptr<string> routingStrategy_ {};
    // The threshold configured by the user for the offline lock feature. The value must be greater than or equal to 0.
    // 
    // Unit: seconds.
    shared_ptr<int32_t> securityLockThreshold_ {};
    // The instance ID of the Smart Access Gateway.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
