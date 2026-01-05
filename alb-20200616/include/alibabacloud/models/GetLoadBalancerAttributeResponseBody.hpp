// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODY_HPP_
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
  class GetLoadBalancerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogConfig, accessLogConfig_);
      DARABONBA_PTR_TO_JSON(AddressAllocatedMode, addressAllocatedMode_);
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DNSName, DNSName_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressType, ipv6AddressType_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBussinessStatus, loadBalancerBussinessStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerOperationLocks, loadBalancerOperationLocks_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogConfig, accessLogConfig_);
      DARABONBA_PTR_FROM_JSON(AddressAllocatedMode, addressAllocatedMode_);
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DNSName, DNSName_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressType, ipv6AddressType_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBussinessStatus, loadBalancerBussinessStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerOperationLocks, loadBalancerOperationLocks_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    GetLoadBalancerAttributeResponseBody() = default ;
    GetLoadBalancerAttributeResponseBody(const GetLoadBalancerAttributeResponseBody &) = default ;
    GetLoadBalancerAttributeResponseBody(GetLoadBalancerAttributeResponseBody &&) = default ;
    GetLoadBalancerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerAttributeResponseBody() = default ;
    GetLoadBalancerAttributeResponseBody& operator=(const GetLoadBalancerAttributeResponseBody &) = default ;
    GetLoadBalancerAttributeResponseBody& operator=(GetLoadBalancerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(LoadBalancerAddresses, loadBalancerAddresses_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(LoadBalancerAddresses, loadBalancerAddresses_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class LoadBalancerAddresses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LoadBalancerAddresses& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_TO_JSON(EipType, eipType_);
          DARABONBA_PTR_TO_JSON(IntranetAddress, intranetAddress_);
          DARABONBA_PTR_TO_JSON(IntranetAddressHcStatus, intranetAddressHcStatus_);
          DARABONBA_PTR_TO_JSON(Ipv4LocalAddresses, ipv4LocalAddresses_);
          DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
          DARABONBA_PTR_TO_JSON(Ipv6AddressHcStatus, ipv6AddressHcStatus_);
          DARABONBA_PTR_TO_JSON(Ipv6LocalAddresses, ipv6LocalAddresses_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancerAddresses& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_FROM_JSON(EipType, eipType_);
          DARABONBA_PTR_FROM_JSON(IntranetAddress, intranetAddress_);
          DARABONBA_PTR_FROM_JSON(IntranetAddressHcStatus, intranetAddressHcStatus_);
          DARABONBA_PTR_FROM_JSON(Ipv4LocalAddresses, ipv4LocalAddresses_);
          DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
          DARABONBA_PTR_FROM_JSON(Ipv6AddressHcStatus, ipv6AddressHcStatus_);
          DARABONBA_PTR_FROM_JSON(Ipv6LocalAddresses, ipv6LocalAddresses_);
        };
        LoadBalancerAddresses() = default ;
        LoadBalancerAddresses(const LoadBalancerAddresses &) = default ;
        LoadBalancerAddresses(LoadBalancerAddresses &&) = default ;
        LoadBalancerAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LoadBalancerAddresses() = default ;
        LoadBalancerAddresses& operator=(const LoadBalancerAddresses &) = default ;
        LoadBalancerAddresses& operator=(LoadBalancerAddresses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->allocationId_ == nullptr && this->eipType_ == nullptr && this->intranetAddress_ == nullptr && this->intranetAddressHcStatus_ == nullptr && this->ipv4LocalAddresses_ == nullptr
        && this->ipv6Address_ == nullptr && this->ipv6AddressHcStatus_ == nullptr && this->ipv6LocalAddresses_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline LoadBalancerAddresses& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // allocationId Field Functions 
        bool hasAllocationId() const { return this->allocationId_ != nullptr;};
        void deleteAllocationId() { this->allocationId_ = nullptr;};
        inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
        inline LoadBalancerAddresses& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


        // eipType Field Functions 
        bool hasEipType() const { return this->eipType_ != nullptr;};
        void deleteEipType() { this->eipType_ = nullptr;};
        inline string getEipType() const { DARABONBA_PTR_GET_DEFAULT(eipType_, "") };
        inline LoadBalancerAddresses& setEipType(string eipType) { DARABONBA_PTR_SET_VALUE(eipType_, eipType) };


        // intranetAddress Field Functions 
        bool hasIntranetAddress() const { return this->intranetAddress_ != nullptr;};
        void deleteIntranetAddress() { this->intranetAddress_ = nullptr;};
        inline string getIntranetAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetAddress_, "") };
        inline LoadBalancerAddresses& setIntranetAddress(string intranetAddress) { DARABONBA_PTR_SET_VALUE(intranetAddress_, intranetAddress) };


        // intranetAddressHcStatus Field Functions 
        bool hasIntranetAddressHcStatus() const { return this->intranetAddressHcStatus_ != nullptr;};
        void deleteIntranetAddressHcStatus() { this->intranetAddressHcStatus_ = nullptr;};
        inline string getIntranetAddressHcStatus() const { DARABONBA_PTR_GET_DEFAULT(intranetAddressHcStatus_, "") };
        inline LoadBalancerAddresses& setIntranetAddressHcStatus(string intranetAddressHcStatus) { DARABONBA_PTR_SET_VALUE(intranetAddressHcStatus_, intranetAddressHcStatus) };


        // ipv4LocalAddresses Field Functions 
        bool hasIpv4LocalAddresses() const { return this->ipv4LocalAddresses_ != nullptr;};
        void deleteIpv4LocalAddresses() { this->ipv4LocalAddresses_ = nullptr;};
        inline const vector<string> & getIpv4LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv4LocalAddresses_, vector<string>) };
        inline vector<string> getIpv4LocalAddresses() { DARABONBA_PTR_GET(ipv4LocalAddresses_, vector<string>) };
        inline LoadBalancerAddresses& setIpv4LocalAddresses(const vector<string> & ipv4LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv4LocalAddresses_, ipv4LocalAddresses) };
        inline LoadBalancerAddresses& setIpv4LocalAddresses(vector<string> && ipv4LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv4LocalAddresses_, ipv4LocalAddresses) };


        // ipv6Address Field Functions 
        bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
        void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
        inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
        inline LoadBalancerAddresses& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


        // ipv6AddressHcStatus Field Functions 
        bool hasIpv6AddressHcStatus() const { return this->ipv6AddressHcStatus_ != nullptr;};
        void deleteIpv6AddressHcStatus() { this->ipv6AddressHcStatus_ = nullptr;};
        inline string getIpv6AddressHcStatus() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressHcStatus_, "") };
        inline LoadBalancerAddresses& setIpv6AddressHcStatus(string ipv6AddressHcStatus) { DARABONBA_PTR_SET_VALUE(ipv6AddressHcStatus_, ipv6AddressHcStatus) };


        // ipv6LocalAddresses Field Functions 
        bool hasIpv6LocalAddresses() const { return this->ipv6LocalAddresses_ != nullptr;};
        void deleteIpv6LocalAddresses() { this->ipv6LocalAddresses_ = nullptr;};
        inline const vector<string> & getIpv6LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv6LocalAddresses_, vector<string>) };
        inline vector<string> getIpv6LocalAddresses() { DARABONBA_PTR_GET(ipv6LocalAddresses_, vector<string>) };
        inline LoadBalancerAddresses& setIpv6LocalAddresses(const vector<string> & ipv6LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };
        inline LoadBalancerAddresses& setIpv6LocalAddresses(vector<string> && ipv6LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };


      protected:
        // An IPv4 address.
        // 
        // This parameter takes effect when **AddressIPVersion** is set to **IPv4** or **DualStack**. The network type is determined by the value of **AddressType**.
        shared_ptr<string> address_ {};
        // The elastic IP address (EIP).
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
        // The health status of the private IPv4 address of the ALB instance. 
        // This parameter is returned only when the Status of the zone is Active.Valid values:
        // 
        // - **Healthy**
        // 
        // - **Unhealthy**
        shared_ptr<string> intranetAddressHcStatus_ {};
        // The IPv4 link-local addresses. The IP addresses that the ALB instance uses to communicate with the backend servers.
        shared_ptr<vector<string>> ipv4LocalAddresses_ {};
        // An IPv6 address.
        // 
        // This parameter takes effect only when **AddressIPVersion** is set to **DualStack**. The network type is determined by the value of **Ipv6AddressType**.
        shared_ptr<string> ipv6Address_ {};
        // The health status of the private IPv6 address of the ALB instance. 
        // This parameter is returned only when the Status of the zone is Active.Valid values:
        // 
        // - **Healthy**
        // 
        // - **Unhealthy**
        shared_ptr<string> ipv6AddressHcStatus_ {};
        // The IPv6 link-local addresses. The IP addresses that the ALB instance uses to communicate with the backend servers.
        shared_ptr<vector<string>> ipv6LocalAddresses_ {};
      };

      virtual bool empty() const override { return this->loadBalancerAddresses_ == nullptr
        && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // loadBalancerAddresses Field Functions 
      bool hasLoadBalancerAddresses() const { return this->loadBalancerAddresses_ != nullptr;};
      void deleteLoadBalancerAddresses() { this->loadBalancerAddresses_ = nullptr;};
      inline const vector<ZoneMappings::LoadBalancerAddresses> & getLoadBalancerAddresses() const { DARABONBA_PTR_GET_CONST(loadBalancerAddresses_, vector<ZoneMappings::LoadBalancerAddresses>) };
      inline vector<ZoneMappings::LoadBalancerAddresses> getLoadBalancerAddresses() { DARABONBA_PTR_GET(loadBalancerAddresses_, vector<ZoneMappings::LoadBalancerAddresses>) };
      inline ZoneMappings& setLoadBalancerAddresses(const vector<ZoneMappings::LoadBalancerAddresses> & loadBalancerAddresses) { DARABONBA_PTR_SET_VALUE(loadBalancerAddresses_, loadBalancerAddresses) };
      inline ZoneMappings& setLoadBalancerAddresses(vector<ZoneMappings::LoadBalancerAddresses> && loadBalancerAddresses) { DARABONBA_PTR_SET_RVALUE(loadBalancerAddresses_, loadBalancerAddresses) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ZoneMappings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


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
      // The address of the ALB instance.
      shared_ptr<vector<ZoneMappings::LoadBalancerAddresses>> loadBalancerAddresses_ {};
      // The zone status. Valid values:
      // 
      // - **Active**: The ALB instance is running.
      // 
      // - **Stopped**: The ALB instance is disabled. 
      // 
      // - **Shifted**: The ALB instance is removed.
      // 
      // - **Starting**: The ALB instance is starting.
      // 
      // - **Stopping**: The ALB instance is stopping.
      shared_ptr<string> status_ {};
      // The vSwitch in the zone. You can specify only one vSwitch (subnet) in each zone of an ALB instance.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID of the ALB instance.
      // 
      // You can call the [DescribeZones](https://help.aliyun.com/document_detail/189196.html) operation to query the most recent zone list.
      shared_ptr<string> zoneId_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      // 
      // The tag key can be up to 128 characters in length, and cannot contain `http://` or `https://`. It cannot start with `acs:` or `aliyun`.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // The tag value can be up to 128 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
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
      // The reason why the configuration read-only mode is enabled.
      // 
      // The name must be 2 to 128 character characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
      // 
      // This parameter takes effect only if **Status** is set to **ConsoleProtection**.
      shared_ptr<string> reason_ {};
      // Specifies whether the configuration read-only mode is enabled. Valid values:
      // 
      // *   **NonProtection**: The configuration read-only mode is disabled. In this case, the value of the **Reason** parameter that you specify does not take effect. If you set **Reason**, the value is cleared.
      // *   **ConsoleProtection**: The configuration read-only mode is enabled. In this case, the value of the **Reason** parameter takes effect.****
      // 
      // >  If the parameter is set to **ConsoleProtection**, the configuration read-only mode is enabled. You cannot modify the configurations of the ALB instance in the ALB console. However, you can call API operations to modify the configurations of the ALB instance.
      shared_ptr<string> status_ {};
    };

    class LoadBalancerOperationLocks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerOperationLocks& obj) { 
        DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
        DARABONBA_PTR_TO_JSON(LockType, lockType_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancerOperationLocks& obj) { 
        DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
        DARABONBA_PTR_FROM_JSON(LockType, lockType_);
      };
      LoadBalancerOperationLocks() = default ;
      LoadBalancerOperationLocks(const LoadBalancerOperationLocks &) = default ;
      LoadBalancerOperationLocks(LoadBalancerOperationLocks &&) = default ;
      LoadBalancerOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancerOperationLocks() = default ;
      LoadBalancerOperationLocks& operator=(const LoadBalancerOperationLocks &) = default ;
      LoadBalancerOperationLocks& operator=(LoadBalancerOperationLocks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lockReason_ == nullptr
        && this->lockType_ == nullptr; };
      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
      inline LoadBalancerOperationLocks& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      // lockType Field Functions 
      bool hasLockType() const { return this->lockType_ != nullptr;};
      void deleteLockType() { this->lockType_ = nullptr;};
      inline string getLockType() const { DARABONBA_PTR_GET_DEFAULT(lockType_, "") };
      inline LoadBalancerOperationLocks& setLockType(string lockType) { DARABONBA_PTR_SET_VALUE(lockType_, lockType) };


    protected:
      // The reason why the ALB instance is locked. This parameter is valid only if **LoadBalancerBussinessStatus** is set to **Abnormal**.
      shared_ptr<string> lockReason_ {};
      // The lock type. Valid values:
      // 
      // *   **SecurityLocked**: The ALB instance is locked due to security reasons.
      // *   **RelatedResourceLocked**: The ALB instance is locked due to other resources that are associated with the ALB instance.
      // *   **FinancialLocked**: The ALB instance is locked due to overdue payments.
      // *   **ResidualLocked**: The ALB instance is locked because the associated resources have overdue payments and the resources are released.
      shared_ptr<string> lockType_ {};
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
      // The billing method.
      // 
      // Only **PostPay** is returned, which indicates the pay-as-you-go billing method.
      shared_ptr<string> payType_ {};
    };

    class DeletionProtectionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeletionProtectionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
      };
      friend void from_json(const Darabonba::Json& j, DeletionProtectionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
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
        && this->enabledTime_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DeletionProtectionConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // enabledTime Field Functions 
      bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
      void deleteEnabledTime() { this->enabledTime_ = nullptr;};
      inline string getEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
      inline DeletionProtectionConfig& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


    protected:
      // Indicates whether the deletion protection feature is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enabled_ {};
      // The time when the deletion protection feature was enabled. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> enabledTime_ {};
    };

    class AccessLogConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessLogConfig& obj) { 
        DARABONBA_PTR_TO_JSON(LogProject, logProject_);
        DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      };
      friend void from_json(const Darabonba::Json& j, AccessLogConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
        DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      };
      AccessLogConfig() = default ;
      AccessLogConfig(const AccessLogConfig &) = default ;
      AccessLogConfig(AccessLogConfig &&) = default ;
      AccessLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessLogConfig() = default ;
      AccessLogConfig& operator=(const AccessLogConfig &) = default ;
      AccessLogConfig& operator=(AccessLogConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logProject_ == nullptr
        && this->logStore_ == nullptr; };
      // logProject Field Functions 
      bool hasLogProject() const { return this->logProject_ != nullptr;};
      void deleteLogProject() { this->logProject_ = nullptr;};
      inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
      inline AccessLogConfig& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline AccessLogConfig& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    protected:
      // The Log Service project.
      shared_ptr<string> logProject_ {};
      // The Logstore.
      shared_ptr<string> logStore_ {};
    };

    virtual bool empty() const override { return this->accessLogConfig_ == nullptr
        && this->addressAllocatedMode_ == nullptr && this->addressIpVersion_ == nullptr && this->addressType_ == nullptr && this->bandwidthPackageId_ == nullptr && this->createTime_ == nullptr
        && this->DNSName_ == nullptr && this->deletionProtectionConfig_ == nullptr && this->ipv6AddressType_ == nullptr && this->loadBalancerBillingConfig_ == nullptr && this->loadBalancerBussinessStatus_ == nullptr
        && this->loadBalancerEdition_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerOperationLocks_ == nullptr && this->loadBalancerStatus_ == nullptr
        && this->modificationProtectionConfig_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupIds_ == nullptr
        && this->tags_ == nullptr && this->vpcId_ == nullptr && this->zoneMappings_ == nullptr; };
    // accessLogConfig Field Functions 
    bool hasAccessLogConfig() const { return this->accessLogConfig_ != nullptr;};
    void deleteAccessLogConfig() { this->accessLogConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBody::AccessLogConfig & getAccessLogConfig() const { DARABONBA_PTR_GET_CONST(accessLogConfig_, GetLoadBalancerAttributeResponseBody::AccessLogConfig) };
    inline GetLoadBalancerAttributeResponseBody::AccessLogConfig getAccessLogConfig() { DARABONBA_PTR_GET(accessLogConfig_, GetLoadBalancerAttributeResponseBody::AccessLogConfig) };
    inline GetLoadBalancerAttributeResponseBody& setAccessLogConfig(const GetLoadBalancerAttributeResponseBody::AccessLogConfig & accessLogConfig) { DARABONBA_PTR_SET_VALUE(accessLogConfig_, accessLogConfig) };
    inline GetLoadBalancerAttributeResponseBody& setAccessLogConfig(GetLoadBalancerAttributeResponseBody::AccessLogConfig && accessLogConfig) { DARABONBA_PTR_SET_RVALUE(accessLogConfig_, accessLogConfig) };


    // addressAllocatedMode Field Functions 
    bool hasAddressAllocatedMode() const { return this->addressAllocatedMode_ != nullptr;};
    void deleteAddressAllocatedMode() { this->addressAllocatedMode_ = nullptr;};
    inline string getAddressAllocatedMode() const { DARABONBA_PTR_GET_DEFAULT(addressAllocatedMode_, "") };
    inline GetLoadBalancerAttributeResponseBody& setAddressAllocatedMode(string addressAllocatedMode) { DARABONBA_PTR_SET_VALUE(addressAllocatedMode_, addressAllocatedMode) };


    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline GetLoadBalancerAttributeResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline GetLoadBalancerAttributeResponseBody& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLoadBalancerAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DNSName Field Functions 
    bool hasDNSName() const { return this->DNSName_ != nullptr;};
    void deleteDNSName() { this->DNSName_ = nullptr;};
    inline string getDNSName() const { DARABONBA_PTR_GET_DEFAULT(DNSName_, "") };
    inline GetLoadBalancerAttributeResponseBody& setDNSName(string DNSName) { DARABONBA_PTR_SET_VALUE(DNSName_, DNSName) };


    // deletionProtectionConfig Field Functions 
    bool hasDeletionProtectionConfig() const { return this->deletionProtectionConfig_ != nullptr;};
    void deleteDeletionProtectionConfig() { this->deletionProtectionConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBody::DeletionProtectionConfig & getDeletionProtectionConfig() const { DARABONBA_PTR_GET_CONST(deletionProtectionConfig_, GetLoadBalancerAttributeResponseBody::DeletionProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody::DeletionProtectionConfig getDeletionProtectionConfig() { DARABONBA_PTR_GET(deletionProtectionConfig_, GetLoadBalancerAttributeResponseBody::DeletionProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setDeletionProtectionConfig(const GetLoadBalancerAttributeResponseBody::DeletionProtectionConfig & deletionProtectionConfig) { DARABONBA_PTR_SET_VALUE(deletionProtectionConfig_, deletionProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setDeletionProtectionConfig(GetLoadBalancerAttributeResponseBody::DeletionProtectionConfig && deletionProtectionConfig) { DARABONBA_PTR_SET_RVALUE(deletionProtectionConfig_, deletionProtectionConfig) };


    // ipv6AddressType Field Functions 
    bool hasIpv6AddressType() const { return this->ipv6AddressType_ != nullptr;};
    void deleteIpv6AddressType() { this->ipv6AddressType_ = nullptr;};
    inline string getIpv6AddressType() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressType_, "") };
    inline GetLoadBalancerAttributeResponseBody& setIpv6AddressType(string ipv6AddressType) { DARABONBA_PTR_SET_VALUE(ipv6AddressType_, ipv6AddressType) };


    // loadBalancerBillingConfig Field Functions 
    bool hasLoadBalancerBillingConfig() const { return this->loadBalancerBillingConfig_ != nullptr;};
    void deleteLoadBalancerBillingConfig() { this->loadBalancerBillingConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBody::LoadBalancerBillingConfig & getLoadBalancerBillingConfig() const { DARABONBA_PTR_GET_CONST(loadBalancerBillingConfig_, GetLoadBalancerAttributeResponseBody::LoadBalancerBillingConfig) };
    inline GetLoadBalancerAttributeResponseBody::LoadBalancerBillingConfig getLoadBalancerBillingConfig() { DARABONBA_PTR_GET(loadBalancerBillingConfig_, GetLoadBalancerAttributeResponseBody::LoadBalancerBillingConfig) };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerBillingConfig(const GetLoadBalancerAttributeResponseBody::LoadBalancerBillingConfig & loadBalancerBillingConfig) { DARABONBA_PTR_SET_VALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerBillingConfig(GetLoadBalancerAttributeResponseBody::LoadBalancerBillingConfig && loadBalancerBillingConfig) { DARABONBA_PTR_SET_RVALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };


    // loadBalancerBussinessStatus Field Functions 
    bool hasLoadBalancerBussinessStatus() const { return this->loadBalancerBussinessStatus_ != nullptr;};
    void deleteLoadBalancerBussinessStatus() { this->loadBalancerBussinessStatus_ = nullptr;};
    inline string getLoadBalancerBussinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBussinessStatus_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerBussinessStatus(string loadBalancerBussinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBussinessStatus_, loadBalancerBussinessStatus) };


    // loadBalancerEdition Field Functions 
    bool hasLoadBalancerEdition() const { return this->loadBalancerEdition_ != nullptr;};
    void deleteLoadBalancerEdition() { this->loadBalancerEdition_ = nullptr;};
    inline string getLoadBalancerEdition() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerEdition_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerEdition(string loadBalancerEdition) { DARABONBA_PTR_SET_VALUE(loadBalancerEdition_, loadBalancerEdition) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerOperationLocks Field Functions 
    bool hasLoadBalancerOperationLocks() const { return this->loadBalancerOperationLocks_ != nullptr;};
    void deleteLoadBalancerOperationLocks() { this->loadBalancerOperationLocks_ = nullptr;};
    inline const vector<GetLoadBalancerAttributeResponseBody::LoadBalancerOperationLocks> & getLoadBalancerOperationLocks() const { DARABONBA_PTR_GET_CONST(loadBalancerOperationLocks_, vector<GetLoadBalancerAttributeResponseBody::LoadBalancerOperationLocks>) };
    inline vector<GetLoadBalancerAttributeResponseBody::LoadBalancerOperationLocks> getLoadBalancerOperationLocks() { DARABONBA_PTR_GET(loadBalancerOperationLocks_, vector<GetLoadBalancerAttributeResponseBody::LoadBalancerOperationLocks>) };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerOperationLocks(const vector<GetLoadBalancerAttributeResponseBody::LoadBalancerOperationLocks> & loadBalancerOperationLocks) { DARABONBA_PTR_SET_VALUE(loadBalancerOperationLocks_, loadBalancerOperationLocks) };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerOperationLocks(vector<GetLoadBalancerAttributeResponseBody::LoadBalancerOperationLocks> && loadBalancerOperationLocks) { DARABONBA_PTR_SET_RVALUE(loadBalancerOperationLocks_, loadBalancerOperationLocks) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBody::ModificationProtectionConfig & getModificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, GetLoadBalancerAttributeResponseBody::ModificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody::ModificationProtectionConfig getModificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, GetLoadBalancerAttributeResponseBody::ModificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setModificationProtectionConfig(const GetLoadBalancerAttributeResponseBody::ModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setModificationProtectionConfig(GetLoadBalancerAttributeResponseBody::ModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline GetLoadBalancerAttributeResponseBody& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline GetLoadBalancerAttributeResponseBody& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetLoadBalancerAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetLoadBalancerAttributeResponseBody::Tags>) };
    inline vector<GetLoadBalancerAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetLoadBalancerAttributeResponseBody::Tags>) };
    inline GetLoadBalancerAttributeResponseBody& setTags(const vector<GetLoadBalancerAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetLoadBalancerAttributeResponseBody& setTags(vector<GetLoadBalancerAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<GetLoadBalancerAttributeResponseBody::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<GetLoadBalancerAttributeResponseBody::ZoneMappings>) };
    inline vector<GetLoadBalancerAttributeResponseBody::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<GetLoadBalancerAttributeResponseBody::ZoneMappings>) };
    inline GetLoadBalancerAttributeResponseBody& setZoneMappings(const vector<GetLoadBalancerAttributeResponseBody::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline GetLoadBalancerAttributeResponseBody& setZoneMappings(vector<GetLoadBalancerAttributeResponseBody::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The configuration of the access log feature.
    shared_ptr<GetLoadBalancerAttributeResponseBody::AccessLogConfig> accessLogConfig_ {};
    // The mode in which IP addresses are allocated. Valid values:
    // 
    // *   **Fixed**: allocates a static IP address to the ALB instance.
    // *   **Dynamic**: dynamically allocates an IP address to each zone of the ALB instance.
    shared_ptr<string> addressAllocatedMode_ {};
    // The IP version. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    shared_ptr<string> addressIpVersion_ {};
    // The network type of the ALB instance. Valid values:
    // 
    // *   **Internet**: The ALB instance uses a public IP address. The domain name of the ALB instance is resolved to the public IP address. Therefore, the ALB instance can be accessed over the Internet.
    // *   **Intranet**: The ALB instance uses a private IP address. The domain name of the ALB instance is resolved to the private IP address. In this case, the ALB instance can be accessed over the virtual private cloud (VPC) where the ALB instance is deployed.
    shared_ptr<string> addressType_ {};
    // The ID of the elastic IP address (EIP) bandwidth plan that is associated with the Internet-facing ALB instance.
    shared_ptr<string> bandwidthPackageId_ {};
    // The time when the resource was created. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The domain name of the ALB instance.
    shared_ptr<string> DNSName_ {};
    // The configuration of deletion protection.
    shared_ptr<GetLoadBalancerAttributeResponseBody::DeletionProtectionConfig> deletionProtectionConfig_ {};
    // The type of IPv6 address that is used by the ALB instance. Valid values:
    // 
    // *   **Internet**: The ALB instance uses a public IP address. The domain name of the ALB instance is resolved to the public IP address. Therefore, the ALB instance can be accessed over the Internet.
    // *   **Intranet**: The ALB instance uses a private IP address. The domain name of the ALB instance is resolved to the private IP address. Therefore, the ALB instance can be accessed over the VPC in which the ALB instance is deployed.
    shared_ptr<string> ipv6AddressType_ {};
    // The billing method of the ALB instance.
    shared_ptr<GetLoadBalancerAttributeResponseBody::LoadBalancerBillingConfig> loadBalancerBillingConfig_ {};
    // The service status of the ALB instance. Valid values:
    // 
    // *   **Abnormal**
    // *   **Normal**
    shared_ptr<string> loadBalancerBussinessStatus_ {};
    // The edition of the ALB instance. The features and billing rules vary based on the edition of the ALB instance. Valid values:
    // 
    // *   **Basic**
    // *   **Standard**
    // *   **StandardWithWaf**
    shared_ptr<string> loadBalancerEdition_ {};
    // The ALB instance ID.
    shared_ptr<string> loadBalancerId_ {};
    // The name of the ALB instance.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> loadBalancerName_ {};
    // The type of the lock. Valid values:
    // 
    // *   **SecurityLocked**: The ALB instance is locked due to security reasons.
    // *   **RelatedResourceLocked**: The ALB instance is locked due to association issues.
    // *   **FinancialLocked**: The ALB instance is locked due to overdue payments.
    // *   **ResidualLocked**: The ALB instance is locked because the associated resources have overdue payments and the resources are released.
    shared_ptr<vector<GetLoadBalancerAttributeResponseBody::LoadBalancerOperationLocks>> loadBalancerOperationLocks_ {};
    // The status of the ALB instance. Valid values:
    // 
    // *   **Inactive**: The ALB instance is disabled. ALB instances in the Inactive state do not forward traffic.
    // *   **Active**: The ALB instance is running.
    // *   **Provisioning**: The ALB instance is being created.
    // *   **Configuring**: The ALB instance is being modified.
    // *   **CreateFailed**: The system failed to create the ALB instance. In this case, you are not charged for the ALB instance. You can only delete the ALB instance.
    shared_ptr<string> loadBalancerStatus_ {};
    // The configuration read-only mode settings.
    shared_ptr<GetLoadBalancerAttributeResponseBody::ModificationProtectionConfig> modificationProtectionConfig_ {};
    // The region ID of the ALB instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The IDs of the security groups to which the ALB instance is added.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The tag value.
    // 
    // The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag value cannot contain `http://` or `https://`.
    shared_ptr<vector<GetLoadBalancerAttributeResponseBody::Tags>> tags_ {};
    // The ID of the VPC in which the ALB instance is deployed.
    shared_ptr<string> vpcId_ {};
    // The mappings between zones and vSwitches. At most 10 zones are returned. If the current region supports two or more zones, at least two zones are returned.
    shared_ptr<vector<GetLoadBalancerAttributeResponseBody::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
