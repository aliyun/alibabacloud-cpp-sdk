// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressAllocatedMode, addressAllocatedMode_);
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionEnabled, deletionProtectionEnabled_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_TO_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressAllocatedMode, addressAllocatedMode_);
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionEnabled, deletionProtectionEnabled_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest(CreateLoadBalancerRequest &&) = default ;
    CreateLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest& operator=(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest& operator=(CreateLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_TO_JSON(EipType, eipType_);
        DARABONBA_PTR_TO_JSON(IntranetAddress, intranetAddress_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_FROM_JSON(EipType, eipType_);
        DARABONBA_PTR_FROM_JSON(IntranetAddress, intranetAddress_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ZoneMappings() = default ;
      ZoneMappings(const ZoneMappings &) = default ;
      ZoneMappings(ZoneMappings &&) = default ;
      ZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneMappings() = default ;
      ZoneMappings& operator=(const ZoneMappings &) = default ;
      ZoneMappings& operator=(ZoneMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->eipType_ == nullptr && this->intranetAddress_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // allocationId Field Functions 
      bool hasAllocationId() const { return this->allocationId_ != nullptr;};
      void deleteAllocationId() { this->allocationId_ = nullptr;};
      inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
      inline ZoneMappings& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


      // eipType Field Functions 
      bool hasEipType() const { return this->eipType_ != nullptr;};
      void deleteEipType() { this->eipType_ = nullptr;};
      inline string getEipType() const { DARABONBA_PTR_GET_DEFAULT(eipType_, "") };
      inline ZoneMappings& setEipType(string eipType) { DARABONBA_PTR_SET_VALUE(eipType_, eipType) };


      // intranetAddress Field Functions 
      bool hasIntranetAddress() const { return this->intranetAddress_ != nullptr;};
      void deleteIntranetAddress() { this->intranetAddress_ = nullptr;};
      inline string getIntranetAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetAddress_, "") };
      inline ZoneMappings& setIntranetAddress(string intranetAddress) { DARABONBA_PTR_SET_VALUE(intranetAddress_, intranetAddress) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the EIP to be associated with the Internet-facing ALB instance.
      shared_ptr<string> allocationId_ {};
      // The type of EIP. Valid values:
      // 
      // *   **Common**: an EIP.
      // *   **Anycast**: an Anycast EIP.
      // 
      // >  For more information about the regions in which ALB supports Anycast EIPs, see [Limits](https://help.aliyun.com/document_detail/460727.html).
      shared_ptr<string> eipType_ {};
      // The private IPv4 address.
      shared_ptr<string> intranetAddress_ {};
      // The vSwitch in the zone. You can specify only one vSwitch (subnet) in each zone. You can specify at most 10 zones. If the region supports two or more zones, specify at least two zones.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID of the cluster. You can specify at most 10 zones. If the region supports two or more zones, specify at least two zones. You can call the [DescribeZones](https://help.aliyun.com/document_detail/36064.html) operation to query the most recent zone list.
      // 
      // This parameter is required.
      shared_ptr<string> zoneId_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key can be up to 128 characters in length, and cannot start with acs: or aliyun. It cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value can be up to 128 characters in length, and cannot start with acs: or aliyun. It cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    class ModificationProtectionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModificationProtectionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ModificationProtectionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ModificationProtectionConfig() = default ;
      ModificationProtectionConfig(const ModificationProtectionConfig &) = default ;
      ModificationProtectionConfig(ModificationProtectionConfig &&) = default ;
      ModificationProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModificationProtectionConfig() = default ;
      ModificationProtectionConfig& operator=(const ModificationProtectionConfig &) = default ;
      ModificationProtectionConfig& operator=(ModificationProtectionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reason_ == nullptr
        && this->status_ == nullptr; };
      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ModificationProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ModificationProtectionConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The reason for enabling the configuration read-only mode.
      // 
      // The reason must be 2 to 128 characters in length, can contain letters, digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
      // 
      // >  This parameter takes effect only when **Status** is set to **ConsoleProtection**.
      shared_ptr<string> reason_ {};
      // Specifies whether to enable the configuration read-only mode. Valid values:
      // 
      // *   **NonProtection**: Disables the configuration read-only mode. In this case, the value of the **Reason** parameter that you specify does not take effect. If you specify **Reason**, the value of the parameter is cleared.
      // *   **ConsoleProtection**: Enables the configuration read-only mode. In this case, the value of the **Reason** parameter that you specify takes effect.****
      // 
      // >  If the parameter is set to **ConsoleProtection**, the configuration read-only mode is enabled. You cannot modify the configurations of the ALB instance in the ALB console. However, you can call API operations to modify the configurations of the ALB instance.
      shared_ptr<string> status_ {};
    };

    class LoadBalancerBillingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerBillingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancerBillingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
      };
      LoadBalancerBillingConfig() = default ;
      LoadBalancerBillingConfig(const LoadBalancerBillingConfig &) = default ;
      LoadBalancerBillingConfig(LoadBalancerBillingConfig &&) = default ;
      LoadBalancerBillingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancerBillingConfig() = default ;
      LoadBalancerBillingConfig& operator=(const LoadBalancerBillingConfig &) = default ;
      LoadBalancerBillingConfig& operator=(LoadBalancerBillingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr
        && this->payType_ == nullptr; };
      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline LoadBalancerBillingConfig& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline LoadBalancerBillingConfig& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    protected:
      // The ID of the Internet Shared Bandwidth instance that is associated with the Internet-facing ALB instance.
      shared_ptr<string> bandwidthPackageId_ {};
      // The billing method of the instance.
      // 
      // Set the value to **PostPay**, which specifies the pay-as-you-go billing method.
      // 
      // This parameter is required.
      shared_ptr<string> payType_ {};
    };

    virtual bool empty() const override { return this->addressAllocatedMode_ == nullptr
        && this->addressIpVersion_ == nullptr && this->addressType_ == nullptr && this->clientToken_ == nullptr && this->deletionProtectionEnabled_ == nullptr && this->dryRun_ == nullptr
        && this->loadBalancerBillingConfig_ == nullptr && this->loadBalancerEdition_ == nullptr && this->loadBalancerName_ == nullptr && this->modificationProtectionConfig_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tag_ == nullptr && this->vpcId_ == nullptr && this->zoneMappings_ == nullptr; };
    // addressAllocatedMode Field Functions 
    bool hasAddressAllocatedMode() const { return this->addressAllocatedMode_ != nullptr;};
    void deleteAddressAllocatedMode() { this->addressAllocatedMode_ = nullptr;};
    inline string getAddressAllocatedMode() const { DARABONBA_PTR_GET_DEFAULT(addressAllocatedMode_, "") };
    inline CreateLoadBalancerRequest& setAddressAllocatedMode(string addressAllocatedMode) { DARABONBA_PTR_SET_VALUE(addressAllocatedMode_, addressAllocatedMode) };


    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateLoadBalancerRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline CreateLoadBalancerRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLoadBalancerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deletionProtectionEnabled Field Functions 
    bool hasDeletionProtectionEnabled() const { return this->deletionProtectionEnabled_ != nullptr;};
    void deleteDeletionProtectionEnabled() { this->deletionProtectionEnabled_ = nullptr;};
    inline bool getDeletionProtectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(deletionProtectionEnabled_, false) };
    inline CreateLoadBalancerRequest& setDeletionProtectionEnabled(bool deletionProtectionEnabled) { DARABONBA_PTR_SET_VALUE(deletionProtectionEnabled_, deletionProtectionEnabled) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateLoadBalancerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerBillingConfig Field Functions 
    bool hasLoadBalancerBillingConfig() const { return this->loadBalancerBillingConfig_ != nullptr;};
    void deleteLoadBalancerBillingConfig() { this->loadBalancerBillingConfig_ = nullptr;};
    inline const CreateLoadBalancerRequest::LoadBalancerBillingConfig & getLoadBalancerBillingConfig() const { DARABONBA_PTR_GET_CONST(loadBalancerBillingConfig_, CreateLoadBalancerRequest::LoadBalancerBillingConfig) };
    inline CreateLoadBalancerRequest::LoadBalancerBillingConfig getLoadBalancerBillingConfig() { DARABONBA_PTR_GET(loadBalancerBillingConfig_, CreateLoadBalancerRequest::LoadBalancerBillingConfig) };
    inline CreateLoadBalancerRequest& setLoadBalancerBillingConfig(const CreateLoadBalancerRequest::LoadBalancerBillingConfig & loadBalancerBillingConfig) { DARABONBA_PTR_SET_VALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };
    inline CreateLoadBalancerRequest& setLoadBalancerBillingConfig(CreateLoadBalancerRequest::LoadBalancerBillingConfig && loadBalancerBillingConfig) { DARABONBA_PTR_SET_RVALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };


    // loadBalancerEdition Field Functions 
    bool hasLoadBalancerEdition() const { return this->loadBalancerEdition_ != nullptr;};
    void deleteLoadBalancerEdition() { this->loadBalancerEdition_ = nullptr;};
    inline string getLoadBalancerEdition() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerEdition_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerEdition(string loadBalancerEdition) { DARABONBA_PTR_SET_VALUE(loadBalancerEdition_, loadBalancerEdition) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const CreateLoadBalancerRequest::ModificationProtectionConfig & getModificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, CreateLoadBalancerRequest::ModificationProtectionConfig) };
    inline CreateLoadBalancerRequest::ModificationProtectionConfig getModificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, CreateLoadBalancerRequest::ModificationProtectionConfig) };
    inline CreateLoadBalancerRequest& setModificationProtectionConfig(const CreateLoadBalancerRequest::ModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline CreateLoadBalancerRequest& setModificationProtectionConfig(CreateLoadBalancerRequest::ModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLoadBalancerRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateLoadBalancerRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateLoadBalancerRequest::Tag>) };
    inline vector<CreateLoadBalancerRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateLoadBalancerRequest::Tag>) };
    inline CreateLoadBalancerRequest& setTag(const vector<CreateLoadBalancerRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateLoadBalancerRequest& setTag(vector<CreateLoadBalancerRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateLoadBalancerRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<CreateLoadBalancerRequest::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<CreateLoadBalancerRequest::ZoneMappings>) };
    inline vector<CreateLoadBalancerRequest::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<CreateLoadBalancerRequest::ZoneMappings>) };
    inline CreateLoadBalancerRequest& setZoneMappings(const vector<CreateLoadBalancerRequest::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline CreateLoadBalancerRequest& setZoneMappings(vector<CreateLoadBalancerRequest::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The mode in which IP addresses are allocated to the ALB instance. Valid values:
    // 
    // *   **Fixed** (default): a fixed IP address is assigned to the ALB instance in each zone.
    // *   **Dynamic**: IP addresses are dynamically allocated to the ALB instance in each zone.
    // 
    // >  Starting from 00:00:00 on February 25, 2025 (UTC+8), when you call this operation to create an ALB instance, the instance is automatically the [upgraded version](https://help.aliyun.com/document_detail/2864070.html) regardless of the mode you specify. Upgraded ALB instances no longer differentiate between IP modes. Instead, they globally auto-scale IP addresses for providing load balancing services. The ALB instances you created before this date and time are not affected.
    shared_ptr<string> addressAllocatedMode_ {};
    // The protocol version. Valid values:
    // 
    // *   **IPv4:** IPv4.
    // *   **DualStack:** dual stack.
    shared_ptr<string> addressIpVersion_ {};
    // The type of the address of the ALB instance. Valid values:
    // 
    // *   **Internet:** The ALB instance uses a public IP address. The domain name of the ALB instance is resolved to the public IP address. In this case, the ALB instance can be accessed over the Internet.
    // *   **Intranet:** The ALB instance uses a private IP address. The domain name of the ALB instance is resolved to the private IP address. In this case, the ALB instance can be accessed over the VPC in which the ALB instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> addressType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters.
    // 
    // >  If you do not specify this parameter, the system uses the value of **RequestId** as the value of **ClientToken**. The value of the **RequestId** parameter may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable deletion protection. Default value: false. Valid values:
    // 
    // *   **true:** enables deletion protection.
    // *   **false:** disables deletion protection.
    shared_ptr<bool> deletionProtectionEnabled_ {};
    // Specifies whether to perform a dry run. Default value: false. Valid values:
    // 
    // *   **true:** performs a dry run. The system checks the required parameters, request format, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false:** performs a dry run and sends the request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The billing method of the ALB instance.
    // 
    // This parameter is required.
    shared_ptr<CreateLoadBalancerRequest::LoadBalancerBillingConfig> loadBalancerBillingConfig_ {};
    // The edition of the ALB instance. The features and billing rules vary based on the edition of the ALB instance. Valid values:
    // 
    // *   **Basic:** basic.
    // *   **Standard:** standard.
    // *   **StandardWithWaf:** WAF-enabled.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerEdition_ {};
    // The name of the ALB instance.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> loadBalancerName_ {};
    // The configuration read-only mode settings.
    shared_ptr<CreateLoadBalancerRequest::ModificationProtectionConfig> modificationProtectionConfig_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<CreateLoadBalancerRequest::Tag>> tag_ {};
    // The ID of the virtual private cloud (VPC) in which you want to create the ALB instance.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The mappings between zones an vSwitches. You can specify at most 10 zones. If the selected region supports two or more zones, select at least two zones to ensure the high availability of your service.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateLoadBalancerRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
