// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNATGATEWAYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNATGATEWAYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyNatGatewayAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNatGatewayAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EipBindMode, eipBindMode_);
      DARABONBA_PTR_TO_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_TO_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_TO_JSON(LogDelivery, logDelivery_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNatGatewayAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EipBindMode, eipBindMode_);
      DARABONBA_PTR_FROM_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_FROM_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_FROM_JSON(LogDelivery, logDelivery_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyNatGatewayAttributeRequest() = default ;
    ModifyNatGatewayAttributeRequest(const ModifyNatGatewayAttributeRequest &) = default ;
    ModifyNatGatewayAttributeRequest(ModifyNatGatewayAttributeRequest &&) = default ;
    ModifyNatGatewayAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNatGatewayAttributeRequest() = default ;
    ModifyNatGatewayAttributeRequest& operator=(const ModifyNatGatewayAttributeRequest &) = default ;
    ModifyNatGatewayAttributeRequest& operator=(ModifyNatGatewayAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(LogDeliveryType, logDeliveryType_);
        DARABONBA_PTR_TO_JSON(LogDestination, logDestination_);
      };
      friend void from_json(const Darabonba::Json& j, LogDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(LogDeliveryType, logDeliveryType_);
        DARABONBA_PTR_FROM_JSON(LogDestination, logDestination_);
      };
      LogDelivery() = default ;
      LogDelivery(const LogDelivery &) = default ;
      LogDelivery(LogDelivery &&) = default ;
      LogDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogDelivery() = default ;
      LogDelivery& operator=(const LogDelivery &) = default ;
      LogDelivery& operator=(LogDelivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logDeliveryType_ == nullptr
        && this->logDestination_ == nullptr; };
      // logDeliveryType Field Functions 
      bool hasLogDeliveryType() const { return this->logDeliveryType_ != nullptr;};
      void deleteLogDeliveryType() { this->logDeliveryType_ = nullptr;};
      inline string getLogDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryType_, "") };
      inline LogDelivery& setLogDeliveryType(string logDeliveryType) { DARABONBA_PTR_SET_VALUE(logDeliveryType_, logDeliveryType) };


      // logDestination Field Functions 
      bool hasLogDestination() const { return this->logDestination_ != nullptr;};
      void deleteLogDestination() { this->logDestination_ = nullptr;};
      inline string getLogDestination() const { DARABONBA_PTR_GET_DEFAULT(logDestination_, "") };
      inline LogDelivery& setLogDestination(string logDestination) { DARABONBA_PTR_SET_VALUE(logDestination_, logDestination) };


    protected:
      shared_ptr<string> logDeliveryType_ {};
      shared_ptr<string> logDestination_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->eipBindMode_ == nullptr && this->enableSessionLog_ == nullptr && this->icmpReplyEnabled_ == nullptr && this->logDelivery_ == nullptr && this->name_ == nullptr
        && this->natGatewayId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyNatGatewayAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipBindMode Field Functions 
    bool hasEipBindMode() const { return this->eipBindMode_ != nullptr;};
    void deleteEipBindMode() { this->eipBindMode_ = nullptr;};
    inline string getEipBindMode() const { DARABONBA_PTR_GET_DEFAULT(eipBindMode_, "") };
    inline ModifyNatGatewayAttributeRequest& setEipBindMode(string eipBindMode) { DARABONBA_PTR_SET_VALUE(eipBindMode_, eipBindMode) };


    // enableSessionLog Field Functions 
    bool hasEnableSessionLog() const { return this->enableSessionLog_ != nullptr;};
    void deleteEnableSessionLog() { this->enableSessionLog_ = nullptr;};
    inline bool getEnableSessionLog() const { DARABONBA_PTR_GET_DEFAULT(enableSessionLog_, false) };
    inline ModifyNatGatewayAttributeRequest& setEnableSessionLog(bool enableSessionLog) { DARABONBA_PTR_SET_VALUE(enableSessionLog_, enableSessionLog) };


    // icmpReplyEnabled Field Functions 
    bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
    void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
    inline bool getIcmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
    inline ModifyNatGatewayAttributeRequest& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


    // logDelivery Field Functions 
    bool hasLogDelivery() const { return this->logDelivery_ != nullptr;};
    void deleteLogDelivery() { this->logDelivery_ = nullptr;};
    inline const ModifyNatGatewayAttributeRequest::LogDelivery & getLogDelivery() const { DARABONBA_PTR_GET_CONST(logDelivery_, ModifyNatGatewayAttributeRequest::LogDelivery) };
    inline ModifyNatGatewayAttributeRequest::LogDelivery getLogDelivery() { DARABONBA_PTR_GET(logDelivery_, ModifyNatGatewayAttributeRequest::LogDelivery) };
    inline ModifyNatGatewayAttributeRequest& setLogDelivery(const ModifyNatGatewayAttributeRequest::LogDelivery & logDelivery) { DARABONBA_PTR_SET_VALUE(logDelivery_, logDelivery) };
    inline ModifyNatGatewayAttributeRequest& setLogDelivery(ModifyNatGatewayAttributeRequest::LogDelivery && logDelivery) { DARABONBA_PTR_SET_RVALUE(logDelivery_, logDelivery) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyNatGatewayAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ModifyNatGatewayAttributeRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyNatGatewayAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyNatGatewayAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNatGatewayAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyNatGatewayAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyNatGatewayAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The description of the NAT gateway.
    // 
    // The description must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
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
    shared_ptr<string> eipBindMode_ {};
    shared_ptr<bool> enableSessionLog_ {};
    // Specifies whether to enable the Internet Control Message Protocol (ICMP) non-retrieval feature. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> icmpReplyEnabled_ {};
    shared_ptr<ModifyNatGatewayAttributeRequest::LogDelivery> logDelivery_ {};
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
