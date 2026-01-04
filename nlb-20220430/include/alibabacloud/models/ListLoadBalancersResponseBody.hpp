// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
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
  class ListLoadBalancersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody(ListLoadBalancersResponseBody &&) = default ;
    ListLoadBalancersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody& operator=(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody& operator=(ListLoadBalancersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadBalancers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancers& obj) { 
        DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_TO_JSON(AddressType, addressType_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
        DARABONBA_PTR_TO_JSON(DNSName, DNSName_);
        DARABONBA_PTR_TO_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
        DARABONBA_PTR_TO_JSON(Ipv6AddressType, ipv6AddressType_);
        DARABONBA_PTR_TO_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
        DARABONBA_PTR_TO_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
        DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
        DARABONBA_PTR_TO_JSON(LoadBalancerType, loadBalancerType_);
        DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
        DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancers& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
        DARABONBA_PTR_FROM_JSON(DNSName, DNSName_);
        DARABONBA_PTR_FROM_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
        DARABONBA_PTR_FROM_JSON(Ipv6AddressType, ipv6AddressType_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerType, loadBalancerType_);
        DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
        DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
      };
      LoadBalancers() = default ;
      LoadBalancers(const LoadBalancers &) = default ;
      LoadBalancers(LoadBalancers &&) = default ;
      LoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancers() = default ;
      LoadBalancers& operator=(const LoadBalancers &) = default ;
      LoadBalancers& operator=(LoadBalancers &&) = default ;
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
            DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
            DARABONBA_PTR_TO_JSON(EniId, eniId_);
            DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
            DARABONBA_PTR_TO_JSON(PrivateIPv4Address, privateIPv4Address_);
            DARABONBA_PTR_TO_JSON(PrivateIPv4HcStatus, privateIPv4HcStatus_);
            DARABONBA_PTR_TO_JSON(PrivateIPv6HcStatus, privateIPv6HcStatus_);
            DARABONBA_PTR_TO_JSON(PublicIPv4Address, publicIPv4Address_);
          };
          friend void from_json(const Darabonba::Json& j, LoadBalancerAddresses& obj) { 
            DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
            DARABONBA_PTR_FROM_JSON(EniId, eniId_);
            DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
            DARABONBA_PTR_FROM_JSON(PrivateIPv4Address, privateIPv4Address_);
            DARABONBA_PTR_FROM_JSON(PrivateIPv4HcStatus, privateIPv4HcStatus_);
            DARABONBA_PTR_FROM_JSON(PrivateIPv6HcStatus, privateIPv6HcStatus_);
            DARABONBA_PTR_FROM_JSON(PublicIPv4Address, publicIPv4Address_);
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
          virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->eniId_ == nullptr && this->ipv6Address_ == nullptr && this->privateIPv4Address_ == nullptr && this->privateIPv4HcStatus_ == nullptr && this->privateIPv6HcStatus_ == nullptr
        && this->publicIPv4Address_ == nullptr; };
          // allocationId Field Functions 
          bool hasAllocationId() const { return this->allocationId_ != nullptr;};
          void deleteAllocationId() { this->allocationId_ = nullptr;};
          inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
          inline LoadBalancerAddresses& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


          // eniId Field Functions 
          bool hasEniId() const { return this->eniId_ != nullptr;};
          void deleteEniId() { this->eniId_ = nullptr;};
          inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
          inline LoadBalancerAddresses& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


          // ipv6Address Field Functions 
          bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
          void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
          inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
          inline LoadBalancerAddresses& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


          // privateIPv4Address Field Functions 
          bool hasPrivateIPv4Address() const { return this->privateIPv4Address_ != nullptr;};
          void deletePrivateIPv4Address() { this->privateIPv4Address_ = nullptr;};
          inline string getPrivateIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4Address_, "") };
          inline LoadBalancerAddresses& setPrivateIPv4Address(string privateIPv4Address) { DARABONBA_PTR_SET_VALUE(privateIPv4Address_, privateIPv4Address) };


          // privateIPv4HcStatus Field Functions 
          bool hasPrivateIPv4HcStatus() const { return this->privateIPv4HcStatus_ != nullptr;};
          void deletePrivateIPv4HcStatus() { this->privateIPv4HcStatus_ = nullptr;};
          inline string getPrivateIPv4HcStatus() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4HcStatus_, "") };
          inline LoadBalancerAddresses& setPrivateIPv4HcStatus(string privateIPv4HcStatus) { DARABONBA_PTR_SET_VALUE(privateIPv4HcStatus_, privateIPv4HcStatus) };


          // privateIPv6HcStatus Field Functions 
          bool hasPrivateIPv6HcStatus() const { return this->privateIPv6HcStatus_ != nullptr;};
          void deletePrivateIPv6HcStatus() { this->privateIPv6HcStatus_ = nullptr;};
          inline string getPrivateIPv6HcStatus() const { DARABONBA_PTR_GET_DEFAULT(privateIPv6HcStatus_, "") };
          inline LoadBalancerAddresses& setPrivateIPv6HcStatus(string privateIPv6HcStatus) { DARABONBA_PTR_SET_VALUE(privateIPv6HcStatus_, privateIPv6HcStatus) };


          // publicIPv4Address Field Functions 
          bool hasPublicIPv4Address() const { return this->publicIPv4Address_ != nullptr;};
          void deletePublicIPv4Address() { this->publicIPv4Address_ = nullptr;};
          inline string getPublicIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(publicIPv4Address_, "") };
          inline LoadBalancerAddresses& setPublicIPv4Address(string publicIPv4Address) { DARABONBA_PTR_SET_VALUE(publicIPv4Address_, publicIPv4Address) };


        protected:
          // The ID of the elastic IP address (EIP).
          shared_ptr<string> allocationId_ {};
          // The ID of the elastic network interface (ENI) attached to the NLB instance.
          shared_ptr<string> eniId_ {};
          // The IPv6 address used by the NLB instance.
          shared_ptr<string> ipv6Address_ {};
          // The private IPv4 address of the NLB instance.
          shared_ptr<string> privateIPv4Address_ {};
          // The health status of the private IPv4 address of the NLB instance. Valid values:
          // 
          // - **Healthy**
          // - **Unhealthy**
          // 
          // > This parameter is returned only when the Status of the zone is Active.
          shared_ptr<string> privateIPv4HcStatus_ {};
          // The health status of the IPv6 address of the NLB instance. Valid values:
          // 
          // - **Healthy**
          // - **Unhealthy**
          // 
          // > This parameter is returned only when the Status of the zone is Active.
          shared_ptr<string> privateIPv6HcStatus_ {};
          // The public IPv4 address of the NLB instance.
          shared_ptr<string> publicIPv4Address_ {};
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
        // The IP addresses that are used by the NLB instance.
        shared_ptr<vector<ZoneMappings::LoadBalancerAddresses>> loadBalancerAddresses_ {};
        // The zone status. Valid values:
        // 
        // - **Active**: The zone is available.
        // 
        // - **Stopped**: The zone is disabled. You can set the zone to this status only by using Cloud Architect Design Tools (CADT).
        // 
        // - **Shifted**: The DNS record is removed.
        // 
        // - **Starting**: The zone is being enabled. You can set the zone to this status only by using CADT.
        // 
        // - **Stopping** You can set the zone to this status only by using CADT.
        shared_ptr<string> status_ {};
        // The ID of the vSwitch in the zone. By default, each zone contains one vSwitch and one subnet.
        shared_ptr<string> vSwitchId_ {};
        // The name of the zone. You can call the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query the zones.
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
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class OperationLocks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperationLocks& obj) { 
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(LockType, lockType_);
        };
        friend void from_json(const Darabonba::Json& j, OperationLocks& obj) { 
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(LockType, lockType_);
        };
        OperationLocks() = default ;
        OperationLocks(const OperationLocks &) = default ;
        OperationLocks(OperationLocks &&) = default ;
        OperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperationLocks() = default ;
        OperationLocks& operator=(const OperationLocks &) = default ;
        OperationLocks& operator=(OperationLocks &&) = default ;
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
        inline OperationLocks& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // lockType Field Functions 
        bool hasLockType() const { return this->lockType_ != nullptr;};
        void deleteLockType() { this->lockType_ = nullptr;};
        inline string getLockType() const { DARABONBA_PTR_GET_DEFAULT(lockType_, "") };
        inline OperationLocks& setLockType(string lockType) { DARABONBA_PTR_SET_VALUE(lockType_, lockType) };


      protected:
        // The reason why the NLB instance is locked.
        shared_ptr<string> lockReason_ {};
        // The type of lock. Valid values:
        // 
        // *   **SecurityLocked**: The NLB instance is locked due to security reasons.
        // *   **RelatedResourceLocked**: The NLB instance is locked due to association issues.
        // *   **FinancialLocked**: The NLB instance is locked due to overdue payments.
        // *   **ResidualLocked**: The NLB instance is locked because the payments of the associated resources are overdue and the resources are released.
        shared_ptr<string> lockType_ {};
      };

      class ModificationProtectionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModificationProtectionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ModificationProtectionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
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
        virtual bool empty() const override { return this->enabledTime_ == nullptr
        && this->reason_ == nullptr && this->status_ == nullptr; };
        // enabledTime Field Functions 
        bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
        void deleteEnabledTime() { this->enabledTime_ = nullptr;};
        inline string getEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
        inline ModificationProtectionConfig& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


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
        // The time when the configuration read-only mode was enabled. The time is displayed in UTC in `yyyy-MM-ddTHH:mm:ssZ` format.
        shared_ptr<string> enabledTime_ {};
        // The reason why the configuration read-only mode is enabled. The reason must be 2 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The reason must start with a letter.
        // 
        // This parameter takes effect only if **Status** is set to **ConsoleProtection**.
        shared_ptr<string> reason_ {};
        // Indicates whether the configuration read-only mode is enabled. Valid values:
        // 
        // *   **NonProtection**: disabled. In this case, **Reason** is not returned. If **Reason** is set, the value is cleared.
        // *   **ConsoleProtection**: enabled. In this case, **Reason** is returned.
        // 
        // >  If you set this parameter to **ConsoleProtection**, you cannot use the NLB console to modify instance configurations. However, you can call API operations to modify instance configurations.
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
        // The billing method of the NLB instance. Only **PostPay** is supported, which indicates the pay-as-you-go billing method.
        shared_ptr<string> payType_ {};
      };

      class DeletionProtectionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeletionProtectionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, DeletionProtectionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
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
        && this->enabledTime_ == nullptr && this->reason_ == nullptr; };
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


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline DeletionProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        // Indicates whether deletion protection is enabled. Valid values:
        // 
        // *   **true**: enabled
        // *   **false**: disabled
        shared_ptr<bool> enabled_ {};
        // The time when deletion protection was enabled. The time is displayed in UTC in `yyyy-MM-ddTHH:mm:ssZ` format.
        shared_ptr<string> enabledTime_ {};
        // The reason why the deletion protection feature is enabled or disabled. The reason must be 2 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The reason must start with a letter.
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->addressType_ == nullptr && this->bandwidthPackageId_ == nullptr && this->createTime_ == nullptr && this->crossZoneEnabled_ == nullptr && this->DNSName_ == nullptr
        && this->deletionProtectionConfig_ == nullptr && this->ipv6AddressType_ == nullptr && this->loadBalancerBillingConfig_ == nullptr && this->loadBalancerBusinessStatus_ == nullptr && this->loadBalancerId_ == nullptr
        && this->loadBalancerName_ == nullptr && this->loadBalancerStatus_ == nullptr && this->loadBalancerType_ == nullptr && this->modificationProtectionConfig_ == nullptr && this->operationLocks_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr
        && this->zoneMappings_ == nullptr; };
      // addressIpVersion Field Functions 
      bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
      void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
      inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
      inline LoadBalancers& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


      // addressType Field Functions 
      bool hasAddressType() const { return this->addressType_ != nullptr;};
      void deleteAddressType() { this->addressType_ = nullptr;};
      inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
      inline LoadBalancers& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline LoadBalancers& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LoadBalancers& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crossZoneEnabled Field Functions 
      bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
      void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
      inline bool getCrossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
      inline LoadBalancers& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


      // DNSName Field Functions 
      bool hasDNSName() const { return this->DNSName_ != nullptr;};
      void deleteDNSName() { this->DNSName_ = nullptr;};
      inline string getDNSName() const { DARABONBA_PTR_GET_DEFAULT(DNSName_, "") };
      inline LoadBalancers& setDNSName(string DNSName) { DARABONBA_PTR_SET_VALUE(DNSName_, DNSName) };


      // deletionProtectionConfig Field Functions 
      bool hasDeletionProtectionConfig() const { return this->deletionProtectionConfig_ != nullptr;};
      void deleteDeletionProtectionConfig() { this->deletionProtectionConfig_ = nullptr;};
      inline const LoadBalancers::DeletionProtectionConfig & getDeletionProtectionConfig() const { DARABONBA_PTR_GET_CONST(deletionProtectionConfig_, LoadBalancers::DeletionProtectionConfig) };
      inline LoadBalancers::DeletionProtectionConfig getDeletionProtectionConfig() { DARABONBA_PTR_GET(deletionProtectionConfig_, LoadBalancers::DeletionProtectionConfig) };
      inline LoadBalancers& setDeletionProtectionConfig(const LoadBalancers::DeletionProtectionConfig & deletionProtectionConfig) { DARABONBA_PTR_SET_VALUE(deletionProtectionConfig_, deletionProtectionConfig) };
      inline LoadBalancers& setDeletionProtectionConfig(LoadBalancers::DeletionProtectionConfig && deletionProtectionConfig) { DARABONBA_PTR_SET_RVALUE(deletionProtectionConfig_, deletionProtectionConfig) };


      // ipv6AddressType Field Functions 
      bool hasIpv6AddressType() const { return this->ipv6AddressType_ != nullptr;};
      void deleteIpv6AddressType() { this->ipv6AddressType_ = nullptr;};
      inline string getIpv6AddressType() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressType_, "") };
      inline LoadBalancers& setIpv6AddressType(string ipv6AddressType) { DARABONBA_PTR_SET_VALUE(ipv6AddressType_, ipv6AddressType) };


      // loadBalancerBillingConfig Field Functions 
      bool hasLoadBalancerBillingConfig() const { return this->loadBalancerBillingConfig_ != nullptr;};
      void deleteLoadBalancerBillingConfig() { this->loadBalancerBillingConfig_ = nullptr;};
      inline const LoadBalancers::LoadBalancerBillingConfig & getLoadBalancerBillingConfig() const { DARABONBA_PTR_GET_CONST(loadBalancerBillingConfig_, LoadBalancers::LoadBalancerBillingConfig) };
      inline LoadBalancers::LoadBalancerBillingConfig getLoadBalancerBillingConfig() { DARABONBA_PTR_GET(loadBalancerBillingConfig_, LoadBalancers::LoadBalancerBillingConfig) };
      inline LoadBalancers& setLoadBalancerBillingConfig(const LoadBalancers::LoadBalancerBillingConfig & loadBalancerBillingConfig) { DARABONBA_PTR_SET_VALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };
      inline LoadBalancers& setLoadBalancerBillingConfig(LoadBalancers::LoadBalancerBillingConfig && loadBalancerBillingConfig) { DARABONBA_PTR_SET_RVALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };


      // loadBalancerBusinessStatus Field Functions 
      bool hasLoadBalancerBusinessStatus() const { return this->loadBalancerBusinessStatus_ != nullptr;};
      void deleteLoadBalancerBusinessStatus() { this->loadBalancerBusinessStatus_ = nullptr;};
      inline string getLoadBalancerBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBusinessStatus_, "") };
      inline LoadBalancers& setLoadBalancerBusinessStatus(string loadBalancerBusinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBusinessStatus_, loadBalancerBusinessStatus) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline LoadBalancers& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // loadBalancerName Field Functions 
      bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
      void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
      inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
      inline LoadBalancers& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


      // loadBalancerStatus Field Functions 
      bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
      void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
      inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
      inline LoadBalancers& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


      // loadBalancerType Field Functions 
      bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
      void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
      inline string getLoadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
      inline LoadBalancers& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


      // modificationProtectionConfig Field Functions 
      bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
      void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
      inline const LoadBalancers::ModificationProtectionConfig & getModificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, LoadBalancers::ModificationProtectionConfig) };
      inline LoadBalancers::ModificationProtectionConfig getModificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, LoadBalancers::ModificationProtectionConfig) };
      inline LoadBalancers& setModificationProtectionConfig(const LoadBalancers::ModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
      inline LoadBalancers& setModificationProtectionConfig(LoadBalancers::ModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


      // operationLocks Field Functions 
      bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
      void deleteOperationLocks() { this->operationLocks_ = nullptr;};
      inline const vector<LoadBalancers::OperationLocks> & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, vector<LoadBalancers::OperationLocks>) };
      inline vector<LoadBalancers::OperationLocks> getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, vector<LoadBalancers::OperationLocks>) };
      inline LoadBalancers& setOperationLocks(const vector<LoadBalancers::OperationLocks> & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
      inline LoadBalancers& setOperationLocks(vector<LoadBalancers::OperationLocks> && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline LoadBalancers& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline LoadBalancers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline LoadBalancers& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline LoadBalancers& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<LoadBalancers::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<LoadBalancers::Tags>) };
      inline vector<LoadBalancers::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<LoadBalancers::Tags>) };
      inline LoadBalancers& setTags(const vector<LoadBalancers::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline LoadBalancers& setTags(vector<LoadBalancers::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline LoadBalancers& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneMappings Field Functions 
      bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
      void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
      inline const vector<LoadBalancers::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<LoadBalancers::ZoneMappings>) };
      inline vector<LoadBalancers::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<LoadBalancers::ZoneMappings>) };
      inline LoadBalancers& setZoneMappings(const vector<LoadBalancers::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
      inline LoadBalancers& setZoneMappings(vector<LoadBalancers::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


    protected:
      // The IP version. Valid values:
      // 
      // *   **ipv4**: IPv4
      // *   **DualStack**: dual stack
      shared_ptr<string> addressIpVersion_ {};
      // The type of IPv4 address used by the NLB instance. Valid values:
      // 
      // *   **Internet**: The NLB instance uses a public IP address. The domain name of the NLB instance is resolved to the public IP address. Therefore, the NLB instance can be accessed over the Internet.
      // *   **Intranet**: The NLB instance uses a private IP address. The domain name of the NLB instance is resolved to the private IP address. Therefore, the NLB instance can be accessed over the VPC where the NLB instance is deployed.
      shared_ptr<string> addressType_ {};
      // The ID of the EIP bandwidth plan that is associated with the NLB instance if the NLB instance uses a public IP address.
      shared_ptr<string> bandwidthPackageId_ {};
      // The time when the resource was created. The time is displayed in UTC in the `yyyy-MM-ddTHH:mm:ssZ` format.
      shared_ptr<string> createTime_ {};
      // Indicates whether cross-zone load balancing is enabled for the NLB instance. Valid values:
      // 
      // *   **true**: enabled
      // *   **false**: disabled
      shared_ptr<bool> crossZoneEnabled_ {};
      // The domain name of the NLB instance.
      shared_ptr<string> DNSName_ {};
      // The configuration of the deletion protection feature.
      shared_ptr<LoadBalancers::DeletionProtectionConfig> deletionProtectionConfig_ {};
      // The type of IPv6 address used by the NLB instance. Valid values:
      // 
      // *   **Internet**: The NLB instance uses a public IP address. The domain name of the NLB instance is resolved to the public IP address. Therefore, the NLB instance can be accessed over the Internet.
      // *   **Intranet**: The NLB instance uses a private IP address. The domain name of the NLB instance is resolved to the private IP address. Therefore, the NLB instance can be accessed over the VPC where the NLB instance is deployed.
      shared_ptr<string> ipv6AddressType_ {};
      // The billing settings of the NLB instance.
      shared_ptr<LoadBalancers::LoadBalancerBillingConfig> loadBalancerBillingConfig_ {};
      // The business status of the NLB instance. Valid values:
      // 
      // *   **Abnormal**: The NLB instance is not working as expected.
      // *   **Normal**: The NLB instance is working as expected.
      shared_ptr<string> loadBalancerBusinessStatus_ {};
      // The ID of the NLB instance.
      shared_ptr<string> loadBalancerId_ {};
      // The name of the NLB instance.
      shared_ptr<string> loadBalancerName_ {};
      // The status of the NLB instance. Valid values:
      // 
      // *   **Inactive**: The NLB instance is disabled. Listeners of NLB instances in the Inactive state do not forward traffic.
      // *   **Active**: The NLB instance is running.
      // *   **Provisioning**: The NLB instance is being created.
      // *   **Configuring**: The NLB instance is being modified.
      // *   **Deleting**: The NLB instance is being deleted.
      // *   **Deleted**: The NLB instance is deleted.
      shared_ptr<string> loadBalancerStatus_ {};
      // The type of the SLB instance. Only **Network** is returned, which indicates NLB.
      shared_ptr<string> loadBalancerType_ {};
      // The configuration of the configuration read-only mode.
      shared_ptr<LoadBalancers::ModificationProtectionConfig> modificationProtectionConfig_ {};
      // The configuration of the operation lock. This parameter takes effect if the value of `LoadBalancerBussinessStatus` is **Abnormal**.
      shared_ptr<vector<LoadBalancers::OperationLocks>> operationLocks_ {};
      // The ID of the region where the NLB instance is deployed.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The security group to which the NLB instance is added.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // A list of tags.
      shared_ptr<vector<LoadBalancers::Tags>> tags_ {};
      // The ID of the VPC where the NLB instance is deployed.
      shared_ptr<string> vpcId_ {};
      // The mappings between zones and vSwitches.
      shared_ptr<vector<LoadBalancers::ZoneMappings>> zoneMappings_ {};
    };

    virtual bool empty() const override { return this->loadBalancers_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<ListLoadBalancersResponseBody::LoadBalancers> & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<ListLoadBalancersResponseBody::LoadBalancers>) };
    inline vector<ListLoadBalancersResponseBody::LoadBalancers> getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<ListLoadBalancersResponseBody::LoadBalancers>) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(const vector<ListLoadBalancersResponseBody::LoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(vector<ListLoadBalancersResponseBody::LoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListLoadBalancersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLoadBalancersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLoadBalancersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLoadBalancersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The NLB instances.
    shared_ptr<vector<ListLoadBalancersResponseBody::LoadBalancers>> loadBalancers_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If this is your first query and no subsequent queries are to be sent, ignore this parameter.
    // *   If a subsequent query is to be sent, set the parameter to the value of NextToken that is returned from the last call.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
