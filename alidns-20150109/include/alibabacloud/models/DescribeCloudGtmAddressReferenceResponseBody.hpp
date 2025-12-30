// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressReferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressReferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressId, addressId_);
      DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressReferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudGtmAddressReferenceResponseBody() = default ;
    DescribeCloudGtmAddressReferenceResponseBody(const DescribeCloudGtmAddressReferenceResponseBody &) = default ;
    DescribeCloudGtmAddressReferenceResponseBody(DescribeCloudGtmAddressReferenceResponseBody &&) = default ;
    DescribeCloudGtmAddressReferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressReferenceResponseBody() = default ;
    DescribeCloudGtmAddressReferenceResponseBody& operator=(const DescribeCloudGtmAddressReferenceResponseBody &) = default ;
    DescribeCloudGtmAddressReferenceResponseBody& operator=(DescribeCloudGtmAddressReferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddressPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddressPools& obj) { 
        DARABONBA_PTR_TO_JSON(AddressPool, addressPool_);
      };
      friend void from_json(const Darabonba::Json& j, AddressPools& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressPool, addressPool_);
      };
      AddressPools() = default ;
      AddressPools(const AddressPools &) = default ;
      AddressPools(AddressPools &&) = default ;
      AddressPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddressPools() = default ;
      AddressPools& operator=(const AddressPools &) = default ;
      AddressPools& operator=(AddressPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddressPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddressLbStrategy, addressLbStrategy_);
          DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
          DARABONBA_PTR_TO_JSON(AddressPoolName, addressPoolName_);
          DARABONBA_PTR_TO_JSON(AddressPoolType, addressPoolType_);
          DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
          DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_TO_JSON(HealthJudgement, healthJudgement_);
          DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_TO_JSON(InstanceConfigs, instanceConfigs_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
        };
        friend void from_json(const Darabonba::Json& j, AddressPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressLbStrategy, addressLbStrategy_);
          DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
          DARABONBA_PTR_FROM_JSON(AddressPoolName, addressPoolName_);
          DARABONBA_PTR_FROM_JSON(AddressPoolType, addressPoolType_);
          DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
          DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_FROM_JSON(HealthJudgement, healthJudgement_);
          DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceConfigs, instanceConfigs_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
        };
        AddressPool() = default ;
        AddressPool(const AddressPool &) = default ;
        AddressPool(AddressPool &&) = default ;
        AddressPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddressPool() = default ;
        AddressPool& operator=(const AddressPool &) = default ;
        AddressPool& operator=(AddressPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceConfig, instanceConfig_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceConfig, instanceConfig_);
          };
          InstanceConfigs() = default ;
          InstanceConfigs(const InstanceConfigs &) = default ;
          InstanceConfigs(InstanceConfigs &&) = default ;
          InstanceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceConfigs() = default ;
          InstanceConfigs& operator=(const InstanceConfigs &) = default ;
          InstanceConfigs& operator=(InstanceConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InstanceConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InstanceConfig& obj) { 
              DARABONBA_PTR_TO_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
              DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
              DARABONBA_PTR_TO_JSON(ConfigId, configId_);
              DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
              DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
              DARABONBA_PTR_TO_JSON(Remark, remark_);
              DARABONBA_PTR_TO_JSON(ScheduleDomainName, scheduleDomainName_);
              DARABONBA_PTR_TO_JSON(ScheduleHostname, scheduleHostname_);
              DARABONBA_PTR_TO_JSON(ScheduleRrType, scheduleRrType_);
              DARABONBA_PTR_TO_JSON(ScheduleZoneName, scheduleZoneName_);
              DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
              DARABONBA_PTR_TO_JSON(Ttl, ttl_);
              DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
            };
            friend void from_json(const Darabonba::Json& j, InstanceConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
              DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
              DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
              DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
              DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
              DARABONBA_PTR_FROM_JSON(Remark, remark_);
              DARABONBA_PTR_FROM_JSON(ScheduleDomainName, scheduleDomainName_);
              DARABONBA_PTR_FROM_JSON(ScheduleHostname, scheduleHostname_);
              DARABONBA_PTR_FROM_JSON(ScheduleRrType, scheduleRrType_);
              DARABONBA_PTR_FROM_JSON(ScheduleZoneName, scheduleZoneName_);
              DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
              DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
              DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
            };
            InstanceConfig() = default ;
            InstanceConfig(const InstanceConfig &) = default ;
            InstanceConfig(InstanceConfig &&) = default ;
            InstanceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InstanceConfig() = default ;
            InstanceConfig& operator=(const InstanceConfig &) = default ;
            InstanceConfig& operator=(InstanceConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->addressPoolLbStrategy_ == nullptr
        && this->availableStatus_ == nullptr && this->configId_ == nullptr && this->enableStatus_ == nullptr && this->healthStatus_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->remark_ == nullptr && this->scheduleDomainName_ == nullptr && this->scheduleHostname_ == nullptr && this->scheduleRrType_ == nullptr
        && this->scheduleZoneName_ == nullptr && this->sequenceLbStrategyMode_ == nullptr && this->ttl_ == nullptr && this->versionCode_ == nullptr; };
            // addressPoolLbStrategy Field Functions 
            bool hasAddressPoolLbStrategy() const { return this->addressPoolLbStrategy_ != nullptr;};
            void deleteAddressPoolLbStrategy() { this->addressPoolLbStrategy_ = nullptr;};
            inline string getAddressPoolLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressPoolLbStrategy_, "") };
            inline InstanceConfig& setAddressPoolLbStrategy(string addressPoolLbStrategy) { DARABONBA_PTR_SET_VALUE(addressPoolLbStrategy_, addressPoolLbStrategy) };


            // availableStatus Field Functions 
            bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
            void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
            inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
            inline InstanceConfig& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


            // configId Field Functions 
            bool hasConfigId() const { return this->configId_ != nullptr;};
            void deleteConfigId() { this->configId_ = nullptr;};
            inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
            inline InstanceConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


            // enableStatus Field Functions 
            bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
            void deleteEnableStatus() { this->enableStatus_ = nullptr;};
            inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
            inline InstanceConfig& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


            // healthStatus Field Functions 
            bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
            void deleteHealthStatus() { this->healthStatus_ = nullptr;};
            inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
            inline InstanceConfig& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline InstanceConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // instanceName Field Functions 
            bool hasInstanceName() const { return this->instanceName_ != nullptr;};
            void deleteInstanceName() { this->instanceName_ = nullptr;};
            inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
            inline InstanceConfig& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


            // remark Field Functions 
            bool hasRemark() const { return this->remark_ != nullptr;};
            void deleteRemark() { this->remark_ = nullptr;};
            inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
            inline InstanceConfig& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


            // scheduleDomainName Field Functions 
            bool hasScheduleDomainName() const { return this->scheduleDomainName_ != nullptr;};
            void deleteScheduleDomainName() { this->scheduleDomainName_ = nullptr;};
            inline string getScheduleDomainName() const { DARABONBA_PTR_GET_DEFAULT(scheduleDomainName_, "") };
            inline InstanceConfig& setScheduleDomainName(string scheduleDomainName) { DARABONBA_PTR_SET_VALUE(scheduleDomainName_, scheduleDomainName) };


            // scheduleHostname Field Functions 
            bool hasScheduleHostname() const { return this->scheduleHostname_ != nullptr;};
            void deleteScheduleHostname() { this->scheduleHostname_ = nullptr;};
            inline string getScheduleHostname() const { DARABONBA_PTR_GET_DEFAULT(scheduleHostname_, "") };
            inline InstanceConfig& setScheduleHostname(string scheduleHostname) { DARABONBA_PTR_SET_VALUE(scheduleHostname_, scheduleHostname) };


            // scheduleRrType Field Functions 
            bool hasScheduleRrType() const { return this->scheduleRrType_ != nullptr;};
            void deleteScheduleRrType() { this->scheduleRrType_ = nullptr;};
            inline string getScheduleRrType() const { DARABONBA_PTR_GET_DEFAULT(scheduleRrType_, "") };
            inline InstanceConfig& setScheduleRrType(string scheduleRrType) { DARABONBA_PTR_SET_VALUE(scheduleRrType_, scheduleRrType) };


            // scheduleZoneName Field Functions 
            bool hasScheduleZoneName() const { return this->scheduleZoneName_ != nullptr;};
            void deleteScheduleZoneName() { this->scheduleZoneName_ = nullptr;};
            inline string getScheduleZoneName() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneName_, "") };
            inline InstanceConfig& setScheduleZoneName(string scheduleZoneName) { DARABONBA_PTR_SET_VALUE(scheduleZoneName_, scheduleZoneName) };


            // sequenceLbStrategyMode Field Functions 
            bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
            void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
            inline string getSequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
            inline InstanceConfig& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


            // ttl Field Functions 
            bool hasTtl() const { return this->ttl_ != nullptr;};
            void deleteTtl() { this->ttl_ = nullptr;};
            inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
            inline InstanceConfig& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


            // versionCode Field Functions 
            bool hasVersionCode() const { return this->versionCode_ != nullptr;};
            void deleteVersionCode() { this->versionCode_ = nullptr;};
            inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
            inline InstanceConfig& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


          protected:
            // The policy for load balancing between address pools. Valid values:
            // 
            // *   round_robin: All address pools are returned for Domain Name System (DNS) requests from any source. All address pools are sorted in round-robin mode each time they are returned.
            // *   sequence: The address pool with the smallest sequence number is preferentially returned for DNS requests from any source. The sequence number indicates the priority for returning the address pool. A smaller sequence number indicates a higher priority. If the address pool with the smallest sequence number is unavailable, the address pool with the second smallest sequence number is returned.
            // *   weight: You can set a different weight value for each address pool. This way, address pools are returned based on the weight values.
            // *   source_nearest: Different address pools are returned based on the sources of DNS requests. This way, users can access nearby address pools.
            shared_ptr<string> addressPoolLbStrategy_ {};
            // The availability state of the access domain name. Valid values:
            // 
            // *   available: If the access domain name is **enabled** and the health state is normal, the access domain name is deemed **available**.
            // *   unavailable: If the access domain name is **disabled** or the health state is **abnormal**, the access domain name is deemed **unavailable**.
            shared_ptr<string> availableStatus_ {};
            // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
            shared_ptr<string> configId_ {};
            // The enabling state of the access domain name. Valid values:
            // 
            // *   enable: The access domain name is enabled and the intelligent scheduling policy of the corresponding GTM instance takes effect.
            // *   disable: The access domain name is disabled and the intelligent scheduling policy of the corresponding GTM instance does not take effect.
            shared_ptr<string> enableStatus_ {};
            // The health state of the access domain name. Valid values:
            // 
            // *   ok: The health state of the access domain name is normal and all address pools that are referenced by the access domain name are available.
            // *   ok_alert: The health state of the access domain name is warning and some of the address pools that are referenced by the access domain name are unavailable. In this case, only the available address pools are returned for DNS requests.
            // *   exceptional: The health state of the access domain name is abnormal and all address pools that are referenced by the access domain name are unavailable. In this case, addresses in the non-empty address pool with the smallest sequence number are preferentially used for fallback resolution. This returns DNS results for clients as much as possible.
            shared_ptr<string> healthStatus_ {};
            // The ID of the GTM 3.0 instance.
            shared_ptr<string> instanceId_ {};
            // Instance name.
            shared_ptr<string> instanceName_ {};
            // Remarks.
            shared_ptr<string> remark_ {};
            // The access domain name. The value of this parameter is composed of the value of ScheduleHostname and the value of ScheduleZoneName.
            shared_ptr<string> scheduleDomainName_ {};
            // Host record of the domain accessed by GTM.
            shared_ptr<string> scheduleHostname_ {};
            // DNS record types for the scheduling domain:
            // - A: IPv4 address
            // - AAAA: IPv6 address
            // - CNAME: Domain name
            shared_ptr<string> scheduleRrType_ {};
            // The zone such as example.com or subzone such as a.example.com of the access domain name. In most cases, the zone or subzone is hosted by the Public Authoritative DNS module of Alibaba Cloud DNS. This zone belongs to the account to which the GTM instance belongs.
            shared_ptr<string> scheduleZoneName_ {};
            // The mode used if the address pool with the smallest sequence number is recovered. This parameter is returned when AddressPoolLbStrategy is set to sequence. Valid values:
            // 
            // *   preemptive: The address pool with the smallest sequence number is preferentially used if this address pool is recovered.
            // *   non_preemptive: The current address pool is still used even if the address pool with the smallest sequence number is recovered.
            shared_ptr<string> sequenceLbStrategyMode_ {};
            // Global TTL (in seconds), the TTL value for domain name resolution to addresses in the address pool, which affects the caching time of DNS records in the ISP\\"s LocalDNS. Custom TTL values are supported.
            shared_ptr<int32_t> ttl_ {};
            // Global Traffic Management version 3.0 instance types:
            // - standard: Standard Edition
            // - ultimate: Ultimate Edition
            shared_ptr<string> versionCode_ {};
          };

          virtual bool empty() const override { return this->instanceConfig_ == nullptr; };
          // instanceConfig Field Functions 
          bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
          void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
          inline const vector<InstanceConfigs::InstanceConfig> & getInstanceConfig() const { DARABONBA_PTR_GET_CONST(instanceConfig_, vector<InstanceConfigs::InstanceConfig>) };
          inline vector<InstanceConfigs::InstanceConfig> getInstanceConfig() { DARABONBA_PTR_GET(instanceConfig_, vector<InstanceConfigs::InstanceConfig>) };
          inline InstanceConfigs& setInstanceConfig(const vector<InstanceConfigs::InstanceConfig> & instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };
          inline InstanceConfigs& setInstanceConfig(vector<InstanceConfigs::InstanceConfig> && instanceConfig) { DARABONBA_PTR_SET_RVALUE(instanceConfig_, instanceConfig) };


        protected:
          shared_ptr<vector<InstanceConfigs::InstanceConfig>> instanceConfig_ {};
        };

        virtual bool empty() const override { return this->addressLbStrategy_ == nullptr
        && this->addressPoolId_ == nullptr && this->addressPoolName_ == nullptr && this->addressPoolType_ == nullptr && this->availableStatus_ == nullptr && this->enableStatus_ == nullptr
        && this->healthJudgement_ == nullptr && this->healthStatus_ == nullptr && this->instanceConfigs_ == nullptr && this->remark_ == nullptr && this->sequenceLbStrategyMode_ == nullptr; };
        // addressLbStrategy Field Functions 
        bool hasAddressLbStrategy() const { return this->addressLbStrategy_ != nullptr;};
        void deleteAddressLbStrategy() { this->addressLbStrategy_ = nullptr;};
        inline string getAddressLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressLbStrategy_, "") };
        inline AddressPool& setAddressLbStrategy(string addressLbStrategy) { DARABONBA_PTR_SET_VALUE(addressLbStrategy_, addressLbStrategy) };


        // addressPoolId Field Functions 
        bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
        void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
        inline string getAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
        inline AddressPool& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


        // addressPoolName Field Functions 
        bool hasAddressPoolName() const { return this->addressPoolName_ != nullptr;};
        void deleteAddressPoolName() { this->addressPoolName_ = nullptr;};
        inline string getAddressPoolName() const { DARABONBA_PTR_GET_DEFAULT(addressPoolName_, "") };
        inline AddressPool& setAddressPoolName(string addressPoolName) { DARABONBA_PTR_SET_VALUE(addressPoolName_, addressPoolName) };


        // addressPoolType Field Functions 
        bool hasAddressPoolType() const { return this->addressPoolType_ != nullptr;};
        void deleteAddressPoolType() { this->addressPoolType_ = nullptr;};
        inline string getAddressPoolType() const { DARABONBA_PTR_GET_DEFAULT(addressPoolType_, "") };
        inline AddressPool& setAddressPoolType(string addressPoolType) { DARABONBA_PTR_SET_VALUE(addressPoolType_, addressPoolType) };


        // availableStatus Field Functions 
        bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
        void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
        inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
        inline AddressPool& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


        // enableStatus Field Functions 
        bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
        void deleteEnableStatus() { this->enableStatus_ = nullptr;};
        inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
        inline AddressPool& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


        // healthJudgement Field Functions 
        bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
        void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
        inline string getHealthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
        inline AddressPool& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


        // healthStatus Field Functions 
        bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
        void deleteHealthStatus() { this->healthStatus_ = nullptr;};
        inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
        inline AddressPool& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


        // instanceConfigs Field Functions 
        bool hasInstanceConfigs() const { return this->instanceConfigs_ != nullptr;};
        void deleteInstanceConfigs() { this->instanceConfigs_ = nullptr;};
        inline const AddressPool::InstanceConfigs & getInstanceConfigs() const { DARABONBA_PTR_GET_CONST(instanceConfigs_, AddressPool::InstanceConfigs) };
        inline AddressPool::InstanceConfigs getInstanceConfigs() { DARABONBA_PTR_GET(instanceConfigs_, AddressPool::InstanceConfigs) };
        inline AddressPool& setInstanceConfigs(const AddressPool::InstanceConfigs & instanceConfigs) { DARABONBA_PTR_SET_VALUE(instanceConfigs_, instanceConfigs) };
        inline AddressPool& setInstanceConfigs(AddressPool::InstanceConfigs && instanceConfigs) { DARABONBA_PTR_SET_RVALUE(instanceConfigs_, instanceConfigs) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline AddressPool& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // sequenceLbStrategyMode Field Functions 
        bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
        void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
        inline string getSequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
        inline AddressPool& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


      protected:
        // Load balancing policy among addresses in the address pool:
        // - round_robin: Round-robin, for any source of DNS resolution requests, all addresses are returned, with a rotation sort applied to all addresses each time.
        // - sequence: Sequential, for any source of DNS resolution requests, returns the address with the smaller sequence number (the sequence number indicates the priority of address return, with smaller numbers having higher priority). If the address with the smaller sequence number is unavailable, the next address with a smaller sequence number is returned.
        // - weight: Weighted, supports setting different weight values for each address, realizing the return of addresses according to the ratio of weight for DNS query resolutions.
        // - source_nearest: Source-nearest, i.e., intelligent resolution function, where GTM can return different addresses based on the source of different DNS resolution requests, achieving the effect of users accessing nearby.
        shared_ptr<string> addressLbStrategy_ {};
        // The ID of the address pool.
        shared_ptr<string> addressPoolId_ {};
        // Address pool name.
        shared_ptr<string> addressPoolName_ {};
        // Address pool type:
        // - IPv4
        // - IPv6
        // - domain
        shared_ptr<string> addressPoolType_ {};
        // Address pool availability status:
        // - available
        // - unavailable
        shared_ptr<string> availableStatus_ {};
        // Address pool status:
        // - enable: Enabled status
        // - disable: Disabled status
        shared_ptr<string> enableStatus_ {};
        // The condition for determining the health status of the address pool. Valid values:
        // 
        // *   any_ok: At least one address in the address pool is available.
        // *   p30_ok: At least 30% of the addresses in the address pool are available.
        // *   p50_ok: At least 50% of the addresses in the address pool are available.
        // *   p70_ok: At least 70% of the addresses in the address pool are available.
        // *   all_ok: All addresses in the address pool are available.
        shared_ptr<string> healthJudgement_ {};
        // The health state of the address pool. Valid values:
        // 
        // *   ok: The health state of the address pool is normal and all addresses that are referenced by the address pool are available.
        // *   ok_alert: The health state of the address pool is warning and some of the addresses that are referenced by the address pool are unavailable. However, the address pool is deemed normal. In this case, only the available addresses are returned for DNS requests.
        // *   exceptional: The health state of the address pool is abnormal and some or all of the addresses that are referenced by the address pool are unavailable. In this case, the address pool is deemed abnormal.
        shared_ptr<string> healthStatus_ {};
        // The instances that reference the address pool.
        shared_ptr<AddressPool::InstanceConfigs> instanceConfigs_ {};
        // Remarks for the address pool.
        shared_ptr<string> remark_ {};
        // Load balancing policy between addresses in sequential mode during the recovery of preceding resources service mode:
        // - preemptive: Preemption mode, where upon recovery of preceding resources, priority is given to using addresses with smaller sequence numbers;
        // - non_preemptive: Non-preemption mode, where upon recovery of preceding resources, the current address continues to be used;
        shared_ptr<string> sequenceLbStrategyMode_ {};
      };

      virtual bool empty() const override { return this->addressPool_ == nullptr; };
      // addressPool Field Functions 
      bool hasAddressPool() const { return this->addressPool_ != nullptr;};
      void deleteAddressPool() { this->addressPool_ = nullptr;};
      inline const vector<AddressPools::AddressPool> & getAddressPool() const { DARABONBA_PTR_GET_CONST(addressPool_, vector<AddressPools::AddressPool>) };
      inline vector<AddressPools::AddressPool> getAddressPool() { DARABONBA_PTR_GET(addressPool_, vector<AddressPools::AddressPool>) };
      inline AddressPools& setAddressPool(const vector<AddressPools::AddressPool> & addressPool) { DARABONBA_PTR_SET_VALUE(addressPool_, addressPool) };
      inline AddressPools& setAddressPool(vector<AddressPools::AddressPool> && addressPool) { DARABONBA_PTR_SET_RVALUE(addressPool_, addressPool) };


    protected:
      shared_ptr<vector<AddressPools::AddressPool>> addressPool_ {};
    };

    virtual bool empty() const override { return this->address_ == nullptr
        && this->addressId_ == nullptr && this->addressPools_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBody& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const DescribeCloudGtmAddressReferenceResponseBody::AddressPools & getAddressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, DescribeCloudGtmAddressReferenceResponseBody::AddressPools) };
    inline DescribeCloudGtmAddressReferenceResponseBody::AddressPools getAddressPools() { DARABONBA_PTR_GET(addressPools_, DescribeCloudGtmAddressReferenceResponseBody::AddressPools) };
    inline DescribeCloudGtmAddressReferenceResponseBody& setAddressPools(const DescribeCloudGtmAddressReferenceResponseBody::AddressPools & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline DescribeCloudGtmAddressReferenceResponseBody& setAddressPools(DescribeCloudGtmAddressReferenceResponseBody::AddressPools && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // IP address or domain name.
    shared_ptr<string> address_ {};
    // The address ID. This ID uniquely identifies the address.
    shared_ptr<string> addressId_ {};
    // The address pools.
    shared_ptr<DescribeCloudGtmAddressReferenceResponseBody::AddressPools> addressPools_ {};
    // Address name.
    shared_ptr<string> name_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
