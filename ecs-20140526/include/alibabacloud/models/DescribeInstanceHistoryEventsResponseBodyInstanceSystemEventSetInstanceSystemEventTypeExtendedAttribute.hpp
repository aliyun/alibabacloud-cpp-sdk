// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSETINSTANCESYSTEMEVENTTYPEEXTENDEDATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSETINSTANCESYSTEMEVENTTYPEEXTENDEDATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeInactiveDisks.hpp>
#include <alibabacloud/models/DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeMigrationOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(CanAccept, canAccept_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostType, hostType_);
      DARABONBA_PTR_TO_JSON(InactiveDisks, inactiveDisks_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_TO_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_TO_JSON(OnlineRepairPolicy, onlineRepairPolicy_);
      DARABONBA_PTR_TO_JSON(PunishDomain, punishDomain_);
      DARABONBA_PTR_TO_JSON(PunishType, punishType_);
      DARABONBA_PTR_TO_JSON(PunishUrl, punishUrl_);
      DARABONBA_PTR_TO_JSON(Rack, rack_);
      DARABONBA_PTR_TO_JSON(ResponseResult, responseResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(CanAccept, canAccept_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostType, hostType_);
      DARABONBA_PTR_FROM_JSON(InactiveDisks, inactiveDisks_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_FROM_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_FROM_JSON(OnlineRepairPolicy, onlineRepairPolicy_);
      DARABONBA_PTR_FROM_JSON(PunishDomain, punishDomain_);
      DARABONBA_PTR_FROM_JSON(PunishType, punishType_);
      DARABONBA_PTR_FROM_JSON(PunishUrl, punishUrl_);
      DARABONBA_PTR_FROM_JSON(Rack, rack_);
      DARABONBA_PTR_FROM_JSON(ResponseResult, responseResult_);
    };
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute() = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute(const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute &) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute(DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute &&) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute() = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& operator=(const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute &) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& operator=(DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canAccept_ != nullptr
        && this->code_ != nullptr && this->device_ != nullptr && this->diskId_ != nullptr && this->hostId_ != nullptr && this->hostType_ != nullptr
        && this->inactiveDisks_ != nullptr && this->metricName_ != nullptr && this->metricValue_ != nullptr && this->migrationOptions_ != nullptr && this->onlineRepairPolicy_ != nullptr
        && this->punishDomain_ != nullptr && this->punishType_ != nullptr && this->punishUrl_ != nullptr && this->rack_ != nullptr && this->responseResult_ != nullptr; };
    // canAccept Field Functions 
    bool hasCanAccept() const { return this->canAccept_ != nullptr;};
    void deleteCanAccept() { this->canAccept_ = nullptr;};
    inline string canAccept() const { DARABONBA_PTR_GET_DEFAULT(canAccept_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setCanAccept(string canAccept) { DARABONBA_PTR_SET_VALUE(canAccept_, canAccept) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostType Field Functions 
    bool hasHostType() const { return this->hostType_ != nullptr;};
    void deleteHostType() { this->hostType_ = nullptr;};
    inline string hostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


    // inactiveDisks Field Functions 
    bool hasInactiveDisks() const { return this->inactiveDisks_ != nullptr;};
    void deleteInactiveDisks() { this->inactiveDisks_ = nullptr;};
    inline const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeInactiveDisks & inactiveDisks() const { DARABONBA_PTR_GET_CONST(inactiveDisks_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeInactiveDisks) };
    inline Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeInactiveDisks inactiveDisks() { DARABONBA_PTR_GET(inactiveDisks_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeInactiveDisks) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setInactiveDisks(const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeInactiveDisks & inactiveDisks) { DARABONBA_PTR_SET_VALUE(inactiveDisks_, inactiveDisks) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setInactiveDisks(Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeInactiveDisks && inactiveDisks) { DARABONBA_PTR_SET_RVALUE(inactiveDisks_, inactiveDisks) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricValue Field Functions 
    bool hasMetricValue() const { return this->metricValue_ != nullptr;};
    void deleteMetricValue() { this->metricValue_ = nullptr;};
    inline string metricValue() const { DARABONBA_PTR_GET_DEFAULT(metricValue_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setMetricValue(string metricValue) { DARABONBA_PTR_SET_VALUE(metricValue_, metricValue) };


    // migrationOptions Field Functions 
    bool hasMigrationOptions() const { return this->migrationOptions_ != nullptr;};
    void deleteMigrationOptions() { this->migrationOptions_ = nullptr;};
    inline const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeMigrationOptions & migrationOptions() const { DARABONBA_PTR_GET_CONST(migrationOptions_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeMigrationOptions) };
    inline Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeMigrationOptions migrationOptions() { DARABONBA_PTR_GET(migrationOptions_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeMigrationOptions) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setMigrationOptions(const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeMigrationOptions & migrationOptions) { DARABONBA_PTR_SET_VALUE(migrationOptions_, migrationOptions) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setMigrationOptions(Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeMigrationOptions && migrationOptions) { DARABONBA_PTR_SET_RVALUE(migrationOptions_, migrationOptions) };


    // onlineRepairPolicy Field Functions 
    bool hasOnlineRepairPolicy() const { return this->onlineRepairPolicy_ != nullptr;};
    void deleteOnlineRepairPolicy() { this->onlineRepairPolicy_ = nullptr;};
    inline string onlineRepairPolicy() const { DARABONBA_PTR_GET_DEFAULT(onlineRepairPolicy_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setOnlineRepairPolicy(string onlineRepairPolicy) { DARABONBA_PTR_SET_VALUE(onlineRepairPolicy_, onlineRepairPolicy) };


    // punishDomain Field Functions 
    bool hasPunishDomain() const { return this->punishDomain_ != nullptr;};
    void deletePunishDomain() { this->punishDomain_ = nullptr;};
    inline string punishDomain() const { DARABONBA_PTR_GET_DEFAULT(punishDomain_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setPunishDomain(string punishDomain) { DARABONBA_PTR_SET_VALUE(punishDomain_, punishDomain) };


    // punishType Field Functions 
    bool hasPunishType() const { return this->punishType_ != nullptr;};
    void deletePunishType() { this->punishType_ = nullptr;};
    inline string punishType() const { DARABONBA_PTR_GET_DEFAULT(punishType_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setPunishType(string punishType) { DARABONBA_PTR_SET_VALUE(punishType_, punishType) };


    // punishUrl Field Functions 
    bool hasPunishUrl() const { return this->punishUrl_ != nullptr;};
    void deletePunishUrl() { this->punishUrl_ = nullptr;};
    inline string punishUrl() const { DARABONBA_PTR_GET_DEFAULT(punishUrl_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setPunishUrl(string punishUrl) { DARABONBA_PTR_SET_VALUE(punishUrl_, punishUrl) };


    // rack Field Functions 
    bool hasRack() const { return this->rack_ != nullptr;};
    void deleteRack() { this->rack_ = nullptr;};
    inline string rack() const { DARABONBA_PTR_GET_DEFAULT(rack_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setRack(string rack) { DARABONBA_PTR_SET_VALUE(rack_, rack) };


    // responseResult Field Functions 
    bool hasResponseResult() const { return this->responseResult_ != nullptr;};
    void deleteResponseResult() { this->responseResult_ = nullptr;};
    inline string responseResult() const { DARABONBA_PTR_GET_DEFAULT(responseResult_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute& setResponseResult(string responseResult) { DARABONBA_PTR_SET_VALUE(responseResult_, responseResult) };


  protected:
    // Indicates whether the event can be handled.
    std::shared_ptr<string> canAccept_ = nullptr;
    // The code of the security violation.
    std::shared_ptr<string> code_ = nullptr;
    // The device name of the local disk.
    std::shared_ptr<string> device_ = nullptr;
    // The ID of the local disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The type of the host. Valid values:
    // 
    // *   ddh: dedicated host
    // *   managehost: physical machine in a smart hosting pool
    std::shared_ptr<string> hostType_ = nullptr;
    // The inactive disks that were released and whose data must be cleared.
    std::shared_ptr<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeInactiveDisks> inactiveDisks_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<string> metricValue_ = nullptr;
    // The migration solution of the instance. Valid value: MigrationPlan. Instances can be migrated only by using migration plans.
    std::shared_ptr<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttributeMigrationOptions> migrationOptions_ = nullptr;
    // The online repair policy for the damaged disk. Valid value: IsolateOnly, which indicates that damaged disks are isolated but not repaired.
    std::shared_ptr<string> onlineRepairPolicy_ = nullptr;
    // The illegal domain name.
    std::shared_ptr<string> punishDomain_ = nullptr;
    // The type of the penalty.
    std::shared_ptr<string> punishType_ = nullptr;
    // The illegal URL.
    std::shared_ptr<string> punishUrl_ = nullptr;
    // The rack number of the cloud box.
    std::shared_ptr<string> rack_ = nullptr;
    // The response result of the event. Valid values:
    // 
    // *   true: The event was handled.
    // *   false: The event failed to be handled.
    std::shared_ptr<string> responseResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
