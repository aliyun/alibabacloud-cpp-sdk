// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCECONFIGSRESPONSEBODY_HPP_
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
  class SearchCloudGtmInstanceConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmInstanceConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConfigs, instanceConfigs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmInstanceConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConfigs, instanceConfigs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    SearchCloudGtmInstanceConfigsResponseBody() = default ;
    SearchCloudGtmInstanceConfigsResponseBody(const SearchCloudGtmInstanceConfigsResponseBody &) = default ;
    SearchCloudGtmInstanceConfigsResponseBody(SearchCloudGtmInstanceConfigsResponseBody &&) = default ;
    SearchCloudGtmInstanceConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmInstanceConfigsResponseBody() = default ;
    SearchCloudGtmInstanceConfigsResponseBody& operator=(const SearchCloudGtmInstanceConfigsResponseBody &) = default ;
    SearchCloudGtmInstanceConfigsResponseBody& operator=(SearchCloudGtmInstanceConfigsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
          DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(ConfigLoggingSwitchStatus, configLoggingSwitchStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(ScheduleDomainName, scheduleDomainName_);
          DARABONBA_PTR_TO_JSON(ScheduleHostname, scheduleHostname_);
          DARABONBA_PTR_TO_JSON(ScheduleRrType, scheduleRrType_);
          DARABONBA_PTR_TO_JSON(ScheduleZoneMode, scheduleZoneMode_);
          DARABONBA_PTR_TO_JSON(ScheduleZoneName, scheduleZoneName_);
          DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
          DARABONBA_PTR_TO_JSON(Ttl, ttl_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
          DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
          DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(ConfigLoggingSwitchStatus, configLoggingSwitchStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(ScheduleDomainName, scheduleDomainName_);
          DARABONBA_PTR_FROM_JSON(ScheduleHostname, scheduleHostname_);
          DARABONBA_PTR_FROM_JSON(ScheduleRrType, scheduleRrType_);
          DARABONBA_PTR_FROM_JSON(ScheduleZoneMode, scheduleZoneMode_);
          DARABONBA_PTR_FROM_JSON(ScheduleZoneName, scheduleZoneName_);
          DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
          DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
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
              DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
              DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
              DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
              DARABONBA_PTR_TO_JSON(HealthJudgement, healthJudgement_);
              DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
              DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
              DARABONBA_PTR_TO_JSON(SeqNonPreemptiveSchedule, seqNonPreemptiveSchedule_);
              DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
              DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
              DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
              DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
              DARABONBA_PTR_TO_JSON(WeightValue, weightValue_);
            };
            friend void from_json(const Darabonba::Json& j, AddressPool& obj) { 
              DARABONBA_PTR_FROM_JSON(AddressLbStrategy, addressLbStrategy_);
              DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
              DARABONBA_PTR_FROM_JSON(AddressPoolName, addressPoolName_);
              DARABONBA_PTR_FROM_JSON(AddressPoolType, addressPoolType_);
              DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
              DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
              DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
              DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
              DARABONBA_PTR_FROM_JSON(HealthJudgement, healthJudgement_);
              DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
              DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
              DARABONBA_PTR_FROM_JSON(SeqNonPreemptiveSchedule, seqNonPreemptiveSchedule_);
              DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
              DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
              DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
              DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
              DARABONBA_PTR_FROM_JSON(WeightValue, weightValue_);
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
            class RequestSource : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RequestSource& obj) { 
                DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
              };
              friend void from_json(const Darabonba::Json& j, RequestSource& obj) { 
                DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
              };
              RequestSource() = default ;
              RequestSource(const RequestSource &) = default ;
              RequestSource(RequestSource &&) = default ;
              RequestSource(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RequestSource() = default ;
              RequestSource& operator=(const RequestSource &) = default ;
              RequestSource& operator=(RequestSource &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->requestSource_ == nullptr; };
              // requestSource Field Functions 
              bool hasRequestSource() const { return this->requestSource_ != nullptr;};
              void deleteRequestSource() { this->requestSource_ = nullptr;};
              inline const vector<string> & getRequestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, vector<string>) };
              inline vector<string> getRequestSource() { DARABONBA_PTR_GET(requestSource_, vector<string>) };
              inline RequestSource& setRequestSource(const vector<string> & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
              inline RequestSource& setRequestSource(vector<string> && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


            protected:
              shared_ptr<vector<string>> requestSource_ {};
            };

            virtual bool empty() const override { return this->addressLbStrategy_ == nullptr
        && this->addressPoolId_ == nullptr && this->addressPoolName_ == nullptr && this->addressPoolType_ == nullptr && this->availableStatus_ == nullptr && this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->enableStatus_ == nullptr && this->healthJudgement_ == nullptr && this->healthStatus_ == nullptr && this->requestSource_ == nullptr
        && this->seqNonPreemptiveSchedule_ == nullptr && this->sequenceLbStrategyMode_ == nullptr && this->serialNumber_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr
        && this->weightValue_ == nullptr; };
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


            // createTime Field Functions 
            bool hasCreateTime() const { return this->createTime_ != nullptr;};
            void deleteCreateTime() { this->createTime_ = nullptr;};
            inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
            inline AddressPool& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


            // createTimestamp Field Functions 
            bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
            void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
            inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
            inline AddressPool& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


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


            // requestSource Field Functions 
            bool hasRequestSource() const { return this->requestSource_ != nullptr;};
            void deleteRequestSource() { this->requestSource_ = nullptr;};
            inline const AddressPool::RequestSource & getRequestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, AddressPool::RequestSource) };
            inline AddressPool::RequestSource getRequestSource() { DARABONBA_PTR_GET(requestSource_, AddressPool::RequestSource) };
            inline AddressPool& setRequestSource(const AddressPool::RequestSource & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
            inline AddressPool& setRequestSource(AddressPool::RequestSource && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


            // seqNonPreemptiveSchedule Field Functions 
            bool hasSeqNonPreemptiveSchedule() const { return this->seqNonPreemptiveSchedule_ != nullptr;};
            void deleteSeqNonPreemptiveSchedule() { this->seqNonPreemptiveSchedule_ = nullptr;};
            inline bool getSeqNonPreemptiveSchedule() const { DARABONBA_PTR_GET_DEFAULT(seqNonPreemptiveSchedule_, false) };
            inline AddressPool& setSeqNonPreemptiveSchedule(bool seqNonPreemptiveSchedule) { DARABONBA_PTR_SET_VALUE(seqNonPreemptiveSchedule_, seqNonPreemptiveSchedule) };


            // sequenceLbStrategyMode Field Functions 
            bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
            void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
            inline string getSequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
            inline AddressPool& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


            // serialNumber Field Functions 
            bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
            void deleteSerialNumber() { this->serialNumber_ = nullptr;};
            inline int32_t getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
            inline AddressPool& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


            // updateTime Field Functions 
            bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
            void deleteUpdateTime() { this->updateTime_ = nullptr;};
            inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
            inline AddressPool& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


            // updateTimestamp Field Functions 
            bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
            void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
            inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
            inline AddressPool& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


            // weightValue Field Functions 
            bool hasWeightValue() const { return this->weightValue_ != nullptr;};
            void deleteWeightValue() { this->weightValue_ = nullptr;};
            inline int32_t getWeightValue() const { DARABONBA_PTR_GET_DEFAULT(weightValue_, 0) };
            inline AddressPool& setWeightValue(int32_t weightValue) { DARABONBA_PTR_SET_VALUE(weightValue_, weightValue) };


          protected:
            // Load balancing policy among addresses in the address pool:
            // - round_robin: Round-robin, where for any source of DNS resolution requests, all addresses are returned, with a rotation of the order for every request.
            // - sequence: Sequential, where for any source of DNS resolution requests, the address with the lower sequence number (indicating a higher priority, the smaller the number, the higher the priority) is returned. If the address with the lower sequence number is unavailable, the next address with a lower sequence number is returned.
            // - weight: Weighted, supporting the setting of different weight values for each address to realize returning addresses according to the ratio of weights in DNS query resolutions.
            // - source_nearest: Source-nearest, referring to the intelligent resolution feature, where GTM can return different addresses based on the source of different DNS resolution requests, achieving the effect of users accessing the nearest server.
            shared_ptr<string> addressLbStrategy_ {};
            // Address pool ID, uniquely identifying the address pool.
            shared_ptr<string> addressPoolId_ {};
            // Address pool name.
            shared_ptr<string> addressPoolName_ {};
            // Address pool type:
            // - IPv4
            // - IPv6
            // - domain
            shared_ptr<string> addressPoolType_ {};
            // Address pool availability status:
            // - available: Available
            // - unavailable: Unavailable
            shared_ptr<string> availableStatus_ {};
            // Address pool creation time.
            shared_ptr<string> createTime_ {};
            // Address pool creation time (timestamp).
            shared_ptr<int64_t> createTimestamp_ {};
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
            // Parse the request source list.
            shared_ptr<AddressPool::RequestSource> requestSource_ {};
            // Indicates whether it is a sequential (non-preemptive) scheduling object for hybrid cloud management scenarios: 
            // - true: yes 
            // - false: no
            shared_ptr<bool> seqNonPreemptiveSchedule_ {};
            // The mode used if the address with the smallest sequence number is recovered. This parameter is required only when the policy for load balancing between addresses is sequence. Valid values:
            // 
            // *   preemptive: The address with the smallest sequence number is preferentially used if this address is recovered.
            // *   non_preemptive: The current address is still used even if the address with the smallest sequence number is recovered.
            shared_ptr<string> sequenceLbStrategyMode_ {};
            // Sequence number. For any parsing request, the address pool with the smaller sequence number (indicating the priority of the address pool returned, with smaller numbers having higher priority) will be returned.
            shared_ptr<int32_t> serialNumber_ {};
            // Last modification time of the address pool.
            shared_ptr<string> updateTime_ {};
            // Update time (timestamp).
            shared_ptr<int64_t> updateTimestamp_ {};
            // Weight value (an integer between 1 and 100, inclusive), allowing different weight values to be set for each address pool, implementing the return of address pools according to weight ratios in resolution queries.
            shared_ptr<int32_t> weightValue_ {};
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

        virtual bool empty() const override { return this->addressPoolLbStrategy_ == nullptr
        && this->addressPools_ == nullptr && this->availableStatus_ == nullptr && this->commodityCode_ == nullptr && this->configId_ == nullptr && this->configLoggingSwitchStatus_ == nullptr
        && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->enableStatus_ == nullptr && this->healthStatus_ == nullptr && this->instanceId_ == nullptr
        && this->remark_ == nullptr && this->scheduleDomainName_ == nullptr && this->scheduleHostname_ == nullptr && this->scheduleRrType_ == nullptr && this->scheduleZoneMode_ == nullptr
        && this->scheduleZoneName_ == nullptr && this->sequenceLbStrategyMode_ == nullptr && this->ttl_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr
        && this->versionCode_ == nullptr; };
        // addressPoolLbStrategy Field Functions 
        bool hasAddressPoolLbStrategy() const { return this->addressPoolLbStrategy_ != nullptr;};
        void deleteAddressPoolLbStrategy() { this->addressPoolLbStrategy_ = nullptr;};
        inline string getAddressPoolLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressPoolLbStrategy_, "") };
        inline InstanceConfig& setAddressPoolLbStrategy(string addressPoolLbStrategy) { DARABONBA_PTR_SET_VALUE(addressPoolLbStrategy_, addressPoolLbStrategy) };


        // addressPools Field Functions 
        bool hasAddressPools() const { return this->addressPools_ != nullptr;};
        void deleteAddressPools() { this->addressPools_ = nullptr;};
        inline const InstanceConfig::AddressPools & getAddressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, InstanceConfig::AddressPools) };
        inline InstanceConfig::AddressPools getAddressPools() { DARABONBA_PTR_GET(addressPools_, InstanceConfig::AddressPools) };
        inline InstanceConfig& setAddressPools(const InstanceConfig::AddressPools & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
        inline InstanceConfig& setAddressPools(InstanceConfig::AddressPools && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


        // availableStatus Field Functions 
        bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
        void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
        inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
        inline InstanceConfig& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline InstanceConfig& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
        inline InstanceConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // configLoggingSwitchStatus Field Functions 
        bool hasConfigLoggingSwitchStatus() const { return this->configLoggingSwitchStatus_ != nullptr;};
        void deleteConfigLoggingSwitchStatus() { this->configLoggingSwitchStatus_ = nullptr;};
        inline string getConfigLoggingSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(configLoggingSwitchStatus_, "") };
        inline InstanceConfig& setConfigLoggingSwitchStatus(string configLoggingSwitchStatus) { DARABONBA_PTR_SET_VALUE(configLoggingSwitchStatus_, configLoggingSwitchStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline InstanceConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline InstanceConfig& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


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


        // scheduleZoneMode Field Functions 
        bool hasScheduleZoneMode() const { return this->scheduleZoneMode_ != nullptr;};
        void deleteScheduleZoneMode() { this->scheduleZoneMode_ = nullptr;};
        inline string getScheduleZoneMode() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneMode_, "") };
        inline InstanceConfig& setScheduleZoneMode(string scheduleZoneMode) { DARABONBA_PTR_SET_VALUE(scheduleZoneMode_, scheduleZoneMode) };


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


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline InstanceConfig& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline InstanceConfig& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


        // versionCode Field Functions 
        bool hasVersionCode() const { return this->versionCode_ != nullptr;};
        void deleteVersionCode() { this->versionCode_ = nullptr;};
        inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
        inline InstanceConfig& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


      protected:
        // The policy for load balancing between address pools. Valid values:
        // 
        // *   round_robin: All address pools are returned for DNS requests from any source. All address pools are sorted in round-robin mode each time they are returned.
        // *   sequence: The address pool with the smallest sequence number is preferentially returned for DNS requests from any source. The sequence number indicates the priority for returning the address pool. A smaller sequence number indicates a higher priority. If the address pool with the smallest sequence number is unavailable, the address pool with the second smallest sequence number is returned.
        // *   weight: You can set a different weight value for each address pool. This way, address pools are returned based on the weight values.
        // *   source_nearest: Different address pools are returned based on the sources of DNS requests. This way, users can access nearby address pools.
        shared_ptr<string> addressPoolLbStrategy_ {};
        // The address pools.
        shared_ptr<InstanceConfig::AddressPools> addressPools_ {};
        // The availability state of the access domain name. Valid values:
        // 
        // *   available: If the access domain name is **enabled** and the health state is **normal**, the access domain name is deemed **available**.
        // *   unavailable: If the access domain name is **disabled** or the health state is **abnormal**, the access domain name is deemed **unavailable**.
        shared_ptr<string> availableStatus_ {};
        // The commodity code. Valid values:
        // 
        // *   dns_gtm_public_cn: the commodity code on the China site (aliyun.com)
        // *   dns_gtm_public_intl: the commodity code on the international site (alibabacloud.com)
        shared_ptr<string> commodityCode_ {};
        // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
        shared_ptr<string> configId_ {};
        shared_ptr<string> configLoggingSwitchStatus_ {};
        // Domain instance creation time.
        shared_ptr<string> createTime_ {};
        // Domain instance creation time (timestamp).
        shared_ptr<int64_t> createTimestamp_ {};
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
        // Remarks for the domain instance.
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
        // The allocation mode of the access domain name. Valid values:
        // 
        // *   custom: custom allocation. You must specify a custom hostname and associate the hostname with a zone that is hosted by the Public Authoritative DNS module within the account to which the GTM instance belongs to generate an access domain name.
        // *   sys_assign: system allocation. This mode is not supported. Do not set ScheduleZoneMode to sys_assign.
        shared_ptr<string> scheduleZoneMode_ {};
        // The zone such as example.com or subzone such as a.example.com of the access domain name. In most cases, the zone or subzone is hosted by the Public Authoritative DNS module of Alibaba Cloud DNS. This zone belongs to the account to which the GTM instance belongs.
        shared_ptr<string> scheduleZoneName_ {};
        // The mode used if the address pool with the smallest sequence number is recovered. This parameter is returned when AddressPoolLbStrategy is set to sequence. Valid values:
        // 
        // *   preemptive: The address pool with the smallest sequence number is preferentially used if this address pool is recovered.
        // *   non_preemptive: The current address pool is still used even if the address pool with the smallest sequence number is recovered.
        shared_ptr<string> sequenceLbStrategyMode_ {};
        // Global TTL (in seconds), the TTL value for resolving the access domain name to the address pool, which affects the caching time of DNS records in the operator\\"s LocalDNS. Supports custom TTL values.
        shared_ptr<int32_t> ttl_ {};
        // The last modification time of the domain instance.
        shared_ptr<string> updateTime_ {};
        // The last modification time of the domain instance (timestamp).
        shared_ptr<int64_t> updateTimestamp_ {};
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

    virtual bool empty() const override { return this->instanceConfigs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // instanceConfigs Field Functions 
    bool hasInstanceConfigs() const { return this->instanceConfigs_ != nullptr;};
    void deleteInstanceConfigs() { this->instanceConfigs_ = nullptr;};
    inline const SearchCloudGtmInstanceConfigsResponseBody::InstanceConfigs & getInstanceConfigs() const { DARABONBA_PTR_GET_CONST(instanceConfigs_, SearchCloudGtmInstanceConfigsResponseBody::InstanceConfigs) };
    inline SearchCloudGtmInstanceConfigsResponseBody::InstanceConfigs getInstanceConfigs() { DARABONBA_PTR_GET(instanceConfigs_, SearchCloudGtmInstanceConfigsResponseBody::InstanceConfigs) };
    inline SearchCloudGtmInstanceConfigsResponseBody& setInstanceConfigs(const SearchCloudGtmInstanceConfigsResponseBody::InstanceConfigs & instanceConfigs) { DARABONBA_PTR_SET_VALUE(instanceConfigs_, instanceConfigs) };
    inline SearchCloudGtmInstanceConfigsResponseBody& setInstanceConfigs(SearchCloudGtmInstanceConfigsResponseBody::InstanceConfigs && instanceConfigs) { DARABONBA_PTR_SET_RVALUE(instanceConfigs_, instanceConfigs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchCloudGtmInstanceConfigsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCloudGtmInstanceConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchCloudGtmInstanceConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline SearchCloudGtmInstanceConfigsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline SearchCloudGtmInstanceConfigsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The instances list.
    shared_ptr<SearchCloudGtmInstanceConfigsResponseBody::InstanceConfigs> instanceConfigs_ {};
    // Current page number, starting from 1, default is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of rows per page when paginating queries, with a maximum value of **100**, and a default of **20**.
    shared_ptr<int32_t> pageSize_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // Total number of instance configuration entries.
    shared_ptr<int32_t> totalItems_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
