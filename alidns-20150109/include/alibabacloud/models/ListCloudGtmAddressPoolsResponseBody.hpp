// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSPOOLSRESPONSEBODY_HPP_
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
  class ListCloudGtmAddressPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListCloudGtmAddressPoolsResponseBody() = default ;
    ListCloudGtmAddressPoolsResponseBody(const ListCloudGtmAddressPoolsResponseBody &) = default ;
    ListCloudGtmAddressPoolsResponseBody(ListCloudGtmAddressPoolsResponseBody &&) = default ;
    ListCloudGtmAddressPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAddressPoolsResponseBody() = default ;
    ListCloudGtmAddressPoolsResponseBody& operator=(const ListCloudGtmAddressPoolsResponseBody &) = default ;
    ListCloudGtmAddressPoolsResponseBody& operator=(ListCloudGtmAddressPoolsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
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
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
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
                // The target service port for health checks. When the Ping protocol is selected for health checks, configuration of the service port is not supported.
                shared_ptr<int32_t> port_ {};
                // The ID of the health check template.
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
            // The failover mode that is used when address exceptions are identified. Valid values:
            // 
            // *   auto: the automatic mode. The system determines whether to return an address based on the health check results. If the address fails health checks, the system does not return the address. If the address passes health checks, the system returns the address.
            // *   manual: the manual mode. If an address is in the unavailable state, the address is not returned for DNS requests even if the address passes health checks. If an address is in the available state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
            shared_ptr<string> availableMode_ {};
            // The availability state of the address. Valid values:
            // 
            // *   available: The address is available.
            // *   unavailable: The address is unavailable.
            shared_ptr<string> availableStatus_ {};
            // Address creation time.
            shared_ptr<string> createTime_ {};
            // Address creation time (timestamp).
            shared_ptr<int64_t> createTimestamp_ {};
            // Address enable status:
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
            // *   ok_no_monitor: The address does not reference any health check template and is normal.
            // *   exceptional: The address fails some or all health checks of the referenced health check templates and the address is deemed abnormal.
            shared_ptr<string> healthStatus_ {};
            // The health check tasks.
            shared_ptr<Address::HealthTasks> healthTasks_ {};
            // The availability state of the address when AvailableMode is set to manual for the address. Valid values:
            // 
            // *   available: The address is available. In this state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
            // *   unavailable: The address is unavailable. In this state, the address is not returned for DNS requests even if the address passes health checks.
            shared_ptr<string> manualAvailableStatus_ {};
            // Address name.
            shared_ptr<string> name_ {};
            // Address remarks.
            shared_ptr<string> remark_ {};
            // List of request sources.
            shared_ptr<Address::RequestSource> requestSource_ {};
            // Indicates whether the mode of the sequence policy for load balancing between address pools is non-preemptive. This parameter is available only for the multicloud integration scenario. Valid values:
            // 
            // *   true
            // *   false
            shared_ptr<bool> seqNonPreemptiveSchedule_ {};
            // Sequence number, indicating the priority of address return, where smaller numbers have higher priority.
            shared_ptr<int32_t> serialNumber_ {};
            // Address type:
            // - IPv4: IPv4 address
            // - IPv6: IPv6 address
            // - domain: Domain name
            shared_ptr<string> type_ {};
            // The last time the address was modified.
            shared_ptr<string> updateTime_ {};
            // The last modification time of the address (timestamp).
            shared_ptr<int64_t> updateTimestamp_ {};
            // Weight value (integer between 1 and 100), supports setting different weight values for each address, enabling resolution queries to return addresses according to the weight ratio.
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
        && this->remark_ == nullptr && this->sequenceLbStrategyMode_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
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


      protected:
        // Load balancing policy among addresses in the address pool:
        // - round_robin: Round-robin, for any source of DNS resolution requests, all addresses are returned. The order of all addresses is rotated each time.
        // - sequence: Sequential, for any source of DNS resolution requests, the address with the smaller sequence number (the sequence number indicates the priority of address returns, with smaller numbers having higher priority) is returned. If the address with the smaller sequence number is unavailable, the next address with a smaller sequence number is returned.
        // - weight: Weighted, supports setting different weight values for each address, realizing the return of addresses according to the ratio of weights in resolution queries.
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
        // *   Available: The address pool is available.
        // *   unavailable: The address pool is unavailable.
        shared_ptr<string> availableStatus_ {};
        // Address pool creation time.
        shared_ptr<string> createTime_ {};
        // Address pool creation time (timestamp).
        shared_ptr<int64_t> createTimestamp_ {};
        // The enabling state of the address pool. Valid values:
        // 
        // *   enable: The address pool is enabled.
        // *   disable: The address pool is disabled.
        shared_ptr<string> enableStatus_ {};
        // The condition for determining the health state of the address. Valid values:
        // 
        // *   any_ok: The health check results of at least one health check template are normal.
        // *   p30_ok: The health check results of at least 30% of health check templates are normal.
        // *   p50_ok: The health check results of at least 50% of health check templates are normal.
        // *   p70_ok: The health check results of at least 70% of health check templates are normal.
        // *   all_ok: The health check results of all health check templates are normal.
        shared_ptr<string> healthJudgement_ {};
        // The health state of the address pool. Valid values:
        // 
        // *   ok: The health state of the address pool is Normal and all addresses that are referenced by the address pool are available.
        // *   ok_alert: The health state of the address pool is Warning and some of the addresses that are referenced by the address pool are unavailable. However, the address pool is deemed normal. In this state, available address pools are normally used for DNS resolution, but unavailable address pools cannot be used for DNS resolution.
        // *   exceptional: The health state of the address pool is Abnormal and some or all of the addresses that are referenced by the address pool are unavailable. In this case, the address pool is deemed abnormal.
        shared_ptr<string> healthStatus_ {};
        // Remark
        shared_ptr<string> remark_ {};
        // The mode used if the address with the smallest sequence number is recovered. This parameter is required only when AddressLbStrategy is set to sequence. Valid values:
        // 
        // *   preemptive: The address with the smallest sequence number is preferentially used if this address is recovered.
        // *   non_preemptive: The current address is still used even if the address with the smallest sequence number is recovered.
        shared_ptr<string> sequenceLbStrategyMode_ {};
        // Last modification time of the address pool.
        shared_ptr<string> updateTime_ {};
        // Last modification time of the address pool (timestamp).
        shared_ptr<int64_t> updateTimestamp_ {};
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

    virtual bool empty() const override { return this->addressPools_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const ListCloudGtmAddressPoolsResponseBody::AddressPools & getAddressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, ListCloudGtmAddressPoolsResponseBody::AddressPools) };
    inline ListCloudGtmAddressPoolsResponseBody::AddressPools getAddressPools() { DARABONBA_PTR_GET(addressPools_, ListCloudGtmAddressPoolsResponseBody::AddressPools) };
    inline ListCloudGtmAddressPoolsResponseBody& setAddressPools(const ListCloudGtmAddressPoolsResponseBody::AddressPools & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline ListCloudGtmAddressPoolsResponseBody& setAddressPools(ListCloudGtmAddressPoolsResponseBody::AddressPools && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCloudGtmAddressPoolsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudGtmAddressPoolsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudGtmAddressPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline ListCloudGtmAddressPoolsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListCloudGtmAddressPoolsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The address pools.
    shared_ptr<ListCloudGtmAddressPoolsResponseBody::AddressPools> addressPools_ {};
    // Current page number, starting at **1**, default is **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of rows per page when paginating queries, with a maximum value of 100 and a default of 20.
    shared_ptr<int32_t> pageSize_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // Total number of entries in the address pool.
    shared_ptr<int32_t> totalItems_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
