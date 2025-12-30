// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSRESPONSEBODY_HPP_
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
  class DescribeCloudGtmAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeCloudGtmAddressResponseBody() = default ;
    DescribeCloudGtmAddressResponseBody(const DescribeCloudGtmAddressResponseBody &) = default ;
    DescribeCloudGtmAddressResponseBody(DescribeCloudGtmAddressResponseBody &&) = default ;
    DescribeCloudGtmAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressResponseBody() = default ;
    DescribeCloudGtmAddressResponseBody& operator=(const DescribeCloudGtmAddressResponseBody &) = default ;
    DescribeCloudGtmAddressResponseBody& operator=(DescribeCloudGtmAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          DARABONBA_PTR_TO_JSON(MonitorStatus, monitorStatus_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, HealthTask& obj) { 
          DARABONBA_PTR_FROM_JSON(MonitorStatus, monitorStatus_);
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
        virtual bool empty() const override { return this->monitorStatus_ == nullptr
        && this->port_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
        // monitorStatus Field Functions 
        bool hasMonitorStatus() const { return this->monitorStatus_ != nullptr;};
        void deleteMonitorStatus() { this->monitorStatus_ = nullptr;};
        inline string getMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorStatus_, "") };
        inline HealthTask& setMonitorStatus(string monitorStatus) { DARABONBA_PTR_SET_VALUE(monitorStatus_, monitorStatus) };


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
        // The state of the health check task. Valid values:
        // 
        // *   ok: The task is normal.
        // *   alert: An alert is triggered.
        // *   no_data: No data is available. In most cases, the health check task is newly created and no data is collected.
        shared_ptr<string> monitorStatus_ {};
        // The target service port for health checks. When the Ping protocol is selected for health checks, configuration of the service port is not supported.
        shared_ptr<int32_t> port_ {};
        // The ID of the health check template associated with the address.
        shared_ptr<string> templateId_ {};
        // The name of the health check template.
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
        && this->manualAvailableStatus_ == nullptr && this->name_ == nullptr && this->remark_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeCloudGtmAddressResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline DescribeCloudGtmAddressResponseBody& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline string getAttributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
    inline DescribeCloudGtmAddressResponseBody& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


    // availableMode Field Functions 
    bool hasAvailableMode() const { return this->availableMode_ != nullptr;};
    void deleteAvailableMode() { this->availableMode_ = nullptr;};
    inline string getAvailableMode() const { DARABONBA_PTR_GET_DEFAULT(availableMode_, "") };
    inline DescribeCloudGtmAddressResponseBody& setAvailableMode(string availableMode) { DARABONBA_PTR_SET_VALUE(availableMode_, availableMode) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline DescribeCloudGtmAddressResponseBody& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCloudGtmAddressResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeCloudGtmAddressResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline DescribeCloudGtmAddressResponseBody& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string getHealthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline DescribeCloudGtmAddressResponseBody& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeCloudGtmAddressResponseBody& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // healthTasks Field Functions 
    bool hasHealthTasks() const { return this->healthTasks_ != nullptr;};
    void deleteHealthTasks() { this->healthTasks_ = nullptr;};
    inline const DescribeCloudGtmAddressResponseBody::HealthTasks & getHealthTasks() const { DARABONBA_PTR_GET_CONST(healthTasks_, DescribeCloudGtmAddressResponseBody::HealthTasks) };
    inline DescribeCloudGtmAddressResponseBody::HealthTasks getHealthTasks() { DARABONBA_PTR_GET(healthTasks_, DescribeCloudGtmAddressResponseBody::HealthTasks) };
    inline DescribeCloudGtmAddressResponseBody& setHealthTasks(const DescribeCloudGtmAddressResponseBody::HealthTasks & healthTasks) { DARABONBA_PTR_SET_VALUE(healthTasks_, healthTasks) };
    inline DescribeCloudGtmAddressResponseBody& setHealthTasks(DescribeCloudGtmAddressResponseBody::HealthTasks && healthTasks) { DARABONBA_PTR_SET_RVALUE(healthTasks_, healthTasks) };


    // manualAvailableStatus Field Functions 
    bool hasManualAvailableStatus() const { return this->manualAvailableStatus_ != nullptr;};
    void deleteManualAvailableStatus() { this->manualAvailableStatus_ = nullptr;};
    inline string getManualAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAvailableStatus_, "") };
    inline DescribeCloudGtmAddressResponseBody& setManualAvailableStatus(string manualAvailableStatus) { DARABONBA_PTR_SET_VALUE(manualAvailableStatus_, manualAvailableStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCloudGtmAddressResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCloudGtmAddressResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCloudGtmAddressResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeCloudGtmAddressResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeCloudGtmAddressResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // IP address or domain name.
    shared_ptr<string> address_ {};
    // The address ID. This ID uniquely identifies the address.
    shared_ptr<string> addressId_ {};
    // Address ownership information.
    shared_ptr<string> attributeInfo_ {};
    // The failover method that is used if the address fails health checks. Valid values:
    // 
    // *   auto: the automatic mode. The system determines whether to return an address based on the health check results. If the address fails health checks, the system does not return the address. If the address passes health checks, the system returns the address.
    // *   manual: the manual mode. If an address is in the unavailable state, the address is not returned for Domain Name System (DNS) requests even if the address passes health checks. If an address is in the available state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    shared_ptr<string> availableMode_ {};
    // Address availability status:
    // - available: Available
    // - unavailable: Unavailable
    shared_ptr<string> availableStatus_ {};
    // Address creation time.
    shared_ptr<string> createTime_ {};
    // Creation time (timestamp).
    shared_ptr<int64_t> createTimestamp_ {};
    // Indicates the current enabled status of the address:
    // enabled: enabled state
    // disabled: disabled state
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
    // *   ok_no_monitor: The address does not reference a health check template.
    // *   exceptional: The address fails some or all health checks of the referenced health check templates and the address is deemed abnormal.
    shared_ptr<string> healthStatus_ {};
    // The health check tasks referenced by the address.
    shared_ptr<DescribeCloudGtmAddressResponseBody::HealthTasks> healthTasks_ {};
    // The availability state of the address when AvailableMode is set to manual. Valid values:
    // 
    // *   available: The address is normal. In this state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    // *   unavailable: The address is abnormal. In this state, the address is not returned for DNS requests even if the address passes health checks.
    shared_ptr<string> manualAvailableStatus_ {};
    // Address name.
    shared_ptr<string> name_ {};
    // Remarks.
    shared_ptr<string> remark_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // Address type:
    // - IPv4
    // - IPv6
    // - domain
    shared_ptr<string> type_ {};
    // The last modification time of the address configuration.
    shared_ptr<string> updateTime_ {};
    // Modified time (timestamp).
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
