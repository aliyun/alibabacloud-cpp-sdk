// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class CreateLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
        DARABONBA_PTR_TO_JSON(Ipv4LocalAddresses, ipv4LocalAddresses_);
        DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
        DARABONBA_PTR_TO_JSON(Ipv6LocalAddresses, ipv6LocalAddresses_);
        DARABONBA_PTR_TO_JSON(PrivateIPv4Address, privateIPv4Address_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_FROM_JSON(Ipv4LocalAddresses, ipv4LocalAddresses_);
        DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
        DARABONBA_PTR_FROM_JSON(Ipv6LocalAddresses, ipv6LocalAddresses_);
        DARABONBA_PTR_FROM_JSON(PrivateIPv4Address, privateIPv4Address_);
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
        && this->ipv4LocalAddresses_ == nullptr && this->ipv6Address_ == nullptr && this->ipv6LocalAddresses_ == nullptr && this->privateIPv4Address_ == nullptr && this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
      // allocationId Field Functions 
      bool hasAllocationId() const { return this->allocationId_ != nullptr;};
      void deleteAllocationId() { this->allocationId_ = nullptr;};
      inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
      inline ZoneMappings& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


      // ipv4LocalAddresses Field Functions 
      bool hasIpv4LocalAddresses() const { return this->ipv4LocalAddresses_ != nullptr;};
      void deleteIpv4LocalAddresses() { this->ipv4LocalAddresses_ = nullptr;};
      inline const vector<string> & getIpv4LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv4LocalAddresses_, vector<string>) };
      inline vector<string> getIpv4LocalAddresses() { DARABONBA_PTR_GET(ipv4LocalAddresses_, vector<string>) };
      inline ZoneMappings& setIpv4LocalAddresses(const vector<string> & ipv4LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv4LocalAddresses_, ipv4LocalAddresses) };
      inline ZoneMappings& setIpv4LocalAddresses(vector<string> && ipv4LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv4LocalAddresses_, ipv4LocalAddresses) };


      // ipv6Address Field Functions 
      bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
      void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
      inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
      inline ZoneMappings& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


      // ipv6LocalAddresses Field Functions 
      bool hasIpv6LocalAddresses() const { return this->ipv6LocalAddresses_ != nullptr;};
      void deleteIpv6LocalAddresses() { this->ipv6LocalAddresses_ = nullptr;};
      inline const vector<string> & getIpv6LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv6LocalAddresses_, vector<string>) };
      inline vector<string> getIpv6LocalAddresses() { DARABONBA_PTR_GET(ipv6LocalAddresses_, vector<string>) };
      inline ZoneMappings& setIpv6LocalAddresses(const vector<string> & ipv6LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };
      inline ZoneMappings& setIpv6LocalAddresses(vector<string> && ipv6LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };


      // privateIPv4Address Field Functions 
      bool hasPrivateIPv4Address() const { return this->privateIPv4Address_ != nullptr;};
      void deletePrivateIPv4Address() { this->privateIPv4Address_ = nullptr;};
      inline string getPrivateIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4Address_, "") };
      inline ZoneMappings& setPrivateIPv4Address(string privateIPv4Address) { DARABONBA_PTR_SET_VALUE(privateIPv4Address_, privateIPv4Address) };


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
      // The ID of the elastic IP address (EIP) that is associated with the Internet-facing NLB instance. Each zone is assigned one EIP. An NLB instance can be deployed in up to 10 zones. If the region supports two or more zones, specify at least two zones.
      shared_ptr<string> allocationId_ {};
      // The local IPv4 addresses. The IP addresses that the NLB instance uses to communicate with the backend servers. The number of IP addresses must be an even number, which must be at least 2 and at most 8.
      shared_ptr<vector<string>> ipv4LocalAddresses_ {};
      // The VIP of the IPv6 version. The IPv6 address that the NLB instance uses to provide external services.
      shared_ptr<string> ipv6Address_ {};
      // The local IPv6 addresses. The IP addresses that the NLB instance uses to communicate with the backend servers. The number of IP addresses must be an even number, which must be at least 2 and at most 8.
      shared_ptr<vector<string>> ipv6LocalAddresses_ {};
      // The private virtual IP address (VIP) of the IPv4 version. The private IPv4 address that the NLB instance uses to provide external services.
      shared_ptr<string> privateIPv4Address_ {};
      // The ID of the vSwitch in the zone. You can specify only one vSwitch (subnet) in each zone of an NLB instance. An NLB instance can be deployed in up to 10 zones. If the region supports two or more zones, you must specify at least two zones.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the zone where the NLB instance is deployed. An NLB instance can be deployed in up to 10 zones. If the region supports two or more zones, specify at least two zones.
      // 
      // You can call the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query the most recent zone list.
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
      // The key of the tag. The tag key can be up to 64 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. The tag key can contain letters, digits, and the following special characters: _ . : / = + - @
      // 
      // You can specify up to 20 tags in each call.
      shared_ptr<string> key_ {};
      // The value of the tag. The tag value can be up to 128 characters in length, cannot start with `acs:` or `aliyun`, and cannot contain `http://` or `https://`. The tag value can contain letters, digits, and the following special characters: _ . : / = + - @
      // 
      // You can specify up to 20 tags in each call.
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
      // The reason for enabling the configuration read-only mode. The reason must be 2 to 128 characters in length, can contain letters, digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
      // 
      // >  This parameter takes effect only when **Status** is set to **ConsoleProtection**.
      shared_ptr<string> reason_ {};
      // Specifies whether to enable the configuration read-only mode. Valid values:
      // 
      // *   **NonProtection**: does not enable the configuration read-only mode. You cannot set the **Reason** parameter. If the **Reason** parameter is set, the value is cleared.
      // *   **ConsoleProtection**: enables the configuration read-only mode. You can set the **Reason** parameter.
      // 
      // >  If the parameter is set to **ConsoleProtection**, the configuration read-only mode is enabled. You cannot modify the configurations of the NLB instance in the NLB console. However, you can call API operations to modify the configurations of the NLB instance.
      shared_ptr<string> status_ {};
    };

    class LoadBalancerBillingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerBillingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PayType, payType_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancerBillingConfig& obj) { 
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
      virtual bool empty() const override { return this->payType_ == nullptr; };
      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline LoadBalancerBillingConfig& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    protected:
      // The billing method of the NLB instance.
      // 
      // Set the value to **PostPay**, which specifies the pay-as-you-go billing method.
      shared_ptr<string> payType_ {};
    };

    class DeletionProtectionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeletionProtectionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, DeletionProtectionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
      };
      DeletionProtectionConfig() = default ;
      DeletionProtectionConfig(const DeletionProtectionConfig &) = default ;
      DeletionProtectionConfig(DeletionProtectionConfig &&) = default ;
      DeletionProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeletionProtectionConfig() = default ;
      DeletionProtectionConfig& operator=(const DeletionProtectionConfig &) = default ;
      DeletionProtectionConfig& operator=(DeletionProtectionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->reason_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DeletionProtectionConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline DeletionProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // Specifies whether to enable the deletion protection feature. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> enabled_ {};
      // The reason why the deletion protection feature is enabled or disabled. The reason must be 2 to 128 characters in length, can contain letters, digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->addressType_ == nullptr && this->bandwidthPackageId_ == nullptr && this->clientToken_ == nullptr && this->deletionProtectionConfig_ == nullptr && this->dryRun_ == nullptr
        && this->loadBalancerBillingConfig_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerType_ == nullptr && this->modificationProtectionConfig_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr && this->vpcId_ == nullptr && this->zoneMappings_ == nullptr; };
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


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CreateLoadBalancerRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLoadBalancerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deletionProtectionConfig Field Functions 
    bool hasDeletionProtectionConfig() const { return this->deletionProtectionConfig_ != nullptr;};
    void deleteDeletionProtectionConfig() { this->deletionProtectionConfig_ = nullptr;};
    inline const CreateLoadBalancerRequest::DeletionProtectionConfig & getDeletionProtectionConfig() const { DARABONBA_PTR_GET_CONST(deletionProtectionConfig_, CreateLoadBalancerRequest::DeletionProtectionConfig) };
    inline CreateLoadBalancerRequest::DeletionProtectionConfig getDeletionProtectionConfig() { DARABONBA_PTR_GET(deletionProtectionConfig_, CreateLoadBalancerRequest::DeletionProtectionConfig) };
    inline CreateLoadBalancerRequest& setDeletionProtectionConfig(const CreateLoadBalancerRequest::DeletionProtectionConfig & deletionProtectionConfig) { DARABONBA_PTR_SET_VALUE(deletionProtectionConfig_, deletionProtectionConfig) };
    inline CreateLoadBalancerRequest& setDeletionProtectionConfig(CreateLoadBalancerRequest::DeletionProtectionConfig && deletionProtectionConfig) { DARABONBA_PTR_SET_RVALUE(deletionProtectionConfig_, deletionProtectionConfig) };


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


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerType Field Functions 
    bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
    void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
    inline string getLoadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const CreateLoadBalancerRequest::ModificationProtectionConfig & getModificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, CreateLoadBalancerRequest::ModificationProtectionConfig) };
    inline CreateLoadBalancerRequest::ModificationProtectionConfig getModificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, CreateLoadBalancerRequest::ModificationProtectionConfig) };
    inline CreateLoadBalancerRequest& setModificationProtectionConfig(const CreateLoadBalancerRequest::ModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline CreateLoadBalancerRequest& setModificationProtectionConfig(CreateLoadBalancerRequest::ModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLoadBalancerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    // The version of IP addresses used for the NLB instance. Valid values:
    // 
    // *   **ipv4** (default)
    // *   **DualStack**
    shared_ptr<string> addressIpVersion_ {};
    // The type of IPv4 addresses used for the NLB instance. Valid values are:
    // 
    // *   **Internet**: The nodes of an Internet-facing NLB instance have public IP addresses. The DNS name of an Internet-facing NLB instance is publicly resolvable to the public IP addresses of the nodes. Therefore, Internet-facing NLB instances can route requests from clients over the Internet.
    // *   **Intranet**: The nodes of an internal-facing NLB instance have only private IP addresses. The DNS name of an internal-facing NLB instance is publicly resolvable to the private IP addresses of the nodes. Therefore, internal-facing NLB instances can route requests only from clients with access to the virtual private cloud (VPC) for the NLB instance.
    // 
    // >  To enable a public IPv6 address for a dual-stack NLB instance, call the [EnableLoadBalancerIpv6Internet](https://help.aliyun.com/document_detail/445878.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> addressType_ {};
    // The ID of the Internet Shared Bandwidth instance that is associated with the Internet-facing NLB instance.
    shared_ptr<string> bandwidthPackageId_ {};
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. Only ASCII characters are allowed.
    // 
    // >  If you do not specify this parameter, the value of **RequestId** is used.**** The value of **RequestId** is different for each request.
    shared_ptr<string> clientToken_ {};
    // The configuration of the deletion protection feature.
    shared_ptr<CreateLoadBalancerRequest::DeletionProtectionConfig> deletionProtectionConfig_ {};
    // Perform a dry run without actually making the request. Valid values are:
    // 
    // *   **true**: Perform only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the check, an error message specifying the issue is returned. If the request passes, the `DryRunOperation` error code is returned.
    // *   **false** (default): Check the request and perform the operation. If the request passes the check, a 2xx HTTP status code is returned, and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The billing settings of the NLB instance.
    shared_ptr<CreateLoadBalancerRequest::LoadBalancerBillingConfig> loadBalancerBillingConfig_ {};
    // The name of the NLB instance.
    // 
    // It must be 2 to 128 characters in length, can contain letters, digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
    shared_ptr<string> loadBalancerName_ {};
    // The type of the Server Load Balancer (SLB) instance. Set the value to **network**, which indicates an NLB instance.
    shared_ptr<string> loadBalancerType_ {};
    // The configuration of the configuration read-only mode.
    shared_ptr<CreateLoadBalancerRequest::ModificationProtectionConfig> modificationProtectionConfig_ {};
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<CreateLoadBalancerRequest::Tag>> tag_ {};
    // The ID of the VPC where you want to create the NLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The mappings between zones and vSwitches. An NLB instance can be deployed in up to 10 zones. If the region supports two or more zones, you must specify at least two zones.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateLoadBalancerRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
