// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNATGATEWAYATTRIBUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNATGATEWAYATTRIBUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyNatGatewayAttributeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNatGatewayAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EipBindMode, eipBindMode_);
      DARABONBA_PTR_TO_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_TO_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_TO_JSON(LogDelivery, logDeliveryShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNatGatewayAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EipBindMode, eipBindMode_);
      DARABONBA_PTR_FROM_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_FROM_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_FROM_JSON(LogDelivery, logDeliveryShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyNatGatewayAttributeShrinkRequest() = default ;
    ModifyNatGatewayAttributeShrinkRequest(const ModifyNatGatewayAttributeShrinkRequest &) = default ;
    ModifyNatGatewayAttributeShrinkRequest(ModifyNatGatewayAttributeShrinkRequest &&) = default ;
    ModifyNatGatewayAttributeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNatGatewayAttributeShrinkRequest() = default ;
    ModifyNatGatewayAttributeShrinkRequest& operator=(const ModifyNatGatewayAttributeShrinkRequest &) = default ;
    ModifyNatGatewayAttributeShrinkRequest& operator=(ModifyNatGatewayAttributeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->eipBindMode_ == nullptr && this->enableSessionLog_ == nullptr && this->icmpReplyEnabled_ == nullptr && this->logDeliveryShrink_ == nullptr && this->name_ == nullptr
        && this->natGatewayId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipBindMode Field Functions 
    bool hasEipBindMode() const { return this->eipBindMode_ != nullptr;};
    void deleteEipBindMode() { this->eipBindMode_ = nullptr;};
    inline string getEipBindMode() const { DARABONBA_PTR_GET_DEFAULT(eipBindMode_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setEipBindMode(string eipBindMode) { DARABONBA_PTR_SET_VALUE(eipBindMode_, eipBindMode) };


    // enableSessionLog Field Functions 
    bool hasEnableSessionLog() const { return this->enableSessionLog_ != nullptr;};
    void deleteEnableSessionLog() { this->enableSessionLog_ = nullptr;};
    inline bool getEnableSessionLog() const { DARABONBA_PTR_GET_DEFAULT(enableSessionLog_, false) };
    inline ModifyNatGatewayAttributeShrinkRequest& setEnableSessionLog(bool enableSessionLog) { DARABONBA_PTR_SET_VALUE(enableSessionLog_, enableSessionLog) };


    // icmpReplyEnabled Field Functions 
    bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
    void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
    inline bool getIcmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
    inline ModifyNatGatewayAttributeShrinkRequest& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


    // logDeliveryShrink Field Functions 
    bool hasLogDeliveryShrink() const { return this->logDeliveryShrink_ != nullptr;};
    void deleteLogDeliveryShrink() { this->logDeliveryShrink_ = nullptr;};
    inline string getLogDeliveryShrink() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryShrink_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setLogDeliveryShrink(string logDeliveryShrink) { DARABONBA_PTR_SET_VALUE(logDeliveryShrink_, logDeliveryShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyNatGatewayAttributeShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyNatGatewayAttributeShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The description of the NAT gateway.
    // 
    // The description must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Modifies the mode in which the EIP is associated with the NAT gateway. The value can be empty or **NAT**, which specifies the NAT mode.
    // 
    // > 
    // 
    // *   You can only change **MULTI_BINDED** to **NAT**. You cannot change **NAT** to **MULTI_BINDED**. For more information about the **MULTI_BINDED** mode, see [CreateNatGateway](https://help.aliyun.com/document_detail/120219.html).
    // 
    // *   When you change the association mode, your network may be interrupted for seconds. The duration increases with the number of EIPs. You can change the association mode for at most 5 EIPs at the same time. We recommend changing the association mode during off-peak hours.
    // *   After the association mode is changed to **NAT**, the Internet NAT gateway is compatible with an IPv4 gateway. If an EIP is associated with a NAT gateway in NAT mode, the EIP occupies a private IP address of the vSwitch to which the NAT gateway belongs. Ensure the vSwitch has sufficient private IP addresses for EIPs to be associated with the NAT gateway.
    shared_ptr<string> eipBindMode_ {};
    // Whether to enable session logging, with values:
    // - **true**: Session logging is enabled. 
    // - **false**: Session logging is disabled.
    shared_ptr<bool> enableSessionLog_ {};
    // Specifies whether to enable the Internet Control Message Protocol (ICMP) non-retrieval feature. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> icmpReplyEnabled_ {};
    // Session log configuration information.
    shared_ptr<string> logDeliveryShrink_ {};
    // The name of the NAT gateway.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
