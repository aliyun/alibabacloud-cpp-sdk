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
      // The EIP instance ID associated with the Internet-facing instance. Each zone corresponds to one EIP instance ID. You can add up to 10 zones. If the current region supports two or more zones, you must add at least two zones.
      shared_ptr<string> allocationId_ {};
      // The list of IPv4 local addresses. These are the addresses used by the NLB to interact with backend services.
      // The number of addresses must be an even number, with a minimum of 2 and a maximum of 8.
      shared_ptr<vector<string>> ipv4LocalAddresses_ {};
      // The IPv6 VIP. This is the IPv6 address used by the NLB to provide services.
      shared_ptr<string> ipv6Address_ {};
      // The list of IPv6 local addresses. These are the addresses used by the NLB to interact with backend services.
      // The number of addresses must be an even number, with a minimum of 2 and a maximum of 8.
      shared_ptr<vector<string>> ipv6LocalAddresses_ {};
      // The private IPv4 virtual IP address (VIP). This is the private IPv4 address used by the NLB to provide services.
      shared_ptr<string> privateIPv4Address_ {};
      // The vSwitch that corresponds to the zone. You can use only one vSwitch and one subnet in each zone. You can add up to 10 zones.
      // If the current region supports two or more zones, you must add at least two zones.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the zone where the Network Load Balancing (NLB) instance is deployed. You can add up to 10 zones. If the current region supports two or more zones, you must add at least two zones.
      // 
      // You can invoke the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query zone IDs.
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
      // The tag key. The key can be up to 64 characters in length, and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`. The key can contain letters, digits, underscores (_), periods (.), colons (:), forward slashes (/), equal signs (=), plus signs (+), hyphens (-), and at signs (@).
      // 
      // You can add up to 20 tags in a single call.
      shared_ptr<string> key_ {};
      // The tag value. The value can be up to 128 characters in length, and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`. The value can contain letters, digits, underscores (_), periods (.), colons (:), forward slashes (/), equal signs (=), plus signs (+), hyphens (-), and at signs (@).
      // 
      // You can add up to 20 tags in a single call.
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
      // The reason for enabling modification protection. The reason must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
      // 
      // > This parameter is valid and takes effect only when **Status** is set to **ConsoleProtection**.
      shared_ptr<string> reason_ {};
      // The modification protection status of the Network Load Balancing (NLB). Valid values:
      // 
      // - **NonProtection**: modification protection is disabled. You cannot specify the **Reason** parameter. If you specify the **Reason** parameter, the configuration is cleared.
      // - **ConsoleProtection**: console modification protection is enabled. You can specify the **Reason** parameter.
      // 
      // > If you set the value to **ConsoleProtection**, modification protection is enabled. You cannot modify the instance configurations in the load balancing console, but you can invoke API operations to modify the instance configurations.
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
      // The billing method of the Network Load Balancing (NLB) instance.
      // 
      // Valid value: **PostPay**, which indicates the pay-as-you-go billing method.
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
      // The deletion protection status. Valid values:
      // 
      // - **true**: enabled.
      // - **false** (default): disabled.
      shared_ptr<bool> enabled_ {};
      // The reason for changing the deletion protection status. The reason must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
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
    // The IP version. Valid values:
    // 
    // - **ipv4** (default): IPv4.
    // - **DualStack**: dual-stack.
    shared_ptr<string> addressIpVersion_ {};
    // The IPv4 address type of the Network Load Balancing (NLB) instance. Valid values:
    // 
    // - **Internet**: The load balancing instance has a public IP address. The DNS domain name is resolved to the public IP address, so it can be accessed over the Internet.
    // - **Intranet**: The load balancing instance has only a private IP address. The DNS domain name is resolved to the private IP address, so it can be accessed only over the internal network of the VPC where the load balancing instance is deployed.
    // 
    // > To enable IPv6 access over the Internet for a dual-stack Network Load Balancing (NLB) instance, invoke the [EnableLoadBalancerIpv6Internet](https://help.aliyun.com/document_detail/445878.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> addressType_ {};
    // The ID of the Internet Shared Bandwidth instance that is associated with the Internet-facing instance.
    shared_ptr<string> bandwidthPackageId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // The deletion protection configuration.
    shared_ptr<CreateLoadBalancerRequest::DeletionProtectionConfig> deletionProtectionConfig_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: prechecks the request without creating the instance. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // - **false** (default): sends the request. If the request passes the precheck, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The billing configuration of the Network Load Balancing (NLB) instance.
    shared_ptr<CreateLoadBalancerRequest::LoadBalancerBillingConfig> loadBalancerBillingConfig_ {};
    // The name of the Network Load Balancing (NLB) instance.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> loadBalancerName_ {};
    // The type of load balancing. Valid value: **network**, which indicates Network Load Balancing (NLB).
    shared_ptr<string> loadBalancerType_ {};
    // The modification protection configuration.
    shared_ptr<CreateLoadBalancerRequest::ModificationProtectionConfig> modificationProtectionConfig_ {};
    // The region ID of the Network Load Balancing (NLB) instance. 
    // 
    // You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The list of tags.
    shared_ptr<vector<CreateLoadBalancerRequest::Tag>> tag_ {};
    // The ID of the virtual private cloud (VPC) where the Network Load Balancing (NLB) instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The zone and vSwitch mappings. You can add up to 10 zones. If the current region supports two or more zones, you must add at least two zones.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateLoadBalancerRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
