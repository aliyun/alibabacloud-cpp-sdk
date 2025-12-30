// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODY_HPP_
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
  class DescribeCloudGtmAddressPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressPoolResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressPoolResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeCloudGtmAddressPoolResponseBody() = default ;
    DescribeCloudGtmAddressPoolResponseBody(const DescribeCloudGtmAddressPoolResponseBody &) = default ;
    DescribeCloudGtmAddressPoolResponseBody(DescribeCloudGtmAddressPoolResponseBody &&) = default ;
    DescribeCloudGtmAddressPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressPoolResponseBody() = default ;
    DescribeCloudGtmAddressPoolResponseBody& operator=(const DescribeCloudGtmAddressPoolResponseBody &) = default ;
    DescribeCloudGtmAddressPoolResponseBody& operator=(DescribeCloudGtmAddressPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          DARABONBA_PTR_TO_JSON(HealthTasks, healthTasks_);
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
          DARABONBA_PTR_FROM_JSON(HealthTasks, healthTasks_);
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

        class HealthTasks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HealthTasks& obj) { 
            DARABONBA_PTR_TO_JSON(HealthTask, healthTask_);
          };
          friend void from_json(const Darabonba::Json& j, HealthTasks& obj) { 
            DARABONBA_PTR_FROM_JSON(HealthTask, healthTask_);
          };
          HealthTasks() = default ;
          HealthTasks(const HealthTasks &) = default ;
          HealthTasks(HealthTasks &&) = default ;
          HealthTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HealthTasks() = default ;
          HealthTasks& operator=(const HealthTasks &) = default ;
          HealthTasks& operator=(HealthTasks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class HealthTask : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HealthTask& obj) { 
              DARABONBA_PTR_TO_JSON(Port, port_);
              DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
              DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
            };
            friend void from_json(const Darabonba::Json& j, HealthTask& obj) { 
              DARABONBA_PTR_FROM_JSON(Port, port_);
              DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
              DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
            };
            HealthTask() = default ;
            HealthTask(const HealthTask &) = default ;
            HealthTask(HealthTask &&) = default ;
            HealthTask(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HealthTask() = default ;
            HealthTask& operator=(const HealthTask &) = default ;
            HealthTask& operator=(HealthTask &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->port_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr; };
            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
            inline HealthTask& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // templateId Field Functions 
            bool hasTemplateId() const { return this->templateId_ != nullptr;};
            void deleteTemplateId() { this->templateId_ = nullptr;};
            inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
            inline HealthTask& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


            // templateName Field Functions 
            bool hasTemplateName() const { return this->templateName_ != nullptr;};
            void deleteTemplateName() { this->templateName_ = nullptr;};
            inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
            inline HealthTask& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


          protected:
            // The target service port for health check probes. When the health check protocol is set to Ping, configuration of the service port is not supported.
            shared_ptr<int32_t> port_ {};
            // ID of the health check template associated with the address.
            shared_ptr<string> templateId_ {};
            // Health check template name.
            shared_ptr<string> templateName_ {};
          };

          virtual bool empty() const override { return this->healthTask_ == nullptr; };
          // healthTask Field Functions 
          bool hasHealthTask() const { return this->healthTask_ != nullptr;};
          void deleteHealthTask() { this->healthTask_ = nullptr;};
          inline const vector<HealthTasks::HealthTask> & getHealthTask() const { DARABONBA_PTR_GET_CONST(healthTask_, vector<HealthTasks::HealthTask>) };
          inline vector<HealthTasks::HealthTask> getHealthTask() { DARABONBA_PTR_GET(healthTask_, vector<HealthTasks::HealthTask>) };
          inline HealthTasks& setHealthTask(const vector<HealthTasks::HealthTask> & healthTask) { DARABONBA_PTR_SET_VALUE(healthTask_, healthTask) };
          inline HealthTasks& setHealthTask(vector<HealthTasks::HealthTask> && healthTask) { DARABONBA_PTR_SET_RVALUE(healthTask_, healthTask) };


        protected:
          shared_ptr<vector<HealthTasks::HealthTask>> healthTask_ {};
        };

        virtual bool empty() const override { return this->address_ == nullptr
        && this->addressId_ == nullptr && this->attributeInfo_ == nullptr && this->availableMode_ == nullptr && this->availableStatus_ == nullptr && this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->enableStatus_ == nullptr && this->healthJudgement_ == nullptr && this->healthStatus_ == nullptr && this->healthTasks_ == nullptr
        && this->manualAvailableStatus_ == nullptr && this->name_ == nullptr && this->remark_ == nullptr && this->requestSource_ == nullptr && this->seqNonPreemptiveSchedule_ == nullptr
        && this->serialNumber_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->weightValue_ == nullptr; };
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


        // healthTasks Field Functions 
        bool hasHealthTasks() const { return this->healthTasks_ != nullptr;};
        void deleteHealthTasks() { this->healthTasks_ = nullptr;};
        inline const Address::HealthTasks & getHealthTasks() const { DARABONBA_PTR_GET_CONST(healthTasks_, Address::HealthTasks) };
        inline Address::HealthTasks getHealthTasks() { DARABONBA_PTR_GET(healthTasks_, Address::HealthTasks) };
        inline Address& setHealthTasks(const Address::HealthTasks & healthTasks) { DARABONBA_PTR_SET_VALUE(healthTasks_, healthTasks) };
        inline Address& setHealthTasks(Address::HealthTasks && healthTasks) { DARABONBA_PTR_SET_RVALUE(healthTasks_, healthTasks) };


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
        // The failover method that is used if the address fails health checks. Valid values:
        // 
        // *   auto: the automatic mode. The system determines whether to return an address based on the health check results. If the address fails health checks, the system does not return the address. If the address passes health checks, the system returns the address.
        // *   manual: the manual mode. If an address is in the unavailable state, the address is not returned for DNS requests even if the address passes health checks. If an address is in the available state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
        shared_ptr<string> availableMode_ {};
        // Address availability status:
        // - available: Address available
        // - unavailable: Address unavailable
        shared_ptr<string> availableStatus_ {};
        // Address creation time.
        shared_ptr<string> createTime_ {};
        // Address creation time (timestamp).
        shared_ptr<int64_t> createTimestamp_ {};
        // Address enable status, indicating whether the address is currently available:
        // - enable: Enabled status
        // - disable: Disabled status
        shared_ptr<string> enableStatus_ {};
        // The condition for determining the health status of the address. Valid values:
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
        // *   ok_no_monitor: The address does not reference a health check template and is normal.
        // *   exceptional: The address fails some or all health checks of the referenced health check templates and the address is deemed abnormal.
        shared_ptr<string> healthStatus_ {};
        // Health check task list.
        shared_ptr<Address::HealthTasks> healthTasks_ {};
        // The availability state of the address when AvailableMode is set to manual. Valid values:
        // 
        // *   available: The address is normal. In this state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
        // *   unavailable: The address is abnormal. In this state, the address is not returned for DNS requests even if the address passes health checks.
        shared_ptr<string> manualAvailableStatus_ {};
        // Address name.
        shared_ptr<string> name_ {};
        // Remarks for the address.
        shared_ptr<string> remark_ {};
        // The request source list.
        shared_ptr<Address::RequestSource> requestSource_ {};
        // Indicates whether it is a sequential (non-preemptive) scheduling object for hybrid cloud management scenarios: - true: yes - false: no
        shared_ptr<bool> seqNonPreemptiveSchedule_ {};
        // Sequence number, indicating the priority of address return, where smaller numbers have higher priority.
        shared_ptr<int32_t> serialNumber_ {};
        // The address type. Valid values:
        // 
        // *   IPv4: IPv4 address
        // *   IPv6: IPv6 address
        // *   domain: domain name
        shared_ptr<string> type_ {};
        // The last time the address was modified.
        shared_ptr<string> updateTime_ {};
        // The last modification time of the address (timestamp).
        shared_ptr<int64_t> updateTimestamp_ {};
        // Weight value (an integer between 1 and 100, inclusive), allowing different weight values to be set for each address, enabling resolution queries to return addresses according to the weighted ratio.
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
        && this->remark_ == nullptr && this->requestId_ == nullptr && this->sequenceLbStrategyMode_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
    // addressLbStrategy Field Functions 
    bool hasAddressLbStrategy() const { return this->addressLbStrategy_ != nullptr;};
    void deleteAddressLbStrategy() { this->addressLbStrategy_ = nullptr;};
    inline string getAddressLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressLbStrategy_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setAddressLbStrategy(string addressLbStrategy) { DARABONBA_PTR_SET_VALUE(addressLbStrategy_, addressLbStrategy) };


    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string getAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // addressPoolName Field Functions 
    bool hasAddressPoolName() const { return this->addressPoolName_ != nullptr;};
    void deleteAddressPoolName() { this->addressPoolName_ = nullptr;};
    inline string getAddressPoolName() const { DARABONBA_PTR_GET_DEFAULT(addressPoolName_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setAddressPoolName(string addressPoolName) { DARABONBA_PTR_SET_VALUE(addressPoolName_, addressPoolName) };


    // addressPoolType Field Functions 
    bool hasAddressPoolType() const { return this->addressPoolType_ != nullptr;};
    void deleteAddressPoolType() { this->addressPoolType_ = nullptr;};
    inline string getAddressPoolType() const { DARABONBA_PTR_GET_DEFAULT(addressPoolType_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setAddressPoolType(string addressPoolType) { DARABONBA_PTR_SET_VALUE(addressPoolType_, addressPoolType) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const DescribeCloudGtmAddressPoolResponseBody::Addresses & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, DescribeCloudGtmAddressPoolResponseBody::Addresses) };
    inline DescribeCloudGtmAddressPoolResponseBody::Addresses getAddresses() { DARABONBA_PTR_GET(addresses_, DescribeCloudGtmAddressPoolResponseBody::Addresses) };
    inline DescribeCloudGtmAddressPoolResponseBody& setAddresses(const DescribeCloudGtmAddressPoolResponseBody::Addresses & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline DescribeCloudGtmAddressPoolResponseBody& setAddresses(DescribeCloudGtmAddressPoolResponseBody::Addresses && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeCloudGtmAddressPoolResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string getHealthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sequenceLbStrategyMode Field Functions 
    bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
    void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
    inline string getSequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeCloudGtmAddressPoolResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeCloudGtmAddressPoolResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // Load balancing policy among addresses in the address pool:
    // - round_robin: Round-robin, where for any source of DNS resolution requests, all addresses are returned, with a rotation of the order for every request.
    // - sequence: Sequential, where for any source of DNS resolution requests, the address with the lower sequence number (indicating a higher priority, the smaller the number, the higher the priority) is returned. If the address with the lower sequence number is unavailable, the next address with a lower sequence number is returned.
    // - weight: Weighted, supporting the setting of different weight values for each address to realize returning addresses according to the weight ratio of query resolutions.
    // - source_nearest: Source-nearest, also known as intelligent resolution, where GTM can return different addresses based on the source of different DNS resolution requests, achieving the effect of users accessing nearby servers.
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
    shared_ptr<DescribeCloudGtmAddressPoolResponseBody::Addresses> addresses_ {};
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
    // *   ok_alert: The health state of the address pool is warning and some of the addresses that are referenced by the address pool are unavailable. However, the address pool is deemed normal. In this case, only the available addresses are returned for Domain Name System (DNS) requests.
    // *   exceptional: The health state of the address pool is abnormal and some or all of the addresses that are referenced by the address pool are unavailable. In this case, the address pool is deemed abnormal.
    shared_ptr<string> healthStatus_ {};
    // Remarks for the address.
    shared_ptr<string> remark_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // The mode used if the address with the smallest sequence number is recovered. This parameter is returned only when the policy for load balancing between addresses is sequence. Valid values:
    // 
    // *   preemptive: The address with the smallest sequence number is preferentially used if this address is recovered.
    // *   non_preemptive: The current address is still used even if the address with the smallest sequence number is recovered.
    shared_ptr<string> sequenceLbStrategyMode_ {};
    // The last modification time of the address pool.
    shared_ptr<string> updateTime_ {};
    // Last modification time of the address pool (timestamp).
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
