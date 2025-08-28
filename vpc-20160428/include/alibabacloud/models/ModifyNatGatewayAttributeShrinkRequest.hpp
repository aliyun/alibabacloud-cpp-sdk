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
    virtual bool empty() const override { this->description_ != nullptr
        && this->eipBindMode_ != nullptr && this->enableSessionLog_ != nullptr && this->icmpReplyEnabled_ != nullptr && this->logDeliveryShrink_ != nullptr && this->name_ != nullptr
        && this->natGatewayId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipBindMode Field Functions 
    bool hasEipBindMode() const { return this->eipBindMode_ != nullptr;};
    void deleteEipBindMode() { this->eipBindMode_ = nullptr;};
    inline string eipBindMode() const { DARABONBA_PTR_GET_DEFAULT(eipBindMode_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setEipBindMode(string eipBindMode) { DARABONBA_PTR_SET_VALUE(eipBindMode_, eipBindMode) };


    // enableSessionLog Field Functions 
    bool hasEnableSessionLog() const { return this->enableSessionLog_ != nullptr;};
    void deleteEnableSessionLog() { this->enableSessionLog_ = nullptr;};
    inline bool enableSessionLog() const { DARABONBA_PTR_GET_DEFAULT(enableSessionLog_, false) };
    inline ModifyNatGatewayAttributeShrinkRequest& setEnableSessionLog(bool enableSessionLog) { DARABONBA_PTR_SET_VALUE(enableSessionLog_, enableSessionLog) };


    // icmpReplyEnabled Field Functions 
    bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
    void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
    inline bool icmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
    inline ModifyNatGatewayAttributeShrinkRequest& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


    // logDeliveryShrink Field Functions 
    bool hasLogDeliveryShrink() const { return this->logDeliveryShrink_ != nullptr;};
    void deleteLogDeliveryShrink() { this->logDeliveryShrink_ = nullptr;};
    inline string logDeliveryShrink() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryShrink_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setLogDeliveryShrink(string logDeliveryShrink) { DARABONBA_PTR_SET_VALUE(logDeliveryShrink_, logDeliveryShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyNatGatewayAttributeShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyNatGatewayAttributeShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyNatGatewayAttributeShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The description of the NAT gateway.
    // 
    // The description must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The mode in which the NAT gateway is associated with an elastic IP address (EIP). You can leave this parameter empty. If you want to specify a value for this parameter, set the value to **NAT**, which indicates that the NAT gateway is associated with the EIP in NAT mode.
    // 
    // **
    // 
    // **Description**
    // 
    // *   If EipBindMode is set to MULTI_BINDED when the NAT gateway is created, you can change the value of this parameter from **MULTI_BINDED** to **NAT**. If EipBindMode is set to NAT when the NAT gateway is created, you cannot change the value of this parameter from **NAT** to **MULTI_BINDED**. For more information about **MULTI_BINDED**, see [CreateNatGateway](https://help.aliyun.com/document_detail/120219.html).
    // 
    // *   When the mode in which the NAT gateway is associated with an EIP is being changed, a transient connection that lasts a few seconds may occur. If the number of EIPs with which the NAT gateway is associated increases, the transient connection lasts longer. You can change the mode only for a NAT gateway that is associated with up to five EIPs. We recommend that you change the mode during off-peak hours.
    // *   After the mode is changed to **NAT**, the Internet NAT gateway is compatible with the IPv4 gateway. However, if you associate an EIP with the NAT gateway, the EIP occupies one private IP address on the vSwitch of the NAT gateway. Make sure that the vSwitch has sufficient private IP addresses. Otherwise, the EIP fails to be associated with the NAT gateway.
    std::shared_ptr<string> eipBindMode_ = nullptr;
    std::shared_ptr<bool> enableSessionLog_ = nullptr;
    // Specifies whether to enable the Internet Control Message Protocol (ICMP) non-retrieval feature. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    std::shared_ptr<bool> icmpReplyEnabled_ = nullptr;
    std::shared_ptr<string> logDeliveryShrink_ = nullptr;
    // The name of the NAT gateway.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
