// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSESRESPONSEBODYADDRESSESADDRESS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSESRESPONSEBODYADDRESSESADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAddressesResponseBodyAddressesAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAddressesResponseBodyAddressesAddress& obj) { 
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
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAddressesResponseBodyAddressesAddress& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    ListCloudGtmAddressesResponseBodyAddressesAddress() = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddress(const ListCloudGtmAddressesResponseBodyAddressesAddress &) = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddress(ListCloudGtmAddressesResponseBodyAddressesAddress &&) = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAddressesResponseBodyAddressesAddress() = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddress& operator=(const ListCloudGtmAddressesResponseBodyAddressesAddress &) = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddress& operator=(ListCloudGtmAddressesResponseBodyAddressesAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->addressId_ != nullptr && this->attributeInfo_ != nullptr && this->availableMode_ != nullptr && this->availableStatus_ != nullptr && this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->enableStatus_ != nullptr && this->healthJudgement_ != nullptr && this->healthStatus_ != nullptr && this->healthTasks_ != nullptr
        && this->manualAvailableStatus_ != nullptr && this->name_ != nullptr && this->remark_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr
        && this->updateTimestamp_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string addressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline string attributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


    // availableMode Field Functions 
    bool hasAvailableMode() const { return this->availableMode_ != nullptr;};
    void deleteAvailableMode() { this->availableMode_ = nullptr;};
    inline string availableMode() const { DARABONBA_PTR_GET_DEFAULT(availableMode_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setAvailableMode(string availableMode) { DARABONBA_PTR_SET_VALUE(availableMode_, availableMode) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string availableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string healthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // healthTasks Field Functions 
    bool hasHealthTasks() const { return this->healthTasks_ != nullptr;};
    void deleteHealthTasks() { this->healthTasks_ = nullptr;};
    inline const Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks & healthTasks() const { DARABONBA_PTR_GET_CONST(healthTasks_, Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks) };
    inline Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks healthTasks() { DARABONBA_PTR_GET(healthTasks_, Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks) };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setHealthTasks(const Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks & healthTasks) { DARABONBA_PTR_SET_VALUE(healthTasks_, healthTasks) };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setHealthTasks(Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks && healthTasks) { DARABONBA_PTR_SET_RVALUE(healthTasks_, healthTasks) };


    // manualAvailableStatus Field Functions 
    bool hasManualAvailableStatus() const { return this->manualAvailableStatus_ != nullptr;};
    void deleteManualAvailableStatus() { this->manualAvailableStatus_ = nullptr;};
    inline string manualAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAvailableStatus_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setManualAvailableStatus(string manualAvailableStatus) { DARABONBA_PTR_SET_VALUE(manualAvailableStatus_, manualAvailableStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline ListCloudGtmAddressesResponseBodyAddressesAddress& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // IP address or domain name.
    std::shared_ptr<string> address_ = nullptr;
    // The address ID. This ID uniquely identifies the address.
    std::shared_ptr<string> addressId_ = nullptr;
    // Address ownership information.
    std::shared_ptr<string> attributeInfo_ = nullptr;
    // The failover method that is used if the address fails health checks. Valid values:
    // 
    // auto: the automatic mode. The system determines whether to return an address based on the health check results. If the address fails health checks, the system does not return the address. If the address passes health checks, the system returns the address.
    // 
    // manual: the manual mode. If an address is in the unavailable state, the address is not returned for Domain Name System (DNS) requests even if the address passes health checks. If an address is in the available state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    std::shared_ptr<string> availableMode_ = nullptr;
    // The availability state of the address. Valid values:
    // 
    // *   available: The address is available.
    // *   unavailable: The address is unavailable.
    std::shared_ptr<string> availableStatus_ = nullptr;
    // Address creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Creation time (timestamp).
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // Indicates the current availability of the address:
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
    // *   ok_no_monitor: The address does not reference a health check template.
    // *   exceptional: The address fails some or all health checks of the referenced health check templates and the address is deemed abnormal.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The health check tasks referenced by the address.
    std::shared_ptr<Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks> healthTasks_ = nullptr;
    // The availability state of the address when AvailableMode is set to manual. Valid values:
    // 
    // available: The address is normal. In this state, the address is returned for DNS requests even if an alert is triggered when the address fails health checks.
    // 
    // unavailable: The address is abnormal. In this state, the address is not returned for DNS requests even if the address passes health checks.
    std::shared_ptr<string> manualAvailableStatus_ = nullptr;
    // Address name.
    std::shared_ptr<string> name_ = nullptr;
    // Remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // Address type:
    // - IPv4
    // - IPv6
    // - domain
    std::shared_ptr<string> type_ = nullptr;
    // Address modification time.
    std::shared_ptr<string> updateTime_ = nullptr;
    // Update time (timestamp).
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
