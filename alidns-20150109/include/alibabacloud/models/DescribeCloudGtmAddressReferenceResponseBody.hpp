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
            shared_ptr<string> addressPoolLbStrategy_ {};
            shared_ptr<string> availableStatus_ {};
            shared_ptr<string> configId_ {};
            shared_ptr<string> enableStatus_ {};
            shared_ptr<string> healthStatus_ {};
            shared_ptr<string> instanceId_ {};
            shared_ptr<string> instanceName_ {};
            shared_ptr<string> remark_ {};
            shared_ptr<string> scheduleDomainName_ {};
            shared_ptr<string> scheduleHostname_ {};
            shared_ptr<string> scheduleRrType_ {};
            shared_ptr<string> scheduleZoneName_ {};
            shared_ptr<string> sequenceLbStrategyMode_ {};
            shared_ptr<int32_t> ttl_ {};
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
        shared_ptr<string> addressLbStrategy_ {};
        shared_ptr<string> addressPoolId_ {};
        shared_ptr<string> addressPoolName_ {};
        shared_ptr<string> addressPoolType_ {};
        shared_ptr<string> availableStatus_ {};
        shared_ptr<string> enableStatus_ {};
        shared_ptr<string> healthJudgement_ {};
        shared_ptr<string> healthStatus_ {};
        shared_ptr<AddressPool::InstanceConfigs> instanceConfigs_ {};
        shared_ptr<string> remark_ {};
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
