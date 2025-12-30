// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGFULLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGFULLINFORESPONSEBODY_HPP_
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
  class DescribeCloudGtmInstanceConfigFullInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmInstanceConfigFullInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
      DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
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
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmInstanceConfigFullInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPoolLbStrategy, addressPoolLbStrategy_);
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    DescribeCloudGtmInstanceConfigFullInfoResponseBody() = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody(const DescribeCloudGtmInstanceConfigFullInfoResponseBody &) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody(DescribeCloudGtmInstanceConfigFullInfoResponseBody &&) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmInstanceConfigFullInfoResponseBody() = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody& operator=(const DescribeCloudGtmInstanceConfigFullInfoResponseBody &) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBody& operator=(DescribeCloudGtmInstanceConfigFullInfoResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Addresses, addresses_);
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
          DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
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

        class Addresses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Addresses& obj) { 
            DARABONBA_PTR_TO_JSON(Address, address_);
          };
          friend void from_json(const Darabonba::Json& j, Addresses& obj) { 
            DARABONBA_PTR_FROM_JSON(Address, address_);
          };
          Addresses() = default ;
          Addresses(const Addresses &) = default ;
          Addresses(Addresses &&) = default ;
          Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Addresses() = default ;
          Addresses& operator=(const Addresses &) = default ;
          Addresses& operator=(Addresses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Address : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Address& obj) { 
              DARABONBA_PTR_TO_JSON(Address, address_);
              DARABONBA_PTR_TO_JSON(AddressId, addressId_);
              DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
              DARABONBA_PTR_TO_JSON(AvailableMode, availableMode_);
              DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
              DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
              DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
              DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
              DARABONBA_PTR_TO_JSON(HealthJudgement, healthJudgement_);
              DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
              DARABONBA_PTR_TO_JSON(ManualAvailableStatus, manualAvailableStatus_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Remark, remark_);
              DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
              DARABONBA_PTR_TO_JSON(SeqNonPreemptiveSchedule, seqNonPreemptiveSchedule_);
              DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
              DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
              DARABONBA_PTR_TO_JSON(WeightValue, weightValue_);
            };
            friend void from_json(const Darabonba::Json& j, Address& obj) { 
              DARABONBA_PTR_FROM_JSON(Address, address_);
              DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
              DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
              DARABONBA_PTR_FROM_JSON(AvailableMode, availableMode_);
              DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
              DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
              DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
              DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
              DARABONBA_PTR_FROM_JSON(HealthJudgement, healthJudgement_);
              DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
              DARABONBA_PTR_FROM_JSON(ManualAvailableStatus, manualAvailableStatus_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Remark, remark_);
              DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
              DARABONBA_PTR_FROM_JSON(SeqNonPreemptiveSchedule, seqNonPreemptiveSchedule_);
              DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
              DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
              DARABONBA_PTR_FROM_JSON(WeightValue, weightValue_);
            };
            Address() = default ;
            Address(const Address &) = default ;
            Address(Address &&) = default ;
            Address(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Address() = default ;
            Address& operator=(const Address &) = default ;
            Address& operator=(Address &&) = default ;
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

            virtual bool empty() const override { return this->address_ == nullptr
        && this->addressId_ == nullptr && this->attributeInfo_ == nullptr && this->availableMode_ == nullptr && this->availableStatus_ == nullptr && this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->enableStatus_ == nullptr && this->healthJudgement_ == nullptr && this->healthStatus_ == nullptr && this->manualAvailableStatus_ == nullptr
        && this->name_ == nullptr && this->remark_ == nullptr && this->requestSource_ == nullptr && this->seqNonPreemptiveSchedule_ == nullptr && this->serialNumber_ == nullptr
        && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->weightValue_ == nullptr; };
            // address Field Functions 
            bool hasAddress() const { return this->address_ != nullptr;};
            void deleteAddress() { this->address_ = nullptr;};
            inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
            inline Address& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


            // addressId Field Functions 
            bool hasAddressId() const { return this->addressId_ != nullptr;};
            void deleteAddressId() { this->addressId_ = nullptr;};
            inline string getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
            inline Address& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


            // attributeInfo Field Functions 
            bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
            void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
            inline string getAttributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
            inline Address& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


            // availableMode Field Functions 
            bool hasAvailableMode() const { return this->availableMode_ != nullptr;};
            void deleteAvailableMode() { this->availableMode_ = nullptr;};
            inline string getAvailableMode() const { DARABONBA_PTR_GET_DEFAULT(availableMode_, "") };
            inline Address& setAvailableMode(string availableMode) { DARABONBA_PTR_SET_VALUE(availableMode_, availableMode) };


            // availableStatus Field Functions 
            bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
            void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
            inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
            inline Address& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


            // createTime Field Functions 
            bool hasCreateTime() const { return this->createTime_ != nullptr;};
            void deleteCreateTime() { this->createTime_ = nullptr;};
            inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
            inline Address& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


            // createTimestamp Field Functions 
            bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
            void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
            inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
            inline Address& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


            // enableStatus Field Functions 
            bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
            void deleteEnableStatus() { this->enableStatus_ = nullptr;};
            inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
            inline Address& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


            // healthJudgement Field Functions 
            bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
            void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
            inline string getHealthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
            inline Address& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


            // healthStatus Field Functions 
            bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
            void deleteHealthStatus() { this->healthStatus_ = nullptr;};
            inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
            inline Address& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


            // manualAvailableStatus Field Functions 
            bool hasManualAvailableStatus() const { return this->manualAvailableStatus_ != nullptr;};
            void deleteManualAvailableStatus() { this->manualAvailableStatus_ = nullptr;};
            inline string getManualAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAvailableStatus_, "") };
            inline Address& setManualAvailableStatus(string manualAvailableStatus) { DARABONBA_PTR_SET_VALUE(manualAvailableStatus_, manualAvailableStatus) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Address& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // remark Field Functions 
            bool hasRemark() const { return this->remark_ != nullptr;};
            void deleteRemark() { this->remark_ = nullptr;};
            inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
            inline Address& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


            // requestSource Field Functions 
            bool hasRequestSource() const { return this->requestSource_ != nullptr;};
            void deleteRequestSource() { this->requestSource_ = nullptr;};
            inline const Address::RequestSource & getRequestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, Address::RequestSource) };
            inline Address::RequestSource getRequestSource() { DARABONBA_PTR_GET(requestSource_, Address::RequestSource) };
            inline Address& setRequestSource(const Address::RequestSource & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
            inline Address& setRequestSource(Address::RequestSource && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


            // seqNonPreemptiveSchedule Field Functions 
            bool hasSeqNonPreemptiveSchedule() const { return this->seqNonPreemptiveSchedule_ != nullptr;};
            void deleteSeqNonPreemptiveSchedule() { this->seqNonPreemptiveSchedule_ = nullptr;};
            inline bool getSeqNonPreemptiveSchedule() const { DARABONBA_PTR_GET_DEFAULT(seqNonPreemptiveSchedule_, false) };
            inline Address& setSeqNonPreemptiveSchedule(bool seqNonPreemptiveSchedule) { DARABONBA_PTR_SET_VALUE(seqNonPreemptiveSchedule_, seqNonPreemptiveSchedule) };


            // serialNumber Field Functions 
            bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
            void deleteSerialNumber() { this->serialNumber_ = nullptr;};
            inline int32_t getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
            inline Address& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Address& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // updateTime Field Functions 
            bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
            void deleteUpdateTime() { this->updateTime_ = nullptr;};
            inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
            inline Address& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


            // updateTimestamp Field Functions 
            bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
            void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
            inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
            inline Address& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


            // weightValue Field Functions 
            bool hasWeightValue() const { return this->weightValue_ != nullptr;};
            void deleteWeightValue() { this->weightValue_ = nullptr;};
            inline int32_t getWeightValue() const { DARABONBA_PTR_GET_DEFAULT(weightValue_, 0) };
            inline Address& setWeightValue(int32_t weightValue) { DARABONBA_PTR_SET_VALUE(weightValue_, weightValue) };


          protected:
            // IP address or domain name.
            shared_ptr<string> address_ {};
            // The address ID. This ID uniquely identifies the address.
            shared_ptr<string> addressId_ {};
            // Address ownership information, not supported in the current version.
            shared_ptr<string> attributeInfo_ {};
            // The failover mode that is used when address exceptions are identified. Valid values:
            // 
            // *   auto: the automatic mode. The system determines whether to return an address based on the health check results. If the address fails health checks, the system does not return the address. If the address passes health checks, the system returns the address.
            // *   manual: the manual mode. If an address is in the unavailable state, the address is not returned for DNS requests even if the address passes health checks. If an address is in the available state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
            shared_ptr<string> availableMode_ {};
            // The availability state of the address. Valid values:
            // 
            // *   available
            // *   unavailable
            shared_ptr<string> availableStatus_ {};
            // Address creation time.
            shared_ptr<string> createTime_ {};
            // Address creation time (timestamp).
            shared_ptr<int64_t> createTimestamp_ {};
            // The enabling state of the address. Valid values:
            // 
            // *   enable
            // *   disable
            shared_ptr<string> enableStatus_ {};
            // The condition for determining the health state of the address. Valid values:
            // 
            // *   any_ok: The health check results of at least one health check template are normal.
            // *   p30_ok: The health check results of at least 30% of health check templates are normal.
            // *   p50_ok: The health check results of at least 50% of health check templates are normal.
            // *   p70_ok: The health check results of at least 70% of health check templates are normal.
            // *   all_ok: The health check results of all health check templates are normal.
            shared_ptr<string> healthJudgement_ {};
            // The health check state of the address. Valid values:
            // 
            // *   ok: The address passes all health checks of the referenced health check templates.
            // *   ok_alert: The address fails some health checks of the referenced health check templates but the address is deemed normal.
            // *   ok_no_monitor: The address does not reference any health check template and is normal.
            // *   exceptional: The address fails some or all health checks of the referenced health check templates and the address is deemed abnormal.
            shared_ptr<string> healthStatus_ {};
            // The availability state of the address when AvailableMode is set to manual. Valid values:
            // 
            // *   available: The address is normal. In this state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
            // *   unavailable: The address is abnormal. In this state, the address is not returned for DNS requests even if the address passes health checks.
            shared_ptr<string> manualAvailableStatus_ {};
            // Address name.
            shared_ptr<string> name_ {};
            // The remark of the address.
            shared_ptr<string> remark_ {};
            // Request source list.
            shared_ptr<Address::RequestSource> requestSource_ {};
            // Indicates whether it is a sequential (non-preemptive) mode scheduling object, applicable to hybrid cloud management scenarios: 
            // 
            // - true: yes
            // - false: no
            shared_ptr<bool> seqNonPreemptiveSchedule_ {};
            // Sequence number, indicating the priority of address return, where smaller numbers have higher priority.
            shared_ptr<int32_t> serialNumber_ {};
            // The type of the address. Valid values:
            // 
            // *   IPV4: the IPv4 address
            // *   IPv6: the IPv6 address
            // *   domain: the domain name
            shared_ptr<string> type_ {};
            // Last modified time of the address.
            shared_ptr<string> updateTime_ {};
            // The last modification time of the address (timestamp).
            shared_ptr<int64_t> updateTimestamp_ {};
            // Weight value (an integer between 1 and 100, inclusive), allowing different weight values to be set for each address, enabling resolution queries to return addresses in proportion to their weights.
            shared_ptr<int32_t> weightValue_ {};
          };

          virtual bool empty() const override { return this->address_ == nullptr; };
          // address Field Functions 
          bool hasAddress() const { return this->address_ != nullptr;};
          void deleteAddress() { this->address_ = nullptr;};
          inline const vector<Addresses::Address> & getAddress() const { DARABONBA_PTR_GET_CONST(address_, vector<Addresses::Address>) };
          inline vector<Addresses::Address> getAddress() { DARABONBA_PTR_GET(address_, vector<Addresses::Address>) };
          inline Addresses& setAddress(const vector<Addresses::Address> & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
          inline Addresses& setAddress(vector<Addresses::Address> && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


        protected:
          shared_ptr<vector<Addresses::Address>> address_ {};
        };

        virtual bool empty() const override { return this->addressLbStrategy_ == nullptr
        && this->addressPoolId_ == nullptr && this->addressPoolName_ == nullptr && this->addressPoolType_ == nullptr && this->addresses_ == nullptr && this->availableStatus_ == nullptr
        && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->enableStatus_ == nullptr && this->healthJudgement_ == nullptr && this->healthStatus_ == nullptr
        && this->requestSource_ == nullptr && this->seqNonPreemptiveSchedule_ == nullptr && this->sequenceLbStrategyMode_ == nullptr && this->serialNumber_ == nullptr && this->updateTime_ == nullptr
        && this->updateTimestamp_ == nullptr && this->weightValue_ == nullptr; };
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


        // addresses Field Functions 
        bool hasAddresses() const { return this->addresses_ != nullptr;};
        void deleteAddresses() { this->addresses_ = nullptr;};
        inline const AddressPool::Addresses & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, AddressPool::Addresses) };
        inline AddressPool::Addresses getAddresses() { DARABONBA_PTR_GET(addresses_, AddressPool::Addresses) };
        inline AddressPool& setAddresses(const AddressPool::Addresses & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
        inline AddressPool& setAddresses(AddressPool::Addresses && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


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
        // - round_robin: Round-robin, for any source of DNS resolution requests, returns all addresses and rotates their order for each request.
        // - sequence: Sequential, for any source of DNS resolution requests, returns the address with the smaller sequence number (the sequence number indicates the priority of the address return, with smaller numbers having higher priority). If the address with the smaller sequence number is unavailable, the next address with a smaller sequence number is returned.
        // - weight: Weighted, supports setting different weight values for each address to realize returning addresses according to the weight ratio for resolution queries.
        // - source_nearest: Source-nearest, i.e., intelligent resolution function, where GTM can return different addresses based on the source of different DNS resolution requests, achieving the effect of users accessing nearby.
        shared_ptr<string> addressLbStrategy_ {};
        // The ID of the address pool. This ID uniquely identifies the address pool.
        shared_ptr<string> addressPoolId_ {};
        // Address pool name.
        shared_ptr<string> addressPoolName_ {};
        // Address pool type:
        // - IPv4
        // - IPv6
        // - domain
        shared_ptr<string> addressPoolType_ {};
        // The addresses.
        shared_ptr<AddressPool::Addresses> addresses_ {};
        // The availability state of the address pool. Valid values:
        // 
        // *   Available
        // *   unavailable
        shared_ptr<string> availableStatus_ {};
        // Address pool creation time.
        shared_ptr<string> createTime_ {};
        // Address pool creation time (timestamp).
        shared_ptr<int64_t> createTimestamp_ {};
        // The enabling state of the address pool. Valid values:
        // 
        // *   enable
        // *   disable
        shared_ptr<string> enableStatus_ {};
        // The condition for determining the health state of the address pool. Valid values:
        // 
        // *   any_ok: At least one address in the address pool is available.
        // *   p30_ok: At least 30% of the addresses in the address pool are available.
        // *   p50_ok: At least 50% of the addresses in the address pool are available.
        // *   p70_ok: At least 70% of the addresses in the address pool are available.
        // *   all_ok: All addresses in the address pool are available.
        shared_ptr<string> healthJudgement_ {};
        // Address pool health status:
        // - ok: Normal, all addresses referenced by the address pool are available.
        // - ok_alert: Warning, some addresses referenced by the address pool are unavailable, but the address pool status is deemed normal. In the warning state, available address pools are resolved normally, while unavailable ones stop resolving.
        // - exceptional: Abnormal, some or all of the addresses referenced by the address pool are unavailable, and the address pool status is determined to be abnormal.
        shared_ptr<string> healthStatus_ {};
        // Parse the list of request sources.
        shared_ptr<AddressPool::RequestSource> requestSource_ {};
        // Indicates whether it is a sequential (non-preemptive) scheduling object for hybrid cloud management scenarios: 
        // - true: yes 
        // - false: no
        shared_ptr<bool> seqNonPreemptiveSchedule_ {};
        // The mode used if the address with the smallest sequence number is recovered. This parameter is required only when AddressLbStrategy is set to sequence. Valid values:
        // 
        // *   preemptive: The address with the smallest sequence number is preferentially used if this address is recovered.
        // *   non_preemptive: The current address is still used even if the address with the smallest sequence number is recovered.
        shared_ptr<string> sequenceLbStrategyMode_ {};
        // Sequence number. For any parsing request from any source, the address pool with the smaller sequence number is returned (the sequence number indicates the priority of the address pool returned, with smaller numbers having higher priority).
        shared_ptr<int32_t> serialNumber_ {};
        // Last modification time of the address pool.
        shared_ptr<string> updateTime_ {};
        // Last modification time of the address pool (timestamp).
        shared_ptr<int64_t> updateTimestamp_ {};
        // Weight value (an integer between 1 and 100, inclusive), allowing different weight values to be set for each address pool, enabling resolution queries to return address pools according to the weighted ratio.
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
        && this->addressPools_ == nullptr && this->alertConfig_ == nullptr && this->alertGroup_ == nullptr && this->availableStatus_ == nullptr && this->commodityCode_ == nullptr
        && this->configId_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->enableStatus_ == nullptr && this->healthStatus_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->remark_ == nullptr && this->requestId_ == nullptr && this->scheduleDomainName_ == nullptr
        && this->scheduleHostname_ == nullptr && this->scheduleRrType_ == nullptr && this->scheduleZoneMode_ == nullptr && this->scheduleZoneName_ == nullptr && this->sequenceLbStrategyMode_ == nullptr
        && this->ttl_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->versionCode_ == nullptr; };
    // addressPoolLbStrategy Field Functions 
    bool hasAddressPoolLbStrategy() const { return this->addressPoolLbStrategy_ != nullptr;};
    void deleteAddressPoolLbStrategy() { this->addressPoolLbStrategy_ = nullptr;};
    inline string getAddressPoolLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressPoolLbStrategy_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAddressPoolLbStrategy(string addressPoolLbStrategy) { DARABONBA_PTR_SET_VALUE(addressPoolLbStrategy_, addressPoolLbStrategy) };


    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const DescribeCloudGtmInstanceConfigFullInfoResponseBody::AddressPools & getAddressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, DescribeCloudGtmInstanceConfigFullInfoResponseBody::AddressPools) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody::AddressPools getAddressPools() { DARABONBA_PTR_GET(addressPools_, DescribeCloudGtmInstanceConfigFullInfoResponseBody::AddressPools) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAddressPools(const DescribeCloudGtmInstanceConfigFullInfoResponseBody::AddressPools & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAddressPools(DescribeCloudGtmInstanceConfigFullInfoResponseBody::AddressPools && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline string getAlertConfig() const { DARABONBA_PTR_GET_DEFAULT(alertConfig_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAlertConfig(string alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string getAlertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleDomainName Field Functions 
    bool hasScheduleDomainName() const { return this->scheduleDomainName_ != nullptr;};
    void deleteScheduleDomainName() { this->scheduleDomainName_ = nullptr;};
    inline string getScheduleDomainName() const { DARABONBA_PTR_GET_DEFAULT(scheduleDomainName_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleDomainName(string scheduleDomainName) { DARABONBA_PTR_SET_VALUE(scheduleDomainName_, scheduleDomainName) };


    // scheduleHostname Field Functions 
    bool hasScheduleHostname() const { return this->scheduleHostname_ != nullptr;};
    void deleteScheduleHostname() { this->scheduleHostname_ = nullptr;};
    inline string getScheduleHostname() const { DARABONBA_PTR_GET_DEFAULT(scheduleHostname_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleHostname(string scheduleHostname) { DARABONBA_PTR_SET_VALUE(scheduleHostname_, scheduleHostname) };


    // scheduleRrType Field Functions 
    bool hasScheduleRrType() const { return this->scheduleRrType_ != nullptr;};
    void deleteScheduleRrType() { this->scheduleRrType_ = nullptr;};
    inline string getScheduleRrType() const { DARABONBA_PTR_GET_DEFAULT(scheduleRrType_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleRrType(string scheduleRrType) { DARABONBA_PTR_SET_VALUE(scheduleRrType_, scheduleRrType) };


    // scheduleZoneMode Field Functions 
    bool hasScheduleZoneMode() const { return this->scheduleZoneMode_ != nullptr;};
    void deleteScheduleZoneMode() { this->scheduleZoneMode_ = nullptr;};
    inline string getScheduleZoneMode() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneMode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleZoneMode(string scheduleZoneMode) { DARABONBA_PTR_SET_VALUE(scheduleZoneMode_, scheduleZoneMode) };


    // scheduleZoneName Field Functions 
    bool hasScheduleZoneName() const { return this->scheduleZoneName_ != nullptr;};
    void deleteScheduleZoneName() { this->scheduleZoneName_ = nullptr;};
    inline string getScheduleZoneName() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneName_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setScheduleZoneName(string scheduleZoneName) { DARABONBA_PTR_SET_VALUE(scheduleZoneName_, scheduleZoneName) };


    // sequenceLbStrategyMode Field Functions 
    bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
    void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
    inline string getSequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBody& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The policy for load balancing between address pools. Valid values:
    // 
    // *   round_robin: All address pools are returned for DNS requests from any source. All address pools are sorted in round-robin mode each time they are returned.
    // *   sequence: The address pool with the smallest sequence number is preferentially returned for DNS requests from any source. The sequence number indicates the priority for returning the address pool. A smaller sequence number indicates a higher priority. If the address pool with the smallest sequence number is unavailable, the address pool with the second smallest sequence number is returned.
    // *   weight: You can set a different weight value for each address pool. This way, address pools are returned based on the weight values.
    // *   source_nearest: GTM returns different addresses based on the sources of DNS requests. This way, users can access nearby addresses.
    shared_ptr<string> addressPoolLbStrategy_ {};
    // The address pools.
    shared_ptr<DescribeCloudGtmInstanceConfigFullInfoResponseBody::AddressPools> addressPools_ {};
    // Alert notification configuration.
    shared_ptr<string> alertConfig_ {};
    // Alert notification group.
    shared_ptr<string> alertGroup_ {};
    // The availability state of the access domain name. Valid values:
    // 
    // *   available: If the access domain name is **enabled** and the health state of the access domain name is **Normal**, the access domain name is deemed **available**.
    // *   unavailable: If the access domain name is **disabled** or the health state of the access domain name is **Abnormal**, the access domain name is deemed **unavailable**.
    shared_ptr<string> availableStatus_ {};
    // The commodity code. Valid values:
    // 
    // *   dns_gtm_public_cn: the commodity code on the China site (aliyun.com)
    // *   dns_gtm_public_intl: the commodity code on the international site (alibabacloud.com)
    shared_ptr<string> commodityCode_ {};
    // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
    shared_ptr<string> configId_ {};
    // Instance creation time.
    shared_ptr<string> createTime_ {};
    // Instance creation time (timestamp).
    shared_ptr<int64_t> createTimestamp_ {};
    // The enabling state of the access domain name. Valid values:
    // 
    // *   enable: The access domain name is enabled and the intelligent scheduling policy of the corresponding GTM instance takes effect.
    // *   disable: The access domain name is disabled and the intelligent scheduling policy of the corresponding GTM instance does not take effect.
    shared_ptr<string> enableStatus_ {};
    // The health state of the access domain name. Valid values:
    // 
    // *   ok: The health state of the access domain name is Normal and all address pools that are referenced by the access domain name are available.
    // *   ok_alert: The health state of the access domain name is Warning and some of the address pools that are referenced by the access domain name are unavailable. In this case, the available address pools are normally used for DNS resolution, but the unavailable address pools cannot be used for DNS resolution.
    // *   exceptional: The health state of the access domain name is Abnormal and all address pools that are referenced by the access domain name are unavailable. In this case, addresses in the non-empty address pool with the smallest sequence number are preferentially used for fallback resolution. This returns DNS results for clients as much as possible.
    shared_ptr<string> healthStatus_ {};
    // The ID of the GTM 3.0 instance.
    shared_ptr<string> instanceId_ {};
    // Schedule instance name.
    shared_ptr<string> instanceName_ {};
    // Remarks of the configuration of domain instance.
    shared_ptr<string> remark_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // The GTM access domain name. The value of this parameter is composed of the value of ScheduleHostname and the value of ScheduleZoneName.
    shared_ptr<string> scheduleDomainName_ {};
    // Host name of the domain accessed by GTM.
    shared_ptr<string> scheduleHostname_ {};
    // DNS record types for the ScheduleDomainName:
    // - A: IPv4 address
    // - AAAA: IPv6 address
    // - CNAME: Domain name
    shared_ptr<string> scheduleRrType_ {};
    // The allocation mode of the access domain name. Valid values:
    // 
    // *   custom: custom allocation. You must specify a custom hostname and associate the hostname with a zone or subzone within the account to which the GTM instance belongs to generate an access domain name.
    // *   sys_assign: The system assigns an access domain name by default. This mode is no longer supported. Do not choose this mode.
    shared_ptr<string> scheduleZoneMode_ {};
    // The zone (such as example.com) or subzone (such as a.example.com) associated with the GTM access domain name. In most cases, the zone or subzone is hosted in Authoritative DNS Resolution of the Alibaba Cloud DNS console within the account to which the GTM instance belongs.
    shared_ptr<string> scheduleZoneName_ {};
    // The mode used if the address pool with the smallest sequence number is recovered. This parameter is required when AddressPoolLbStrategy is set to sequence. Valid values:
    // 
    // *   preemptive: The address pool with the smallest sequence number is preferentially used if this address pool is recovered.
    // *   non_preemptive: The current address pool is still used even if the address pool with the smallest sequence number is recovered.
    shared_ptr<string> sequenceLbStrategyMode_ {};
    // Global TTL (in seconds), the TTL value for resolving the access domain to addresses in the address pool, which affects the caching time of DNS records in the ISP\\"s LocalDNS. Custom TTL values are supported.
    shared_ptr<int32_t> ttl_ {};
    // Last modified time.
    shared_ptr<string> updateTime_ {};
    // Last modified time (timestamp).
    shared_ptr<int64_t> updateTimestamp_ {};
    // Global Traffic Management version 3.0 instances:
    // - standard: Standard Edition
    // - ultimate: Ultimate Edition
    shared_ptr<string> versionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
