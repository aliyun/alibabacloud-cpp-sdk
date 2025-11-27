// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSETEXTENDEDATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSETEXTENDEDATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(CanAccept, canAccept_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostType, hostType_);
      DARABONBA_PTR_TO_JSON(InactiveDisks, inactiveDisks_);
      DARABONBA_PTR_TO_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_TO_JSON(OnlineRepairPolicy, onlineRepairPolicy_);
      DARABONBA_PTR_TO_JSON(PunishDomain, punishDomain_);
      DARABONBA_PTR_TO_JSON(PunishType, punishType_);
      DARABONBA_PTR_TO_JSON(PunishUrl, punishUrl_);
      DARABONBA_PTR_TO_JSON(Rack, rack_);
      DARABONBA_PTR_TO_JSON(ResponseResult, responseResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(CanAccept, canAccept_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostType, hostType_);
      DARABONBA_PTR_FROM_JSON(InactiveDisks, inactiveDisks_);
      DARABONBA_PTR_FROM_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_FROM_JSON(OnlineRepairPolicy, onlineRepairPolicy_);
      DARABONBA_PTR_FROM_JSON(PunishDomain, punishDomain_);
      DARABONBA_PTR_FROM_JSON(PunishType, punishType_);
      DARABONBA_PTR_FROM_JSON(PunishUrl, punishUrl_);
      DARABONBA_PTR_FROM_JSON(Rack, rack_);
      DARABONBA_PTR_FROM_JSON(ResponseResult, responseResult_);
    };
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute() = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute(const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute &) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute(DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute &&) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute() = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& operator=(const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute &) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& operator=(DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canAccept_ == nullptr
        && return this->code_ == nullptr && return this->device_ == nullptr && return this->diskId_ == nullptr && return this->hostId_ == nullptr && return this->hostType_ == nullptr
        && return this->inactiveDisks_ == nullptr && return this->migrationOptions_ == nullptr && return this->onlineRepairPolicy_ == nullptr && return this->punishDomain_ == nullptr && return this->punishType_ == nullptr
        && return this->punishUrl_ == nullptr && return this->rack_ == nullptr && return this->responseResult_ == nullptr; };
    // canAccept Field Functions 
    bool hasCanAccept() const { return this->canAccept_ != nullptr;};
    void deleteCanAccept() { this->canAccept_ = nullptr;};
    inline string canAccept() const { DARABONBA_PTR_GET_DEFAULT(canAccept_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setCanAccept(string canAccept) { DARABONBA_PTR_SET_VALUE(canAccept_, canAccept) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostType Field Functions 
    bool hasHostType() const { return this->hostType_ != nullptr;};
    void deleteHostType() { this->hostType_ = nullptr;};
    inline string hostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


    // inactiveDisks Field Functions 
    bool hasInactiveDisks() const { return this->inactiveDisks_ != nullptr;};
    void deleteInactiveDisks() { this->inactiveDisks_ = nullptr;};
    inline const vector<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks> & inactiveDisks() const { DARABONBA_PTR_GET_CONST(inactiveDisks_, vector<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks>) };
    inline vector<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks> inactiveDisks() { DARABONBA_PTR_GET(inactiveDisks_, vector<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks>) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setInactiveDisks(const vector<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks> & inactiveDisks) { DARABONBA_PTR_SET_VALUE(inactiveDisks_, inactiveDisks) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setInactiveDisks(vector<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks> && inactiveDisks) { DARABONBA_PTR_SET_RVALUE(inactiveDisks_, inactiveDisks) };


    // migrationOptions Field Functions 
    bool hasMigrationOptions() const { return this->migrationOptions_ != nullptr;};
    void deleteMigrationOptions() { this->migrationOptions_ = nullptr;};
    inline const vector<string> & migrationOptions() const { DARABONBA_PTR_GET_CONST(migrationOptions_, vector<string>) };
    inline vector<string> migrationOptions() { DARABONBA_PTR_GET(migrationOptions_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setMigrationOptions(const vector<string> & migrationOptions) { DARABONBA_PTR_SET_VALUE(migrationOptions_, migrationOptions) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setMigrationOptions(vector<string> && migrationOptions) { DARABONBA_PTR_SET_RVALUE(migrationOptions_, migrationOptions) };


    // onlineRepairPolicy Field Functions 
    bool hasOnlineRepairPolicy() const { return this->onlineRepairPolicy_ != nullptr;};
    void deleteOnlineRepairPolicy() { this->onlineRepairPolicy_ = nullptr;};
    inline string onlineRepairPolicy() const { DARABONBA_PTR_GET_DEFAULT(onlineRepairPolicy_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setOnlineRepairPolicy(string onlineRepairPolicy) { DARABONBA_PTR_SET_VALUE(onlineRepairPolicy_, onlineRepairPolicy) };


    // punishDomain Field Functions 
    bool hasPunishDomain() const { return this->punishDomain_ != nullptr;};
    void deletePunishDomain() { this->punishDomain_ = nullptr;};
    inline string punishDomain() const { DARABONBA_PTR_GET_DEFAULT(punishDomain_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setPunishDomain(string punishDomain) { DARABONBA_PTR_SET_VALUE(punishDomain_, punishDomain) };


    // punishType Field Functions 
    bool hasPunishType() const { return this->punishType_ != nullptr;};
    void deletePunishType() { this->punishType_ = nullptr;};
    inline string punishType() const { DARABONBA_PTR_GET_DEFAULT(punishType_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setPunishType(string punishType) { DARABONBA_PTR_SET_VALUE(punishType_, punishType) };


    // punishUrl Field Functions 
    bool hasPunishUrl() const { return this->punishUrl_ != nullptr;};
    void deletePunishUrl() { this->punishUrl_ = nullptr;};
    inline string punishUrl() const { DARABONBA_PTR_GET_DEFAULT(punishUrl_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setPunishUrl(string punishUrl) { DARABONBA_PTR_SET_VALUE(punishUrl_, punishUrl) };


    // rack Field Functions 
    bool hasRack() const { return this->rack_ != nullptr;};
    void deleteRack() { this->rack_ = nullptr;};
    inline string rack() const { DARABONBA_PTR_GET_DEFAULT(rack_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setRack(string rack) { DARABONBA_PTR_SET_VALUE(rack_, rack) };


    // responseResult Field Functions 
    bool hasResponseResult() const { return this->responseResult_ != nullptr;};
    void deleteResponseResult() { this->responseResult_ = nullptr;};
    inline string responseResult() const { DARABONBA_PTR_GET_DEFAULT(responseResult_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute& setResponseResult(string responseResult) { DARABONBA_PTR_SET_VALUE(responseResult_, responseResult) };


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
    // *   **ddh**: dedicated host
    // *   **managehost**: physical machine in a smart hosting pool
    std::shared_ptr<string> hostType_ = nullptr;
    // The inactive disks that have been released and whose data must be cleared.
    std::shared_ptr<vector<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks>> inactiveDisks_ = nullptr;
    // The migration solutions of the instance.
    std::shared_ptr<vector<string>> migrationOptions_ = nullptr;
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
    // *   **true**: the event was handled.
    // *   **false**: the event failed to be handled.
    std::shared_ptr<string> responseResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
