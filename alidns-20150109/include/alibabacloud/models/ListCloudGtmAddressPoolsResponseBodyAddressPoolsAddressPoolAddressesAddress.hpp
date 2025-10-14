// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSPOOLSRESPONSEBODYADDRESSPOOLSADDRESSPOOLADDRESSESADDRESS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSPOOLSRESPONSEBODYADDRESSPOOLSADDRESSPOOLADDRESSESADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressHealthTasks.hpp>
#include <alibabacloud/models/ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressRequestSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& obj) { 
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
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress() = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress(const ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress &) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress(ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress &&) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress() = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& operator=(const ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress &) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& operator=(ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressId_ == nullptr && return this->attributeInfo_ == nullptr && return this->availableMode_ == nullptr && return this->availableStatus_ == nullptr && return this->createTime_ == nullptr
        && return this->createTimestamp_ == nullptr && return this->enableStatus_ == nullptr && return this->healthJudgement_ == nullptr && return this->healthStatus_ == nullptr && return this->healthTasks_ == nullptr
        && return this->manualAvailableStatus_ == nullptr && return this->name_ == nullptr && return this->remark_ == nullptr && return this->requestSource_ == nullptr && return this->seqNonPreemptiveSchedule_ == nullptr
        && return this->serialNumber_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr && return this->updateTimestamp_ == nullptr && return this->weightValue_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string addressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline string attributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


    // availableMode Field Functions 
    bool hasAvailableMode() const { return this->availableMode_ != nullptr;};
    void deleteAvailableMode() { this->availableMode_ = nullptr;};
    inline string availableMode() const { DARABONBA_PTR_GET_DEFAULT(availableMode_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setAvailableMode(string availableMode) { DARABONBA_PTR_SET_VALUE(availableMode_, availableMode) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string availableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string healthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // healthTasks Field Functions 
    bool hasHealthTasks() const { return this->healthTasks_ != nullptr;};
    void deleteHealthTasks() { this->healthTasks_ = nullptr;};
    inline const Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressHealthTasks & healthTasks() const { DARABONBA_PTR_GET_CONST(healthTasks_, Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressHealthTasks) };
    inline Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressHealthTasks healthTasks() { DARABONBA_PTR_GET(healthTasks_, Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressHealthTasks) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setHealthTasks(const Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressHealthTasks & healthTasks) { DARABONBA_PTR_SET_VALUE(healthTasks_, healthTasks) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setHealthTasks(Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressHealthTasks && healthTasks) { DARABONBA_PTR_SET_RVALUE(healthTasks_, healthTasks) };


    // manualAvailableStatus Field Functions 
    bool hasManualAvailableStatus() const { return this->manualAvailableStatus_ != nullptr;};
    void deleteManualAvailableStatus() { this->manualAvailableStatus_ = nullptr;};
    inline string manualAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAvailableStatus_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setManualAvailableStatus(string manualAvailableStatus) { DARABONBA_PTR_SET_VALUE(manualAvailableStatus_, manualAvailableStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline const Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressRequestSource & requestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressRequestSource) };
    inline Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressRequestSource requestSource() { DARABONBA_PTR_GET(requestSource_, Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressRequestSource) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setRequestSource(const Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressRequestSource & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setRequestSource(Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressRequestSource && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


    // seqNonPreemptiveSchedule Field Functions 
    bool hasSeqNonPreemptiveSchedule() const { return this->seqNonPreemptiveSchedule_ != nullptr;};
    void deleteSeqNonPreemptiveSchedule() { this->seqNonPreemptiveSchedule_ = nullptr;};
    inline bool seqNonPreemptiveSchedule() const { DARABONBA_PTR_GET_DEFAULT(seqNonPreemptiveSchedule_, false) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setSeqNonPreemptiveSchedule(bool seqNonPreemptiveSchedule) { DARABONBA_PTR_SET_VALUE(seqNonPreemptiveSchedule_, seqNonPreemptiveSchedule) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline int32_t serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // weightValue Field Functions 
    bool hasWeightValue() const { return this->weightValue_ != nullptr;};
    void deleteWeightValue() { this->weightValue_ = nullptr;};
    inline int32_t weightValue() const { DARABONBA_PTR_GET_DEFAULT(weightValue_, 0) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress& setWeightValue(int32_t weightValue) { DARABONBA_PTR_SET_VALUE(weightValue_, weightValue) };


  protected:
    // IP address or domain name.
    std::shared_ptr<string> address_ = nullptr;
    // The address ID. This ID uniquely identifies the address.
    std::shared_ptr<string> addressId_ = nullptr;
    // Address ownership information, not supported in the current version.
    std::shared_ptr<string> attributeInfo_ = nullptr;
    // The failover mode that is used when address exceptions are identified. Valid values:
    // 
    // *   auto: the automatic mode. The system determines whether to return an address based on the health check results. If the address fails health checks, the system does not return the address. If the address passes health checks, the system returns the address.
    // *   manual: the manual mode. If an address is in the unavailable state, the address is not returned for DNS requests even if the address passes health checks. If an address is in the available state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    std::shared_ptr<string> availableMode_ = nullptr;
    // The availability state of the address. Valid values:
    // 
    // *   available: The address is available.
    // *   unavailable: The address is unavailable.
    std::shared_ptr<string> availableStatus_ = nullptr;
    // Address creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Address creation time (timestamp).
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // Address enable status:
    // - enable: Enabled status
    // - disable: Disabled status
    std::shared_ptr<string> enableStatus_ = nullptr;
    // The condition for determining the health status of the address. Valid values:
    // 
    // *   any_ok: The health check results of at least one health check template are normal.
    // *   p30_ok: The health check results of at least 30% of health check templates are normal.
    // *   p50_ok: The health check results of at least 50% of health check templates are normal.
    // *   p70_ok: The health check results of at least 70% of health check templates are normal.
    // *   all_ok: The health check results of all health check templates are normal.
    std::shared_ptr<string> healthJudgement_ = nullptr;
    // The health check state of the address. Valid values:
    // 
    // *   ok: The address passes all health checks of the referenced health check templates.
    // *   ok_alert: The address fails some health checks of the referenced health check templates but the address is deemed normal.
    // *   ok_no_monitor: The address does not reference any health check template and is normal.
    // *   exceptional: The address fails some or all health checks of the referenced health check templates and the address is deemed abnormal.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The health check tasks.
    std::shared_ptr<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressHealthTasks> healthTasks_ = nullptr;
    // The availability state of the address when AvailableMode is set to manual for the address. Valid values:
    // 
    // *   available: The address is available. In this state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    // *   unavailable: The address is unavailable. In this state, the address is not returned for DNS requests even if the address passes health checks.
    std::shared_ptr<string> manualAvailableStatus_ = nullptr;
    // Address name.
    std::shared_ptr<string> name_ = nullptr;
    // Address remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // List of request sources.
    std::shared_ptr<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddressRequestSource> requestSource_ = nullptr;
    // Indicates whether the mode of the sequence policy for load balancing between address pools is non-preemptive. This parameter is available only for the multicloud integration scenario. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> seqNonPreemptiveSchedule_ = nullptr;
    // Sequence number, indicating the priority of address return, where smaller numbers have higher priority.
    std::shared_ptr<int32_t> serialNumber_ = nullptr;
    // Address type:
    // - IPv4: IPv4 address
    // - IPv6: IPv6 address
    // - domain: Domain name
    std::shared_ptr<string> type_ = nullptr;
    // The last time the address was modified.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The last modification time of the address (timestamp).
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // Weight value (integer between 1 and 100), supports setting different weight values for each address, enabling resolution queries to return addresses according to the weight ratio.
    std::shared_ptr<int32_t> weightValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
